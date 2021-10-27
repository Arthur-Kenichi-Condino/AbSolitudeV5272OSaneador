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
}
internal class PersistentDataMultithreaded:BaseMultithreaded<PersistentDataBackgroundContainer>{
 readonly JsonSerializer jsonSerializer=new JsonSerializer();
 protected override void Execute(){
  lock(current.syn_bg){
   Debug.Log("PersistentDataMultithreaded:Execute:...\ncurrent.transform_bg.position:"+current.transform_bg.position+"\ncurrent.transform_bg.rotation:"+current.transform_bg.rotation+"\ncurrent.transform_bg.localScale:"+current.transform_bg.localScale);
   Vector2Int cnkRgn1=vecPosTocnkRgn(current.transform_bg.position);
   Vector2Int cCoord1=cnkRgnTocCoord(cnkRgn1);
          int cnkIdx1=GetcnkIdx(cCoord1.x,cCoord1.y);
   string transformPath=string.Format("{0}{1}/",Core.perChunkSavePath,cnkIdx1);
   Directory.CreateDirectory(transformPath);
   string transformFile=string.Format("{0}({1},{2}).JsonSerializer",transformPath,current.id_bg.simType,current.id_bg.number);
   using(var file=new FileStream(transformFile,FileMode.OpenOrCreate,FileAccess.ReadWrite,FileShare.None)){
    file.SetLength(0);
    file.Flush(true);
    using(var writer=new StreamWriter(file)){using(var json=new JsonTextWriter(writer)){
     jsonSerializer.Serialize(json,current.transform_bg,current.transform_bg.GetType());
    }}
   }
  }
 }
}

protected virtual void Awake(){
 if(container==null){container=new PersistentDataBackgroundContainer(syn);}
 if(container.specsData_bg==null){container.specsData_bg=new PersistentDataBackgroundContainer.SerializableSpecsData();}
 if(container.transform_bg==null){container.transform_bg=new PersistentDataBackgroundContainer.SerializableTransform();}
}

internal void OnActivated(){
 container.id_bg=id.Value;
 container.SetSerializable(transform);
}

internal void OnExitSave(){
 Debug.Log("SimObject:OnExitSave");
 container.IsCompleted(SimObjectSpawner.Singleton.persistentDataBGThreads[0].IsRunning,-1);
 PersistentDataMultithreaded.Schedule(container);
 container.IsCompleted(SimObjectSpawner.Singleton.persistentDataBGThreads[0].IsRunning,-1);
}

bool saveRequired;
internal void ManualUpdate(){
 if(transform.hasChanged){
  transform.hasChanged=false;
  Debug.Log("ManualUpdate:save required:transform.hasChanged:"+id,transform);
  saveRequired=true;
 }
 if(saveRequired&&OnUpdateSave()){
  saveRequired=false;
  Debug.Log("ManualUpdate:saving started:"+id,transform);
 }
}
bool OnUpdateSave(){
 if(container.IsCompleted(SimObjectSpawner.Singleton.persistentDataBGThreads[0].IsRunning)){
  container.id_bg=id.Value;
  container.SetSerializable(transform);
  PersistentDataMultithreaded.Schedule(container);
  return true;
 }
 return false;
}

}}