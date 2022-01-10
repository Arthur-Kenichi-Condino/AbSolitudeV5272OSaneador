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

  void Awake(){if(Singleton==null){Singleton=this;}else{DestroyImmediate(this);return;}
  }

  internal void OnSpawned(SimObject sO){
   if(sO is SimActor){
    Debug.Log("OnSpawned SimActor:"+sO,sO);
   }
  }
  internal void OnDespawn(SimObject sO,bool releasingId=false){
   if(sO is SimActor){
    Debug.Log("OnDespawn SimActor:"+sO,sO);
   }
  }

  void Update(){
  }
 }
}