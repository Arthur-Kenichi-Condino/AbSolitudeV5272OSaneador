using AKCondinoO.Sims;
using AKCondinoO.Sims.Trees;
using LibNoise;
using LibNoise.Generator;
using LibNoise.Operator;
using MessagePack;
using paulbourke.MarchingCubes;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;
using UnityEngine.Rendering;
using static AKCondinoO.Voxels.VoxelTerrain;
using static AKCondinoO.Voxels.VoxelTerrainChunk.MarchingCubesBackgroundContainer;

namespace AKCondinoO.Voxels{internal class VoxelTerrainChunk:MonoBehaviour{
internal readonly object syn=new object();        

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

#region Marching Cubes
internal MarchingCubesBackgroundContainer marchingCubesBG;
internal class MarchingCubesBackgroundContainer:BackgroundContainer{
 internal readonly object syn_bg;
 internal MarchingCubesBackgroundContainer(object syn){
  syn_bg=syn;
 }

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

 readonly Voxel[][]voxelsCache2=new Voxel[3][]{new Voxel[1],new Voxel[Depth],new Voxel[FlattenOffset],};

 readonly Voxel[]tmpvxl=new Voxel[6];

 readonly Vector3[][][]verticesCache=new Vector3[3][][]{new Vector3[1][]{new Vector3[4],},new Vector3[Depth][],new Vector3[FlattenOffset][],};

 readonly Vector3[]vertices=new Vector3[12];
  readonly MaterialId[]materials=new MaterialId[12];
   readonly Vector3[]normals=new Vector3[12];

 readonly double[]density=new double[2];
  readonly Vector3[]vertex=new Vector3[2];
   readonly MaterialId[]material=new MaterialId[2];
    readonly float[]distance=new float[2];

 static readonly ReadOnlyCollection<Vector3>corners=new ReadOnlyCollection<Vector3>(new Vector3[8]{
  new Vector3(-.5f,-.5f,-.5f),
  new Vector3( .5f,-.5f,-.5f),
  new Vector3( .5f, .5f,-.5f),
  new Vector3(-.5f, .5f,-.5f),
  new Vector3(-.5f,-.5f, .5f),
  new Vector3( .5f,-.5f, .5f),
  new Vector3( .5f, .5f, .5f),
  new Vector3(-.5f, .5f, .5f),
 });

 readonly int[]idx=new int[3];
  readonly Vector3[]verPos=new Vector3[3];

 static Vector3 trianglePosAdj{get;}=new Vector3((Width/2.0f)-0.5f,(Height/2.0f)-0.5f,(Depth/2.0f)-0.5f);

 readonly Dictionary<int,Voxel>[]neighbors=new Dictionary<int,Voxel>[8];

 readonly Dictionary<Vector3,List<Vector2>>vertexUV=new Dictionary<Vector3,List<Vector2>>();

 readonly Dictionary<int,int>weights=new Dictionary<int,int>(4);

 static Vector2 emptyUV{get;}=new Vector2(-1,-1);

 internal MarchingCubesMultithreaded(){
  for(int i=0;i<voxelsCache1[2].Length;++i){
   voxelsCache1[2][i]=new Voxel[4];
   if(i<voxelsCache1[1].Length){
    voxelsCache1[1][i]=new Voxel[4];
   }
  }

  for(int i=0;i<biome.heightsCacheLength;++i){
   noiseForHeightCache[i]=new double[9][];

   materialIdPerHeightNoiseCache[i]=new MaterialId[9][];
  }

  for(int i=0;i<verticesCache[2].Length;++i){
   verticesCache[2][i]=new Vector3[4];
   if(i<verticesCache[1].Length){
    verticesCache[1][i]=new Vector3[4];
   }
  }

  for(int i=0;i<neighbors.Length;++i){
   neighbors[i]=new Dictionary<int,Voxel>();
  }
 }

 protected override void Cleanup(){
  Array.Clear(voxels,0,voxels.Length);

  for(int i=0;i<voxelsCache1[0].Length;++i){Array.Clear(voxelsCache1[0][i],0,voxelsCache1[0][i].Length);}
  for(int i=0;i<voxelsCache1[1].Length;++i){Array.Clear(voxelsCache1[1][i],0,voxelsCache1[1][i].Length);}
  for(int i=0;i<voxelsCache1[2].Length;++i){Array.Clear(voxelsCache1[2][i],0,voxelsCache1[2][i].Length);}
  
  for(int i=0;i<biome.heightsCacheLength;++i){
   for(int j=0;j<noiseForHeightCache[i].Length;++j){
    if(noiseForHeightCache[i][j]!=null)Array.Clear(noiseForHeightCache[i][j],0,noiseForHeightCache[i][j].Length);
   }
   
   for(int j=0;j<materialIdPerHeightNoiseCache[i].Length;++j){
    if(materialIdPerHeightNoiseCache[i][j]!=null)Array.Clear(materialIdPerHeightNoiseCache[i][j],0,materialIdPerHeightNoiseCache[i][j].Length);
   }
  }

  for(int i=0;i<voxelsCache2.Length;++i){
   if(voxelsCache2[i]!=null)Array.Clear(voxelsCache2[i],0,voxelsCache2[i].Length);
  }

  for(int i=0;i<verticesCache[0].Length;++i){Array.Clear(verticesCache[0][i],0,verticesCache[0][i].Length);}
  for(int i=0;i<verticesCache[1].Length;++i){Array.Clear(verticesCache[1][i],0,verticesCache[1][i].Length);}
  for(int i=0;i<verticesCache[2].Length;++i){Array.Clear(verticesCache[2][i],0,verticesCache[2][i].Length);}

  for(int i=0;i<neighbors.Length;++i){
   neighbors[i].Clear();
  }

  vertexUV.Clear();
 }
 protected override void Execute(){
  //Debug.Log("MarchingCubesMultithreaded:Execute:"+current.cCoord_bg);

  current.TempVer.Clear();
  current.TempTri.Clear();

  lock(current.syn_bg){
   string editsFile=string.Format("{0}{1}/{2}",Core.perChunkSavePath,current.cnkIdx_bg,"edits.MessagePackSerializer");
   if(File.Exists(editsFile)){
    Debug.Log("loading voxel terrain edits from file:"+editsFile);
    using(var file=new FileStream(editsFile,FileMode.Open,FileAccess.Read,FileShare.Read)){
     if(file.Length>0){
      Dictionary<Vector3Int,(double density,MaterialId materialId)>fromFileVoxels=(Dictionary<Vector3Int,(double density,MaterialId materialId)>)MessagePackSerializer.Deserialize(typeof(Dictionary<Vector3Int,(double density,MaterialId materialId)>),file);
      foreach(var voxelData in fromFileVoxels){
       voxels[GetvxlIdx(voxelData.Key.x,voxelData.Key.y,voxelData.Key.z)]=new Voxel(voxelData.Value.density,Vector3.zero,voxelData.Value.materialId);
      }
     }
    }
   }
  }

  UInt32 vertexCount=0;
                
  Vector2Int crdOffset=Vector2Int.zero;

  Vector2Int posOffset=Vector2Int.zero;

  Vector3Int vCoord1;
  for(vCoord1=new Vector3Int();vCoord1.y<Height;vCoord1.y++){
  for(vCoord1.x=0             ;vCoord1.x<Width ;vCoord1.x++){
  for(vCoord1.z=0             ;vCoord1.z<Depth ;vCoord1.z++){

   int corner=0;Vector3Int vCoord2=vCoord1;                                       if(vCoord1.z>0)polygonCell[corner]=voxelsCache1[0][0][0];else if(vCoord1.x>0)polygonCell[corner]=voxelsCache1[1][vCoord1.z][0];else if(vCoord1.y>0)polygonCell[corner]=voxelsCache1[2][vCoord1.z+vCoord1.x*Depth][0];else SetpolygonCellVoxel();
       corner++;           vCoord2=vCoord1;vCoord2.x+=1;                          if(vCoord1.z>0)polygonCell[corner]=voxelsCache1[0][0][1];                                                                      else if(vCoord1.y>0)polygonCell[corner]=voxelsCache1[2][vCoord1.z+vCoord1.x*Depth][1];else SetpolygonCellVoxel();
       corner++;           vCoord2=vCoord1;vCoord2.x+=1;vCoord2.y+=1;             if(vCoord1.z>0)polygonCell[corner]=voxelsCache1[0][0][2];                                                                                                                                                            else SetpolygonCellVoxel();
       corner++;           vCoord2=vCoord1;             vCoord2.y+=1;             if(vCoord1.z>0)polygonCell[corner]=voxelsCache1[0][0][3];else if(vCoord1.x>0)polygonCell[corner]=voxelsCache1[1][vCoord1.z][1];                                                                                      else SetpolygonCellVoxel();
       corner++;           vCoord2=vCoord1;                          vCoord2.z+=1;                                                              if(vCoord1.x>0)polygonCell[corner]=voxelsCache1[1][vCoord1.z][2];else if(vCoord1.y>0)polygonCell[corner]=voxelsCache1[2][vCoord1.z+vCoord1.x*Depth][2];else SetpolygonCellVoxel();
       corner++;           vCoord2=vCoord1;vCoord2.x+=1;             vCoord2.z+=1;                                                                                                                                    if(vCoord1.y>0)polygonCell[corner]=voxelsCache1[2][vCoord1.z+vCoord1.x*Depth][3];else SetpolygonCellVoxel();
       corner++;           vCoord2=vCoord1;vCoord2.x+=1;vCoord2.y+=1;vCoord2.z+=1;                                                                                                                                                                                                                          SetpolygonCellVoxel();
       corner++;           vCoord2=vCoord1;             vCoord2.y+=1;vCoord2.z+=1;                                                              if(vCoord1.x>0)polygonCell[corner]=voxelsCache1[1][vCoord1.z][3];                                                                                      else SetpolygonCellVoxel();
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
     /*  já construído:  */
     if(oftIdx2==0&&voxels[vxlIdx2].IsCreated){
      polygonCell[corner]=voxels[vxlIdx2];
     }else if(oftIdx2>0&&neighbors[oftIdx2-1].ContainsKey(vxlIdx2)){
      polygonCell[corner]=neighbors[oftIdx2-1][vxlIdx2];
     }else{

      //  pegar valor do bioma:
      Vector3Int noiseInput=vCoord2;noiseInput.x+=cnkRgn2.x;
                                    noiseInput.z+=cnkRgn2.y;
      biome.Setvxl(noiseInput,noiseForHeightCache,materialIdPerHeightNoiseCache,oftIdx2,vCoord2.z+vCoord2.x*Depth,ref polygonCell[corner]);
     }

     if(polygonCell[corner].Material!=MaterialId.Air&&polygonCell[corner].Normal==Vector3.zero){

      //  calcular normal:
      int tmpIdx=0;Vector3Int vCoord3=vCoord2;vCoord3.x++;                                                                                                                                                                                      SetpolygonCellNormalSettmpvxl();
          tmpIdx++;           vCoord3=vCoord2;vCoord3.x--;                        if(vCoord2.z>1&&vCoord2.x>1&&vCoord2.y>1&&voxelsCache2[1][vCoord2.z].IsCreated)                tmpvxl[tmpIdx]=voxelsCache2[1][vCoord2.z];                else SetpolygonCellNormalSettmpvxl();
          tmpIdx++;           vCoord3=vCoord2;            vCoord3.y++;                                                                                                                                                                          SetpolygonCellNormalSettmpvxl();
          tmpIdx++;           vCoord3=vCoord2;            vCoord3.y--;            if(vCoord2.z>1&&vCoord2.x>1&&vCoord2.y>1&&voxelsCache2[2][vCoord2.z+vCoord2.x*Depth].IsCreated)tmpvxl[tmpIdx]=voxelsCache2[2][vCoord2.z+vCoord2.x*Depth];else SetpolygonCellNormalSettmpvxl();
          tmpIdx++;           vCoord3=vCoord2;                        vCoord3.z++;                                                                                                                                                              SetpolygonCellNormalSettmpvxl();
          tmpIdx++;           vCoord3=vCoord2;                        vCoord3.z--;if(vCoord2.z>1&&vCoord2.x>1&&vCoord2.y>1&&voxelsCache2[0][0].IsCreated)                        tmpvxl[tmpIdx]=voxelsCache2[0][0];                        else SetpolygonCellNormalSettmpvxl();

      void SetpolygonCellNormalSettmpvxl(){
 
       if(vCoord3.y<=0){
        tmpvxl[tmpIdx]=Voxel.Bedrock;
       }else if(vCoord3.y>=Height){
        tmpvxl[tmpIdx]=Voxel.Air;
       }else{

        Vector2Int cnkRgn3=cnkRgn2;
        Vector2Int cCoord3=cCoord2;

        if(vCoord3.x<0||vCoord3.x>=Width||
           vCoord3.z<0||vCoord3.z>=Depth
        ){
         ValidateCoord(ref cnkRgn3,ref vCoord3);
         cCoord3=cnkRgnTocCoord(cnkRgn3);
        }

        int vxlIdx3=GetvxlIdx(vCoord3.x,vCoord3.y,vCoord3.z);

        int oftIdx3=GetoftIdx(cCoord3-current.cCoord_bg);

        if(oftIdx3==0&&voxels[vxlIdx3].IsCreated){
         tmpvxl[tmpIdx]=voxels[vxlIdx3];
        }else if(oftIdx3>0&&neighbors[oftIdx3-1].ContainsKey(vxlIdx3)){
         tmpvxl[tmpIdx]=neighbors[oftIdx3-1][vxlIdx3];
        }else{

         //  pegar valor do bioma:
         Vector3Int noiseInput=vCoord3;noiseInput.x+=cnkRgn3.x;
                                       noiseInput.z+=cnkRgn3.y;
         biome.Setvxl(noiseInput,noiseForHeightCache,materialIdPerHeightNoiseCache,oftIdx3,vCoord3.z+vCoord3.x*Depth,ref tmpvxl[tmpIdx]);
        }

        if(oftIdx3==0){
         voxels[vxlIdx3]=tmpvxl[tmpIdx];
        }else if(oftIdx3>0){
         neighbors[oftIdx3-1][vxlIdx3]=tmpvxl[tmpIdx];
        }

       }
 
      }
      Vector3 polygonCellNormal=new Vector3{
       x=(float)(tmpvxl[1].Density-tmpvxl[0].Density),
       y=(float)(tmpvxl[3].Density-tmpvxl[2].Density),
       z=(float)(tmpvxl[5].Density-tmpvxl[4].Density)
      };

      polygonCell[corner].Normal=polygonCellNormal;
      if(polygonCell[corner].Normal!=Vector3.zero){
       polygonCell[corner].Normal.Normalize();
      }

      if(oftIdx2==0){
       voxels[vxlIdx2]=polygonCell[corner];
      }else if(oftIdx2>0){
       neighbors[oftIdx2-1][vxlIdx2]=polygonCell[corner];
      }//  :salvar valor construído

     }
     voxelsCache2[0][0]=polygonCell[corner];
     voxelsCache2[1][vCoord2.z]=polygonCell[corner];
     voxelsCache2[2][vCoord2.z+vCoord2.x*Depth]=polygonCell[corner];

    }

   }

   int edgeIndex;
   /*
       Determine the index into the edge table which
       tells us which vertices are inside of the surface
   */
                                       edgeIndex =  0;
   if(-polygonCell[0].Density<IsoLevel)edgeIndex|=  1;
   if(-polygonCell[1].Density<IsoLevel)edgeIndex|=  2;
   if(-polygonCell[2].Density<IsoLevel)edgeIndex|=  4;
   if(-polygonCell[3].Density<IsoLevel)edgeIndex|=  8;
   if(-polygonCell[4].Density<IsoLevel)edgeIndex|= 16;
   if(-polygonCell[5].Density<IsoLevel)edgeIndex|= 32;
   if(-polygonCell[6].Density<IsoLevel)edgeIndex|= 64;
   if(-polygonCell[7].Density<IsoLevel)edgeIndex|=128;
   if(Tables.EdgeTable[edgeIndex]!=0){/*  Cube is not entirely in/out of the surface  */

    //  Use cached data if available
    vertices[ 0]=(vCoord1.z>0?verticesCache[0][0][0]:(vCoord1.y>0?verticesCache[2][vCoord1.z+vCoord1.x*Depth][0]:Vector3.zero));
    vertices[ 1]=(vCoord1.z>0?verticesCache[0][0][1]:Vector3.zero);
    vertices[ 2]=(vCoord1.z>0?verticesCache[0][0][2]:Vector3.zero);
    vertices[ 3]=(vCoord1.z>0?verticesCache[0][0][3]:(vCoord1.x>0?verticesCache[1][vCoord1.z][0]:Vector3.zero));
    vertices[ 4]=(vCoord1.y>0?verticesCache[2][vCoord1.z+vCoord1.x*Depth][1]:Vector3.zero);
    vertices[ 7]=(vCoord1.x>0?verticesCache[1][vCoord1.z][1]:Vector3.zero);
    vertices[ 8]=(vCoord1.x>0?verticesCache[1][vCoord1.z][2]:(vCoord1.y>0?verticesCache[2][vCoord1.z+vCoord1.x*Depth][3]:Vector3.zero));
    vertices[ 9]=(vCoord1.y>0?verticesCache[2][vCoord1.z+vCoord1.x*Depth][2]:Vector3.zero);
    vertices[11]=(vCoord1.x>0?verticesCache[1][vCoord1.z][3]:Vector3.zero);
                                
    if(0!=(Tables.EdgeTable[edgeIndex]&   1)){vertexInterp(0,1,ref vertices[ 0],ref normals[ 0],ref materials[ 0]);}
    if(0!=(Tables.EdgeTable[edgeIndex]&   2)){vertexInterp(1,2,ref vertices[ 1],ref normals[ 1],ref materials[ 1]);}
    if(0!=(Tables.EdgeTable[edgeIndex]&   4)){vertexInterp(2,3,ref vertices[ 2],ref normals[ 2],ref materials[ 2]);}
    if(0!=(Tables.EdgeTable[edgeIndex]&   8)){vertexInterp(3,0,ref vertices[ 3],ref normals[ 3],ref materials[ 3]);}
    if(0!=(Tables.EdgeTable[edgeIndex]&  16)){vertexInterp(4,5,ref vertices[ 4],ref normals[ 4],ref materials[ 4]);}
    if(0!=(Tables.EdgeTable[edgeIndex]&  32)){vertexInterp(5,6,ref vertices[ 5],ref normals[ 5],ref materials[ 5]);}
    if(0!=(Tables.EdgeTable[edgeIndex]&  64)){vertexInterp(6,7,ref vertices[ 6],ref normals[ 6],ref materials[ 6]);}
    if(0!=(Tables.EdgeTable[edgeIndex]& 128)){vertexInterp(7,4,ref vertices[ 7],ref normals[ 7],ref materials[ 7]);}
    if(0!=(Tables.EdgeTable[edgeIndex]& 256)){vertexInterp(0,4,ref vertices[ 8],ref normals[ 8],ref materials[ 8]);}
    if(0!=(Tables.EdgeTable[edgeIndex]& 512)){vertexInterp(1,5,ref vertices[ 9],ref normals[ 9],ref materials[ 9]);}
    if(0!=(Tables.EdgeTable[edgeIndex]&1024)){vertexInterp(2,6,ref vertices[10],ref normals[10],ref materials[10]);}
    if(0!=(Tables.EdgeTable[edgeIndex]&2048)){vertexInterp(3,7,ref vertices[11],ref normals[11],ref materials[11]);}

    void vertexInterp(int c0,int c1,ref Vector3 p,ref Vector3 n,ref MaterialId m){
     density[0]=-polygonCell[c0].Density;vertex[0]=corners[c0];material[0]=polygonCell[c0].Material;
     density[1]=-polygonCell[c1].Density;vertex[1]=corners[c1];material[1]=polygonCell[c1].Material;

     //  p
     if(Math.Abs(IsoLevel-density[0])<double.Epsilon){p=vertex[0];goto _Normal;}
     if(Math.Abs(IsoLevel-density[1])<double.Epsilon){p=vertex[1];goto _Normal;}
     if(Math.Abs(density[0]-density[1])<double.Epsilon){p=vertex[0];goto _Normal;}
     double marchingUnit=(IsoLevel-density[0])/(density[1]-density[0]);
     p.x=(float)(vertex[0].x+marchingUnit*(vertex[1].x-vertex[0].x));
     p.y=(float)(vertex[0].y+marchingUnit*(vertex[1].y-vertex[0].y));
     p.z=(float)(vertex[0].z+marchingUnit*(vertex[1].z-vertex[0].z));

     //  n
     _Normal:{
      distance[0]=Vector3.Distance(vertex[0],vertex[1]);
      distance[1]=Vector3.Distance(vertex[1],p);
      n=Vector3.Lerp(
       polygonCell[c1].Normal,
       polygonCell[c0].Normal,
       distance[1]/distance[0]
      );
      n=n!=Vector3.zero?n.normalized:Vector3.down;
     }

     //  m
     m=material[0];
     if(density[1]<density[0]){
      m=material[1];
     }else if(density[1]==density[0]&&(int)material[1]>(int)material[0]){
      m=material[1];
     }
    }

    /*  Create the triangle  */
    for(int i=0;Tables.TriangleTable[edgeIndex][i]!=-1;i+=3){
     idx[0]=Tables.TriangleTable[edgeIndex][i  ];
     idx[1]=Tables.TriangleTable[edgeIndex][i+1];
     idx[2]=Tables.TriangleTable[edgeIndex][i+2];

     Vector3 pos=vCoord1-trianglePosAdj;pos.x+=posOffset.x;
                                        pos.z+=posOffset.y;

     Vector2 materialUV=AtlasHelper.uv[Mathf.Max((int)materials[idx[0]],
                                                 (int)materials[idx[1]],
                                                 (int)materials[idx[2]]
                                                )];

     current.TempVer.Add(new Vertex(verPos[0]=pos+vertices[idx[0]],normals[idx[0]],materialUV));
     current.TempVer.Add(new Vertex(verPos[1]=pos+vertices[idx[1]],normals[idx[1]],materialUV));
     current.TempVer.Add(new Vertex(verPos[2]=pos+vertices[idx[2]],normals[idx[2]],materialUV));
     current.TempTri.Add(vertexCount+2);
     current.TempTri.Add(vertexCount+1);
     current.TempTri.Add(vertexCount  );
                         vertexCount+=3;

     if(!vertexUV.ContainsKey(verPos[0])){vertexUV.Add(verPos[0],new List<Vector2>());}vertexUV[verPos[0]].Add(materialUV);
     if(!vertexUV.ContainsKey(verPos[1])){vertexUV.Add(verPos[1],new List<Vector2>());}vertexUV[verPos[1]].Add(materialUV);
     if(!vertexUV.ContainsKey(verPos[2])){vertexUV.Add(verPos[2],new List<Vector2>());}vertexUV[verPos[2]].Add(materialUV);
    }

    //  Cache the data
    verticesCache[0][0][0]=vertices[ 4]+Vector3.back;//  Adiciona um valor "negativo" porque o voxelCoord próximo vai usar esse valor mas precisa obter "uma posição anterior"
    verticesCache[0][0][1]=vertices[ 5]+Vector3.back;
    verticesCache[0][0][2]=vertices[ 6]+Vector3.back;
    verticesCache[0][0][3]=vertices[ 7]+Vector3.back;
    verticesCache[1][vCoord1.z][0]=vertices[ 1]+Vector3.left;
    verticesCache[1][vCoord1.z][1]=vertices[ 5]+Vector3.left;
    verticesCache[1][vCoord1.z][2]=vertices[ 9]+Vector3.left;
    verticesCache[1][vCoord1.z][3]=vertices[10]+Vector3.left;
    verticesCache[2][vCoord1.z+vCoord1.x*Depth][0]=vertices[ 2]+Vector3.down;
    verticesCache[2][vCoord1.z+vCoord1.x*Depth][1]=vertices[ 6]+Vector3.down;
    verticesCache[2][vCoord1.z+vCoord1.x*Depth][2]=vertices[10]+Vector3.down;
    verticesCache[2][vCoord1.z+vCoord1.x*Depth][3]=vertices[11]+Vector3.down;

   }

  }}}
  
  for(crdOffset.y=0,posOffset.y=0,
      vCoord1.y=0;vCoord1.y<Height;vCoord1.y++){
  for(vCoord1.z=0;vCoord1.z<Depth ;vCoord1.z++){
      vCoord1.x=0;
   //  east
   crdOffset.x=1;
   posOffset.x=Width;
   AddEdgesvertexUV();
                        
      vCoord1.x=Width-1;
   //  west
   crdOffset.x=-1;
   posOffset.x=-Width;
   AddEdgesvertexUV();
  }}
  for(crdOffset.x=0,posOffset.x=0,
      vCoord1.y=0;vCoord1.y<Height;vCoord1.y++){
  for(vCoord1.x=0;vCoord1.x<Width ;vCoord1.x++){
      vCoord1.z=0;
   //  north
   crdOffset.y=1;
   posOffset.y=Depth;
   AddEdgesvertexUV();

      vCoord1.z=Depth-1;
   //  south
   crdOffset.y=-1;
   posOffset.y=-Depth;
   AddEdgesvertexUV();
  }}
  void AddEdgesvertexUV(){
   int corner=0;Vector3Int vCoord2=vCoord1;                                       SetpolygonCellVoxel();
       corner++;           vCoord2=vCoord1;vCoord2.x+=1;                          SetpolygonCellVoxel();
       corner++;           vCoord2=vCoord1;vCoord2.x+=1;vCoord2.y+=1;             SetpolygonCellVoxel();
       corner++;           vCoord2=vCoord1;             vCoord2.y+=1;             SetpolygonCellVoxel();
       corner++;           vCoord2=vCoord1;                          vCoord2.z+=1;SetpolygonCellVoxel();
       corner++;           vCoord2=vCoord1;vCoord2.x+=1;             vCoord2.z+=1;SetpolygonCellVoxel();
       corner++;           vCoord2=vCoord1;vCoord2.x+=1;vCoord2.y+=1;vCoord2.z+=1;SetpolygonCellVoxel();
       corner++;           vCoord2=vCoord1;             vCoord2.y+=1;vCoord2.z+=1;SetpolygonCellVoxel();
   void SetpolygonCellVoxel(){
    if(vCoord2.y<=0){
     polygonCell[corner]=Voxel.Bedrock;/*  :fora do mundo, baixo  */
    }else if(vCoord2.y>=Height){
     polygonCell[corner]=Voxel.Air;/*  :fora do mundo, cima  */
    }else{
     Vector2Int cnkRgn2=current.cnkRgn_bg+posOffset;
     Vector2Int cCoord2=current.cCoord_bg+crdOffset;
     if(vCoord2.x<0||vCoord2.x>=Width||
        vCoord2.z<0||vCoord2.z>=Depth
     ){
      ValidateCoord(ref cnkRgn2,ref vCoord2);
      cCoord2=cnkRgnTocCoord(cnkRgn2);
     }

     int vxlIdx2=GetvxlIdx(vCoord2.x,vCoord2.y,vCoord2.z);

     int oftIdx2=GetoftIdx(cCoord2-current.cCoord_bg);
     /*  já construído:  */
     if(oftIdx2==0&&voxels[vxlIdx2].IsCreated){
      polygonCell[corner]=voxels[vxlIdx2];
     }else if(oftIdx2>0&&neighbors[oftIdx2-1].ContainsKey(vxlIdx2)){
      polygonCell[corner]=neighbors[oftIdx2-1][vxlIdx2];
     }else{

      //  pegar valor do bioma:
      Vector3Int noiseInput=vCoord2;noiseInput.x+=cnkRgn2.x;
                                    noiseInput.z+=cnkRgn2.y;
      biome.Setvxl(noiseInput,noiseForHeightCache,materialIdPerHeightNoiseCache,oftIdx2,vCoord2.z+vCoord2.x*Depth,ref polygonCell[corner]);
     }

    }
   }
                    
   int edgeIndex;
   /*
       Determine the index into the edge table which
       tells us which vertices are inside of the surface
   */
                                       edgeIndex =  0;
   if(-polygonCell[0].Density<IsoLevel)edgeIndex|=  1;
   if(-polygonCell[1].Density<IsoLevel)edgeIndex|=  2;
   if(-polygonCell[2].Density<IsoLevel)edgeIndex|=  4;
   if(-polygonCell[3].Density<IsoLevel)edgeIndex|=  8;
   if(-polygonCell[4].Density<IsoLevel)edgeIndex|= 16;
   if(-polygonCell[5].Density<IsoLevel)edgeIndex|= 32;
   if(-polygonCell[6].Density<IsoLevel)edgeIndex|= 64;
   if(-polygonCell[7].Density<IsoLevel)edgeIndex|=128;
   if(Tables.EdgeTable[edgeIndex]!=0){
                        
    if(0!=(Tables.EdgeTable[edgeIndex]&   1)){vertexInterp(0,1,ref vertices[ 0],ref materials[ 0]);}
    if(0!=(Tables.EdgeTable[edgeIndex]&   2)){vertexInterp(1,2,ref vertices[ 1],ref materials[ 1]);}
    if(0!=(Tables.EdgeTable[edgeIndex]&   4)){vertexInterp(2,3,ref vertices[ 2],ref materials[ 2]);}
    if(0!=(Tables.EdgeTable[edgeIndex]&   8)){vertexInterp(3,0,ref vertices[ 3],ref materials[ 3]);}
    if(0!=(Tables.EdgeTable[edgeIndex]&  16)){vertexInterp(4,5,ref vertices[ 4],ref materials[ 4]);}
    if(0!=(Tables.EdgeTable[edgeIndex]&  32)){vertexInterp(5,6,ref vertices[ 5],ref materials[ 5]);}
    if(0!=(Tables.EdgeTable[edgeIndex]&  64)){vertexInterp(6,7,ref vertices[ 6],ref materials[ 6]);}
    if(0!=(Tables.EdgeTable[edgeIndex]& 128)){vertexInterp(7,4,ref vertices[ 7],ref materials[ 7]);}
    if(0!=(Tables.EdgeTable[edgeIndex]& 256)){vertexInterp(0,4,ref vertices[ 8],ref materials[ 8]);}
    if(0!=(Tables.EdgeTable[edgeIndex]& 512)){vertexInterp(1,5,ref vertices[ 9],ref materials[ 9]);}
    if(0!=(Tables.EdgeTable[edgeIndex]&1024)){vertexInterp(2,6,ref vertices[10],ref materials[10]);}
    if(0!=(Tables.EdgeTable[edgeIndex]&2048)){vertexInterp(3,7,ref vertices[11],ref materials[11]);}

    void vertexInterp(int c0,int c1,ref Vector3 p,ref MaterialId m){
     density[0]=-polygonCell[c0].Density;vertex[0]=corners[c0];material[0]=polygonCell[c0].Material;
     density[1]=-polygonCell[c1].Density;vertex[1]=corners[c1];material[1]=polygonCell[c1].Material;

     //  p
     if(Math.Abs(IsoLevel-density[0])<double.Epsilon){p=vertex[0];goto _Material;}
     if(Math.Abs(IsoLevel-density[1])<double.Epsilon){p=vertex[1];goto _Material;}
     if(Math.Abs(density[0]-density[1])<double.Epsilon){p=vertex[0];goto _Material;}
     double marchingUnit=(IsoLevel-density[0])/(density[1]-density[0]);
     p.x=(float)(vertex[0].x+marchingUnit*(vertex[1].x-vertex[0].x));
     p.y=(float)(vertex[0].y+marchingUnit*(vertex[1].y-vertex[0].y));
     p.z=(float)(vertex[0].z+marchingUnit*(vertex[1].z-vertex[0].z));

     _Material:{
      m=material[0];
      if(density[1]<density[0]){
       m=material[1];
      }else if(density[1]==density[0]&&(int)material[1]>(int)material[0]){
       m=material[1];
      }
     }
    }

    /*  Create the triangle  */
    for(int i=0;Tables.TriangleTable[edgeIndex][i]!=-1;i+=3){
     idx[0]=Tables.TriangleTable[edgeIndex][i  ];
     idx[1]=Tables.TriangleTable[edgeIndex][i+1];
     idx[2]=Tables.TriangleTable[edgeIndex][i+2];

     Vector3 pos=vCoord1-trianglePosAdj;pos.x+=posOffset.x;
                                        pos.z+=posOffset.y;

     Vector2 materialUV=AtlasHelper.uv[Mathf.Max((int)materials[idx[0]],
                                                 (int)materials[idx[1]],
                                                 (int)materials[idx[2]]
                                                )];

     verPos[0]=pos+vertices[idx[0]];
     verPos[1]=pos+vertices[idx[1]];
     verPos[2]=pos+vertices[idx[2]];

     if(!vertexUV.ContainsKey(verPos[0])){vertexUV.Add(verPos[0],new List<Vector2>());}vertexUV[verPos[0]].Add(materialUV);
     if(!vertexUV.ContainsKey(verPos[1])){vertexUV.Add(verPos[1],new List<Vector2>());}vertexUV[verPos[1]].Add(materialUV);
     if(!vertexUV.ContainsKey(verPos[2])){vertexUV.Add(verPos[2],new List<Vector2>());}vertexUV[verPos[2]].Add(materialUV);
    }

   }

  }

  for(int i=0;i<current.TempVer.Length/3;i++){
   idx[0]=i*3;
   idx[1]=i*3+1;
   idx[2]=i*3+2;
   for(int j=0;j<3;j++){

    var materialIdGroupingOrdered=vertexUV[verPos[j]=current.TempVer[idx[j]].pos].ToArray().Select(uv=>{return (MaterialId)Array.IndexOf(AtlasHelper.uv,uv);}).GroupBy(value=>value).OrderByDescending(group=>group.Key).ThenByDescending(group=>group.Count());
    weights.Clear();
    int total=0;

    Vector2 uv0=current.TempVer[idx[j]].texCoord0;

    foreach(var materialIdGroup in materialIdGroupingOrdered){
     Vector2 uv=AtlasHelper.uv[(int)materialIdGroup.First()];

     bool add;
     if(uv0==uv){
      total+=weights[0]=materialIdGroup.Count();

     }else if(((add=current.TempVer[idx[j]].texCoord1==emptyUV)&&current.TempVer[idx[j]].texCoord2!=uv&&current.TempVer[idx[j]].texCoord3!=uv)||current.TempVer[idx[j]].texCoord1==uv){
      if(add){
       var v1=current.TempVer[idx[0]];v1.texCoord1=uv;current.TempVer[idx[0]]=v1;
           v1=current.TempVer[idx[1]];v1.texCoord1=uv;current.TempVer[idx[1]]=v1;
           v1=current.TempVer[idx[2]];v1.texCoord1=uv;current.TempVer[idx[2]]=v1;
      }
      total+=weights[1]=materialIdGroup.Count();

     }else if(((add=current.TempVer[idx[j]].texCoord2==emptyUV)&&current.TempVer[idx[j]].texCoord3!=uv                                       )||current.TempVer[idx[j]].texCoord2==uv){
      if(add){
       var v1=current.TempVer[idx[0]];v1.texCoord2=uv;current.TempVer[idx[0]]=v1;
           v1=current.TempVer[idx[1]];v1.texCoord2=uv;current.TempVer[idx[1]]=v1;
           v1=current.TempVer[idx[2]];v1.texCoord2=uv;current.TempVer[idx[2]]=v1;
      }
      total+=weights[2]=materialIdGroup.Count();

     }else if(((add=current.TempVer[idx[j]].texCoord3==emptyUV)                                                                              )||current.TempVer[idx[j]].texCoord3==uv){
      if(add){
       var v1=current.TempVer[idx[0]];v1.texCoord3=uv;current.TempVer[idx[0]]=v1;
           v1=current.TempVer[idx[1]];v1.texCoord3=uv;current.TempVer[idx[1]]=v1;
           v1=current.TempVer[idx[2]];v1.texCoord3=uv;current.TempVer[idx[2]]=v1;
      }
      total+=weights[3]=materialIdGroup.Count();

     }
    }

    if(weights.Count>1){
     var v2=current.TempVer[idx[j]];

     Color col=v2.color;
                                col.r=(weights[0]/(float)total);
     if(weights.ContainsKey(1)){col.g=(weights[1]/(float)total);}
     if(weights.ContainsKey(2)){col.b=(weights[2]/(float)total);}
     if(weights.ContainsKey(3)){col.a=(weights[3]/(float)total);}

     v2.color=col;
     current.TempVer[idx[j]]=v2;
    }

   }
  }
  
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
  protected readonly System.Random[]random=new System.Random[2];

  protected virtual int rndIdx{get{return 1;}}

  int seed_v;
  internal int Seed{
   get{
    return seed_v;
   }
   set{
    seed_v=value;

    random[0]=new System.Random(seed_v);
    random[1]=new System.Random(random[0].Next());

    SetModules();

    Debug.Log("seed set: "+seed_v);
   }
  }

  protected readonly List<ModuleBase>modules=new List<ModuleBase>();

  protected virtual void SetModules(){
   modules.Add(new Const( 0));
   modules.Add(new Const( 1));
   modules.Add(new Const(-1));
   modules.Add(new Const(.5));
   modules.Add(new Const(128));

   ModuleBase module1=new Const(5);
    // 2
    ModuleBase module2a=new RidgedMultifractal(frequency:Mathf.Pow(2,-8),lacunarity:2.0,octaves:6,seed:random[rndIdx].Next(),quality:QualityMode.Low);
    ModuleBase module2b=new Turbulence(input:module2a); 
    ((Turbulence)module2b).Seed=random[rndIdx].Next();
    ((Turbulence)module2b).Frequency=Mathf.Pow(2,-2);
    ((Turbulence)module2b).Power=1;
    ModuleBase module2c=new ScaleBias(scale:1.0,bias:30.0,input:module2b);  
     // 3
     ModuleBase module3a=new Billow(frequency:Mathf.Pow(2,-7)*1.6,lacunarity:2.0,persistence:0.5,octaves:8,seed:random[rndIdx].Next(),quality:QualityMode.Low);
     ModuleBase module3b=new Turbulence(input:module3a);
     ((Turbulence)module3b).Seed=random[rndIdx].Next();
     ((Turbulence)module3b).Frequency=Mathf.Pow(2,-2);  
     ((Turbulence)module3b).Power=1.8;
     ModuleBase module3c=new ScaleBias(scale:1.0,bias:31.0,input:module3b);
      // 4
      ModuleBase module4a=new Perlin(frequency:Mathf.Pow(2,-6),lacunarity:2.0,persistence:0.5,octaves:6,seed:random[rndIdx].Next(),quality:QualityMode.Low);
      ModuleBase module4b=new Select(inputA:module2c,inputB:module3c,controller:module4a);
      ((Select)module4b).SetBounds(min:-.2,max:.2);
      ((Select)module4b).FallOff=.25;
      ModuleBase module4c=new Multiply(lhs:module4b,rhs:module1);
   modules.Add(module4c);

   selectors[0]=(Select)module4b;
  }

  protected virtual int hgtIdx1{get{return 5;}}//  Base Height Result Module

  internal virtual int heightsCacheLength{get{return 1;}}

  #region Setvxl
  protected Vector3 deround{get;}=new Vector3(.5f,.5f,.5f);
  internal void Setvxl(Vector3Int noiseInputRounded,double[][][]noiseForHeightCache,MaterialId[][][]materialIdPerHeightNoiseCache,int oftIdx,int noiseIndex,ref Voxel vxl){
               Vector3 noiseInput=noiseInputRounded+deround;

   if(noiseForHeightCache!=null&&noiseForHeightCache[0][oftIdx]==null)noiseForHeightCache[0][oftIdx]=new double[FlattenOffset];

   double noiseValue=(noiseForHeightCache!=null&&noiseForHeightCache[0][oftIdx][noiseIndex]!=0)?
    noiseForHeightCache[0][oftIdx][noiseIndex]:
     (noiseForHeightCache!=null?
      (noiseForHeightCache[0][oftIdx][noiseIndex]=Noise()):
       Noise());
                    
   double Noise(){return modules[hgtIdx1].GetValue(noiseInput.z,noiseInput.x,0);}

   if(materialIdPerHeightNoiseCache!=null&&materialIdPerHeightNoiseCache[0][oftIdx]==null)materialIdPerHeightNoiseCache[0][oftIdx]=new MaterialId[FlattenOffset];

   if(noiseInput.y<=noiseValue){
    double d;

    vxl=new Voxel(d=Density(100,noiseInput,noiseValue),Vector3.zero,Material(d,noiseInput,materialIdPerHeightNoiseCache,oftIdx,noiseIndex));

    return;
   }

   vxl=Voxel.Air;
  }

  protected virtual double Density(double density,Vector3 noiseInput,double noiseValue,float smoothing=3f){
   double value=density;
   double delta=noiseValue-noiseInput.y;//  noiseInput.y sempre será menor ou igual a noiseValue

   if(delta<=smoothing){
    double smoothingValue=(smoothing-delta)/smoothing;
    value*=1d-smoothingValue;
    if(value<0)
       value=0;
    else if(value>100)
            value=100;
   }

   return value;
  }

  readonly protected MaterialId[]materialIdPicking=new MaterialId[2]{
   MaterialId.Rock,
   MaterialId.Dirt,
  };

  protected virtual MaterialId Material(double density,Vector3 noiseInput,MaterialId[][][]materialIdPerHeightNoiseCache,int oftIdx,int noiseIndex){

   if(-density>=IsoLevel){
    return MaterialId.Air;
   }

   if(materialIdPerHeightNoiseCache!=null&&materialIdPerHeightNoiseCache[0][oftIdx][noiseIndex]!=0){
    return materialIdPerHeightNoiseCache[0][oftIdx][noiseIndex];
   }

   MaterialId m;

   m=materialIdPicking[Select(noiseInput)];

   return materialIdPerHeightNoiseCache!=null?materialIdPerHeightNoiseCache[0][oftIdx][noiseIndex]=m:m;
  }

  readonly protected Select[]selectors=new Select[1];

  protected virtual int Select(Vector3 noiseInput){
   double min=selectors[0].Minimum;
   double max=selectors[0].Maximum;
   double fallOff=selectors[0].FallOff*.5;

   var selectValue=selectors[0].Controller.GetValue(noiseInput.z,noiseInput.x,0);

   if(selectValue<=min-fallOff||selectValue>=max+fallOff){
    return 1;
   }else{
    return 0;
   }
  }
  #endregion

  internal class TreeData{
  }

  readonly protected Dictionary<Type,TreeData>treesData=new Dictionary<Type,TreeData>(){
   {
    typeof(Pinus_elliottii),
    new TreeData{
    }
   },
  };

  readonly protected Dictionary<int,Type[]>treePicking=new Dictionary<int,Type[]>{
   {
    1,
    new Type[]{
     typeof(Pinus_elliottii),
    }
   },
  };

  internal (Type tree,TreeData treeData)?Tree(Vector3Int noiseInputRounded){
                                      Vector3 noiseInput=noiseInputRounded+deround;
   if(treePicking.TryGetValue(Select(noiseInput),out Type[]treesPicked)){
    //  To do: random chance to use tree selected
    foreach(Type tree in treesPicked){TreeData treeData=treesData[tree];
     return(tree,treeData);
    }
   }
   return null;
  }

 }

 internal static class AtlasHelper{

  internal static Material material{get;private set;}

  internal static readonly Vector2[]uv=new Vector2[Enum.GetNames(typeof(MaterialId)).Length];
                
  internal static void GetAtlasData(Material material){
   AtlasHelper.material=material;

   uv[(int)MaterialId.Dirt]=new Vector2(1,0);
   uv[(int)MaterialId.Rock]=new Vector2(0,0);
  }

 }

}
#endregion

BakerJob bakeJob;
struct BakerJob:IJob{
 public int meshId;
 public void Execute(){
  Physics.BakeMesh(meshId,false);
 }
}
JobHandle bakingHandle;
        
internal readonly TreesBackgroundContainer addTreesBG=new TreesBackgroundContainer();
internal class TreesBackgroundContainer:BackgroundContainer{
 internal ExecutionMode executionMode_bg=ExecutionMode._1;
 internal enum ExecutionMode{
  _1,
  _2,
  _3,
 }

 internal Vector2Int cCoord_bg;
 internal Vector2Int cnkRgn_bg;

 internal NativeList<RaycastCommand>GetGroundRays;
 internal NativeList<RaycastHit    >GetGroundHits;

        internal readonly List<(int x,int z)>gotGroundRays_bg=new List<(int,int)>();
 internal readonly Dictionary<int,RaycastHit>gotGroundHits_bg=new Dictionary<int,RaycastHit>(Width*Depth);

 internal readonly Dictionary<(int x,int z),(Type tree,MarchingCubesMultithreaded.BaseBiome.TreeData treeData)>treeAt_bg=new Dictionary<(int,int),(Type,MarchingCubesMultithreaded.BaseBiome.TreeData)>();

 internal readonly SimObjectSpawner.SpawnData toSpawn_bg=new SimObjectSpawner.SpawnData(Width*Depth);
  WaitUntil waitForSpawner;

 internal bool findPositionsCoroutineIdleWaiting=true;

 internal bool findPositionsCoroutineBeginFlag;
  WaitUntil waitForBeginFlag;

  WaitUntil waitForScheduledTask;

 JobHandle doRaycastsHandle;
  WaitUntil waitForRaycastsHandle;

  internal Coroutine findPositionsCoroutine;
 internal IEnumerator FindPositionsCoroutine(){

  Debug.Log("FindPositionsCoroutine() coroutine started");

  waitForBeginFlag=new WaitUntil(()=>findPositionsCoroutineBeginFlag);

  waitForScheduledTask=new WaitUntil(()=>this.IsCompleted(VoxelTerrain.Singleton.addTreesBGThreads[0].IsRunning));

  waitForRaycastsHandle=new WaitUntil(()=>doRaycastsHandle.IsCompleted);

  waitForSpawner=new WaitUntil(()=>toSpawn_bg.dequeued);

  Loop:{
   yield return waitForBeginFlag;
    findPositionsCoroutineBeginFlag=false;

   Debug.Log("FindPositionsCoroutine():begin flag was set true:"+cnkRgn_bg);

   GetGroundRays.Clear();
   GetGroundHits.Clear();

   gotGroundRays_bg.Clear();
   gotGroundHits_bg.Clear();

   executionMode_bg=ExecutionMode._1;
   TreesMultithreaded.Schedule(this);
   yield return waitForScheduledTask;

   doRaycastsHandle=RaycastCommand.ScheduleBatch(GetGroundRays,GetGroundHits,1,default(JobHandle));
   yield return waitForRaycastsHandle;
   doRaycastsHandle.Complete();

   Vector3Int vCoord1=new Vector3Int(0,0,0);
   int i=0;
   for(vCoord1.x=0             ;vCoord1.x<Width;vCoord1.x++){
   for(vCoord1.z=0             ;vCoord1.z<Depth;vCoord1.z++){
    if(gotGroundRays_bg.Contains((vCoord1.x,vCoord1.z))){
     RaycastHit hit=GetGroundHits[i++];
     if(hit.collider!=null){
      int index=vCoord1.z+vCoord1.x*Depth;
      gotGroundHits_bg.Add(index,hit);

      Debug.DrawRay(GetGroundHits[i-1].point,(GetGroundRays[i-1].from-GetGroundHits[i-1].point).normalized,Color.white,5f);

     }
    }
   }}
   
   executionMode_bg=ExecutionMode._2;
   TreesMultithreaded.Schedule(this);
   yield return waitForScheduledTask;

   SimObjectSpawner.Singleton.SpawnQueue.Enqueue(toSpawn_bg);
   yield return waitForSpawner;
                    
   executionMode_bg=ExecutionMode._3;
   TreesMultithreaded.Schedule(this);
   yield return waitForScheduledTask;

   findPositionsCoroutineIdleWaiting=true;
  }
  goto Loop;
 }
}
internal class TreesMultithreaded:BaseMultithreaded<TreesBackgroundContainer>{

 readonly Dictionary<Type,Vector2Int>spacingOwnTypeOnly=new Dictionary<Type,Vector2Int>();

 protected override void Cleanup(){
  spacingOwnTypeOnly.Clear();
 }

 protected override void Execute(){
  Debug.Log("TreesMultithreaded:Execute:");
  if      (current.executionMode_bg==TreesBackgroundContainer.ExecutionMode._1){
   Debug.Log("TreesMultithreaded:Execute:_1:get rays to ground:"+current.cCoord_bg);

   current.treeAt_bg.Clear();

   Vector3Int vCoord1=new Vector3Int(0,Height/2-1,0);

   for(vCoord1.x=0             ;vCoord1.x<Width;vCoord1.x++){

    foreach(var tree in spacingOwnTypeOnly.Keys.ToArray()){Vector2Int spaced=spacingOwnTypeOnly[tree];
     spaced.y=0;
     spaced.x--;
     if(spaced.x>0){
      spacingOwnTypeOnly[tree]=spaced;
     }else{
      spacingOwnTypeOnly.Remove(tree);
     }
    }

   for(vCoord1.z=0             ;vCoord1.z<Depth;vCoord1.z++){

    foreach(var tree in spacingOwnTypeOnly.Keys.ToArray()){Vector2Int spaced=spacingOwnTypeOnly[tree];
     if(spaced.y>0){
      spaced.y--;
      spacingOwnTypeOnly[tree]=spaced;
     }
    }

    Vector3Int noiseInput=vCoord1;noiseInput.x+=current.cnkRgn_bg.x;
                                  noiseInput.z+=current.cnkRgn_bg.y;

    (Type tree,MarchingCubesMultithreaded.BaseBiome.TreeData treeData)?treePicked=MarchingCubesMultithreaded.biome.Tree(noiseInput);
    if(treePicked!=null){

     //  To do: instead of the fixed value 10, use radius of the selected tree
     if(vCoord1.x<10||
        vCoord1.z<10
     ){
      continue;
     }

     if(spacingOwnTypeOnly.TryGetValue(treePicked.Value.tree,out Vector2Int spaced)){
      if(spaced.x>0||
         spaced.y>0
      ){
       continue;
      }
     }

     Vector3 from=vCoord1;
             from.x+=(current.cnkRgn_bg.x-Width/2f)+.5f;
             from.z+=(current.cnkRgn_bg.y-Depth/2f)+.5f;

     current.GetGroundRays.AddNoResize(new RaycastCommand(from,Vector3.down,Height,PhysHelper.VoxelTerrain));
     current.GetGroundHits.AddNoResize(new RaycastHit    ()                                                );

     current.gotGroundRays_bg.Add((vCoord1.x,vCoord1.z));

     current.treeAt_bg.Add((vCoord1.x,vCoord1.z),treePicked.Value);

     //  To do: instead of the fixed value 10, use radius of the selected tree
     spacingOwnTypeOnly[treePicked.Value.tree]=new Vector2Int(10,10);
    }

   }
   }

  }else if(current.executionMode_bg==TreesBackgroundContainer.ExecutionMode._2){
   Debug.Log("TreesMultithreaded:Execute:_2:got ground hits:"+current.cCoord_bg);

   Debug.Log("current.gotGroundHits_bg.Count:"+current.gotGroundHits_bg.Count);
                    
   current.toSpawn_bg.at.Clear();
   current.toSpawn_bg.dequeued=false;

   Vector3Int vCoord1=new Vector3Int(0,Height/2-1,0);
   int i=0;
   for(vCoord1.x=0             ;vCoord1.x<Width;vCoord1.x++){
   for(vCoord1.z=0             ;vCoord1.z<Depth;vCoord1.z++){
    int index=vCoord1.z+vCoord1.x*Depth;
    if(current.gotGroundHits_bg.TryGetValue(index,out RaycastHit floor)){
     (Type tree,MarchingCubesMultithreaded.BaseBiome.TreeData treeData)treeAt=current.treeAt_bg[(vCoord1.x,vCoord1.z)];

     current.toSpawn_bg.at.Add((floor.point,Vector3.zero,Vector3.one,treeAt.tree,null));
    }
   }}
   
  }else if(current.executionMode_bg==TreesBackgroundContainer.ExecutionMode._3){
   Debug.Log("TreesMultithreaded:Execute:_3:save \"done\" file:"+current.cCoord_bg);
  }
 }
}

void Awake(){
 marchingCubesBG=new MarchingCubesBackgroundContainer(syn);

 renderer=GetComponent<MeshRenderer>();
 collider=GetComponent<MeshCollider>();

 mesh=new Mesh(){
  bounds=worldBounds=new Bounds(Vector3.zero,new Vector3(Width,Height,Depth)),
 };

 GetComponent<MeshFilter>().mesh=mesh;

 bakeJob=new BakerJob(){
  meshId=mesh.GetInstanceID(),
 };
}

internal void OnActivated(){
 Debug.Log("VoxelTerrainChunk:OnActivated");
 marchingCubesBG.TempVer=new NativeList<Vertex>(Allocator.Persistent);
 marchingCubesBG.TempTri=new NativeList<UInt32>(Allocator.Persistent);

 addTreesBG.GetGroundRays=new NativeList<RaycastCommand>(Width*Depth,Allocator.Persistent);
 addTreesBG.GetGroundHits=new NativeList<RaycastHit    >(Width*Depth,Allocator.Persistent);
 addTreesBG.findPositionsCoroutine=StartCoroutine(addTreesBG.FindPositionsCoroutine());
}

internal void OnExit(){
 Debug.Log("VoxelTerrainChunk:OnExit");
 marchingCubesBG.IsCompleted(VoxelTerrain.Singleton.marchingCubesBGThreads[0].IsRunning,-1);
 if(marchingCubesBG.TempVer.IsCreated)marchingCubesBG.TempVer.Dispose();
 if(marchingCubesBG.TempTri.IsCreated)marchingCubesBG.TempTri.Dispose();

 if(this!=null){
  StopCoroutine(addTreesBG.findPositionsCoroutine);
 }
 addTreesBG.IsCompleted(VoxelTerrain.Singleton.addTreesBGThreads[0].IsRunning,-1);
 if(addTreesBG.GetGroundRays.IsCreated)addTreesBG.GetGroundRays.Dispose();
 if(addTreesBG.GetGroundHits.IsCreated)addTreesBG.GetGroundHits.Dispose();
}
        
bool initialization=true;
        
Vector2Int cCoord;
Vector2Int cnkRgn;
internal int?cnkIdx=null;
        
internal void OncCoordChanged(Vector2Int cCoord1){
 if(initialization||cCoord1!=cCoord){
  cCoord=cCoord1;
  cnkRgn=cCoordTocnkRgn(cCoord);
  //Debug.Log("VoxelTerrainChunk:OncCoordChanged:"+cCoord1);
  moveRequired=true;
 }
 initialization=false;
}

bool addingTrees;
bool addTreesRequired;
bool addTreesRequested;
bool bakingMesh;
bool bakeRequested;
bool runningMarchingCubes;
bool buildRequested;
bool moveRequired;
internal void ManualUpdate(){
 if(addingTrees){
  if(addTreesRequested&&OnAddedTrees()){
   addTreesRequested=false;
   Debug.Log("ManualUpdate:added trees:they'll be spawned shortly:"+cnkRgn);
   addingTrees=false;
  }else if(addTreesRequired&&OnAddingTrees()){
   addTreesRequired=false;
   Debug.Log("ManualUpdate:adding trees:find positions:"+cnkRgn);
   addTreesRequested=true;
  }

 }else{
  if(bakingMesh){
   if(bakeRequested&&OnBakedMesh()){
    bakeRequested=false;
    //Debug.Log("ManualUpdate:mesh baked:assigned mesh collider data:"+cnkRgn);
    bakingMesh=false;
    OnAddTrees();
   }
    
  }else{
   if(runningMarchingCubes){
    if(buildRequested&&OnBuilt()){
     buildRequested=false;
     //Debug.Log("ManualUpdate:build finished:assigned built mesh data:"+cnkRgn);
     runningMarchingCubes=false;
     OnReadyToBakeMesh();
    }

   }else{
    if(moveRequired&&OnMoving()){
     moveRequired=false;
     //Debug.Log("ManualUpdate:moveRequired:"+cnkRgn);
     OnMoved();
    }
     
   }
 
  }

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
void OnMoved(){
 runningMarchingCubes=true;
 //Debug.Log("OnMoved:chunk moved:running Marching Cubes");
 buildRequested=true;
}

bool OnBuilt(){
 if(marchingCubesBG.IsCompleted(VoxelTerrain.Singleton.marchingCubesBGThreads[0].IsRunning)){
  bool resize;
  if(resize=marchingCubesBG.TempVer.Length>mesh.vertexCount){
   mesh.SetVertexBufferParams(marchingCubesBG.TempVer.Length,layout);
  }
  mesh.SetVertexBufferData(marchingCubesBG.TempVer.AsArray(),0,0,marchingCubesBG.TempVer.Length,0,meshFlags);
  if(resize){
   mesh.SetIndexBufferParams(marchingCubesBG.TempTri.Length,IndexFormat.UInt32);
  }
  mesh.SetIndexBufferData(marchingCubesBG.TempTri.AsArray(),0,0,marchingCubesBG.TempTri.Length,meshFlags);
  mesh.subMeshCount=1;
  mesh.SetSubMesh(0,new SubMeshDescriptor(0,marchingCubesBG.TempTri.Length){firstVertex=0,vertexCount=marchingCubesBG.TempVer.Length},meshFlags);
  return true;
 }
 return false;
}
void OnReadyToBakeMesh(){
 bakingHandle.Complete();
 bakingHandle=bakeJob.Schedule();
 bakingMesh=true;
 //Debug.Log("OnReadyToBakeMesh:chunk has a valid mesh:bake mesh for mesh collider");
 bakeRequested=true;
}

bool OnBakedMesh(){
 if(bakingHandle.IsCompleted){
  bakingHandle.Complete();
  collider.sharedMesh=null;
  collider.sharedMesh=mesh;
  return true;
 }
 return false;
}
void OnAddTrees(){
 addingTrees=true;
 Debug.Log("OnAddTrees:chunk has a valid collider:add trees");
 addTreesRequired=true;
}

bool OnAddingTrees(){
 if(addTreesBG.IsCompleted(VoxelTerrain.Singleton.addTreesBGThreads[0].IsRunning)&&addTreesBG.findPositionsCoroutineIdleWaiting){
  addTreesBG.cCoord_bg=cCoord;
  addTreesBG.cnkRgn_bg=cnkRgn;
  addTreesBG.findPositionsCoroutineIdleWaiting=false;
  addTreesBG.findPositionsCoroutineBeginFlag=true;
  return true;
 }
 return false;
}
bool OnAddedTrees(){
 if(addTreesBG.IsCompleted(VoxelTerrain.Singleton.addTreesBGThreads[0].IsRunning)&&addTreesBG.findPositionsCoroutineIdleWaiting){
  return true;
 }
 return false;
}

#if UNITY_EDITOR
void OnDrawGizmos(){
 //Core.DrawBounds(worldBounds,Color.white);
}
#endif

}}

namespace paulbourke.MarchingCubes{
    internal static class Tables{
        internal static readonly ReadOnlyCollection<int>EdgeTable=new ReadOnlyCollection<int>(new int[256]{
            0x0  ,0x109,0x203,0x30a,0x406,0x50f,0x605,0x70c,
            0x80c,0x905,0xa0f,0xb06,0xc0a,0xd03,0xe09,0xf00,
            0x190,0x99 ,0x393,0x29a,0x596,0x49f,0x795,0x69c,
            0x99c,0x895,0xb9f,0xa96,0xd9a,0xc93,0xf99,0xe90,
            0x230,0x339,0x33 ,0x13a,0x636,0x73f,0x435,0x53c,
            0xa3c,0xb35,0x83f,0x936,0xe3a,0xf33,0xc39,0xd30,
            0x3a0,0x2a9,0x1a3,0xaa ,0x7a6,0x6af,0x5a5,0x4ac,
            0xbac,0xaa5,0x9af,0x8a6,0xfaa,0xea3,0xda9,0xca0,
            0x460,0x569,0x663,0x76a,0x66 ,0x16f,0x265,0x36c,
            0xc6c,0xd65,0xe6f,0xf66,0x86a,0x963,0xa69,0xb60,
            0x5f0,0x4f9,0x7f3,0x6fa,0x1f6,0xff ,0x3f5,0x2fc,
            0xdfc,0xcf5,0xfff,0xef6,0x9fa,0x8f3,0xbf9,0xaf0,
            0x650,0x759,0x453,0x55a,0x256,0x35f,0x55 ,0x15c,
            0xe5c,0xf55,0xc5f,0xd56,0xa5a,0xb53,0x859,0x950,
            0x7c0,0x6c9,0x5c3,0x4ca,0x3c6,0x2cf,0x1c5,0xcc ,
            0xfcc,0xec5,0xdcf,0xcc6,0xbca,0xac3,0x9c9,0x8c0,
            0x8c0,0x9c9,0xac3,0xbca,0xcc6,0xdcf,0xec5,0xfcc,
            0xcc ,0x1c5,0x2cf,0x3c6,0x4ca,0x5c3,0x6c9,0x7c0,
            0x950,0x859,0xb53,0xa5a,0xd56,0xc5f,0xf55,0xe5c,
            0x15c,0x55 ,0x35f,0x256,0x55a,0x453,0x759,0x650,
            0xaf0,0xbf9,0x8f3,0x9fa,0xef6,0xfff,0xcf5,0xdfc,
            0x2fc,0x3f5,0xff ,0x1f6,0x6fa,0x7f3,0x4f9,0x5f0,
            0xb60,0xa69,0x963,0x86a,0xf66,0xe6f,0xd65,0xc6c,
            0x36c,0x265,0x16f,0x66 ,0x76a,0x663,0x569,0x460,
            0xca0,0xda9,0xea3,0xfaa,0x8a6,0x9af,0xaa5,0xbac,
            0x4ac,0x5a5,0x6af,0x7a6,0xaa ,0x1a3,0x2a9,0x3a0,
            0xd30,0xc39,0xf33,0xe3a,0x936,0x83f,0xb35,0xa3c,
            0x53c,0x435,0x73f,0x636,0x13a,0x33 ,0x339,0x230,
            0xe90,0xf99,0xc93,0xd9a,0xa96,0xb9f,0x895,0x99c,
            0x69c,0x795,0x49f,0x596,0x29a,0x393,0x99 ,0x190,
            0xf00,0xe09,0xd03,0xc0a,0xb06,0xa0f,0x905,0x80c,
            0x70c,0x605,0x50f,0x406,0x30a,0x203,0x109,0x0
        });
        #region TriangleTable
        internal static readonly ReadOnlyCollection<int[]>TriangleTable=new ReadOnlyCollection<int[]>(new int[256][]{
            new int[16]{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 0, 8, 3,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 0, 1, 9,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 1, 8, 3, 9, 8, 1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 1, 2,10,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 0, 8, 3, 1, 2,10,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 9, 2,10, 0, 2, 9,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 2, 8, 3, 2,10, 8,10, 9, 8,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 3,11, 2,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 0,11, 2, 8,11, 0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 1, 9, 0, 2, 3,11,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 1,11, 2, 1, 9,11, 9, 8,11,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 3,10, 1,11,10, 3,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 0,10, 1, 0, 8,10, 8,11,10,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 3, 9, 0, 3,11, 9,11,10, 9,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 9, 8,10,10, 8,11,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 4, 7, 8,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 4, 3, 0, 7, 3, 4,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 0, 1, 9, 8, 4, 7,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 4, 1, 9, 4, 7, 1, 7, 3, 1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 1, 2,10, 8, 4, 7,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 3, 4, 7, 3, 0, 4, 1, 2,10,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 9, 2,10, 9, 0, 2, 8, 4, 7,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 2,10, 9, 2, 9, 7, 2, 7, 3, 7, 9, 4,-1,-1,-1,-1},
            new int[16]{ 8, 4, 7, 3,11, 2,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{11, 4, 7,11, 2, 4, 2, 0, 4,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 9, 0, 1, 8, 4, 7, 2, 3,11,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 4, 7,11, 9, 4,11, 9,11, 2, 9, 2, 1,-1,-1,-1,-1},
            new int[16]{ 3,10, 1, 3,11,10, 7, 8, 4,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 1,11,10, 1, 4,11, 1, 0, 4, 7,11, 4,-1,-1,-1,-1},
            new int[16]{ 4, 7, 8, 9, 0,11, 9,11,10,11, 0, 3,-1,-1,-1,-1},
            new int[16]{ 4, 7,11, 4,11, 9, 9,11,10,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 9, 5, 4,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 9, 5, 4, 0, 8, 3,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 0, 5, 4, 1, 5, 0,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 8, 5, 4, 8, 3, 5, 3, 1, 5,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 1, 2,10, 9, 5, 4,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 3, 0, 8, 1, 2,10, 4, 9, 5,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 5, 2,10, 5, 4, 2, 4, 0, 2,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 2,10, 5, 3, 2, 5, 3, 5, 4, 3, 4, 8,-1,-1,-1,-1},
            new int[16]{ 9, 5, 4, 2, 3,11,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 0,11, 2, 0, 8,11, 4, 9, 5,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 0, 5, 4, 0, 1, 5, 2, 3,11,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 2, 1, 5, 2, 5, 8, 2, 8,11, 4, 8, 5,-1,-1,-1,-1},
            new int[16]{10, 3,11,10, 1, 3, 9, 5, 4,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 4, 9, 5, 0, 8, 1, 8,10, 1, 8,11,10,-1,-1,-1,-1},
            new int[16]{ 5, 4, 0, 5, 0,11, 5,11,10,11, 0, 3,-1,-1,-1,-1},
            new int[16]{ 5, 4, 8, 5, 8,10,10, 8,11,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 9, 7, 8, 5, 7, 9,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 9, 3, 0, 9, 5, 3, 5, 7, 3,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 0, 7, 8, 0, 1, 7, 1, 5, 7,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 1, 5, 3, 3, 5, 7,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 9, 7, 8, 9, 5, 7,10, 1, 2,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{10, 1, 2, 9, 5, 0, 5, 3, 0, 5, 7, 3,-1,-1,-1,-1},
            new int[16]{ 8, 0, 2, 8, 2, 5, 8, 5, 7,10, 5, 2,-1,-1,-1,-1},
            new int[16]{ 2,10, 5, 2, 5, 3, 3, 5, 7,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 7, 9, 5, 7, 8, 9, 3,11, 2,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 9, 5, 7, 9, 7, 2, 9, 2, 0, 2, 7,11,-1,-1,-1,-1},
            new int[16]{ 2, 3,11, 0, 1, 8, 1, 7, 8, 1, 5, 7,-1,-1,-1,-1},
            new int[16]{11, 2, 1,11, 1, 7, 7, 1, 5,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 9, 5, 8, 8, 5, 7,10, 1, 3,10, 3,11,-1,-1,-1,-1},
            new int[16]{ 5, 7, 0, 5, 0, 9, 7,11, 0, 1, 0,10,11,10, 0,-1},
            new int[16]{11,10, 0,11, 0, 3,10, 5, 0, 8, 0, 7, 5, 7, 0,-1},
            new int[16]{11,10, 5, 7,11, 5,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{10, 6, 5,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 0, 8, 3, 5,10, 6,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 9, 0, 1, 5,10, 6,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 1, 8, 3, 1, 9, 8, 5,10, 6,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 1, 6, 5, 2, 6, 1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 1, 6, 5, 1, 2, 6, 3, 0, 8,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 9, 6, 5, 9, 0, 6, 0, 2, 6,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 5, 9, 8, 5, 8, 2, 5, 2, 6, 3, 2, 8,-1,-1,-1,-1},
            new int[16]{ 2, 3,11,10, 6, 5,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{11, 0, 8,11, 2, 0,10, 6, 5,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 0, 1, 9, 2, 3,11, 5,10, 6,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 5,10, 6, 1, 9, 2, 9,11, 2, 9, 8,11,-1,-1,-1,-1},
            new int[16]{ 6, 3,11, 6, 5, 3, 5, 1, 3,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 0, 8,11, 0,11, 5, 0, 5, 1, 5,11, 6,-1,-1,-1,-1},
            new int[16]{ 3,11, 6, 0, 3, 6, 0, 6, 5, 0, 5, 9,-1,-1,-1,-1},
            new int[16]{ 6, 5, 9, 6, 9,11,11, 9, 8,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 5,10, 6, 4, 7, 8,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 4, 3, 0, 4, 7, 3, 6, 5,10,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 1, 9, 0, 5,10, 6, 8, 4, 7,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{10, 6, 5, 1, 9, 7, 1, 7, 3, 7, 9, 4,-1,-1,-1,-1},
            new int[16]{ 6, 1, 2, 6, 5, 1, 4, 7, 8,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 1, 2, 5, 5, 2, 6, 3, 0, 4, 3, 4, 7,-1,-1,-1,-1},
            new int[16]{ 8, 4, 7, 9, 0, 5, 0, 6, 5, 0, 2, 6,-1,-1,-1,-1},
            new int[16]{ 7, 3, 9, 7, 9, 4, 3, 2, 9, 5, 9, 6, 2, 6, 9,-1},
            new int[16]{ 3,11, 2, 7, 8, 4,10, 6, 5,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 5,10, 6, 4, 7, 2, 4, 2, 0, 2, 7,11,-1,-1,-1,-1},
            new int[16]{ 0, 1, 9, 4, 7, 8, 2, 3,11, 5,10, 6,-1,-1,-1,-1},
            new int[16]{ 9, 2, 1, 9,11, 2, 9, 4,11, 7,11, 4, 5,10, 6,-1},
            new int[16]{ 8, 4, 7, 3,11, 5, 3, 5, 1, 5,11, 6,-1,-1,-1,-1},
            new int[16]{ 5, 1,11, 5,11, 6, 1, 0,11, 7,11, 4, 0, 4,11,-1},
            new int[16]{ 0, 5, 9, 0, 6, 5, 0, 3, 6,11, 6, 3, 8, 4, 7,-1},
            new int[16]{ 6, 5, 9, 6, 9,11, 4, 7, 9, 7,11, 9,-1,-1,-1,-1},
            new int[16]{10, 4, 9, 6, 4,10,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 4,10, 6, 4, 9,10, 0, 8, 3,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{10, 0, 1,10, 6, 0, 6, 4, 0,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 8, 3, 1, 8, 1, 6, 8, 6, 4, 6, 1,10,-1,-1,-1,-1},
            new int[16]{ 1, 4, 9, 1, 2, 4, 2, 6, 4,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 3, 0, 8, 1, 2, 9, 2, 4, 9, 2, 6, 4,-1,-1,-1,-1},
            new int[16]{ 0, 2, 4, 4, 2, 6,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 8, 3, 2, 8, 2, 4, 4, 2, 6,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{10, 4, 9,10, 6, 4,11, 2, 3,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 0, 8, 2, 2, 8,11, 4, 9,10, 4,10, 6,-1,-1,-1,-1},
            new int[16]{ 3,11, 2, 0, 1, 6, 0, 6, 4, 6, 1,10,-1,-1,-1,-1},
            new int[16]{ 6, 4, 1, 6, 1,10, 4, 8, 1, 2, 1,11, 8,11, 1,-1},
            new int[16]{ 9, 6, 4, 9, 3, 6, 9, 1, 3,11, 6, 3,-1,-1,-1,-1},
            new int[16]{ 8,11, 1, 8, 1, 0,11, 6, 1, 9, 1, 4, 6, 4, 1,-1},
            new int[16]{ 3,11, 6, 3, 6, 0, 0, 6, 4,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 6, 4, 8,11, 6, 8,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 7,10, 6, 7, 8,10, 8, 9,10,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 0, 7, 3, 0,10, 7, 0, 9,10, 6, 7,10,-1,-1,-1,-1},
            new int[16]{10, 6, 7, 1,10, 7, 1, 7, 8, 1, 8, 0,-1,-1,-1,-1},
            new int[16]{10, 6, 7,10, 7, 1, 1, 7, 3,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 1, 2, 6, 1, 6, 8, 1, 8, 9, 8, 6, 7,-1,-1,-1,-1},
            new int[16]{ 2, 6, 9, 2, 9, 1, 6, 7, 9, 0, 9, 3, 7, 3, 9,-1},
            new int[16]{ 7, 8, 0, 7, 0, 6, 6, 0, 2,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 7, 3, 2, 6, 7, 2,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 2, 3,11,10, 6, 8,10, 8, 9, 8, 6, 7,-1,-1,-1,-1},
            new int[16]{ 2, 0, 7, 2, 7,11, 0, 9, 7, 6, 7,10, 9,10, 7,-1},
            new int[16]{ 1, 8, 0, 1, 7, 8, 1,10, 7, 6, 7,10, 2, 3,11,-1},
            new int[16]{11, 2, 1,11, 1, 7,10, 6, 1, 6, 7, 1,-1,-1,-1,-1},
            new int[16]{ 8, 9, 6, 8, 6, 7, 9, 1, 6,11, 6, 3, 1, 3, 6,-1},
            new int[16]{ 0, 9, 1,11, 6, 7,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 7, 8, 0, 7, 0, 6, 3,11, 0,11, 6, 0,-1,-1,-1,-1},
            new int[16]{ 7,11, 6,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 7, 6,11,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 3, 0, 8,11, 7, 6,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 0, 1, 9,11, 7, 6,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 8, 1, 9, 8, 3, 1,11, 7, 6,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{10, 1, 2, 6,11, 7,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 1, 2,10, 3, 0, 8, 6,11, 7,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 2, 9, 0, 2,10, 9, 6,11, 7,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 6,11, 7, 2,10, 3,10, 8, 3,10, 9, 8,-1,-1,-1,-1},
            new int[16]{ 7, 2, 3, 6, 2, 7,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 7, 0, 8, 7, 6, 0, 6, 2, 0,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 2, 7, 6, 2, 3, 7, 0, 1, 9,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 1, 6, 2, 1, 8, 6, 1, 9, 8, 8, 7, 6,-1,-1,-1,-1},
            new int[16]{10, 7, 6,10, 1, 7, 1, 3, 7,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{10, 7, 6, 1, 7,10, 1, 8, 7, 1, 0, 8,-1,-1,-1,-1},
            new int[16]{ 0, 3, 7, 0, 7,10, 0,10, 9, 6,10, 7,-1,-1,-1,-1},
            new int[16]{ 7, 6,10, 7,10, 8, 8,10, 9,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 6, 8, 4,11, 8, 6,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 3, 6,11, 3, 0, 6, 0, 4, 6,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 8, 6,11, 8, 4, 6, 9, 0, 1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 9, 4, 6, 9, 6, 3, 9, 3, 1,11, 3, 6,-1,-1,-1,-1},
            new int[16]{ 6, 8, 4, 6,11, 8, 2,10, 1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 1, 2,10, 3, 0,11, 0, 6,11, 0, 4, 6,-1,-1,-1,-1},
            new int[16]{ 4,11, 8, 4, 6,11, 0, 2, 9, 2,10, 9,-1,-1,-1,-1},
            new int[16]{10, 9, 3,10, 3, 2, 9, 4, 3,11, 3, 6, 4, 6, 3,-1},
            new int[16]{ 8, 2, 3, 8, 4, 2, 4, 6, 2,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 0, 4, 2, 4, 6, 2,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 1, 9, 0, 2, 3, 4, 2, 4, 6, 4, 3, 8,-1,-1,-1,-1},
            new int[16]{ 1, 9, 4, 1, 4, 2, 2, 4, 6,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 8, 1, 3, 8, 6, 1, 8, 4, 6, 6,10, 1,-1,-1,-1,-1},
            new int[16]{10, 1, 0,10, 0, 6, 6, 0, 4,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 4, 6, 3, 4, 3, 8, 6,10, 3, 0, 3, 9,10, 9, 3,-1},
            new int[16]{10, 9, 4, 6,10, 4,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 4, 9, 5, 7, 6,11,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 0, 8, 3, 4, 9, 5,11, 7, 6,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 5, 0, 1, 5, 4, 0, 7, 6,11,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{11, 7, 6, 8, 3, 4, 3, 5, 4, 3, 1, 5,-1,-1,-1,-1},
            new int[16]{ 9, 5, 4,10, 1, 2, 7, 6,11,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 6,11, 7, 1, 2,10, 0, 8, 3, 4, 9, 5,-1,-1,-1,-1},
            new int[16]{ 7, 6,11, 5, 4,10, 4, 2,10, 4, 0, 2,-1,-1,-1,-1},
            new int[16]{ 3, 4, 8, 3, 5, 4, 3, 2, 5,10, 5, 2,11, 7, 6,-1},
            new int[16]{ 7, 2, 3, 7, 6, 2, 5, 4, 9,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 9, 5, 4, 0, 8, 6, 0, 6, 2, 6, 8, 7,-1,-1,-1,-1},
            new int[16]{ 3, 6, 2, 3, 7, 6, 1, 5, 0, 5, 4, 0,-1,-1,-1,-1},
            new int[16]{ 6, 2, 8, 6, 8, 7, 2, 1, 8, 4, 8, 5, 1, 5, 8,-1},
            new int[16]{ 9, 5, 4,10, 1, 6, 1, 7, 6, 1, 3, 7,-1,-1,-1,-1},
            new int[16]{ 1, 6,10, 1, 7, 6, 1, 0, 7, 8, 7, 0, 9, 5, 4,-1},
            new int[16]{ 4, 0,10, 4,10, 5, 0, 3,10, 6,10, 7, 3, 7,10,-1},
            new int[16]{ 7, 6,10, 7,10, 8, 5, 4,10, 4, 8,10,-1,-1,-1,-1},
            new int[16]{ 6, 9, 5, 6,11, 9,11, 8, 9,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 3, 6,11, 0, 6, 3, 0, 5, 6, 0, 9, 5,-1,-1,-1,-1},
            new int[16]{ 0,11, 8, 0, 5,11, 0, 1, 5, 5, 6,11,-1,-1,-1,-1},
            new int[16]{ 6,11, 3, 6, 3, 5, 5, 3, 1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 1, 2,10, 9, 5,11, 9,11, 8,11, 5, 6,-1,-1,-1,-1},
            new int[16]{ 0,11, 3, 0, 6,11, 0, 9, 6, 5, 6, 9, 1, 2,10,-1},
            new int[16]{11, 8, 5,11, 5, 6, 8, 0, 5,10, 5, 2, 0, 2, 5,-1},
            new int[16]{ 6,11, 3, 6, 3, 5, 2,10, 3,10, 5, 3,-1,-1,-1,-1},
            new int[16]{ 5, 8, 9, 5, 2, 8, 5, 6, 2, 3, 8, 2,-1,-1,-1,-1},
            new int[16]{ 9, 5, 6, 9, 6, 0, 0, 6, 2,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 1, 5, 8, 1, 8, 0, 5, 6, 8, 3, 8, 2, 6, 2, 8,-1},
            new int[16]{ 1, 5, 6, 2, 1, 6,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 1, 3, 6, 1, 6,10, 3, 8, 6, 5, 6, 9, 8, 9, 6,-1},
            new int[16]{10, 1, 0,10, 0, 6, 9, 5, 0, 5, 6, 0,-1,-1,-1,-1},
            new int[16]{ 0, 3, 8, 5, 6,10,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{10, 5, 6,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{11, 5,10, 7, 5,11,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{11, 5,10,11, 7, 5, 8, 3, 0,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 5,11, 7, 5,10,11, 1, 9, 0,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{10, 7, 5,10,11, 7, 9, 8, 1, 8, 3, 1,-1,-1,-1,-1},
            new int[16]{11, 1, 2,11, 7, 1, 7, 5, 1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 0, 8, 3, 1, 2, 7, 1, 7, 5, 7, 2,11,-1,-1,-1,-1},
            new int[16]{ 9, 7, 5, 9, 2, 7, 9, 0, 2, 2,11, 7,-1,-1,-1,-1},
            new int[16]{ 7, 5, 2, 7, 2,11, 5, 9, 2, 3, 2, 8, 9, 8, 2,-1},
            new int[16]{ 2, 5,10, 2, 3, 5, 3, 7, 5,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 8, 2, 0, 8, 5, 2, 8, 7, 5,10, 2, 5,-1,-1,-1,-1},
            new int[16]{ 9, 0, 1, 5,10, 3, 5, 3, 7, 3,10, 2,-1,-1,-1,-1},
            new int[16]{ 9, 8, 2, 9, 2, 1, 8, 7, 2,10, 2, 5, 7, 5, 2,-1},
            new int[16]{ 1, 3, 5, 3, 7, 5,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 0, 8, 7, 0, 7, 1, 1, 7, 5,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 9, 0, 3, 9, 3, 5, 5, 3, 7,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 9, 8, 7, 5, 9, 7,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 5, 8, 4, 5,10, 8,10,11, 8,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 5, 0, 4, 5,11, 0, 5,10,11,11, 3, 0,-1,-1,-1,-1},
            new int[16]{ 0, 1, 9, 8, 4,10, 8,10,11,10, 4, 5,-1,-1,-1,-1},
            new int[16]{10,11, 4,10, 4, 5,11, 3, 4, 9, 4, 1, 3, 1, 4,-1},
            new int[16]{ 2, 5, 1, 2, 8, 5, 2,11, 8, 4, 5, 8,-1,-1,-1,-1},
            new int[16]{ 0, 4,11, 0,11, 3, 4, 5,11, 2,11, 1, 5, 1,11,-1},
            new int[16]{ 0, 2, 5, 0, 5, 9, 2,11, 5, 4, 5, 8,11, 8, 5,-1},
            new int[16]{ 9, 4, 5, 2,11, 3,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 2, 5,10, 3, 5, 2, 3, 4, 5, 3, 8, 4,-1,-1,-1,-1},
            new int[16]{ 5,10, 2, 5, 2, 4, 4, 2, 0,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 3,10, 2, 3, 5,10, 3, 8, 5, 4, 5, 8, 0, 1, 9,-1},
            new int[16]{ 5,10, 2, 5, 2, 4, 1, 9, 2, 9, 4, 2,-1,-1,-1,-1},
            new int[16]{ 8, 4, 5, 8, 5, 3, 3, 5, 1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 0, 4, 5, 1, 0, 5,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 8, 4, 5, 8, 5, 3, 9, 0, 5, 0, 3, 5,-1,-1,-1,-1},
            new int[16]{ 9, 4, 5,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 4,11, 7, 4, 9,11, 9,10,11,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 0, 8, 3, 4, 9, 7, 9,11, 7, 9,10,11,-1,-1,-1,-1},
            new int[16]{ 1,10,11, 1,11, 4, 1, 4, 0, 7, 4,11,-1,-1,-1,-1},
            new int[16]{ 3, 1, 4, 3, 4, 8, 1,10, 4, 7, 4,11,10,11, 4,-1},
            new int[16]{ 4,11, 7, 9,11, 4, 9, 2,11, 9, 1, 2,-1,-1,-1,-1},
            new int[16]{ 9, 7, 4, 9,11, 7, 9, 1,11, 2,11, 1, 0, 8, 3,-1},
            new int[16]{11, 7, 4,11, 4, 2, 2, 4, 0,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{11, 7, 4,11, 4, 2, 8, 3, 4, 3, 2, 4,-1,-1,-1,-1},
            new int[16]{ 2, 9,10, 2, 7, 9, 2, 3, 7, 7, 4, 9,-1,-1,-1,-1},
            new int[16]{ 9,10, 7, 9, 7, 4,10, 2, 7, 8, 7, 0, 2, 0, 7,-1},
            new int[16]{ 3, 7,10, 3,10, 2, 7, 4,10, 1,10, 0, 4, 0,10,-1},
            new int[16]{ 1,10, 2, 8, 7, 4,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 4, 9, 1, 4, 1, 7, 7, 1, 3,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 4, 9, 1, 4, 1, 7, 0, 8, 1, 8, 7, 1,-1,-1,-1,-1},
            new int[16]{ 4, 0, 3, 7, 4, 3,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 4, 8, 7,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 9,10, 8,10,11, 8,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 3, 0, 9, 3, 9,11,11, 9,10,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 0, 1,10, 0,10, 8, 8,10,11,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 3, 1,10,11, 3,10,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 1, 2,11, 1,11, 9, 9,11, 8,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 3, 0, 9, 3, 9,11, 1, 2, 9, 2,11, 9,-1,-1,-1,-1},
            new int[16]{ 0, 2,11, 8, 0,11,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 3, 2,11,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 2, 3, 8, 2, 8,10,10, 8, 9,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 9,10, 2, 0, 9, 2,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 2, 3, 8, 2, 8,10, 0, 1, 8, 1,10, 8,-1,-1,-1,-1},
            new int[16]{ 1,10, 2,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 1, 3, 8, 9, 1, 8,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 0, 9, 1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{ 0, 3, 8,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},
            new int[16]{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}
        });
        #endregion
    }
}