using Newtonsoft.Json;
using System;
using System.IO;
using UnityEngine;
using static AKCondinoO.Voxels.VoxelTerrain;
using static Utils;

namespace AKCondinoO.Sims{internal class SimObject:MonoBehaviour{
internal readonly object syn=new object();        

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
  Debug.Log("PersistentDataMultithreaded:Execute");
  lock(current.syn_bg){
   string specsDataFile=string.Format("{0}({1},{2}).JsonSerializer",Core.sObjectsSavePath,current.id_bg.simType,current.id_bg.number);

   if      (current.executionMode_bg==PersistentDataBackgroundContainer.ExecutionMode.Load){
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

protected virtual void Awake(){
 if(container==null){container=new PersistentDataBackgroundContainer(syn);}
 if(container.specsData_bg==null){container.specsData_bg=new PersistentDataBackgroundContainer.SerializableSpecsData();}
 if(container.transform_bg==null){container.transform_bg=new PersistentDataBackgroundContainer.SerializableTransform();}
}

internal void OnActivated(bool load){
 container.id_bg=id.Value;
 loading=load;
 if(!loading){
  container.SetSerializable(transform);
 }else{
  Debug.Log("SimObject:OnActivated:loading:transform has incorrect data");
  loadRequired=true;
 }
}

internal void OnExitSave(){
 Debug.Log("SimObject:OnExitSave");
 container.IsCompleted(SimObjectSpawner.Singleton.persistentDataBGThreads[0].IsRunning,-1);
 if(unplacing){
  Debug.Log("SimObject:OnExitSave:unplacing:"+id);

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
  if(unplaceRequired&&OnUnplacing()){
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
    Debug.Log("ManualUpdate:loading:"+id,transform);
    if(loadRequested&&OnLoadedData()){
     loadRequested=false;
     Debug.Log("ManualUpdate:loading finished:"+id,transform);
     transform.hasChanged=false;
     loading=false;
    }else if(loadRequired&&OnLoading()){
     loadRequired=false;
     Debug.Log("ManualUpdate:loading started:"+id,transform);
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
 unplacing=true;
 Debug.Log("OnUnplace:something caused this sO to be disabled and removed from the world");
 unplaceRequired=true;
}
bool OnUnplacing(){
 return false;
}

}}