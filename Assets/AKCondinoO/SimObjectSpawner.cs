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
 StartCoroutine(SpawnCoroutine());
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