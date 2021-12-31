using AKCondinoO.Voxels;
using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using UnityEngine;
using static AKCondinoO.Voxels.VoxelTerrain;
using static Utils;

namespace AKCondinoO.Sims{
 internal class SimObject:MonoBehaviour{
    internal readonly object syn=new object();        
        
    internal LinkedListNode<SimObject>pooled;

    internal(Type simType,ulong number)?id=null;

    internal PersistentDataBackgroundContainer container;
    internal class PersistentDataBackgroundContainer:BackgroundContainer{
     internal readonly object syn_bg;  
     internal PersistentDataBackgroundContainer(object syn){
      syn_bg=syn;
     }
     internal ExecutionMode executionMode_bg=ExecutionMode.Save;
     internal enum ExecutionMode{
      Save,
      Load,
      Unplace,
     }

     internal(Type simType,ulong number)id_bg;

     internal SerializableSpecsData specsData_bg;
     [Serializable]internal class SerializableSpecsData{
      public string transformFile;
     }
     internal SerializableTransform transform_bg;
     [Serializable]internal class SerializableTransform{
      public SerializableQuaternion rotation;
      public SerializableVector3    position;
      public SerializableVector3    localScale;
     }
     internal void SetSerializable(Transform transform){
      transform_bg.rotation=transform.rotation;
      transform_bg.position=transform.position;
      transform_bg.localScale=transform.localScale;
     }
     internal void GetDeserialized(Transform transform){
      transform.rotation=transform_bg.rotation;
      transform.position=transform_bg.position;
      transform.localScale=transform_bg.localScale;
     }
    }
    internal class PersistentDataMultithreaded:BaseMultithreaded<PersistentDataBackgroundContainer>{
     readonly JsonSerializer jsonSerializer=new JsonSerializer();
     protected override void Execute(){
      //Debug.Log("PersistentDataMultithreaded:Execute");
      lock(current.syn_bg){
       string specsDataFile=string.Format("{0}({1},{2}).JsonSerializer",Core.sObjectsSavePath,current.id_bg.simType,current.id_bg.number);

       if      (current.executionMode_bg==PersistentDataBackgroundContainer.ExecutionMode.Unplace){
        Debug.Log("PersistentDataMultithreaded:Execute:unplacing");

        PersistentDataBackgroundContainer.SerializableSpecsData specsData_old=null;
        using(var file=new FileStream(specsDataFile,FileMode.OpenOrCreate,FileAccess.ReadWrite,FileShare.None)){
         if(file.Length>0){
          using(var reader=new StreamReader(file)){using(var json=new JsonTextReader(reader)){
           specsData_old=(PersistentDataBackgroundContainer.SerializableSpecsData)jsonSerializer.Deserialize(json,current.specsData_bg.GetType());
          }} 
         }
        }
        if(specsData_old!=null){
         if(File.Exists(specsData_old.transformFile)){
          File.Delete(specsData_old.transformFile);
         }
        }

        current.specsData_bg.transformFile="";

        using(var file=new FileStream(specsDataFile,FileMode.OpenOrCreate,FileAccess.ReadWrite,FileShare.None)){
         file.SetLength(0);
         file.Flush(true);
         using(var writer=new StreamWriter(file)){using(var json=new JsonTextWriter(writer)){
          jsonSerializer.Serialize(json,current.specsData_bg,current.specsData_bg.GetType());
         }}
        }

       }else if(current.executionMode_bg==PersistentDataBackgroundContainer.ExecutionMode.Load){
        //Debug.Log("PersistentDataMultithreaded:Execute:loading");

        PersistentDataBackgroundContainer.SerializableSpecsData specsData_cur=null;
        using(var file=new FileStream(specsDataFile,FileMode.OpenOrCreate,FileAccess.ReadWrite,FileShare.None)){
         if(file.Length>0){
          using(var reader=new StreamReader(file)){using(var json=new JsonTextReader(reader)){
           specsData_cur=(PersistentDataBackgroundContainer.SerializableSpecsData)jsonSerializer.Deserialize(json,current.specsData_bg.GetType());
          }}
         }
        }

        //Debug.Log("specsData_cur:"+specsData_cur.GetType());

        string transformFile=specsData_cur.transformFile;
                        
        PersistentDataBackgroundContainer.SerializableTransform transform_cur=null;
        if(!String.IsNullOrEmpty(transformFile)){
         using(var file=new FileStream(transformFile,FileMode.OpenOrCreate,FileAccess.ReadWrite,FileShare.None)){
          if(file.Length>0){
           using(var reader=new StreamReader(file)){using(var json=new JsonTextReader(reader)){
            transform_cur=(PersistentDataBackgroundContainer.SerializableTransform)jsonSerializer.Deserialize(json,current.transform_bg.GetType());
           }}
          }
         }
        }

        current.specsData_bg=specsData_cur;
        if(transform_cur!=null){
         current.transform_bg=transform_cur;
        }else{
         current.transform_bg.position=new SerializableVector3(float.NaN,float.NaN,float.NaN);
        }

       }else if(current.executionMode_bg==PersistentDataBackgroundContainer.ExecutionMode.Save){
        //Debug.Log("PersistentDataMultithreaded:Execute:saving...\ncurrent.transform_bg.position:"+current.transform_bg.position+"\ncurrent.transform_bg.rotation:"+current.transform_bg.rotation+"\ncurrent.transform_bg.localScale:"+current.transform_bg.localScale);

        Vector2Int cnkRgn1=vecPosTocnkRgn(current.transform_bg.position);
        Vector2Int cCoord1=cnkRgnTocCoord(cnkRgn1);
               int cnkIdx1=GetcnkIdx(cCoord1.x,cCoord1.y);
        string transformPath=string.Format("{0}{1}/",Core.perChunkSavePath,cnkIdx1);
        Directory.CreateDirectory(transformPath);
        string transformFile=string.Format("{0}({1},{2}).JsonSerializer",transformPath,current.id_bg.simType,current.id_bg.number);

        PersistentDataBackgroundContainer.SerializableSpecsData specsData_old=null;
        using(var file=new FileStream(specsDataFile,FileMode.OpenOrCreate,FileAccess.ReadWrite,FileShare.None)){
         if(file.Length>0){
          using(var reader=new StreamReader(file)){using(var json=new JsonTextReader(reader)){
           specsData_old=(PersistentDataBackgroundContainer.SerializableSpecsData)jsonSerializer.Deserialize(json,current.specsData_bg.GetType());
          }}
         }
        }
        if(specsData_old!=null){
         if(File.Exists(specsData_old.transformFile)){
          File.Delete(specsData_old.transformFile);
         }
        }

        using(var file=new FileStream(transformFile,FileMode.OpenOrCreate,FileAccess.ReadWrite,FileShare.None)){
         file.SetLength(0);
         file.Flush(true);
         using(var writer=new StreamWriter(file)){using(var json=new JsonTextWriter(writer)){
          jsonSerializer.Serialize(json,current.transform_bg,current.transform_bg.GetType());
         }}
        }
    
        current.specsData_bg.transformFile=transformFile;

        using(var file=new FileStream(specsDataFile,FileMode.OpenOrCreate,FileAccess.ReadWrite,FileShare.None)){
         file.SetLength(0);
         file.Flush(true);
         using(var writer=new StreamWriter(file)){using(var json=new JsonTextWriter(writer)){
          jsonSerializer.Serialize(json,current.specsData_bg,current.specsData_bg.GetType());
         }}
        }
       }
      }
     }
    }

    internal Bounds localBounds;
     protected readonly Vector3[]worldBoundsVertices=new Vector3[8];
      protected bool worldBoundsVerticesTransformed;
       void TransformBoundsVertices(){
        worldBoundsVertices[0]=transform.TransformPoint(localBounds.min.x,localBounds.min.y,localBounds.min.z);
        worldBoundsVertices[1]=transform.TransformPoint(localBounds.max.x,localBounds.min.y,localBounds.min.z);
        worldBoundsVertices[2]=transform.TransformPoint(localBounds.max.x,localBounds.min.y,localBounds.max.z);
        worldBoundsVertices[3]=transform.TransformPoint(localBounds.min.x,localBounds.min.y,localBounds.max.z);
        worldBoundsVertices[4]=transform.TransformPoint(localBounds.min.x,localBounds.max.y,localBounds.min.z);
        worldBoundsVertices[5]=transform.TransformPoint(localBounds.max.x,localBounds.max.y,localBounds.min.z);
        worldBoundsVertices[6]=transform.TransformPoint(localBounds.max.x,localBounds.max.y,localBounds.max.z);
        worldBoundsVertices[7]=transform.TransformPoint(localBounds.min.x,localBounds.max.y,localBounds.max.z);
        worldBoundsVerticesTransformed=true;
       }

    internal Collider[]colliders;

    internal readonly List<Collider>volumeColliders=new List<Collider>();

    internal Renderer[]renderers;

    protected virtual void Awake(){
     if(container==null){container=new PersistentDataBackgroundContainer(syn);}
     if(container.specsData_bg==null){container.specsData_bg=new PersistentDataBackgroundContainer.SerializableSpecsData();}
     if(container.transform_bg==null){container.transform_bg=new PersistentDataBackgroundContainer.SerializableTransform();}
 
     foreach(Collider collider in colliders=GetComponentsInChildren<Collider>()){
      if(collider.CompareTag("SimObjectVolume")){
       volumeColliders.Add(collider);

       if(localBounds.extents==Vector3.zero){
        localBounds=collider.bounds;
       }else{
        localBounds.Encapsulate(collider.bounds);
       }
      }
     }

     localBounds.center=transform.InverseTransformPoint(localBounds.center);
     //Debug.Log("localBounds.center:"+localBounds.center+";localBounds.size:"+localBounds.size,this);

     foreach(Renderer renderer in renderers=GetComponentsInChildren<Renderer>()){
     }

      DisableInteractions();
       DisableRendering();
    }

    internal virtual void OnActivated(bool load){
     worldBoundsVerticesTransformed=false;

     container.id_bg=id.Value;
     loading=load;
     if(!loading){
      container.SetSerializable(transform);

      EnableInteractions();
       EnableRendering();

     }else{
      //Debug.Log("SimObject:OnActivated:loading:transform has incorrect data");
      loadRequired=true;
     }
    }

    internal void OnExitSave(List<(Type simType,ulong number)>unplacedIds){
     Debug.Log("SimObject:OnExitSave");
     container.IsCompleted(SimObjectSpawner.Singleton.persistentDataBGThreads[0].IsRunning,-1);
     if(unplacing){
      Debug.Log("SimObject:OnExitSave:unplacing:"+id);
      if(unplaceRequired){
       unplaceRequired=false;
       container.executionMode_bg=PersistentDataBackgroundContainer.ExecutionMode.Unplace;
       container.id_bg=id.Value;
       PersistentDataMultithreaded.Schedule(container);
       Debug.Log("SimObject:OnExitSave:unplacing started:"+id);
       container.IsCompleted(SimObjectSpawner.Singleton.persistentDataBGThreads[0].IsRunning,-1);
       unplaceRequested=true;
      }
      if(unplaceRequested){
       unplaceRequested=false;
       Debug.Log("SimObject:OnExitSave:unplacing finished:"+id);
       unplacedIds.Add(id.Value);
      }

     }else if(!loading){
      container.executionMode_bg=PersistentDataBackgroundContainer.ExecutionMode.Save;
      PersistentDataMultithreaded.Schedule(container);
      container.IsCompleted(SimObjectSpawner.Singleton.persistentDataBGThreads[0].IsRunning,-1);
     }else{
      Debug.Log("SimObject:OnExitSave:data loading was in progress:no need to save");
     }
    }

    protected virtual void OnDestroy(){
    }
       
    [SerializeField]bool DEBUG_UNPLACE=false;

    [SerializeField]bool DEBUG_UNLOAD=false;
        
    protected bool sleeping;

    protected bool unplacing;
    bool unplaceRequired;
    bool unplaceRequested;
    protected bool unloading;
    bool unloadRequired;
    bool unloadRequested;
    protected bool loading; 
    bool loadRequired;
    bool loadRequested;
    bool saveRequired;
    internal virtual void ManualUpdate(){
     if(!unplacing){
      if(!unloading){
       if(!loading){
        if(DEBUG_UNPLACE){
         DEBUG_UNPLACE=false;
         Debug.Log("ManualUpdate:DEBUG_UNPLACE:save and UNPLACE:"+id,transform);
         OnUnplace();
   
        }else if(!sleeping&&!(this is SimActor)&&IsOverlappingNonAlloc()){

         OnOverlapperUnplacing(this);

         Debug.Log("ManualUpdate:IsOverlappingNonAlloc:save and UNPLACE:"+id,transform);
         OnUnplace();

        }else{
         if(DEBUG_UNLOAD){
          DEBUG_UNLOAD=false;
          Debug.Log("ManualUpdate:DEBUG_UNLOAD:save and unload:"+id,transform);
          OnUnload();
                     
         }else if(
          (
           worldBoundsVerticesTransformed||
           (sleeping&&SimObjectSpawner.Singleton.anyPlayerBoundsMoved)
          )&&
          worldBoundsVertices.Any(
           v=>{
            Vector2Int cCoord=vecPosTocCoord(v);
            int cnkIdx=GetcnkIdx(cCoord.x,cCoord.y);
            return!VoxelTerrain.Singleton.active.TryGetValue(cnkIdx,out VoxelTerrainChunk cnk);
           }
          )
         ){
          Debug.Log("ManualUpdate:sim object has vertice out of active voxel terrain:save and unload:"+id,transform);
          OnUnload();

         }else{
          if(transform.hasChanged){
           transform.hasChanged=false;
           //Debug.Log("ManualUpdate:transform.hasChanged:save required:"+id,transform);
           saveRequired=true;

           OnTransformHasChanged();

          }else{
           worldBoundsVerticesTransformed=false;

           sleeping=true;
          }
         }
        }
       }
      }
     }
 
     if(unplacing){
      Debug.Log("ManualUpdate:unplacing:"+id,transform);
      if(unplaceRequested&&OnUnplacedData()){
       unplaceRequested=false;
       Debug.Log("ManualUpdate:unplacing finished:"+id,transform);
       unplacing=false;
                    
       OnOverlapperUnplaced(this);

       SimObjectSpawner.Singleton.DespawnReleaseIdQueue.Enqueue(this);
      }else if(unplaceRequired&&OnUnplacing()){
       unplaceRequired=false;
       //Debug.Log("ManualUpdate:unplacing started:"+id,transform);
       unplaceRequested=true;
      }

     }else{
      if(unloading){
       Debug.Log("ManualUpdate:unloading:"+id,transform);
       if(unloadRequested&&OnUnloadedData()){
        unloadRequested=false;
        Debug.Log("ManualUpdate:unloading finished:"+id,transform);
        unloading=false;
        SimObjectSpawner.Singleton.DespawnQueue.Enqueue(this);
        return;
       }else if(unloadRequired&&OnUnloading()){
        unloadRequired=false;
        Debug.Log("ManualUpdate:unloading started:"+id,transform);
        unloadRequested=true;
       }
    
      }else{
       if(loading){
        //Debug.Log("ManualUpdate:loading:"+id,transform);
        if(loadRequested&&OnLoadedData(out bool validData)){
         loadRequested=false;
         //Debug.Log("ManualUpdate:loading finished:"+id,transform);
         transform.hasChanged=false;
         loading=false;

         if(validData){
          EnableInteractions();
           EnableRendering();

          OnTransformHasChanged();
         }
         if(!validData){
          Debug.Log("ManualUpdate:loaded unplaced object:unplace again immediately:"+id,transform);
          OnUnplace();
         }

        }else if(loadRequired&&OnLoading()){
         loadRequired=false;
         //Debug.Log("ManualUpdate:loading started:"+id,transform);
         loadRequested=true;
        }
 
       }else{
        if(saveRequired&&OnSaving()){
         saveRequired=false;
         //Debug.Log("ManualUpdate:saving started:"+id,transform);
        }

       }
      }
     }
    }

    bool OnLoading(){
     if(container.IsCompleted(SimObjectSpawner.Singleton.persistentDataBGThreads[0].IsRunning)){
      container.executionMode_bg=PersistentDataBackgroundContainer.ExecutionMode.Load;
      container.id_bg=id.Value;
      PersistentDataMultithreaded.Schedule(container);
      return true;
     }
     return false;
    }
    bool OnLoadedData(out bool validData){
     validData=false;
     if(container.IsCompleted(SimObjectSpawner.Singleton.persistentDataBGThreads[0].IsRunning)){
      if(!float.IsNaN(container.transform_bg.position.x)){
       container.GetDeserialized(transform);

       GetPersistentData();

       validData=true;
      }
      return true;
     }
     return false;
    }

    protected virtual void GetPersistentData(){
    }

    bool OnSaving(){
     if(container.IsCompleted(SimObjectSpawner.Singleton.persistentDataBGThreads[0].IsRunning)){
      container.executionMode_bg=PersistentDataBackgroundContainer.ExecutionMode.Save;
      container.id_bg=id.Value;

      SetPersistentData();

      container.SetSerializable(transform);
      PersistentDataMultithreaded.Schedule(container);
      return true;
     }
     return false;
    }

    protected virtual void SetPersistentData(){
    }

    void OnUnload(){

     DisableInteractions();
      DisableRendering();

     unloading=true;
     Debug.Log("OnUnload:something caused this sO to be disabled and unloaded");
     unloadRequired=true;
    }
    bool OnUnloading(){
     if(container.IsCompleted(SimObjectSpawner.Singleton.persistentDataBGThreads[0].IsRunning)){
      container.executionMode_bg=PersistentDataBackgroundContainer.ExecutionMode.Save;
      container.id_bg=id.Value;
      container.SetSerializable(transform);
      PersistentDataMultithreaded.Schedule(container);
      return true;
     }
     return false;
    }
    bool OnUnloadedData(){
     if(container.IsCompleted(SimObjectSpawner.Singleton.persistentDataBGThreads[0].IsRunning)){
      return true;
     }
     return false;
    }

    void OnUnplace(){

     DisableInteractions();
      DisableRendering();

     unplacing=true;
     Debug.Log("OnUnplace:something caused this sO to be disabled and removed from the world");
     unplaceRequired=true;
    }
    bool OnUnplacing(){
     if(container.IsCompleted(SimObjectSpawner.Singleton.persistentDataBGThreads[0].IsRunning)){
      container.executionMode_bg=PersistentDataBackgroundContainer.ExecutionMode.Unplace;
      container.id_bg=id.Value;
      PersistentDataMultithreaded.Schedule(container);
      return true;
     }
     return false;
    }
    bool OnUnplacedData(){
     if(container.IsCompleted(SimObjectSpawner.Singleton.persistentDataBGThreads[0].IsRunning)){
      return true;
     }
     return false;
    }

    void OnTransformHasChanged(){
     TransformBoundsVertices();

     sleeping=false;
    }

    internal bool InteractionsEnabled=false;

    void EnableInteractions(){
     foreach(Collider collider in colliders){
      collider.enabled=true;
     }
     InteractionsEnabled=true;
    }

    void DisableInteractions(){
     foreach(Collider collider in colliders){
      collider.enabled=false;
     }
     InteractionsEnabled=false;
    }

    void EnableRendering(){
     foreach(Renderer renderer in renderers){
      renderer.enabled=true;
     }
    }

    void DisableRendering(){
     foreach(Renderer renderer in renderers){
      renderer.enabled=false;
     }
    }

    Collider[]overlappedColliders=new Collider[8];
    bool IsOverlappingNonAlloc(){
     bool result=false;

     for(int i=0;i<volumeColliders.Count;++i){

      int overlappingsLength=0;

      if(volumeColliders[i]is CapsuleCollider capsule){
       //Debug.Log("I have a volume capsule: test for overlaps",this);
       var direction=new Vector3{[capsule.direction]=1};
       var offset=capsule.height/2-capsule.radius;
       var localPoint0=capsule.center-direction*offset;
       var localPoint1=capsule.center+direction*offset;
       var point0=transform.TransformPoint(localPoint0);
       var point1=transform.TransformPoint(localPoint1);
       if((overlappingsLength=Physics.OverlapCapsuleNonAlloc(point0,point1,capsule.radius,overlappedColliders))>0){
        while(overlappedColliders.Length<=overlappingsLength){
         Array.Resize(ref overlappedColliders,overlappingsLength*2);
         Debug.Log("IsOverlappingNonAlloc():overlappedColliders resized to:"+overlappedColliders.Length);
         overlappingsLength=Physics.OverlapCapsuleNonAlloc(point0,point1,capsule.radius,overlappedColliders);
        }
       }

      }

      for(int j=0;j<overlappingsLength;++j){
       var overlapping=overlappedColliders[j];
       if(overlapping.transform.root!=transform.root){
        SimObject sO;
        if((sO=overlapping.transform.root.GetComponent<SimObject>())!=null&&!(sO is SimActor)){
         if(!overlappersUnplacing.Contains(sO)){
          //Debug.Log("IsOverlappingNonAlloc():I'm overlapping another simObject:"+overlappedColliders[j].transform.root.name,this);
          result=true;
         }
        }
       }
      }

     }

     return result;
    }

    internal static readonly HashSet<SimObject>overlappersUnplacing=new HashSet<SimObject>();

    static void OnOverlapperUnplacing(SimObject overlapper){
     overlappersUnplacing.Add(overlapper);
    }

    static void OnOverlapperUnplaced(SimObject overlapper){
     overlappersUnplacing.Remove(overlapper);
    }

    #if UNITY_EDITOR
    void OnDrawGizmos(){
     Core.DrawRotatedBounds(worldBoundsVertices,Color.white);
    }
    #endif

 }
}