using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.IO;
using UnityEngine;
using static AKCondinoO.Voxels.VoxelTerrain;
using static Utils;

namespace AKCondinoO.Sims{internal class SimObject:MonoBehaviour{
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
    Debug.Log("PersistentDataMultithreaded:Execute:loading");

    PersistentDataBackgroundContainer.SerializableSpecsData specsData_cur=null;
    using(var file=new FileStream(specsDataFile,FileMode.OpenOrCreate,FileAccess.ReadWrite,FileShare.None)){
     if(file.Length>0){
      using(var reader=new StreamReader(file)){using(var json=new JsonTextReader(reader)){
       specsData_cur=(PersistentDataBackgroundContainer.SerializableSpecsData)jsonSerializer.Deserialize(json,current.specsData_bg.GetType());
      }}
     }
    }

    string transformFile=specsData_cur.transformFile;
                        
    PersistentDataBackgroundContainer.SerializableTransform transform_cur=null;
    using(var file=new FileStream(transformFile,FileMode.OpenOrCreate,FileAccess.ReadWrite,FileShare.None)){
     if(file.Length>0){
      using(var reader=new StreamReader(file)){using(var json=new JsonTextReader(reader)){
       transform_cur=(PersistentDataBackgroundContainer.SerializableTransform)jsonSerializer.Deserialize(json,current.transform_bg.GetType());
      }}
     }
    }

    current.specsData_bg=specsData_cur;
    current.transform_bg=transform_cur;

   }else if(current.executionMode_bg==PersistentDataBackgroundContainer.ExecutionMode.Save){
    Debug.Log("PersistentDataMultithreaded:Execute:saving...\ncurrent.transform_bg.position:"+current.transform_bg.position+"\ncurrent.transform_bg.rotation:"+current.transform_bg.rotation+"\ncurrent.transform_bg.localScale:"+current.transform_bg.localScale);

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

internal Collider[]colliders;

internal readonly List<Collider>volumeColliders=new List<Collider>();

protected virtual void Awake(){
 if(container==null){container=new PersistentDataBackgroundContainer(syn);}
 if(container.specsData_bg==null){container.specsData_bg=new PersistentDataBackgroundContainer.SerializableSpecsData();}
 if(container.transform_bg==null){container.transform_bg=new PersistentDataBackgroundContainer.SerializableTransform();}

 foreach(Collider collider in colliders=GetComponentsInChildren<Collider>()){
  if(collider.CompareTag("SimObjectVolume")){
   volumeColliders.Add(collider);
  }
 }
}

internal void OnActivated(bool load){
 container.id_bg=id.Value;
 loading=load;
 if(!loading){
  container.SetSerializable(transform);

  EnableInteractions();

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
       
[SerializeField]bool DEBUG_UNPLACE=false;

[SerializeField]bool DEBUG_UNLOAD=false;

bool unplacing;
bool unplaceRequired;
bool unplaceRequested;
bool unloading;
bool unloadRequired;
bool unloadRequested;
bool loading; 
bool loadRequired;
bool loadRequested;
bool saveRequired;
internal void ManualUpdate(){
 if(!unplacing){
  if(!unloading){
   if(!loading){
    if(DEBUG_UNPLACE){
     DEBUG_UNPLACE=false;
     Debug.Log("ManualUpdate:DEBUG_UNPLACE:save and UNPLACE:"+id,transform);
     OnUnplace();
   
    }else if(IsOverlappingNonAlloc()){

     OnOverlapperUnplacing(this);

     Debug.Log("ManualUpdate:IsOverlappingNonAlloc:save and UNPLACE:"+id,transform);
     OnUnplace();

    }else{
     if(DEBUG_UNLOAD){
      DEBUG_UNLOAD=false;
      Debug.Log("ManualUpdate:DEBUG_UNLOAD:save and unload:"+id,transform);
      OnUnload();
                     
     }else{
      if(transform.hasChanged){
       transform.hasChanged=false;
       Debug.Log("ManualUpdate:transform.hasChanged:save required:"+id,transform);
       saveRequired=true;
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
   Debug.Log("ManualUpdate:unplacing started:"+id,transform);
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
    if(loadRequested&&OnLoadedData()){
     loadRequested=false;
     //Debug.Log("ManualUpdate:loading finished:"+id,transform);
     transform.hasChanged=false;
     loading=false;

     EnableInteractions();

    }else if(loadRequired&&OnLoading()){
     loadRequired=false;
     //Debug.Log("ManualUpdate:loading started:"+id,transform);
     loadRequested=true;
    }
 
   }else{
    if(saveRequired&&OnSaving()){
     saveRequired=false;
     Debug.Log("ManualUpdate:saving started:"+id,transform);
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
bool OnLoadedData(){
 if(container.IsCompleted(SimObjectSpawner.Singleton.persistentDataBGThreads[0].IsRunning)){
  container.GetDeserialized(transform);
  return true;
 }
 return false;
}

bool OnSaving(){
 if(container.IsCompleted(SimObjectSpawner.Singleton.persistentDataBGThreads[0].IsRunning)){
  container.executionMode_bg=PersistentDataBackgroundContainer.ExecutionMode.Save;
  container.id_bg=id.Value;
  container.SetSerializable(transform);
  PersistentDataMultithreaded.Schedule(container);
  return true;
 }
 return false;
}

void OnUnload(){

 DisableInteractions();

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

void EnableInteractions(){
 foreach(Collider collider in colliders){
  collider.enabled=true;
 }
}

void DisableInteractions(){
 foreach(Collider collider in colliders){
  collider.enabled=false;
 }
}

Collider[]overlappedColliders=new Collider[1];
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
    if((sO=overlapping.transform.root.GetComponent<SimObject>())!=null){
     if(!overlappersUnplacing.Contains(sO)){
      Debug.Log("IsOverlappingNonAlloc():I'm overlapping another simObject:"+overlappedColliders[j].transform.root.name,this);
      result=true;
     }
    }
   }
  }

 }

 return result;
}

static readonly HashSet<SimObject>overlappersUnplacing=new HashSet<SimObject>();

static void OnOverlapperUnplacing(SimObject overlapper){
 overlappersUnplacing.Add(overlapper);
}

static void OnOverlapperUnplaced(SimObject overlapper){
 overlappersUnplacing.Remove(overlapper);
}

}}