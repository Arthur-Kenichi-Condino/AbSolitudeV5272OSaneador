using AKCondinoO.Sims;
using AKCondinoO.Voxels;
using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.IO;
using System.Runtime;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.Profiling;
using UnityEngine.Scripting;

namespace AKCondinoO{
 internal class Core:MonoBehaviour{internal static Core Singleton;
    internal static readonly string saveLocation=Environment.GetFolderPath(Environment.SpecialFolder.LocalApplicationData).Replace("\\","/")+"/AbSolitudeV5272OSaneador/";
    internal static string saveName="terra";
    internal static string savePath=string.Format("{0}{1}/",saveLocation,saveName);
    internal static string perChunkSavePath=string.Format("{0}{1}/",savePath,"chunks");
    internal static string sObjectsSavePath=string.Format("{0}{1}/",savePath,"sObjPD");

    internal static int ActiveThreads;

    internal readonly NavMeshBuildSettings navMeshBuildSettings=new NavMeshBuildSettings{
     agentTypeID=0,//  Humanoid agent
     agentHeight=1.75f,
     agentRadius=0.28125f,
     agentClimb=0.75f,
     agentSlope=60f,
     overrideTileSize=true,
             tileSize=VoxelTerrainChunk.Width*VoxelTerrainChunk.Depth,
     overrideVoxelSize=true,
             voxelSize=0.1406f,
     minRegionArea=0.31640625f,
     debug=new NavMeshBuildDebugSettings{
      flags=NavMeshBuildDebugFlags.None,
     },
     maxJobWorkers=2,
    };

    void Awake(){if(Singleton==null){Singleton=this;}else{DestroyImmediate(this);return;}
     #if !UNITY_EDITOR
      GarbageCollector.GCMode=GarbageCollector.Mode.Manual;
     #endif
     GCSettings.LatencyMode=GCLatencyMode.SustainedLowLatency;

     QualitySettings.vSyncCount=0;

     Application.targetFrameRate=120;

     Directory.CreateDirectory(savePath);
     Directory.CreateDirectory(perChunkSavePath);
     Directory.CreateDirectory(sObjectsSavePath);

     PhysHelper.SetLayerMasks();
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
     RunGC();

     if(Application.targetFrameRate!=120){Application.targetFrameRate=120;}

     if(!initialized){
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
        
    internal const long maxMemoryUsage=32*1024L*1024L*1024L;

    internal const long forcedGCThreshold=16L*1024L*1024L*1024L;
     internal const float forcedGCDelay=30f;
      internal float forcedGCTimer=0f;

    internal const long collectAfterAllocating=160L*1024L*1024L;
     internal const float collectDelay=10f;
      internal float collectTimer=0f;
     internal long nextCollectAt;

    internal long currentFrameMemory;
     internal long lastFrameMemory;

    internal void RunGC(){
     lastFrameMemory=currentFrameMemory;
                     currentFrameMemory=Profiler.GetMonoUsedSizeLong();

     if(forcedGCTimer>0f){forcedGCTimer-=Time.deltaTime;}
     
     if(collectTimer>0f){collectTimer-=Time.deltaTime;}

     if(currentFrameMemory<lastFrameMemory){//  GC happened.
      nextCollectAt=currentFrameMemory+collectAfterAllocating;
      Debug.Log("GC happened: currentFrameMemory.."+currentFrameMemory+"..<..lastFrameMemory.."+lastFrameMemory+"..;non blocking GC nextCollectAt.."+nextCollectAt);
     }

     if(currentFrameMemory>maxMemoryUsage){
      Debug.Log("Trigger immediate GC: currentFrameMemory.."+currentFrameMemory+"..>..maxMemoryUsage.."+maxMemoryUsage);
      fullBlockingGC();
      nextCollectAt=(currentFrameMemory=Profiler.GetMonoUsedSizeLong())+collectAfterAllocating;
      Debug.Log("immediate GC done: currentFrameMemory.."+currentFrameMemory+"..;non blocking GC nextCollectAt.."+nextCollectAt);
     }else{
      if(currentFrameMemory>forcedGCThreshold&&forcedGCTimer<=0f){//  Trigger immediate GC
       Debug.Log("Trigger immediate GC: currentFrameMemory.."+currentFrameMemory+"..>..forcedGCThreshold.."+forcedGCThreshold);
       fullBlockingGC();
       forcedGCTimer=forcedGCDelay;
       nextCollectAt=(currentFrameMemory=Profiler.GetMonoUsedSizeLong())+collectAfterAllocating;
       Debug.Log("immediate GC done: currentFrameMemory.."+currentFrameMemory+"..;non blocking GC nextCollectAt.."+nextCollectAt);
      }else{
       if(currentFrameMemory>=nextCollectAt&&collectTimer<=0f){//  Trigger non blocking GC
        Debug.Log("Trigger non blocking GC: currentFrameMemory.."+currentFrameMemory+"..>=..nextCollectAt.."+nextCollectAt);
        nonBlockingGC();
        collectTimer=collectDelay;
        nextCollectAt=(currentFrameMemory=Profiler.GetMonoUsedSizeLong())+collectAfterAllocating;
        Debug.Log("non blocking GC done: currentFrameMemory.."+currentFrameMemory+"..;non blocking GC nextCollectAt.."+nextCollectAt);
       }
      }
     }

     void fullBlockingGC(){
      GCSettings.LargeObjectHeapCompactionMode=GCLargeObjectHeapCompactionMode.CompactOnce;
      GC.Collect(GC.MaxGeneration,GCCollectionMode.Forced,true,true);
      GC.WaitForPendingFinalizers();
     }
     void nonBlockingGC(){
      GarbageCollector.CollectIncremental();
     }
    }
        
    #if UNITY_EDITOR
    internal static void DrawBounds(Bounds b,Color color,float duration=0){//[https://gist.github.com/unitycoder/58f4b5d80f423d29e35c814a9556f9d9]
     var p1=new Vector3(b.min.x,b.min.y,b.min.z);// bottom
     var p2=new Vector3(b.max.x,b.min.y,b.min.z);
     var p3=new Vector3(b.max.x,b.min.y,b.max.z);
     var p4=new Vector3(b.min.x,b.min.y,b.max.z);
     var p5=new Vector3(b.min.x,b.max.y,b.min.z);// top
     var p6=new Vector3(b.max.x,b.max.y,b.min.z);
     var p7=new Vector3(b.max.x,b.max.y,b.max.z);
     var p8=new Vector3(b.min.x,b.max.y,b.max.z);
     Debug.DrawLine(p1,p2,color,duration);
     Debug.DrawLine(p2,p3,color,duration);
     Debug.DrawLine(p3,p4,color,duration);
     Debug.DrawLine(p4,p1,color,duration);
     Debug.DrawLine(p5,p6,color,duration);
     Debug.DrawLine(p6,p7,color,duration);
     Debug.DrawLine(p7,p8,color,duration);
     Debug.DrawLine(p8,p5,color,duration);
     Debug.DrawLine(p1,p5,color,duration);// sides
     Debug.DrawLine(p2,p6,color,duration);
     Debug.DrawLine(p3,p7,color,duration);
     Debug.DrawLine(p4,p8,color,duration);
    }
    internal static void DrawRotatedBounds(Vector3[]boundsVertices,Color color,float duration=0){
     Debug.DrawLine(boundsVertices[0],boundsVertices[1],color,duration);
     Debug.DrawLine(boundsVertices[1],boundsVertices[2],color,duration);
     Debug.DrawLine(boundsVertices[2],boundsVertices[3],color,duration);
     Debug.DrawLine(boundsVertices[3],boundsVertices[0],color,duration);
     Debug.DrawLine(boundsVertices[4],boundsVertices[5],color,duration);
     Debug.DrawLine(boundsVertices[5],boundsVertices[6],color,duration);
     Debug.DrawLine(boundsVertices[6],boundsVertices[7],color,duration);
     Debug.DrawLine(boundsVertices[7],boundsVertices[4],color,duration);
     Debug.DrawLine(boundsVertices[0],boundsVertices[4],color,duration);// sides
     Debug.DrawLine(boundsVertices[1],boundsVertices[5],color,duration);
     Debug.DrawLine(boundsVertices[2],boundsVertices[6],color,duration);
     Debug.DrawLine(boundsVertices[3],boundsVertices[7],color,duration);
    }
    #endif

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
     void BG(){Thread.CurrentThread.IsBackground=false;
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