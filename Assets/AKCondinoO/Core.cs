using AKCondinoO.Sims;
using System;
using System.IO;
using UnityEngine;

namespace AKCondinoO{internal class Core:MonoBehaviour{
internal static readonly string saveLocation=Environment.GetFolderPath(Environment.SpecialFolder.LocalApplicationData).Replace("\\","/")+"/AbSolitudeV5272OSaneador/";
internal static string saveName="terra";
internal static string savePath=string.Format("{0}{1}/",saveLocation,saveName);
internal static string perChunkSavePath=string.Format("{0}{1}/",savePath,"chunks");
internal static string sObjectsSavePath=string.Format("{0}{1}/",savePath,"sObjPD");

[SerializeField]int       DEBUG_CREATE_SIM_OBJECT_AMOUNT;
[SerializeField]Vector3   DEBUG_CREATE_SIM_OBJECT_ROTATION;
[SerializeField]Vector3   DEBUG_CREATE_SIM_OBJECT_POSITION;
[SerializeField]Vector3   DEBUG_CREATE_SIM_OBJECT_SCALE=Vector3.one;
[SerializeField]SimObject DEBUG_CREATE_SIM_OBJECT=null;
bool initialized;
void Update(){
 if(!initialized){
  Directory.CreateDirectory(savePath);
  Directory.CreateDirectory(perChunkSavePath);
  Directory.CreateDirectory(sObjectsSavePath);
  initialized=true;
 }
 if(DEBUG_CREATE_SIM_OBJECT!=null){
  Debug.Log("DEBUG_CREATE_SIM_OBJECT:"+DEBUG_CREATE_SIM_OBJECT+";amount:"+DEBUG_CREATE_SIM_OBJECT_AMOUNT);
  var type=DEBUG_CREATE_SIM_OBJECT.GetType();
  SimObjectSpawner.SpawnData toSpawn=new SimObjectSpawner.SpawnData(DEBUG_CREATE_SIM_OBJECT_AMOUNT);
  for(int i=0;i<DEBUG_CREATE_SIM_OBJECT_AMOUNT;++i){
   toSpawn.at.Add((DEBUG_CREATE_SIM_OBJECT_POSITION,DEBUG_CREATE_SIM_OBJECT_ROTATION,DEBUG_CREATE_SIM_OBJECT_SCALE,type,null));
  }
  SimObjectSpawner.Singleton.SpawnQueue.Enqueue(toSpawn);
  DEBUG_CREATE_SIM_OBJECT=null;
 }
}  
        
}}