using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using static AKCondinoO.Voxels.VoxelTerrainChunk;

namespace AKCondinoO.Voxels{internal class VoxelTerrain:MonoBehaviour{internal static VoxelTerrain Singleton;
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

internal readonly Dictionary<int,VoxelTerrainChunk>active=new Dictionary<int,VoxelTerrainChunk>();

void Awake(){if(Singleton==null){Singleton=this;}else{DestroyImmediate(this);return;}
}

void Update(){
 if(playersMovement.Count>0){
  foreach(var movement in playersMovement){var moved=movement.Value;
   Debug.Log("player movement:"+movement);
   Vector2Int pCoord=moved.cCoord;
   Vector2Int pCoord_Pre=moved.cCoord_Pre;

   for(Vector2Int eCoord=new Vector2Int(),cCoord1=new Vector2Int();eCoord.y<=expropriationDistance.y;eCoord.y++){for(cCoord1.y=-eCoord.y+pCoord_Pre.y;cCoord1.y<=eCoord.y+pCoord_Pre.y;cCoord1.y+=eCoord.y*2){
   for(           eCoord.x=0                                      ;eCoord.x<=expropriationDistance.x;eCoord.x++){for(cCoord1.x=-eCoord.x+pCoord_Pre.x;cCoord1.x<=eCoord.x+pCoord_Pre.x;cCoord1.x+=eCoord.x*2){

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
    }

    _skip:{}
    if(eCoord.x==0){break;}
   }}
    if(eCoord.y==0){break;}
   }}

  }
  playersMovement.Clear();
 }
}

}}