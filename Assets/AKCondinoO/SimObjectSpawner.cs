using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AKCondinoO.Sims{internal class SimObjectSpawner:MonoBehaviour{internal static SimObjectSpawner Singleton;
internal readonly Dictionary<(Type simType,ulong number),SimObject>active=new Dictionary<(Type,ulong),SimObject>();

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
 StartCoroutine(SpawnCoroutine());
}

void OnDestroyingCoreEvent(object sender,EventArgs e){
 Debug.Log("OnDestroyingCoreEvent");
 foreach(var a in active){var sO=a.Value;
  Debug.Log("OnDestroyingCoreEvent:active sO.id:"+sO.id);
 }
 OnExitSave();
 PersistentUniqueIdsMultithreaded.Stop=true;
 persistUniqueIdsBGThread.Wait();
}

void OnExitSave(){
 Debug.Log("OnExitSave");
 persistUniqueIdsBG.IsCompleted(persistUniqueIdsBGThread.IsRunning,-1);
 PersistentUniqueIdsMultithreaded.Schedule(persistUniqueIdsBG);
 persistUniqueIdsBG.IsCompleted(persistUniqueIdsBGThread.IsRunning,-1);
 if(PersistentUniqueIdsMultithreaded.Clear()==0){
  Debug.Log("ids exit save was successful");
 }else{
  Debug.LogError("ids exit save failed");
 }
}
        
internal PersistentUniqueIdsBackgroundContainer persistUniqueIdsBG;
internal class PersistentUniqueIdsBackgroundContainer:BackgroundContainer{
}
internal PersistentUniqueIdsMultithreaded persistUniqueIdsBGThread;
internal class PersistentUniqueIdsMultithreaded:BaseMultithreaded<PersistentUniqueIdsBackgroundContainer>{
 protected override void Execute(){
  Debug.Log("PersistentUniqueIdsMultithreaded:Execute");
  string uniqueIdsFile=string.Format("{0}{1}",Core.savePath,"uniqueIds.JsonSerializer");
  Debug.Log("uniqueIdsFile: "+uniqueIdsFile);
 }
}
        
void Update(){
 foreach(var a in active){var sO=a.Value;
  //Debug.Log("Update:active sO.id:"+sO.id);
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

internal Dictionary<Type,ulong>ids=new Dictionary<Type,ulong>();
WaitUntil waitSpawnQueue;
IEnumerator SpawnCoroutine(){
 waitSpawnQueue=new WaitUntil(()=>SpawnQueue.Count>0);
 Loop:{
  Debug.Log("SpawnCoroutine:waitSpawnQueue");
  yield return waitSpawnQueue;
  while(SpawnQueue.Count>0){var toSpawn=SpawnQueue.Dequeue();
   foreach(var at in toSpawn.at){
    Debug.Log("SpawnCoroutine:at:"+at);
    var gO=Instantiate(Prefabs[at.type],at.position,Quaternion.Euler(at.rotation));gO.transform.localScale=at.scale;
    var sO=gO.GetComponent<SimObject>();
    Type simType=at.type;
    ulong number=0;
    if(!ids.ContainsKey(simType)){
     ids.Add(simType,1);
    }else{
     number=ids[simType]++;
    }
    (Type simType,ulong number)id=(simType,number);
    Debug.Log("SpawnCoroutine:id:"+id);
    active.Add(id,sO);
    sO.id=id;
   }
   toSpawn.dequeued=true;
  }
 }
goto Loop;}

}}