using Newtonsoft.Json;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

namespace AKCondinoO.Sims{internal class SimObjectSpawner:MonoBehaviour{internal static SimObjectSpawner Singleton;
internal readonly Dictionary<(Type simType,ulong number),SimObject>active=new Dictionary<(Type,ulong),SimObject>();
 readonly Dictionary<SimObject,object>syn=new Dictionary<SimObject,object>();
        
internal PersistentUniqueIdsBackgroundContainer persistUniqueIdsBG;
internal class PersistentUniqueIdsBackgroundContainer:BackgroundContainer{
 internal ExecutionMode executionMode_bg=ExecutionMode.Save;
 internal enum ExecutionMode{
  Save,
  Load,
 }
 internal Dictionary<Type,ulong>ids_bg;
}
internal PersistentUniqueIdsMultithreaded persistUniqueIdsBGThread;
internal class PersistentUniqueIdsMultithreaded:BaseMultithreaded<PersistentUniqueIdsBackgroundContainer>{
 readonly JsonSerializer jsonSerializer=new JsonSerializer();
 protected override void Execute(){
  string uniqueIdsFile=string.Format("{0}{1}",Core.savePath,"uniqueIds.JsonSerializer");

  if      (current.executionMode_bg==PersistentUniqueIdsBackgroundContainer.ExecutionMode.Load){
   Debug.Log("PersistentUniqueIdsMultithreaded:Execute:Load:uniqueIdsFile: "+uniqueIdsFile);
   using(var file=new FileStream(uniqueIdsFile,FileMode.OpenOrCreate,FileAccess.ReadWrite,FileShare.None)){
    if(file.Length>0){
     using(var reader=new StreamReader(file)){using(var json=new JsonTextReader(reader)){
      current.ids_bg=(Dictionary<Type,ulong>)jsonSerializer.Deserialize(json,typeof(Dictionary<Type,ulong>));
     }}
    }else{
     current.ids_bg=new Dictionary<Type,ulong>();
    }
   }

  }else if(current.executionMode_bg==PersistentUniqueIdsBackgroundContainer.ExecutionMode.Save){
   Debug.Log("PersistentUniqueIdsMultithreaded:Execute:Save:uniqueIdsFile: "+uniqueIdsFile);
   using(var file=new FileStream(uniqueIdsFile,FileMode.OpenOrCreate,FileAccess.ReadWrite,FileShare.None)){
    file.SetLength(0);
    file.Flush(true);
    using(var writer=new StreamWriter(file)){using(var json=new JsonTextWriter(writer)){
     jsonSerializer.Serialize(json,current.ids_bg,typeof(Dictionary<Type,ulong>));
    }}
   }
  }

 }
}
        
internal readonly SimObject.PersistentDataMultithreaded[]persistentDataBGThreads=new SimObject.PersistentDataMultithreaded[Environment.ProcessorCount];

internal readonly Dictionary<Type,GameObject>Prefabs=new Dictionary<Type,GameObject>();
void Awake(){if(Singleton==null){Singleton=this;}else{DestroyImmediate(this);}
 foreach(var o in Resources.LoadAll("AKCondinoO/",typeof(GameObject))){var gO=(GameObject)o;var sO=gO.GetComponent<SimObject>();if(sO==null)continue;
  Type t=sO.GetType();
  Prefabs.Add(t,gO);
 }
 Core.Singleton.OnDestroyingCoreEvent+=OnDestroyingCoreEvent;
 persistUniqueIdsBG=new PersistentUniqueIdsBackgroundContainer();
 PersistentUniqueIdsMultithreaded.Stop=false;
 persistUniqueIdsBGThread=new PersistentUniqueIdsMultithreaded();
  persistUniqueIdsBG.executionMode_bg=PersistentUniqueIdsBackgroundContainer.ExecutionMode.Load;
 PersistentUniqueIdsMultithreaded.Schedule(persistUniqueIdsBG);
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
 SimObject.PersistentDataMultithreaded.Stop=true;
 for(int i=0;i<persistentDataBGThreads.Length;++i){
  persistentDataBGThreads[i].Wait();
 }
}

void OnExitSave(){
 Debug.Log("SimObjectSpawner:OnExitSave");
 if(ids==null){
  Debug.Log("ids exit save is not needed: no changed made");
  PersistentUniqueIdsMultithreaded.Clear();
 }else{
  persistUniqueIdsBG.IsCompleted(persistUniqueIdsBGThread.IsRunning,-1);
   persistUniqueIdsBG.executionMode_bg=PersistentUniqueIdsBackgroundContainer.ExecutionMode.Save;
   persistUniqueIdsBG.ids_bg=new Dictionary<Type,ulong>(ids);
  PersistentUniqueIdsMultithreaded.Schedule(persistUniqueIdsBG);
  persistUniqueIdsBG.IsCompleted(persistUniqueIdsBGThread.IsRunning,-1);
  if(PersistentUniqueIdsMultithreaded.Clear()==0){
   Debug.Log("ids exit save was successful");
  }else{
   Debug.LogError("ids exit save failed");
  }
 }
 foreach(var a in active){var sO=a.Value;
  Debug.Log("SimObjectSpawner:OnExitSave:save active sO.id:"+sO.id);
  sO.OnExitSave();
 }
 if(SimObject.PersistentDataMultithreaded.Clear()==0){
  Debug.Log("all active sOs were saved successfully");
 }else{
  Debug.LogError("some active sOs failed to be saved");
 }
}
                
void Update(){
 foreach(var a in active){var sO=a.Value;
  //Debug.Log("Update:active sO.id:"+sO.id);
  sO.ManualUpdate();
 }
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

internal Dictionary<Type,ulong>ids;
WaitUntil waitSpawnQueue;
WaitUntil waitPersistentUniqueIdsBGIsCompleted;
IEnumerator SpawnCoroutine(){
 waitSpawnQueue=new WaitUntil(()=>{
  return SpawnQueue.Count>0;
 });
 waitPersistentUniqueIdsBGIsCompleted=new WaitUntil(()=>{
  return persistUniqueIdsBG.IsCompleted(persistUniqueIdsBGThread.IsRunning);
 });
 Loop:{
  Debug.Log("SpawnCoroutine:waitSpawnQueue");
  yield return waitSpawnQueue;
  yield return waitPersistentUniqueIdsBGIsCompleted;
  if(persistUniqueIdsBG.executionMode_bg==PersistentUniqueIdsBackgroundContainer.ExecutionMode.Load){
   Debug.Log("register loaded ids");
   ids=persistUniqueIdsBG.ids_bg;
  }
  while(SpawnQueue.Count>0){var toSpawn=SpawnQueue.Dequeue();
   foreach(var at in toSpawn.at){
    Debug.Log("SpawnCoroutine:at:"+at);
    Type simType=at.type;
    ulong number;
    if(at.id!=null){
     number=at.id.Value;
    }else{
     number=0;
     if(!ids.ContainsKey(simType)){
      ids.Add(simType,1);
     }else{
      number=ids[simType]++;
     }
    }
    (Type simType,ulong number)id=(simType,number);
    if(active.ContainsKey(id)){
     Debug.Log("SpawnCoroutine:id already spawned:"+id);
     continue;
    }
    Debug.Log("SpawnCoroutine:id:"+id);
    var gO=Instantiate(Prefabs[at.type],at.position,Quaternion.Euler(at.rotation));gO.transform.localScale=at.scale;
    var sO=gO.GetComponent<SimObject>();
    active.Add(id,sO);
     syn.Add(sO,sO.syn);
    sO.id=id;
    sO.OnActivated();
   }
   toSpawn.dequeued=true;
  }
   persistUniqueIdsBG.executionMode_bg=PersistentUniqueIdsBackgroundContainer.ExecutionMode.Save;
   persistUniqueIdsBG.ids_bg=new Dictionary<Type,ulong>(ids);
  PersistentUniqueIdsMultithreaded.Schedule(persistUniqueIdsBG);
 }
goto Loop;}

}}