using MessagePack;
using System;
using System.Collections;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Threading;
using UnityEngine;
using UnityEngine.AI;
using static AKCondinoO.Voxels.VoxelTerrainChunk;

namespace AKCondinoO.Voxels{
 internal class VoxelTerrain:MonoBehaviour{internal static VoxelTerrain Singleton;

    internal const double IsoLevel=-50.0d;

    internal const int MaxcCoordx=312;
    internal const int MaxcCoordy=312;
    internal static Vector2Int instantiationDistance{get;}=new Vector2Int(12,12);
    internal static Vector2Int expropriationDistance{get;}=new Vector2Int(13,13);
     internal static Vector2Int physicsDistance{get;}=new Vector2Int(5,5);

    #region chunk

     internal static Vector2Int vecPosTocCoord(Vector3 pos){
                                                       pos.x/=(float)Width;
                                                       pos.z/=(float)Depth;
      return new Vector2Int((pos.x>0)?(pos.x-(int)pos.x==0.5f?Mathf.FloorToInt(pos.x):Mathf.RoundToInt(pos.x)):(int)Math.Round(pos.x,MidpointRounding.AwayFromZero),
                            (pos.z>0)?(pos.z-(int)pos.z==0.5f?Mathf.FloorToInt(pos.z):Mathf.RoundToInt(pos.z)):(int)Math.Round(pos.z,MidpointRounding.AwayFromZero)
                           );
     }

     internal static Vector2Int vecPosTocnkRgn(Vector3 pos){Vector2Int coord=vecPosTocCoord(pos);
      return new Vector2Int(coord.x*Width,
                            coord.y*Depth);
     }

     internal static Vector2Int cnkRgnTocCoord(Vector2Int cnkRgn){return new Vector2Int(cnkRgn.x/Width,cnkRgn.y/Depth);}

     internal static Vector2Int cCoordTocnkRgn(Vector2Int cCoord){return new Vector2Int(cCoord.x*Width,cCoord.y*Depth);}

     internal static int GetcnkIdx(int cx,int cy){return cy+cx*(MaxcCoordy*2+1);}

    #endregion

    #region voxel

     internal static Vector3Int vecPosTovCoord(Vector3 pos){
      Vector2Int rgn=vecPosTocnkRgn(pos);
      pos.x=(pos.x>0)?(pos.x-(int)pos.x==0.5f?Mathf.FloorToInt(pos.x):Mathf.RoundToInt(pos.x)):(int)Math.Round(pos.x,MidpointRounding.AwayFromZero);
      pos.y=(pos.y>0)?(pos.y-(int)pos.y==0.5f?Mathf.FloorToInt(pos.y):Mathf.RoundToInt(pos.y)):(int)Math.Round(pos.y,MidpointRounding.AwayFromZero);
      pos.z=(pos.z>0)?(pos.z-(int)pos.z==0.5f?Mathf.FloorToInt(pos.z):Mathf.RoundToInt(pos.z)):(int)Math.Round(pos.z,MidpointRounding.AwayFromZero);
      Vector3Int coord=new Vector3Int((int)pos.x-rgn.x,(int)pos.y,(int)pos.z-rgn.y);
      coord.x+=Mathf.FloorToInt(Width /2.0f);coord.x=Mathf.Clamp(coord.x,0,Width -1);
      coord.y+=Mathf.FloorToInt(Height/2.0f);coord.y=Mathf.Clamp(coord.y,0,Height-1);
      coord.z+=Mathf.FloorToInt(Depth /2.0f);coord.z=Mathf.Clamp(coord.z,0,Depth -1);
      return coord;
     }

     internal static int GetvxlIdx(int vcx,int vcy,int vcz){return vcy*FlattenOffset+vcx*Depth+vcz;}

    #endregion

    #region validation
        
     internal static void ValidateCoord(ref Vector2Int region,ref Vector3Int vxlCoord){int a,c;
      a=region.x;c=vxlCoord.x;ValidateCoordAxis(ref a,ref c,Width);region.x=a;vxlCoord.x=c;
      a=region.y;c=vxlCoord.z;ValidateCoordAxis(ref a,ref c,Depth);region.y=a;vxlCoord.z=c;
     }

     internal static void ValidateCoordAxis(ref int axis,ref int coord,int axisLength){
      if      (coord<0){          axis-=axisLength*Mathf.CeilToInt (Math.Abs(coord)/(float)axisLength);coord=(coord%axisLength)+axisLength;
      }else if(coord>=axisLength){axis+=axisLength*Mathf.FloorToInt(Math.Abs(coord)/(float)axisLength);coord=(coord%axisLength);
      }
     }

    #endregion
        
    internal readonly Dictionary<GameObject,NavMeshBuildSource>navMeshSources=new Dictionary<GameObject,NavMeshBuildSource>();
    internal readonly Dictionary<GameObject,NavMeshBuildMarkup>navMeshMarkups=new Dictionary<GameObject,NavMeshBuildMarkup>();
     readonly List<NavMeshBuildSource>sources=new List<NavMeshBuildSource>();
     readonly List<NavMeshBuildMarkup>markups=new List<NavMeshBuildMarkup>();

    internal readonly Dictionary<NetcodePlayerPrefab,(Vector2Int cCoord,Vector2Int cCoord_Pre,bool instantiationRequested)>playersMovement=new Dictionary<NetcodePlayerPrefab,(Vector2Int,Vector2Int,bool)>();
     readonly List<NetcodePlayerPrefab>playersMovementRegistered=new List<NetcodePlayerPrefab>();

    internal VoxelTerrainChunk[]all;
     readonly Dictionary<VoxelTerrainChunk,object>syn=new Dictionary<VoxelTerrainChunk,object>();

    internal readonly Dictionary<int,VoxelTerrainChunk>active=new Dictionary<int,VoxelTerrainChunk>();
     internal static readonly ConcurrentDictionary<int,VoxelWaterChunk>water=new ConcurrentDictionary<int,VoxelWaterChunk>();

    internal readonly LinkedList<VoxelTerrainChunk>pool=new LinkedList<VoxelTerrainChunk>();
        
    internal readonly EditingBackgroundContainer editingBG=new EditingBackgroundContainer();
    internal class EditingBackgroundContainer:BackgroundContainer{
     internal enum EditMode{Cube,}
     internal object[]syn_bg;
     internal Queue<EditRequest>editingRequests_bg;
     internal HashSet<int>dirty_bg;
    }
    internal EditingMultithreaded editingBGThread;
    internal class EditingMultithreaded:BaseMultithreaded<EditingBackgroundContainer>{

     readonly Dictionary<int,Dictionary<Vector3Int,(double density,MaterialId materialId)>>fromFilesData=new Dictionary<int,Dictionary<Vector3Int,(double,MaterialId)>>();
     readonly Dictionary<int,Dictionary<Vector3Int,(double density,MaterialId materialId)>>curSavingData=new Dictionary<int,Dictionary<Vector3Int,(double,MaterialId)>>();

     protected override void Cleanup(){
      fromFilesData.Clear();
      curSavingData.Clear();
     }

     protected override void Execute(){
      Debug.Log("EditingMultithreaded:Execute:current.editingRequests_bg.Count:"+current.editingRequests_bg.Count);

       current.dirty_bg=new HashSet<int>();

       while(current.editingRequests_bg.Count>0){
        var editRequest=current.editingRequests_bg.Dequeue();
        Debug.Log("edit request dequeued:editRequest.center:"+editRequest.center+";editRequest.mode:"+editRequest.mode);
        Vector3    center    =editRequest.center;
        Vector3Int size      =editRequest.size;
        double     density   =editRequest.density;
        MaterialId material  =editRequest.material;
        int        smoothness=editRequest.smoothness;
        switch(editRequest.mode){
         default:{
          float sqrt_yx_1=Mathf.Sqrt(Mathf.Pow(size.y,2)+Mathf.Pow(size.x,2));
          float sqrt_xz_1=Mathf.Sqrt(Mathf.Pow(size.x,2)+Mathf.Pow(size.z,2));
          float sqrt_zy_1=Mathf.Sqrt(Mathf.Pow(size.z,2)+Mathf.Pow(size.y,2));
           float sqrt_yx_xz_1=Mathf.Sqrt(Mathf.Pow(sqrt_yx_1,2)+Mathf.Pow(sqrt_xz_1,2));
            float sqrt_yx_xz_zy_1=Mathf.Sqrt(Mathf.Pow(sqrt_yx_xz_1,2)+Mathf.Pow(sqrt_zy_1,2));
          float sqrt_yx_2;
          float sqrt_xz_2;
          float sqrt_zy_2;
          Vector2Int cCoord1=vecPosTocCoord(center ),        cCoord3;
          Vector2Int cnkRgn1=cCoordTocnkRgn(cCoord1),        cnkRgn3;
          Vector3Int vCoord1=vecPosTovCoord(center ),vCoord2,vCoord3;

          for(int y=0;y<size.y+smoothness;++y){for(vCoord2=new Vector3Int(vCoord1.x,vCoord1.y-y,vCoord1.z);vCoord2.y<=vCoord1.y+y;vCoord2.y+=y*2){
           if(vCoord2.y>=0&&vCoord2.y<Height){
          for(int x=0;x<size.x+smoothness;++x){for(vCoord2.x=vCoord1.x-x                                  ;vCoord2.x<=vCoord1.x+x;vCoord2.x+=x*2){
            sqrt_yx_2=Mathf.Sqrt(Mathf.Pow(y,2)+Mathf.Pow(x,2));
          for(int z=0;z<size.z+smoothness;++z){for(vCoord2.z=vCoord1.z-z                                  ;vCoord2.z<=vCoord1.z+z;vCoord2.z+=z*2){
            cCoord3=cCoord1;
            cnkRgn3=cnkRgn1;
            vCoord3=vCoord2;
            if(vCoord2.x<0||vCoord2.x>=Width||
               vCoord2.z<0||vCoord2.z>=Depth
            ){
             ValidateCoord(ref cnkRgn3,ref vCoord3);
             cCoord3=cnkRgnTocCoord(cnkRgn3);
            }
            int cnkIdx3=GetcnkIdx(cCoord3.x,cCoord3.y);
            sqrt_xz_2=Mathf.Sqrt(Mathf.Pow(x,2)+Mathf.Pow(z,2));
            sqrt_zy_2=Mathf.Sqrt(Mathf.Pow(z,2)+Mathf.Pow(y,2));
            double resultDensity;
            if(y>=size.y||x>=size.x||z>=size.z){
             if(y>=size.y&&x>=size.x&&z>=size.z){
              float sqrt_yx_xz_2=Mathf.Sqrt(Mathf.Pow(sqrt_yx_2,2)+Mathf.Pow(sqrt_xz_2,2));
               float sqrt_yx_xz_zy_2=Mathf.Sqrt(Mathf.Pow(sqrt_yx_xz_2,2)+Mathf.Pow(sqrt_zy_2,2));
              resultDensity=density*(1f-(sqrt_yx_xz_zy_2-sqrt_yx_xz_1)/(sqrt_yx_xz_zy_2));
             }else if(y>=size.y&&x>=size.x){resultDensity=density*(1f-(sqrt_yx_2-sqrt_yx_1)/(sqrt_yx_2));
             }else if(x>=size.x&&z>=size.z){resultDensity=density*(1f-(sqrt_xz_2-sqrt_xz_1)/(sqrt_xz_2));
             }else if(z>=size.z&&y>=size.y){resultDensity=density*(1f-(sqrt_zy_2-sqrt_zy_1)/(sqrt_zy_2));
             }else if(y>=size.y){resultDensity=density*(1f-(y-size.y)/(float)y)*1.414f;
             }else if(x>=size.x){resultDensity=density*(1f-(x-size.x)/(float)x)*1.414f;
             }else if(z>=size.z){resultDensity=density*(1f-(z-size.z)/(float)z)*1.414f;
             }else{
              resultDensity=0d;
             }
            }else{
             resultDensity=density;
            }
            if(!fromFilesData.ContainsKey(cnkIdx3)){
             string editsFile=string.Format("{0}{1}/{2}",Core.perChunkSavePath,cnkIdx3,"edits.MessagePackSerializer");
             if(File.Exists(editsFile)){
              using(var file=new FileStream(editsFile,FileMode.Open,FileAccess.Read,FileShare.Read)){
               if(file.Length>0){
                Dictionary<Vector3Int,(double density,MaterialId materialId)>fromFileVoxels=(Dictionary<Vector3Int,(double density,MaterialId materialId)>)MessagePackSerializer.Deserialize(typeof(Dictionary<Vector3Int,(double density,MaterialId materialId)>),file);
                fromFilesData.Add(cnkIdx3,fromFileVoxels);
               }
              }
             }
            }
            VoxelTerrainChunk.MarchingCubesMultithreaded.Voxel currentVoxel;
            if(fromFilesData.ContainsKey(cnkIdx3)&&fromFilesData[cnkIdx3].ContainsKey(vCoord3)){
             (double density,MaterialId materialId)voxelData=fromFilesData[cnkIdx3][vCoord3];
             currentVoxel=new VoxelTerrainChunk.MarchingCubesMultithreaded.Voxel(voxelData.density,Vector3.zero,voxelData.materialId);
            }else{
             currentVoxel=new VoxelTerrainChunk.MarchingCubesMultithreaded.Voxel();
             Vector3Int noiseInput=vCoord3;noiseInput.x+=cnkRgn3.x;
                                           noiseInput.z+=cnkRgn3.y;
             VoxelTerrainChunk.MarchingCubesMultithreaded.biome.Setvxl(noiseInput,null,null,0,vCoord3.z+vCoord3.x*Depth,ref currentVoxel);
            }
            resultDensity=Math.Max(resultDensity,currentVoxel.Density);
            if(material==MaterialId.Air&&!(-resultDensity>=-IsoLevel)){
             resultDensity=-resultDensity;
            }
            if(!curSavingData.ContainsKey(cnkIdx3)){
             curSavingData.Add(cnkIdx3,new Dictionary<Vector3Int,(double density,MaterialId materialId)>());
            }
            curSavingData[cnkIdx3][vCoord3]=(resultDensity,-resultDensity>=-IsoLevel?MaterialId.Air:material);

            current.dirty_bg.Add(cnkIdx3);
            for(int ngbx=-1;ngbx<=1;ngbx++){
            for(int ngbz=-1;ngbz<=1;ngbz++){
             if(ngbx==0&&ngbz==0){
              continue;
             }
             Vector2Int nCoord1=cCoord3+new Vector2Int(ngbx,ngbz);
             if(Math.Abs(nCoord1.x)>=MaxcCoordx||
                Math.Abs(nCoord1.y)>=MaxcCoordy){
              continue;
             }
             int ngbIdx1=GetcnkIdx(nCoord1.x,nCoord1.y);
             current.dirty_bg.Add(ngbIdx1);
            }}

           if(z==0){break;}
          }}
           if(x==0){break;}
          }}
           }
           if(y==0){break;}
          }}

          break;
         }
        }
       }

      foreach(var syn in current.syn_bg)Monitor.Enter(syn);
      try{
                    
       foreach(var saving in curSavingData){
        int cnkIdx1=saving.Key;
        string editsFile=string.Format("{0}{1}/{2}",Core.perChunkSavePath,cnkIdx1,"edits.MessagePackSerializer");
        string editsPath=Path.GetDirectoryName(editsFile).Replace("\\","/");
        Directory.CreateDirectory(editsPath);

        Debug.Log("saving edits at:"+editsPath);

        using(var file=new FileStream(editsFile,FileMode.OpenOrCreate,FileAccess.ReadWrite,FileShare.None)){
         if(file.Length>0){
          Dictionary<Vector3Int,(double density,MaterialId materialId)>fromFileVoxels=(Dictionary<Vector3Int,(double density,MaterialId materialId)>)MessagePackSerializer.Deserialize(typeof(Dictionary<Vector3Int,(double density,MaterialId materialId)>),file);
          foreach(var voxelData in fromFileVoxels){
           if(!saving.Value.ContainsKey(voxelData.Key)){
            saving.Value.Add(voxelData.Key,voxelData.Value);
           }
          }
         }
        }
        using(var file=new FileStream(editsFile,FileMode.OpenOrCreate,FileAccess.ReadWrite,FileShare.None)){
         file.SetLength(0);
         file.Flush(true);
         MessagePackSerializer.Serialize(typeof(Dictionary<Vector3Int,(double density,MaterialId materialId)>),file,saving.Value);
        }
       }

      }catch{
       throw;
      }finally{
       foreach(var syn in current.syn_bg)Monitor.Exit(syn);
      }

      Debug.Log("EditingMultithreaded:Execute:end");
     }
    }

    internal readonly VoxelTerrainChunk.MarchingCubesMultithreaded[]marchingCubesBGThreads=new VoxelTerrainChunk.MarchingCubesMultithreaded[Environment.ProcessorCount];

    internal readonly VoxelTerrainChunk.TreesMultithreaded[]addTreesBGThreads=new VoxelTerrainChunk.TreesMultithreaded[Environment.ProcessorCount];

    [SerializeField]internal VoxelTerrainChunk Prefab;

    void Awake(){if(Singleton==null){Singleton=this;}else{DestroyImmediate(this);return;}

     Shader. EnableKeyword("WATER_VERTEX_DISPLACEMENT_ON" );
     Shader.DisableKeyword("WATER_VERTEX_DISPLACEMENT_OFF");
     Shader. EnableKeyword("WATER_EDGEBLEND_ON"           );
     Shader.DisableKeyword("WATER_EDGEBLEND_OFF"          );

     Core.Singleton.OnDestroyingCoreEvent+=OnDestroyingCoreEvent;

     VoxelTerrainChunk.marchingCubesCount=0;

     VoxelTerrainChunk.bakeJobsCount=0;

     VoxelTerrainChunk.addTreesBGCount=0;
            
     VoxelTerrainChunk.MarchingCubesMultithreaded.biome.Seed=0;

     VoxelTerrainChunk.MarchingCubesMultithreaded.AtlasHelper.GetAtlasData(Prefab.GetComponent<MeshRenderer>().sharedMaterial);

     VoxelTerrainChunk.MarchingCubesMultithreaded.Stop=false;
     for(int i=0;i<marchingCubesBGThreads.Length;++i){
      marchingCubesBGThreads[i]=new VoxelTerrainChunk.MarchingCubesMultithreaded();
     }

     VoxelTerrainChunk.TreesMultithreaded.Stop=false;
     for(int i=0;i<addTreesBGThreads.Length;++i){
      addTreesBGThreads[i]=new VoxelTerrainChunk.TreesMultithreaded();
     }

     EditingMultithreaded.Stop=false;
     editingBGThread=new EditingMultithreaded();

       playerDisconnectedCoroutine=StartCoroutine(PlayerDisconnectedCoroutine());
     playerMovementFollowUpCoroutine=StartCoroutine(PlayerMovementFollowUpCoroutine());
    }

    void OnDestroyingCoreEvent(object sender,EventArgs e){
     Debug.Log("OnDestroyingCoreEvent");
            
       StopCoroutine(playerDisconnectedCoroutine);
     StopCoroutine(playerMovementFollowUpCoroutine);

     //  To do: save pending edits
     if(EditingMultithreaded.Clear()==0){
      Debug.Log("voxel terrain editor disposal was successful");
     }else{
      Debug.LogError("voxel terrain editor disposal failed");
     }
     EditingMultithreaded.Stop=true;
     editingBGThread.Wait();

     if(all!=null){
      for(int i=0;i<all.Length;++i){
       //Debug.Log("OnDestroyingCoreEvent:VoxelTerrain:delete chunk");
       all[i].OnExit();
      }
     }
 
     if(VoxelTerrainChunk.MarchingCubesMultithreaded.Clear()==0){
      Debug.Log("chunks' Marching Cubes disposal was successful");
     }else{
      Debug.LogError("chunks' Marching Cubes disposal failed");
     }
     VoxelTerrainChunk.MarchingCubesMultithreaded.Stop=true;
     for(int i=0;i<marchingCubesBGThreads.Length;++i){
      marchingCubesBGThreads[i].Wait();
     }
 
     if(VoxelTerrainChunk.TreesMultithreaded.Clear()==0){
      Debug.Log("chunks' Trees disposal was successful");
     }else{
      Debug.LogError("chunks' Trees disposal failed");
     }
     VoxelTerrainChunk.TreesMultithreaded.Stop=true;
     for(int i=0;i<addTreesBGThreads.Length;++i){
      addTreesBGThreads[i].Wait();
     }

     water.Clear();
    }

    [SerializeField]bool    DEBUG_ADD_WATER_SOURCE;
    [SerializeField]Vector3 DEBUG_ADD_WATER_SOURCE_AT=new Vector3(0,40,0);

    [SerializeField]bool    DEBUG_REMOVE_WATER;
    [SerializeField]Vector3 DEBUG_REMOVE_WATER_AT=new Vector3(0,40,0);

    [SerializeField]bool                                DEBUG_EDIT=false;
    [SerializeField]Vector3                             DEBUG_EDIT_AT=Vector3.zero;
    [SerializeField]EditingBackgroundContainer.EditMode DEBUG_EDIT_MODE=EditingBackgroundContainer.EditMode.Cube;
    [SerializeField]Vector3Int                          DEBUG_EDIT_SIZE=new Vector3Int(3,3,3);
    [SerializeField]double                              DEBUG_EDIT_DENSITY=100.0;
    [SerializeField]MaterialId                          DEBUG_EDIT_MATERIAL_ID=MaterialId.Dirt;
    [SerializeField]int                                 DEBUG_EDIT_SMOOTHNESS=5;

    [SerializeField]bool DEBUG_BAKE_NAV_MESH=false;

    bool initialization=true;

    int maxConnections=1;

    internal bool navMeshDirty;
     internal AsyncOperation[]navMeshAsyncOperations;
      internal float navMeshBuildInterval=.5f;
       internal float navMeshBuildTimer=0f;
        
    [SerializeField]
    int cnksManualUpdateLimit=1000;
     int cnksManualUpdateIndex=0;
      int cnksManualUpdateCount=0;
       [SerializeField]
       int cnksManualUpdateSleepingLimit=3000;
        int cnksManualUpdateSleeping=0;
    System.Diagnostics.Stopwatch cnksManualUpdateStopwatch=new System.Diagnostics.Stopwatch();

    [SerializeField]
    double totalMillisecondsLimit=.15d;
        
    [SerializeField]internal int bakeJobsLimit=1000;

    [SerializeField]internal int marchingCubesLimit=1000;

    [SerializeField]internal int addTreesBGLimit=1000;

    bool editRequired;
    bool editRequested;
    bool playerMovementDetected;
    void Update(){
     if(navMeshBuildTimer>0f){
      navMeshBuildTimer-=Time.deltaTime;
     }

     if(all==null){
      int poolSizeRequired=maxConnections*(expropriationDistance.x*2+1)*(expropriationDistance.y*2+1);
      Debug.Log("poolSizeRequired:"+poolSizeRequired);
      all=new VoxelTerrainChunk[poolSizeRequired];
      for(int i=0;i<all.Length;++i){
       VoxelTerrainChunk cnk;
       all[i]=cnk=Instantiate(Prefab);
        syn.Add(cnk,cnk.syn);
       all[i].OnActivated();
       cnk.expropriated=pool.AddLast(cnk);
      }

      editingBG.syn_bg=syn.Values.ToArray();

      navMeshAsyncOperations=new AsyncOperation[maxConnections];
     }
     
     foreach(var player in playersMovement.Keys){var movement=playersMovement[player];
      if(!movement.instantiationRequested){
       //Debug.Log("player didn't request instantiation");
       continue;
      }
      playersMovementRegistered.Add(player);
      if(!playerMoved.ContainsKey(player)){
       playerMoved.Add(player,(movement.cCoord,movement.cCoord_Pre));
      }else{
       playerMoved[player]=(movement.cCoord,playerMoved[player].cCoord_Pre);
      }
      playerMovementDetected=true;
     }
     foreach(var player in playersMovementRegistered){var movement=playersMovement[player];
      Debug.Log("reset player movement flag to false");
      playersMovement[player]=(movement.cCoord,movement.cCoord_Pre,false);
     }
     playersMovementRegistered.Clear();

     if(playerDisconnectedCoroutineIdleWaiting){
      if(playersDisconnected.Count>0){
       playerDisconnectedCoroutineIdleWaiting=false;
       playerDisconnectedCoroutineBeginFlag=true;

      }else{
       if(playerMovementCoroutineIdleWaiting){
        if(playerMovementDetected){
         playerMovementDetected=false;
         playerMovementCoroutineIdleWaiting=false;
         playerMovementCoroutineBeginFlag=true;
        }

       }

      }

     }

     if(DEBUG_ADD_WATER_SOURCE){
      DEBUG_ADD_WATER_SOURCE=false;
      Vector2Int cCoord2=vecPosTocCoord(DEBUG_ADD_WATER_SOURCE_AT);
      int cnkIdx2=GetcnkIdx(cCoord2.x,cCoord2.y);
      if(water.TryGetValue(cnkIdx2,out VoxelWaterChunk wcnk)){
       Vector3Int vCoord2=vecPosTovCoord(DEBUG_ADD_WATER_SOURCE_AT);
       int vxlIdx2=GetvxlIdx(vCoord2.x,vCoord2.y,vCoord2.z);
       wcnk.voxels[vxlIdx2]=(100d,false,0d);
       if(active.TryGetValue(cnkIdx2,out VoxelTerrainChunk cnk)){
        cnk.OnWaterEdited();
       }
       Debug.Log("DEBUG_ADD_WATER_SOURCE:added water source at chunk:"+cCoord2);
      }
     }
 
     if(DEBUG_EDIT){
      DEBUG_EDIT=false;
      Debug.Log("DEBUG_EDIT:");
      Edit(
       DEBUG_EDIT_AT,
       DEBUG_EDIT_MODE,
       DEBUG_EDIT_SIZE,
       DEBUG_EDIT_DENSITY,
       DEBUG_EDIT_MATERIAL_ID,
       DEBUG_EDIT_SMOOTHNESS
      );
     }
     if(editingRequests.Count>0){
      editRequired=true;
     }
     if(editRequested&&OnEdited()){
      editRequested=false;
      Debug.Log("Update:editRequested:edited voxel terrain");
     }else if(editRequired&&OnEdit()){
      editRequired=false;
      Debug.Log("Update:editRequired:editing requests enqueued to bg task");
      OnEditing();
     }
            
     cnksManualUpdateStopwatch.Restart();
     int callsLimit=cnksManualUpdateIndex-1+cnksManualUpdateLimit;
     cnksManualUpdateSleeping=0;
     cnksManualUpdateCount=0;
     int c=0;
     foreach(var a in active){var cnk=a.Value;
      if(cnksManualUpdateIndex>=active.Count){
       cnksManualUpdateIndex=0;
       callsLimit=cnksManualUpdateLimit;
      }
      cnksManualUpdateCount++;
      if(cnksManualUpdateCount<cnksManualUpdateIndex){
       continue;
      }
      //Debug.Log("cnksManualUpdateCount:"+cnksManualUpdateCount);
      c++;
      if(!cnk.ManualUpdate()){
       cnksManualUpdateSleeping++;
      }
      cnksManualUpdateIndex++;
      if(cnksManualUpdateCount>=callsLimit+cnksManualUpdateSleeping||cnksManualUpdateSleeping>=cnksManualUpdateSleepingLimit){
       break;
      }
      if(cnksManualUpdateStopwatch.Elapsed.TotalMilliseconds>=totalMillisecondsLimit){
       break;
      }
     }
     //Debug.Log("cnk manual updates called:"+c);

     if(DEBUG_BAKE_NAV_MESH){
      DEBUG_BAKE_NAV_MESH=false;
      navMeshDirty=true;
     }
     if(navMeshDirty){
      //Debug.Log("navMeshDirty");
      if(navMeshBuildTimer<=0f){
       if(navMeshAsyncOperations.All(o=>o==null||o.isDone)){
        navMeshBuildTimer=navMeshBuildInterval;
        navMeshDirty=false;
        Debug.Log("navMeshDirty:ready to start navMeshAsyncOperations");
        sources.Clear();
        markups.Clear();
        foreach(var movement in playersMovement.Values){
         Vector2Int pCoord=movement.cCoord;
         for(Vector2Int aCoord=new Vector2Int(),cCoord1=new Vector2Int();aCoord.y<=physicsDistance.y;aCoord.y++){for(cCoord1.y=-aCoord.y+pCoord.y;cCoord1.y<=aCoord.y+pCoord.y;cCoord1.y+=aCoord.y*2){
         for(           aCoord.x=0                                      ;aCoord.x<=physicsDistance.x;aCoord.x++){for(cCoord1.x=-aCoord.x+pCoord.x;cCoord1.x<=aCoord.x+pCoord.x;cCoord1.x+=aCoord.x*2){

          if(Math.Abs(cCoord1.x)>=MaxcCoordx||
             Math.Abs(cCoord1.y)>=MaxcCoordy){
           goto _skip;
          }         

          int cnkIdx1=GetcnkIdx(cCoord1.x,cCoord1.y);
          if(active.TryGetValue(cnkIdx1,out VoxelTerrainChunk cnk)){
           sources.Add(navMeshSources[cnk.gameObject]);
           markups.Add(navMeshMarkups[cnk.gameObject]);
          }

          _skip:{}
          if(aCoord.x==0){break;}
         }}
          if(aCoord.y==0){break;}
         }}
        }
        NavMeshBuilder.CollectSources(null,PhysHelper.NavMesh,NavMeshCollectGeometry.PhysicsColliders,0,markups,sources);
        int i=0;
        foreach(var player in playersMovement.Keys){
         navMeshAsyncOperations[i++]=player.BuildNavMesh(sources);
        }
       }else{
        //Debug.Log("navMeshDirty:busy doing navMeshAsyncOperations");
       }
      }
     }
    }

    readonly Dictionary<NetcodePlayerPrefab,(Vector2Int cCoord,Vector2Int cCoord_Pre)>playerMoved=new Dictionary<NetcodePlayerPrefab,(Vector2Int,Vector2Int)>();

    [SerializeField]double instantiationMaxExecutionTime=10.0;
        
    internal bool playerMovementCoroutineIdleWaiting=true;

    internal bool playerMovementCoroutineBeginFlag;
     WaitUntil waitForPlayerMovementFollowUpBeginFlag;

    Coroutine playerMovementFollowUpCoroutine;
    IEnumerator PlayerMovementFollowUpCoroutine(){
     waitForPlayerMovementFollowUpBeginFlag=new WaitUntil(()=>playerMovementCoroutineBeginFlag);

     System.Diagnostics.Stopwatch stopwatch=new System.Diagnostics.Stopwatch();
     bool LimitExecutionTime(){
      if(stopwatch.Elapsed.TotalMilliseconds>instantiationMaxExecutionTime){
       stopwatch.Restart();
       return true;
      }
      return false;
     }

     List<(Vector2Int cCoord,Vector2Int cCoord_Pre)>movements=new List<(Vector2Int cCoord,Vector2Int cCoord_Pre)>();

     Loop:{
      yield return waitForPlayerMovementFollowUpBeginFlag;
       playerMovementCoroutineBeginFlag=false;

      Debug.Log("PlayerMovementCoroutine():begin flag was set true:");

      stopwatch.Restart();

      movements.Clear();
      movements.AddRange(playerMoved.Values);
      playerMoved.Clear();
      foreach(var movement in movements){
       //Debug.Log("player movement:"+movement);
       Vector2Int pCoord=movement.cCoord;
       Vector2Int pCoord_Pre=movement.cCoord_Pre;

       #region expropriation
       for(Vector2Int eCoord=new Vector2Int(),cCoord1=new Vector2Int();eCoord.y<=expropriationDistance.y;eCoord.y++){for(cCoord1.y=-eCoord.y+pCoord_Pre.y;cCoord1.y<=eCoord.y+pCoord_Pre.y;cCoord1.y+=eCoord.y*2){
       for(           eCoord.x=0                                      ;eCoord.x<=expropriationDistance.x;eCoord.x++){for(cCoord1.x=-eCoord.x+pCoord_Pre.x;cCoord1.x<=eCoord.x+pCoord_Pre.x;cCoord1.x+=eCoord.x*2){

        if(Math.Abs(cCoord1.x)>=MaxcCoordx||
           Math.Abs(cCoord1.y)>=MaxcCoordy){
         goto _skip;
        }

        //Debug.Log("expropriation at:"+cCoord1);

        if(playersMovement.All(
         p=>{
          return Mathf.Abs(cCoord1.x-p.Key.cCoord.x)>instantiationDistance.x||
                 Mathf.Abs(cCoord1.y-p.Key.cCoord.y)>instantiationDistance.y;
         })
        ){
         int cnkIdx1=GetcnkIdx(cCoord1.x,cCoord1.y);
         if(active.TryGetValue(cnkIdx1,out VoxelTerrainChunk cnk)){
          if(cnk.expropriated==null){
           cnk.expropriated=pool.AddLast(cnk);
          }
         }

        }

        if(LimitExecutionTime())yield return null;

        _skip:{}
        if(eCoord.x==0){break;}
       }}
        if(eCoord.y==0){break;}
       }}
       #endregion
   
       #region instantiation
       for(Vector2Int iCoord=new Vector2Int(),cCoord1=new Vector2Int();iCoord.y<=instantiationDistance.y;iCoord.y++){for(cCoord1.y=-iCoord.y+pCoord.y;cCoord1.y<=iCoord.y+pCoord.y;cCoord1.y+=iCoord.y*2){
       for(           iCoord.x=0                                      ;iCoord.x<=instantiationDistance.x;iCoord.x++){for(cCoord1.x=-iCoord.x+pCoord.x;cCoord1.x<=iCoord.x+pCoord.x;cCoord1.x+=iCoord.x*2){

        if(Math.Abs(cCoord1.x)>=MaxcCoordx||
           Math.Abs(cCoord1.y)>=MaxcCoordy){
         goto _skip;
        }

        //Debug.Log("instantiation at:"+cCoord1);
    
        int cnkIdx1=GetcnkIdx(cCoord1.x,cCoord1.y);
        if(!active.TryGetValue(cnkIdx1,out VoxelTerrainChunk cnk)){
         //Debug.Log("activate for:"+cnkIdx1);
         cnk=pool.First.Value;
         pool.RemoveFirst();
         cnk.expropriated=null;
         if(cnk.cnkIdx!=null&&active.ContainsKey(cnk.cnkIdx.Value)){
          active.Remove(cnk.cnkIdx.Value);

          water.TryRemove(cnk.cnkIdx.Value,out _);

         }

         water[cnkIdx1]=cnk.water;

         active.Add(cnkIdx1,cnk);
         cnk.cnkIdx=cnkIdx1;
         cnk.OncCoordChanged(cCoord1);

        }else{
         if(cnk.expropriated!=null){
          pool.Remove(cnk.expropriated);
          cnk.expropriated=null;
         }

        }

        if(LimitExecutionTime())yield return null;

        _skip:{}
        if(iCoord.x==0){break;}
       }}
        if(iCoord.y==0){break;}
       }}
       #endregion
       
       for(Vector2Int dCoord=new Vector2Int(),cCoord1=new Vector2Int();dCoord.y<=physicsDistance.y;dCoord.y++){for(cCoord1.y=-dCoord.y+pCoord_Pre.y;cCoord1.y<=dCoord.y+pCoord_Pre.y;cCoord1.y+=dCoord.y*2){
       for(           dCoord.x=0                                      ;dCoord.x<=physicsDistance.x;dCoord.x++){for(cCoord1.x=-dCoord.x+pCoord_Pre.x;cCoord1.x<=dCoord.x+pCoord_Pre.x;cCoord1.x+=dCoord.x*2){

        if(Math.Abs(cCoord1.x)>=MaxcCoordx||
           Math.Abs(cCoord1.y)>=MaxcCoordy){
         goto _skip;
        }

        if(playersMovement.All(
         p=>{
          return Mathf.Abs(cCoord1.x-p.Key.cCoord.x)>physicsDistance.x||
                 Mathf.Abs(cCoord1.y-p.Key.cCoord.y)>physicsDistance.y;
         })
        ){
         int cnkIdx1=GetcnkIdx(cCoord1.x,cCoord1.y);
         if(active.TryGetValue(cnkIdx1,out VoxelTerrainChunk cnk)){
          cnk.OnKeepMeshColliderAssigned(false);
         }
        }

        if(LimitExecutionTime())yield return null;

        _skip:{}
        if(dCoord.x==0){break;}
       }}
        if(dCoord.y==0){break;}
       }}

       for(Vector2Int aCoord=new Vector2Int(),cCoord1=new Vector2Int();aCoord.y<=physicsDistance.y;aCoord.y++){for(cCoord1.y=-aCoord.y+pCoord.y;cCoord1.y<=aCoord.y+pCoord.y;cCoord1.y+=aCoord.y*2){
       for(           aCoord.x=0                                      ;aCoord.x<=physicsDistance.x;aCoord.x++){for(cCoord1.x=-aCoord.x+pCoord.x;cCoord1.x<=aCoord.x+pCoord.x;cCoord1.x+=aCoord.x*2){

        if(Math.Abs(cCoord1.x)>=MaxcCoordx||
           Math.Abs(cCoord1.y)>=MaxcCoordy){
         goto _skip;
        }

        int cnkIdx1=GetcnkIdx(cCoord1.x,cCoord1.y);
        if(active.TryGetValue(cnkIdx1,out VoxelTerrainChunk cnk)){
         cnk.OnKeepMeshColliderAssigned(true);
        }

        if(LimitExecutionTime())yield return null;

        _skip:{}
        if(aCoord.x==0){break;}
       }}
        if(aCoord.y==0){break;}
       }}

       navMeshDirty=true;
      }
      playerMovementCoroutineIdleWaiting=true;
     }
     goto Loop;
    }
        
    internal bool playerDisconnectedCoroutineIdleWaiting=true;

    internal bool playerDisconnectedCoroutineBeginFlag;
     WaitUntil waitForPlayerDisconnectedBeginFlag;

    Coroutine playerDisconnectedCoroutine;
    IEnumerator PlayerDisconnectedCoroutine(){
     waitForPlayerDisconnectedBeginFlag=new WaitUntil(()=>playerDisconnectedCoroutineBeginFlag);

     Loop:{
      yield return waitForPlayerDisconnectedBeginFlag;
       playerDisconnectedCoroutineBeginFlag=false;

      Debug.Log("PlayerDisconnectedCoroutine():begin flag was set true:");

      var disconnected=playersDisconnected.ToArray();
      playersDisconnected.Clear();
      foreach(Vector2Int pCoord in disconnected){
       for(Vector2Int iCoord=new Vector2Int(),cCoord1=new Vector2Int();iCoord.y<=instantiationDistance.y;iCoord.y++){for(cCoord1.y=-iCoord.y+pCoord.y;cCoord1.y<=iCoord.y+pCoord.y;cCoord1.y+=iCoord.y*2){
       for(           iCoord.x=0                                      ;iCoord.x<=instantiationDistance.x;iCoord.x++){for(cCoord1.x=-iCoord.x+pCoord.x;cCoord1.x<=iCoord.x+pCoord.x;cCoord1.x+=iCoord.x*2){
                              
        if(Math.Abs(cCoord1.x)>=MaxcCoordx||
           Math.Abs(cCoord1.y)>=MaxcCoordy){
         goto _skip;
        }
  
        if(playersMovement.All(
         p=>{
          return Mathf.Abs(cCoord1.x-p.Key.cCoord.x)>instantiationDistance.x||
                 Mathf.Abs(cCoord1.y-p.Key.cCoord.y)>instantiationDistance.y;
         })
        ){
         int cnkIdx1=GetcnkIdx(cCoord1.x,cCoord1.y);
         if(active.TryGetValue(cnkIdx1,out VoxelTerrainChunk cnk)){
          if(cnk.expropriated==null){
           cnk.expropriated=pool.AddLast(cnk);
          }
         }
        }
        if(playersMovement.All(
         p=>{
          return Mathf.Abs(cCoord1.x-p.Key.cCoord.x)>physicsDistance.x||
                 Mathf.Abs(cCoord1.y-p.Key.cCoord.y)>physicsDistance.y;
         })
        ){
         int cnkIdx1=GetcnkIdx(cCoord1.x,cCoord1.y);
         if(active.TryGetValue(cnkIdx1,out VoxelTerrainChunk cnk)){
          cnk.OnKeepMeshColliderAssigned(false);
         }
        }
  
        _skip:{}
        if(iCoord.x==0){break;}
       }}
        if(iCoord.y==0){break;}
       }}
      }

      playerDisconnectedCoroutineIdleWaiting=true;
     }
     goto Loop;
    }

    List<Vector2Int>playersDisconnected=new List<Vector2Int>();
    internal void OnPlayerDisconnected(NetcodePlayerPrefab player){
     Debug.Log("OnPlayerDisconnected:");

     playersMovement.Remove(player);

     playersDisconnected.Add(player.cCoord);
    }

    bool OnEdit(){
     if(editingBG.IsCompleted(editingBGThread.IsRunning)){
      editingBG.editingRequests_bg=new Queue<EditRequest>(editingRequests);
      editingRequests.Clear();
      EditingMultithreaded.Schedule(editingBG);
      return true;
     }
     return false;
    }
    void OnEditing(){
     editRequested=true;
     Debug.Log("OnEditing:editing started");
    }
    bool OnEdited(){
     if(editingBG.IsCompleted(editingBGThread.IsRunning)){
      foreach(int cnkIdx in editingBG.dirty_bg){
       Debug.Log("OnEdited():"+cnkIdx);
       if(active.TryGetValue(cnkIdx,out VoxelTerrainChunk cnk)){
        cnk.OnEdited();
       }
      }
      editingBG.dirty_bg=null;
      return true;
     }
     return false;
    }

    readonly Queue<EditRequest>editingRequests=new Queue<EditRequest>();
    internal class EditRequest{
     internal Vector3                             center;
     internal EditingBackgroundContainer.EditMode mode;
     internal Vector3Int                          size;
     internal double                              density;
     internal MaterialId                          material;
     internal int                                 smoothness;
    }

    void Edit(Vector3 at,EditingBackgroundContainer.EditMode mode,Vector3Int size,double density,MaterialId material,int smoothness){
     editingRequests.Enqueue(
      new EditRequest{
       center=at,
       mode=mode,
       size=size,
       density=density,
       material=material,
       smoothness=smoothness,
      }
     );
    }

 }

 internal enum MaterialId:ushort{
  Air=0,//  Default value
  Bedrock=1,//  Indestrutível
  Dirt=2,
  Rock=3,
  Sand=4,
 }

}