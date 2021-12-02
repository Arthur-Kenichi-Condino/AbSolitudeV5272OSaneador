using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading;
using UnityEngine;
using static AKCondinoO.Voxels.VoxelTerrainChunk;

namespace AKCondinoO.Voxels{internal class VoxelTerrain:MonoBehaviour{internal static VoxelTerrain Singleton;

internal const double IsoLevel=-50.0d;

internal const int MaxcCoordx=6250;
internal const int MaxcCoordy=6250;
internal static Vector2Int instantiationDistance{get;}=new Vector2Int(5,5);
internal static Vector2Int expropriationDistance{get;}=new Vector2Int(5,5);

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

 internal static int GetcnkIdx(int cx,int cy){return cy+cx*(MaxcCoordy+1);}

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
        
internal readonly Dictionary<NetcodePlayerPrefab,(Vector2Int cCoord,Vector2Int cCoord_Pre)>playersMovement=new Dictionary<NetcodePlayerPrefab,(Vector2Int,Vector2Int)>();

internal VoxelTerrainChunk[]all;
 readonly Dictionary<VoxelTerrainChunk,object>syn=new Dictionary<VoxelTerrainChunk,object>();

internal readonly Dictionary<int,VoxelTerrainChunk>active=new Dictionary<int,VoxelTerrainChunk>();

internal readonly LinkedList<VoxelTerrainChunk>pool=new LinkedList<VoxelTerrainChunk>();
        
internal readonly EditingBackgroundContainer editingBG=new EditingBackgroundContainer();
internal class EditingBackgroundContainer:BackgroundContainer{
 internal enum EditMode{Cube,}
 internal object[]syn_bg;
 internal Queue<EditRequest>editingRequests_bg;
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

  foreach(var syn in current.syn_bg)Monitor.Enter(syn);
  try{

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
        }
        VoxelTerrainChunk.MarchingCubesMultithreaded.Voxel currentVoxel;
        if(fromFilesData.ContainsKey(cnkIdx3)&&fromFilesData[cnkIdx3].ContainsKey(vCoord3)){
        }else{
         currentVoxel=new VoxelTerrainChunk.MarchingCubesMultithreaded.Voxel();
         Vector3Int noiseInput=vCoord3;noiseInput.x+=cnkRgn3.x;
                                       noiseInput.z+=cnkRgn3.y;
        }
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

 Core.Singleton.OnDestroyingCoreEvent+=OnDestroyingCoreEvent;
            
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
}

void OnDestroyingCoreEvent(object sender,EventArgs e){
 Debug.Log("OnDestroyingCoreEvent");

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
   Debug.Log("OnDestroyingCoreEvent:VoxelTerrain:delete chunk");
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
}

[SerializeField]bool                                DEBUG_EDIT=false;
[SerializeField]Vector3                             DEBUG_EDIT_AT=Vector3.zero;
[SerializeField]EditingBackgroundContainer.EditMode DEBUG_EDIT_MODE=EditingBackgroundContainer.EditMode.Cube;
[SerializeField]Vector3Int                          DEBUG_EDIT_SIZE=new Vector3Int(3,3,3);
[SerializeField]double                              DEBUG_EDIT_DENSITY=100.0;
[SerializeField]MaterialId                          DEBUG_EDIT_MATERIAL_ID=MaterialId.Dirt;
[SerializeField]int                                 DEBUG_EDIT_SMOOTHNESS=5;

bool initialization=true;

int maxConnections=1;

bool editRequired;
bool editRequested;
void Update(){

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

 if(playersMovement.Count>0){
  foreach(var movement in playersMovement){var moved=movement.Value;
   Debug.Log("player movement:"+movement);
   Vector2Int pCoord=moved.cCoord;
   Vector2Int pCoord_Pre=moved.cCoord_Pre;

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
     }
     active.Add(cnkIdx1,cnk);
     cnk.cnkIdx=cnkIdx1;
     cnk.OncCoordChanged(cCoord1);

    }else{
     if(cnk.expropriated!=null){
      pool.Remove(cnk.expropriated);
      cnk.expropriated=null;
     }

    }

    _skip:{}
    if(iCoord.x==0){break;}
   }}
    if(iCoord.y==0){break;}
   }}
   #endregion

  }
  playersMovement.Clear();
 }

 foreach(var a in active){var cnk=a.Value;
  cnk.ManualUpdate();
 }

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