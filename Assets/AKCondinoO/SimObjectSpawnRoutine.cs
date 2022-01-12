using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AKCondinoO.Sims{
 internal class SimObjectSpawnRoutine:MonoBehaviour{internal static SimObjectSpawnRoutine Singleton;
  internal class SimObjectSpawningSettings{
  }
  internal readonly Dictionary<Type,SimObjectSpawningSettings>spawningSettings=new Dictionary<Type,SimObjectSpawningSettings>{
   
  };
  internal const int SimActorTypeHardLimit=5;

  void Awake(){if(Singleton==null){Singleton=this;}else{DestroyImmediate(this);return;}
  }

  internal readonly Dictionary<Type,int>count=new Dictionary<Type,int>();

  internal readonly Dictionary<SimActor,SimObject>GetActors=new Dictionary<SimActor,SimObject>();

  internal void OnSpawned(SimObject sO){
   var type=sO.GetType();
   if(!count.ContainsKey(type)){
    count.Add(type,1);
   }else{
    count[type]++;
   }
   if(sO is SimActor sA){
    Debug.Log("OnSpawned SimActor:"+sO+";count:"+count[type],sO);
    GetActors[sA]=sO;
    sO.tooMany=count[type]>=SimActorTypeHardLimit;
    Debug.Log("sO.tooMany:"+sO.tooMany+";["+sO,sO);
   }
  }
  internal void OnDespawn(SimObject sO,bool releasingId=false){
   var type=sO.GetType();
   count[type]--;
   if(sO is SimActor sA){
    Debug.Log("OnDespawn SimActor:"+sO+";count:"+count[type],sO);
    GetActors.Remove(sA);
   }
  }

  void Update(){
  }
 }
}