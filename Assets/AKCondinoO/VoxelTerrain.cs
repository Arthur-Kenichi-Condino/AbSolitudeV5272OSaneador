using System;
using System.Collections.Generic;
using System.Linq;
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

internal readonly Dictionary<int,VoxelTerrainChunk>active=new Dictionary<int,VoxelTerrainChunk>();

internal readonly LinkedList<VoxelTerrainChunk>pool=new LinkedList<VoxelTerrainChunk>();

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
}

void OnDestroyingCoreEvent(object sender,EventArgs e){
 Debug.Log("OnDestroyingCoreEvent");

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

bool initialization=true;

int maxConnections=1;
void Update(){

 if(all==null){
  int poolSizeRequired=maxConnections*(expropriationDistance.x*2+1)*(expropriationDistance.y*2+1);
  Debug.Log("poolSizeRequired:"+poolSizeRequired);
  all=new VoxelTerrainChunk[poolSizeRequired];
  for(int i=0;i<all.Length;++i){
   VoxelTerrainChunk cnk;
   all[i]=cnk=Instantiate(Prefab);
   all[i].OnActivated();
   cnk.expropriated=pool.AddLast(cnk);
  }
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
     Debug.Log("activate for:"+cnkIdx1);
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

}

internal enum MaterialId:ushort{
 Air=0,//  Default value
 Bedrock=1,//  Indestrutível
 Dirt=2,
 Rock=3,
 Sand=4,
}

}