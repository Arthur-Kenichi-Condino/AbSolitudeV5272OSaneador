using AKCondinoO.Sims;
using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.IO;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine;

namespace AKCondinoO{internal class Core:MonoBehaviour{internal static Core Singleton;
internal static readonly string saveLocation=Environment.GetFolderPath(Environment.SpecialFolder.LocalApplicationData).Replace("\\","/")+"/AbSolitudeV5272OSaneador/";
internal static string saveName="terra";
internal static string savePath=string.Format("{0}{1}/",saveLocation,saveName);
internal static string perChunkSavePath=string.Format("{0}{1}/",savePath,"chunks");
internal static string sObjectsSavePath=string.Format("{0}{1}/",savePath,"sObjPD");

internal static int ActiveThreads;

void Awake(){if(Singleton==null){Singleton=this;}else{DestroyImmediate(this);}
Directory.CreateDirectory(savePath);
Directory.CreateDirectory(perChunkSavePath);
Directory.CreateDirectory(sObjectsSavePath);
}

void OnDestroy(){
 try{
  EventHandler handler=OnDestroyingCoreEvent;handler?.Invoke(this,new OnDestroyingCoreEventArgs(){
  });
 }catch(Exception e){
  Debug.LogError(e?.Message+"\n"+e?.StackTrace+"\n"+e?.Source);
 }
 if(ActiveThreads>0){
  Debug.LogError("ActiveThreads>0(ActiveThreads=="+ActiveThreads+"):one or more threads weren't stopped nor waited for termination");
 }
}
internal event EventHandler OnDestroyingCoreEvent;
internal class OnDestroyingCoreEventArgs:EventArgs{
}

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
        
}

internal abstract class BackgroundContainer{
 internal readonly ManualResetEvent backgroundData=new ManualResetEvent(true);
  internal bool IsCompleted(Func<bool>isRunning,int millisecondsTimeout=0){
   if(millisecondsTimeout<0&&isRunning.Invoke()!=true){
    return true;
   }
   return backgroundData.WaitOne(millisecondsTimeout);
  }
 internal readonly AutoResetEvent foregroundData=new AutoResetEvent(false);
}
internal abstract class BaseMultithreaded<T>where T:BackgroundContainer{
 internal static bool Stop{
  get{bool tmp;lock(Stop_syn){tmp=Stop_v;      }return tmp;}
  set{         lock(Stop_syn){    Stop_v=value;}if(value){enqueued.Set();}}
 }static bool Stop_v=false;static readonly object Stop_syn=new object();
 
 readonly Task task;
  internal bool IsRunning(){
   return Stop==false&&task!=null&&!task.IsCompleted;
  }
  internal void Wait(){
   try{
    task.Wait();
    Debug.Log("task completed successfully");
    Core.ActiveThreads--;
   }catch(Exception e){
    Debug.LogError(e?.Message+"\n"+e?.StackTrace+"\n"+e?.Source);
   }
  }
 internal BaseMultithreaded(){
  Core.ActiveThreads++;
  task=Task.Factory.StartNew(BG,TaskCreationOptions.LongRunning);
 }
 protected T current{get;private set;}
 void BG(){
  Debug.Log("begin bg task");
  ManualResetEvent backgroundData;
   AutoResetEvent foregroundData;
  while(!Stop){enqueued.WaitOne();if(Stop){enqueued.Set();goto _Stop;}
   if(queued.TryDequeue(out T dequeued)){
    current=dequeued;
    foregroundData=current.foregroundData;
    backgroundData=current.backgroundData;
    try{
     Renew(dequeued);
    }catch(Exception e){
     Debug.LogError(e?.Message+"\n"+e?.StackTrace+"\n"+e?.Source);
    }
   }else{
    continue;
   };
   if(queued.Count>0){
    enqueued.Set();
   }
   foregroundData.WaitOne();
   try{
    Execute();
   }catch(Exception e){
    Debug.LogError(e?.Message+"\n"+e?.StackTrace+"\n"+e?.Source);
   }
   try{
    Release();
   }catch(Exception e){
    Debug.LogError(e?.Message+"\n"+e?.StackTrace+"\n"+e?.Source);
   }
   backgroundData.Set();
   current=null;
   try{
    Cleanup();
   }catch(Exception e){
    Debug.LogError(e?.Message+"\n"+e?.StackTrace+"\n"+e?.Source);
   }
  }
  _Stop:{
   Debug.Log("bg task ended gracefully");
  }
 }

 static readonly ConcurrentQueue<T>queued=new ConcurrentQueue<T>();
 static readonly AutoResetEvent enqueued=new AutoResetEvent(false);
 internal static void Schedule(T next){
  next.backgroundData.Reset();
  next.foregroundData.Set();
  queued.Enqueue(next);
  enqueued.Set();
 }
 internal static int Clear(){
  int count=queued.Count;
  while(queued.TryDequeue(out T dequeued)){
   dequeued.foregroundData.WaitOne(0);
   dequeued.backgroundData.Set();
  }
  return count;
 }

 protected virtual void Renew(T next){}

 protected abstract void Execute();

 protected virtual void Release(){}

 protected virtual void Cleanup(){}
}

}