using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Unity.Collections;
using UnityEngine;
using UnityEngine.Rendering;
using static AKCondinoO.Voxels.VoxelTerrain;
using static AKCondinoO.Voxels.VoxelTerrainChunk.MarchingCubesBackgroundContainer;

namespace AKCondinoO.Voxels{internal class VoxelTerrainChunk:MonoBehaviour{
internal const ushort Height=(256);
internal const ushort Width=(16);
internal const ushort Depth=(16);
internal const ushort FlattenOffset=(Width*Depth);
internal const int VoxelsPerChunk=(FlattenOffset*Height);
        
internal LinkedListNode<VoxelTerrainChunk>expropriated;

#region Rendering

static readonly VertexAttributeDescriptor[]layout=new[]{
new VertexAttributeDescriptor(VertexAttribute.Position ,VertexAttributeFormat.Float32,3),
new VertexAttributeDescriptor(VertexAttribute.Normal   ,VertexAttributeFormat.Float32,3),
new VertexAttributeDescriptor(VertexAttribute.Color    ,VertexAttributeFormat.Float32,4),
new VertexAttributeDescriptor(VertexAttribute.TexCoord0,VertexAttributeFormat.Float32,2),
new VertexAttributeDescriptor(VertexAttribute.TexCoord1,VertexAttributeFormat.Float32,2),
new VertexAttributeDescriptor(VertexAttribute.TexCoord2,VertexAttributeFormat.Float32,2),
new VertexAttributeDescriptor(VertexAttribute.TexCoord3,VertexAttributeFormat.Float32,2),
};

MeshUpdateFlags meshFlags=MeshUpdateFlags.DontValidateIndices|MeshUpdateFlags.DontNotifyMeshUsers|MeshUpdateFlags.DontRecalculateBounds;
        
internal Mesh mesh;

#endregion

internal Bounds worldBounds;
        
internal new MeshRenderer renderer;
internal new MeshCollider collider;

internal readonly MarchingCubesBackgroundContainer marchingCubesBG=new MarchingCubesBackgroundContainer();
internal class MarchingCubesBackgroundContainer:BackgroundContainer{
 internal NativeList<Vertex>TempVer;
 [StructLayout(LayoutKind.Sequential)]internal struct Vertex{
  internal Vector3 pos;
  internal Vector3 normal;
  internal Color color;
  internal Vector2 texCoord0;
  internal Vector2 texCoord1;
  internal Vector2 texCoord2;
  internal Vector2 texCoord3;
  internal Vertex(Vector3 p,Vector3 n,Vector2 uv0){
   pos=p;
   normal=n;
   color=new Color(1f,0f,0f,0f);
   texCoord0=uv0;
   texCoord1=new Vector2(-1f,-1f);
   texCoord2=new Vector2(-1f,-1f);
   texCoord3=new Vector2(-1f,-1f);
  }
 }
 internal NativeList<UInt32>TempTri;

 internal Vector2Int cCoord_bg;
 internal Vector2Int cnkRgn_bg;
 internal        int cnkIdx_bg;
}
internal class MarchingCubesMultithreaded:BaseMultithreaded<MarchingCubesBackgroundContainer>{

 readonly Voxel[]voxels=new Voxel[VoxelsPerChunk];
 internal struct Voxel{
  internal Voxel(double d,Vector3 n,MaterialId m){
   Density=d;Normal=n;Material=m;IsCreated=true;
  }
  internal double Density;
  internal Vector3 Normal;
  internal MaterialId Material;
  internal bool IsCreated;

  internal static Voxel Air    {get;}=new Voxel(  0.0,Vector3.zero,MaterialId.Air    );
  internal static Voxel Bedrock{get;}=new Voxel(101.0,Vector3.zero,MaterialId.Bedrock);
 }

 readonly Voxel[][][]voxelsCache1=new Voxel[3][][]{new Voxel[1][]{new Voxel[4],},new Voxel[Depth][],new Voxel[FlattenOffset][],};

 readonly Voxel[]polygonCell=new Voxel[8];

 readonly double[][][]noiseForHeightCache=new double[biome.heightsCacheLength][][];

 readonly MaterialId[][][]materialIdPerHeightNoiseCache=new MaterialId[biome.heightsCacheLength][][];

 internal MarchingCubesMultithreaded(){
  for(int i=0;i<voxelsCache1[2].Length;++i){
   voxelsCache1[2][i]=new Voxel[4];
   if(i<voxelsCache1[1].Length){
    voxelsCache1[1][i]=new Voxel[4];
   }
  }
 }

 protected override void Cleanup(){
  Array.Clear(voxels,0,voxels.Length);

  for(int i=0;i<voxelsCache1[0].Length;++i){Array.Clear(voxelsCache1[0][i],0,voxelsCache1[0][i].Length);}
  for(int i=0;i<voxelsCache1[1].Length;++i){Array.Clear(voxelsCache1[1][i],0,voxelsCache1[1][i].Length);}
  for(int i=0;i<voxelsCache1[2].Length;++i){Array.Clear(voxelsCache1[2][i],0,voxelsCache1[2][i].Length);}
 }
 protected override void Execute(){
  Debug.Log("MarchingCubesMultithreaded:Execute:"+current.cCoord_bg);
  Vector3Int vCoord1;
  for(vCoord1=new Vector3Int();vCoord1.y<Height;vCoord1.y++){
  for(vCoord1.x=0             ;vCoord1.x<Width ;vCoord1.x++){
  for(vCoord1.z=0             ;vCoord1.z<Depth ;vCoord1.z++){

   int corner=0;Vector3Int vCoord2=vCoord1;                        if(vCoord1.z>0)polygonCell[corner]=voxelsCache1[0][0][0];else if(vCoord1.x>0)polygonCell[corner]=voxelsCache1[1][vCoord1.z][0];else if(vCoord1.y>0)polygonCell[corner]=voxelsCache1[2][vCoord1.z+vCoord1.x*Depth][0];else SetpolygonCellVoxel();
   corner++;vCoord2=vCoord1;vCoord2.x+=1;                          if(vCoord1.z>0)polygonCell[corner]=voxelsCache1[0][0][1];                                                                      else if(vCoord1.y>0)polygonCell[corner]=voxelsCache1[2][vCoord1.z+vCoord1.x*Depth][1];else SetpolygonCellVoxel();
   corner++;vCoord2=vCoord1;vCoord2.x+=1;vCoord2.y+=1;             if(vCoord1.z>0)polygonCell[corner]=voxelsCache1[0][0][2];                                                                                                                                                            else SetpolygonCellVoxel();
   corner++;vCoord2=vCoord1;             vCoord2.y+=1;             if(vCoord1.z>0)polygonCell[corner]=voxelsCache1[0][0][3];else if(vCoord1.x>0)polygonCell[corner]=voxelsCache1[1][vCoord1.z][1];                                                                                      else SetpolygonCellVoxel();
   corner++;vCoord2=vCoord1;                          vCoord2.z+=1;                                                              if(vCoord1.x>0)polygonCell[corner]=voxelsCache1[1][vCoord1.z][2];else if(vCoord1.y>0)polygonCell[corner]=voxelsCache1[2][vCoord1.z+vCoord1.x*Depth][2];else SetpolygonCellVoxel();
   corner++;vCoord2=vCoord1;vCoord2.x+=1;             vCoord2.z+=1;                                                                                                                                    if(vCoord1.y>0)polygonCell[corner]=voxelsCache1[2][vCoord1.z+vCoord1.x*Depth][3];else SetpolygonCellVoxel();
   corner++;vCoord2=vCoord1;vCoord2.x+=1;vCoord2.y+=1;vCoord2.z+=1;                                                                                                                                                                                                                          SetpolygonCellVoxel();
   corner++;vCoord2=vCoord1;             vCoord2.y+=1;vCoord2.z+=1;                                                              if(vCoord1.x>0)polygonCell[corner]=voxelsCache1[1][vCoord1.z][3];                                                                                      else SetpolygonCellVoxel();
   voxelsCache1[0][0][0]=polygonCell[4];
   voxelsCache1[0][0][1]=polygonCell[5];
   voxelsCache1[0][0][2]=polygonCell[6];
   voxelsCache1[0][0][3]=polygonCell[7];
   voxelsCache1[1][vCoord1.z][0]=polygonCell[1];
   voxelsCache1[1][vCoord1.z][1]=polygonCell[2];
   voxelsCache1[1][vCoord1.z][2]=polygonCell[5];
   voxelsCache1[1][vCoord1.z][3]=polygonCell[6];
   voxelsCache1[2][vCoord1.z+vCoord1.x*Depth][0]=polygonCell[3];
   voxelsCache1[2][vCoord1.z+vCoord1.x*Depth][1]=polygonCell[2];
   voxelsCache1[2][vCoord1.z+vCoord1.x*Depth][2]=polygonCell[7];
   voxelsCache1[2][vCoord1.z+vCoord1.x*Depth][3]=polygonCell[6];
   void SetpolygonCellVoxel(){
    if(vCoord2.y<=0){/*  :fora do mundo, baixo:  */
     polygonCell[corner]=Voxel.Bedrock;
    }else if(vCoord2.y>=Height){/*  :fora do mundo, cima:  */
     polygonCell[corner]=Voxel.Air;
    }else{

     Vector2Int cnkRgn2=current.cnkRgn_bg;
     Vector2Int cCoord2=current.cCoord_bg;
     if(vCoord2.x<0||vCoord2.x>=Width||
        vCoord2.z<0||vCoord2.z>=Depth
     ){
      ValidateCoord(ref cnkRgn2,ref vCoord2);
      cCoord2=cnkRgnTocCoord(cnkRgn2);
     }

     int vxlIdx2=GetvxlIdx(vCoord2.x,vCoord2.y,vCoord2.z);

     int oftIdx2=GetoftIdx(cCoord2-current.cCoord_bg);

     //  pegar valor do bioma:
     Vector3Int noiseInput=vCoord2;noiseInput.x+=cnkRgn2.x;
                                   noiseInput.z+=cnkRgn2.y;
     biome.Setvxl(noiseInput,noiseForHeightCache,materialIdPerHeightNoiseCache,oftIdx2,vCoord2.z+vCoord2.x*Depth,ref polygonCell[corner]);

    }
   }

  }}}
  
  int GetoftIdx(Vector2Int offset){//  ..for neighbors
   if(offset.x== 0&&offset.y== 0)return 0;
   if(offset.x==-1&&offset.y== 0)return 1;
   if(offset.x== 1&&offset.y== 0)return 2;
   if(offset.x== 0&&offset.y==-1)return 3;
   if(offset.x==-1&&offset.y==-1)return 4;
   if(offset.x== 1&&offset.y==-1)return 5;
   if(offset.x== 0&&offset.y== 1)return 6;
   if(offset.x==-1&&offset.y== 1)return 7;
   if(offset.x== 1&&offset.y== 1)return 8;
   return -1;
  }

 }
        
 internal static readonly BaseBiome biome=new BaseBiome();
 internal class BaseBiome{

  internal virtual int heightsCacheLength{get{return 1;}}

  internal void Setvxl(Vector3Int noiseInputRounded,double[][][]noiseForHeightCache,MaterialId[][][]materialIdPerHeightNoiseCache,int oftIdx,int noiseIndex,ref Voxel vxl){
   vxl=Voxel.Air;
  }

 }

}

void Awake(){
 mesh=new Mesh(){
  bounds=worldBounds=new Bounds(Vector3.zero,new Vector3(Width,Height,Depth)),
 };
}

internal void OnActivated(){
 Debug.Log("VoxelTerrainChunk:OnActivated");
 marchingCubesBG.TempVer=new NativeList<Vertex>(Allocator.Persistent);
 marchingCubesBG.TempTri=new NativeList<UInt32>(Allocator.Persistent);
}

internal void OnExit(){
 Debug.Log("VoxelTerrainChunk:OnExit");
 marchingCubesBG.IsCompleted(VoxelTerrain.Singleton.marchingCubesBGThreads[0].IsRunning,-1);
 if(marchingCubesBG.TempVer.IsCreated)marchingCubesBG.TempVer.Dispose();
 if(marchingCubesBG.TempTri.IsCreated)marchingCubesBG.TempTri.Dispose();
}
        
bool initialization=true;
        
Vector2Int cCoord;
Vector2Int cnkRgn;
internal int?cnkIdx=null;
        
internal void OncCoordChanged(Vector2Int cCoord1){
 if(initialization||cCoord1!=cCoord){
  cCoord=cCoord1;
  cnkRgn=cCoordTocnkRgn(cCoord);
  Debug.Log("VoxelTerrainChunk:OncCoordChanged:"+cCoord1);
  moveRequired=true;
 }
 initialization=false;
}

bool moveRequired;
internal void ManualUpdate(){
 if(moveRequired&&OnMoving()){
  moveRequired=false;
  Debug.Log("ManualUpdate:moveRequired:"+cnkRgn);
 }
}

bool OnMoving(){
 if(marchingCubesBG.IsCompleted(VoxelTerrain.Singleton.marchingCubesBGThreads[0].IsRunning)){
  worldBounds.center=transform.position=new Vector3(cnkRgn.x,0,cnkRgn.y);
  marchingCubesBG.cCoord_bg=cCoord;
  marchingCubesBG.cnkRgn_bg=cnkRgn;
  marchingCubesBG.cnkIdx_bg=cnkIdx.Value;
  MarchingCubesMultithreaded.Schedule(marchingCubesBG);
  return true;
 }
 return false;
}

#if UNITY_EDITOR
void OnDrawGizmos(){
 Core.DrawBounds(worldBounds,Color.white);
}
#endif

}}