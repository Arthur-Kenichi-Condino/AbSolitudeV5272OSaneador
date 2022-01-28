using Newtonsoft.Json;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Threading;
using UnityEngine;
using static AKCondinoO.Voxels.VoxelTerrain;

namespace AKCondinoO.Sims{
 internal class SimObjectSpawner:MonoBehaviour{internal static SimObjectSpawner Singleton;

    internal readonly HashSet<Vector2Int>playersCoordChange=new HashSet<Vector2Int>();

    internal readonly Dictionary<NetcodePlayerPrefab,(Vector2Int cCoord,Vector2Int cCoord_Pre,bool worldBoundsMoved)>playersMovement=new Dictionary<NetcodePlayerPrefab,(Vector2Int,Vector2Int,bool)>();
     readonly List<NetcodePlayerPrefab>playersMoved=new List<NetcodePlayerPrefab>();
        
    internal readonly Dictionary<Type,ulong>ids=new Dictionary<Type,ulong>();
    internal readonly Dictionary<Type,List<ulong>>releasedIds=new Dictionary<Type,List<ulong>>();

    internal readonly Dictionary<(Type simType,ulong number),SimObject>active=new Dictionary<(Type,ulong),SimObject>();
     readonly Dictionary<SimObject,object>syn=new Dictionary<SimObject,object>();

    internal readonly Dictionary<Type,LinkedList<SimObject>>pool=new Dictionary<Type,LinkedList<SimObject>>();
        
    internal PersistentUniqueIdsBackgroundContainer persistUniqueIdsBG;
    internal class PersistentUniqueIdsBackgroundContainer:BackgroundContainer{
     internal ExecutionMode executionMode_bg=ExecutionMode.Save;
     internal enum ExecutionMode{
      Save,
      Load,
     }
     internal readonly Dictionary<Type,ulong>ids_bg=new Dictionary<Type,ulong>();
     internal readonly Dictionary<Type,List<ulong>>releasedIds_bg=new Dictionary<Type,List<ulong>>();
    }
    internal PersistentUniqueIdsMultithreaded persistUniqueIdsBGThread;
    internal class PersistentUniqueIdsMultithreaded:BaseMultithreaded<PersistentUniqueIdsBackgroundContainer>{
     readonly JsonSerializer jsonSerializer=new JsonSerializer();
     protected override void Execute(){
      string uniqueIdsFile=string.Format("{0}{1}",Core.savePath,"uniqueIds.JsonSerializer");

      string releasedIdsFile=string.Format("{0}{1}",Core.savePath,"releasedIds.JsonSerializer");

      if      (current.executionMode_bg==PersistentUniqueIdsBackgroundContainer.ExecutionMode.Load){
       //Debug.Log("PersistentUniqueIdsMultithreaded:Execute:Load:uniqueIdsFile: "+uniqueIdsFile);
       using(var file=new FileStream(uniqueIdsFile,FileMode.OpenOrCreate,FileAccess.ReadWrite,FileShare.None)){
        if(file.Length>0){
         using(var reader=new StreamReader(file)){using(var json=new JsonTextReader(reader)){
          foreach(var kvp in(Dictionary<Type,ulong>)jsonSerializer.Deserialize(json,typeof(Dictionary<Type,ulong>))){
           current.ids_bg.Add(kvp.Key,kvp.Value);
          }
         }}
        }
       }

       //Debug.Log("PersistentUniqueIdsMultithreaded:Execute:Load:releasedIdsFile: "+releasedIdsFile);
       using(var file=new FileStream(releasedIdsFile,FileMode.OpenOrCreate,FileAccess.ReadWrite,FileShare.None)){
        if(file.Length>0){
         using(var reader=new StreamReader(file)){using(var json=new JsonTextReader(reader)){
          foreach(var kvp in(Dictionary<Type,List<ulong>>)jsonSerializer.Deserialize(json,typeof(Dictionary<Type,List<ulong>>))){
           current.releasedIds_bg.Add(kvp.Key,kvp.Value);
          }
         }}
        }
       }

      }else if(current.executionMode_bg==PersistentUniqueIdsBackgroundContainer.ExecutionMode.Save){
       //Debug.Log("PersistentUniqueIdsMultithreaded:Execute:Save:uniqueIdsFile: "+uniqueIdsFile);
       using(var file=new FileStream(uniqueIdsFile,FileMode.OpenOrCreate,FileAccess.ReadWrite,FileShare.None)){
        file.SetLength(0);
        file.Flush(true);
        using(var writer=new StreamWriter(file)){using(var json=new JsonTextWriter(writer)){
         jsonSerializer.Serialize(json,current.ids_bg,typeof(Dictionary<Type,ulong>));
        }}
       }

       //Debug.Log("PersistentUniqueIdsMultithreaded:Execute:Save:releasedIdsFile: "+releasedIdsFile);
       using(var file=new FileStream(releasedIdsFile,FileMode.OpenOrCreate,FileAccess.ReadWrite,FileShare.None)){
        file.SetLength(0);
        file.Flush(true);
        using(var writer=new StreamWriter(file)){using(var json=new JsonTextWriter(writer)){
         jsonSerializer.Serialize(json,current.releasedIds_bg,typeof(Dictionary<Type,List<ulong>>));
        }}
       }

      }
     }
    }
        
    internal GetPersistentDataFilesBackgroundContainer getPersistentDataFilesBG;
    internal class GetPersistentDataFilesBackgroundContainer:BackgroundContainer{
     internal readonly List<object>syn_bg=new List<object>();
     internal readonly HashSet<Vector2Int>playersCoordChange_bg=new HashSet<Vector2Int>();
     internal readonly List<(Vector3 position,Vector3 rotation,Vector3 scale,Type type,ulong?id)>at=new List<(Vector3,Vector3,Vector3,Type,ulong?)>();
    }
    internal GetPersistentDataFilesMultithreaded getPersistentDataFilesBGThread;
    internal class GetPersistentDataFilesMultithreaded:BaseMultithreaded<GetPersistentDataFilesBackgroundContainer>{
     protected override void Execute(){
      //Debug.Log("GetPersistentDataFilesMultithreaded:Execute:current.playersCoordChange_bg.Count:"+current.playersCoordChange_bg.Count);
      foreach(var syn in current.syn_bg)Monitor.Enter(syn);
      try{

       current.at.Clear();
       foreach(Vector2Int pCoord in current.playersCoordChange_bg){
        for(Vector2Int iCoord=new Vector2Int(),cCoord1=new Vector2Int();iCoord.y<=instantiationDistance.y-1;iCoord.y++){for(cCoord1.y=-iCoord.y+pCoord.y;cCoord1.y<=iCoord.y+pCoord.y;cCoord1.y+=iCoord.y*2){
        for(           iCoord.x=0                                      ;iCoord.x<=instantiationDistance.x-1;iCoord.x++){for(cCoord1.x=-iCoord.x+pCoord.x;cCoord1.x<=iCoord.x+pCoord.x;cCoord1.x+=iCoord.x*2){
         if(Math.Abs(cCoord1.x)>=MaxcCoordx||
            Math.Abs(cCoord1.y)>=MaxcCoordy){
          goto _skip;
         }
         int cnkIdx1=GetcnkIdx(cCoord1.x,cCoord1.y);
         //Debug.Log("load files for cnkIdx1:"+cnkIdx1);
         string transformPath=string.Format("{0}{1}/",Core.perChunkSavePath,cnkIdx1);
         if(Directory.Exists(transformPath)){
          foreach(var transformFile in Directory.GetFiles(transformPath,"(*,*)*")){
           string transformFileName=Path.GetFileName(transformFile);
           //Debug.Log("got load file:"+transformFileName);
           string typeAndId=transformFileName.Split('(',')')[1];
            string[]typeAndIdSplit=typeAndId.Split(',');
             string typeString=typeAndIdSplit[0];
              string idString=typeAndIdSplit[1];
           Type simType=Type.GetType(typeString);
           ulong number=ulong.Parse(idString);
           current.at.Add((Vector3.zero,Vector3.zero,Vector3.one,simType,number));
          }
         }
         _skip:{}
        if(iCoord.x==0){break;}}}
        if(iCoord.y==0){break;}}}
       }

      }catch{
       throw;
      }finally{
       foreach(var syn in current.syn_bg)Monitor.Exit(syn);
      }
     }
    }
        
    internal readonly SimObject.PersistentDataMultithreaded[]persistentDataBGThreads=new SimObject.PersistentDataMultithreaded[Environment.ProcessorCount];

    internal readonly Dictionary<Type,GameObject>Prefabs=new Dictionary<Type,GameObject>();

    void Awake(){if(Singleton==null){Singleton=this;}else{DestroyImmediate(this);return;}

     Core.Singleton.OnDestroyingCoreEvent+=OnDestroyingCoreEvent;
            
     SimObject.savingCount=0;

     SimObject.unloadingCount=0;

     foreach(var o in Resources.LoadAll("AKCondinoO/",typeof(GameObject))){var gO=(GameObject)o;var sO=gO.GetComponent<SimObject>();if(sO==null)continue;
      Type t=sO.GetType();
      Prefabs.Add(t,gO);
      pool.Add(t,new LinkedList<SimObject>());
      string specsDataPath=string.Format("{0}{1}/",Core.sObjectsSavePath,t);
      Directory.CreateDirectory(specsDataPath);
      Debug.Log("added Prefab:"+sO.name);
     }

     persistUniqueIdsBG=new PersistentUniqueIdsBackgroundContainer();
     PersistentUniqueIdsMultithreaded.Stop=false;
     persistUniqueIdsBGThread=new PersistentUniqueIdsMultithreaded();
      persistUniqueIdsBG.executionMode_bg=PersistentUniqueIdsBackgroundContainer.ExecutionMode.Load;
     PersistentUniqueIdsMultithreaded.Schedule(persistUniqueIdsBG);

     getPersistentDataFilesBG=new GetPersistentDataFilesBackgroundContainer();
     GetPersistentDataFilesMultithreaded.Stop=false;
     getPersistentDataFilesBGThread=new GetPersistentDataFilesMultithreaded();

     SimObject.PersistentDataMultithreaded.Stop=false;
     for(int i=0;i<persistentDataBGThreads.Length;++i){
      persistentDataBGThreads[i]=new SimObject.PersistentDataMultithreaded();
     }

     StartCoroutine(SpawnCoroutine());
    }

    void OnDestroyingCoreEvent(object sender,EventArgs e){
     Debug.Log("OnDestroyingCoreEvent");
     OnExitSave();

     PersistentUniqueIdsMultithreaded.Stop=true;
     persistUniqueIdsBGThread.Wait();

     GetPersistentDataFilesMultithreaded.Stop=true;
     getPersistentDataFilesBGThread.Wait();

     SimObject.PersistentDataMultithreaded.Stop=true;
     for(int i=0;i<persistentDataBGThreads.Length;++i){
      persistentDataBGThreads[i].Wait();
     }
    }

    void OnExitSave(){
     //Debug.Log("SimObjectSpawner:OnExitSave");

     List<(Type simType,ulong number)>unplacedIds=new List<(Type,ulong)>();
     foreach(var a in active){var sO=a.Value;
      //Debug.Log("SimObjectSpawner:OnExitSave:save active sO.id:"+sO.id);
      sO.OnExitSave(unplacedIds);
     }
     foreach(var id in unplacedIds){
      if(!releasedIds.ContainsKey(id.simType)){
       releasedIds.Add(id.simType,new List<ulong>());
      }
      releasedIds[id.simType].Add(id.number);
     }

     SimObject.overlappersUnplacing.Clear();

     if(SimObject.PersistentDataMultithreaded.Clear()==0){
      Debug.Log("all active sOs were saved successfully");
     }else{
      Debug.LogError("some active sOs failed to be saved");
     }

     if(ids==null){
      Debug.Log("ids exit save is not needed: no changes were made");
      PersistentUniqueIdsMultithreaded.Clear();
     }else{
      persistUniqueIdsBG.IsCompleted(persistUniqueIdsBGThread.IsRunning,-1);
       persistUniqueIdsBG.executionMode_bg=PersistentUniqueIdsBackgroundContainer.ExecutionMode.Save;
       persistUniqueIdsBG.ids_bg.Clear();
       foreach(var kvp in ids){
        persistUniqueIdsBG.ids_bg.Add(kvp.Key,kvp.Value);
       }
       foreach(var kvp in releasedIds){
        if(persistUniqueIdsBG.releasedIds_bg.TryGetValue(kvp.Key,out List<ulong>rids)){
         rids.Clear();
         rids.AddRange(kvp.Value);
        }else{
         persistUniqueIdsBG.releasedIds_bg.Add(kvp.Key,new List<ulong>(kvp.Value));
        }
       }
      PersistentUniqueIdsMultithreaded.Schedule(persistUniqueIdsBG);
      persistUniqueIdsBG.IsCompleted(persistUniqueIdsBGThread.IsRunning,-1);
      if(PersistentUniqueIdsMultithreaded.Clear()==0){
       Debug.Log("ids exit save was successful");
      }else{
       Debug.LogError("ids exit save failed");
      }
     }
    }

    [SerializeField]internal int savingLimit=1000;

    [SerializeField]internal int unloadingLimit=1000;
                
    internal bool anyPlayerBoundsMoved;

    bool loadFilesRequested;
    void Update(){
     if(loadFilesRequested&&OnGotFiles()){
      loadFilesRequested=false;
      Debug.Log("SimObjectSpawner:Update:player movement:got files to load");
     }else if(playersCoordChange.Count>0&&OnGetFiles()){
      playersCoordChange.Clear();
      Debug.Log("SimObjectSpawner:Update:player movement:loading required");
      loadFilesRequested=true;
     }

     foreach(var player in playersMovement.Keys){var movement=playersMovement[player];
      if(!movement.worldBoundsMoved){
       //Debug.Log("player didn't move");
       continue;
      }
      playersMoved.Add(player);
      //Debug.Log("player movement:"+movement);

      anyPlayerBoundsMoved=true;

     }
     foreach(var a in active){var sO=a.Value;
      //Debug.Log("Update:active sO.id:"+sO.id);
      sO.ManualUpdate();
     }
     while(DespawnQueue.Count>0){var toDespawn=DespawnQueue.Dequeue();

      SimObjectSpawnRoutine.Singleton.OnDespawn(toDespawn);

      OnDeactivated(toDespawn);
     }
     while(DespawnReleaseIdQueue.Count>0){var toDespawnReleaseId=DespawnReleaseIdQueue.Dequeue();

      SimObjectSpawnRoutine.Singleton.OnDespawn(toDespawnReleaseId,true);

      OnDeactivatedReleaseId(toDespawnReleaseId);
     }
     foreach(var player in playersMoved){var movement=playersMovement[player];
      Debug.Log("reset player movement flag to false");
      playersMovement[player]=(movement.cCoord,movement.cCoord_Pre,false);
     }
     playersMoved.Clear();

     anyPlayerBoundsMoved=false;

    }

    internal readonly SpawnData toSpawn=new SpawnData();

    bool OnGetFiles(){
     if(getPersistentDataFilesBG.IsCompleted(getPersistentDataFilesBGThread.IsRunning)&&spawnCoroutineIdleWaiting){
      getPersistentDataFilesBG.syn_bg.Clear();
      getPersistentDataFilesBG.syn_bg.AddRange(syn.Values);
      getPersistentDataFilesBG.playersCoordChange_bg.Clear();
      foreach(var p in playersCoordChange){
       getPersistentDataFilesBG.playersCoordChange_bg.Add(p);
      }
      GetPersistentDataFilesMultithreaded.Schedule(getPersistentDataFilesBG);
      return true;
     }
     return false;
    }
    bool OnGotFiles(){
     if(getPersistentDataFilesBG.IsCompleted(getPersistentDataFilesBGThread.IsRunning)){
      toSpawn.at.Clear();
      toSpawn.dequeued=false;
      toSpawn.at.AddRange(getPersistentDataFilesBG.at);
      SpawnQueue.Enqueue(toSpawn);
      return true;
     }
     return false;
    }

    internal readonly Queue<SpawnData>SpawnQueue=new Queue<SpawnData>();
    internal class SpawnData{
     internal bool dequeued;
     internal readonly List<(Vector3 position,Vector3 rotation,Vector3 scale,Type type,ulong?id)>at;
     internal SpawnData(){
      at=new List<(Vector3,Vector3,Vector3,Type,ulong?)>(1);
     }
     internal SpawnData(int capacity){
      at=new List<(Vector3,Vector3,Vector3,Type,ulong?)>(capacity);
     }
    }

    [SerializeField]double instantiationMaxExecutionTime=.005;

    internal bool spawnCoroutineIdleWaiting=true;

    WaitUntil waitSpawnQueue;
    WaitUntil waitPersistentUniqueIdsBGIsCompleted;
    IEnumerator SpawnCoroutine(){

     System.Diagnostics.Stopwatch stopwatch=new System.Diagnostics.Stopwatch();
     bool LimitExecutionTime(){
      if(stopwatch.Elapsed.TotalMilliseconds>instantiationMaxExecutionTime){
       stopwatch.Restart();
       return true;
      }
      return false;
     }

     waitSpawnQueue=new WaitUntil(()=>{
      return SpawnQueue.Count>0;
     });
     waitPersistentUniqueIdsBGIsCompleted=new WaitUntil(()=>{
      return persistUniqueIdsBG.IsCompleted(persistUniqueIdsBGThread.IsRunning);
     });
     Loop:{
      //Debug.Log("SpawnCoroutine:waitSpawnQueue");
      yield return waitSpawnQueue;
      spawnCoroutineIdleWaiting=false;
      yield return waitPersistentUniqueIdsBGIsCompleted;
      if(persistUniqueIdsBG.executionMode_bg==PersistentUniqueIdsBackgroundContainer.ExecutionMode.Load){
       //Debug.Log("register loaded ids");
       ids.Clear();
       foreach(var kvp in persistUniqueIdsBG.ids_bg){
        ids.Add(kvp.Key,kvp.Value);
       }
       foreach(var kvp in persistUniqueIdsBG.releasedIds_bg){
        if(releasedIds.TryGetValue(kvp.Key,out List<ulong>rids)){
         rids.Clear();
         rids.AddRange(kvp.Value);
        }else{
         releasedIds.Add(kvp.Key,new List<ulong>(kvp.Value));
        }
       }
      }
      stopwatch.Restart();
      while(SpawnQueue.Count>0){var toSpawn=SpawnQueue.Dequeue();
       foreach(var at in toSpawn.at){
        //Debug.Log("SpawnCoroutine:at:"+at);
        Type simType=at.type;
        ulong number;
        bool load=false;
        if(at.id!=null){
         number=at.id.Value;
         load=true;
        }else{
         number=0;
         if(!ids.ContainsKey(simType)){
          ids.Add(simType,1);
         }else{
          if(releasedIds.ContainsKey(simType)&&releasedIds[simType].Count>0){
           List<ulong>simTypeReleasedIds=releasedIds[simType];
           number=simTypeReleasedIds[simTypeReleasedIds.Count-1];
           simTypeReleasedIds.RemoveAt(simTypeReleasedIds.Count-1);
          }else{
           number=ids[simType]++;
          }
         }
        }
        (Type simType,ulong number)id=(simType,number);
        if(active.ContainsKey(id)){
         //Debug.Log("SpawnCoroutine:id already spawned:"+id);
         continue;
        }
        //Debug.Log("SpawnCoroutine:id:"+id);
        GameObject gO;
        SimObject sO;
        if(pool[at.type].Count>0){
         //Debug.Log("SpawnCoroutine:using pooled sim object");
         sO=pool[at.type].First.Value;
         pool[at.type].RemoveFirst();
         sO.pooled=null;

         gO=sO.gameObject;
         gO.transform.position=at.position;
         gO.transform.rotation=Quaternion.Euler(at.rotation);
         gO.transform.localScale=at.scale;

        }else{
         //Debug.Log("SpawnCoroutine:Instantiate from Prefab");
         gO=Instantiate(Prefabs[at.type]);
         gO.transform.position=at.position;
         gO.transform.rotation=Quaternion.Euler(at.rotation);
         gO.transform.localScale=at.scale;

         sO=gO.GetComponent<SimObject>();
        }
        active.Add(id,sO);
         syn.Add(sO,sO.syn);
        sO.id=id;

        SimObjectSpawnRoutine.Singleton.OnSpawned(sO);

        sO.OnActivated(load);

        if(LimitExecutionTime())yield return null;

       }
       toSpawn.dequeued=true;
      }
       persistUniqueIdsBG.executionMode_bg=PersistentUniqueIdsBackgroundContainer.ExecutionMode.Save;
       persistUniqueIdsBG.ids_bg.Clear();
       foreach(var kvp in ids){
        persistUniqueIdsBG.ids_bg.Add(kvp.Key,kvp.Value);
       }
       foreach(var kvp in releasedIds){
        if(persistUniqueIdsBG.releasedIds_bg.TryGetValue(kvp.Key,out List<ulong>rids)){
         rids.Clear();
         rids.AddRange(kvp.Value);
        }else{
         persistUniqueIdsBG.releasedIds_bg.Add(kvp.Key,new List<ulong>(kvp.Value));
        }
       }
      PersistentUniqueIdsMultithreaded.Schedule(persistUniqueIdsBG);
      spawnCoroutineIdleWaiting=true;
     }
     goto Loop;
    }

    internal readonly Queue<SimObject>DespawnQueue=new Queue<SimObject>();
    void OnDeactivated(SimObject sO){
     active.Remove(sO.id.Value);
      syn.Remove(sO);

     sO.pooled=pool[sO.id.Value.simType].AddLast(sO);

     sO.id=null;
    }

    internal readonly Queue<SimObject>DespawnReleaseIdQueue=new Queue<SimObject>();
    void OnDeactivatedReleaseId(SimObject sO){
     active.Remove(sO.id.Value);
      syn.Remove(sO);

     if(!releasedIds.ContainsKey(sO.id.Value.simType)){
      releasedIds.Add(sO.id.Value.simType,new List<ulong>());
     }
     releasedIds[sO.id.Value.simType].Add(sO.id.Value.number);
            
     sO.pooled=pool[sO.id.Value.simType].AddLast(sO);

     sO.id=null;
    }

 }
}