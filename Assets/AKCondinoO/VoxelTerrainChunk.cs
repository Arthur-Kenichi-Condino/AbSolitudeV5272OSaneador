using AKCondinoO.Sims;
using AKCondinoO.Sims.Trees;
using LibNoise;
using LibNoise.Generator;
using LibNoise.Operator;
using MessagePack;
using paulbourke.MarchingCubes;
using System;
using System.Collections;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices;
using Unity.Collections;
using Unity.Jobs;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.Rendering;
using static AKCondinoO.Voxels.VoxelTerrain;
using static AKCondinoO.Voxels.VoxelTerrainChunk;
using static AKCondinoO.Voxels.VoxelTerrainChunk.MarchingCubesBackgroundContainer;
using static AKCondinoO.Voxels.VoxelWaterChunk;
using static AKCondinoO.Voxels.VoxelWaterChunk.WaterMarchingCubesBackgroundContainer;

namespace AKCondinoO.Voxels{
 internal class VoxelTerrainChunk:MonoBehaviour{
    internal readonly object syn=new object();        

    internal const ushort Height=(256);
    internal const ushort Width=(16);
    internal const ushort Depth=(16);
    internal const ushort FlattenOffset=(Width*Depth);
    internal const int VoxelsPerChunk=(FlattenOffset*Height);
  
    internal static int GetoftIdx(Vector2Int offset){//  ..for neighbors
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
      static readonly VertexAttributeDescriptor[]wlayout=new[]{
       new VertexAttributeDescriptor(VertexAttribute.Position ,VertexAttributeFormat.Float32,3),
       new VertexAttributeDescriptor(VertexAttribute.Normal   ,VertexAttributeFormat.Float32,3),
      };

     MeshUpdateFlags meshFlags=MeshUpdateFlags.DontValidateIndices|MeshUpdateFlags.DontNotifyMeshUsers|MeshUpdateFlags.DontRecalculateBounds|MeshUpdateFlags.DontResetBoneBounds;
      MeshUpdateFlags wmeshFlags=MeshUpdateFlags.DontValidateIndices|MeshUpdateFlags.DontNotifyMeshUsers|MeshUpdateFlags.DontRecalculateBounds|MeshUpdateFlags.DontResetBoneBounds;
        
     internal Mesh mesh;
      internal Mesh wmesh;

    #endregion

    internal Bounds worldBounds;
        
    [SerializeField]internal GameObject waterGameObject;
        
    internal readonly VoxelWaterChunk water_bg=new VoxelWaterChunk();

    internal new MeshRenderer renderer;
    internal new MeshCollider collider;

    MeshFilter filter;
     MeshFilter wfilter;

    #region Marching Cubes
    internal MarchingCubesBackgroundContainer marchingCubesBG;
    internal class MarchingCubesBackgroundContainer:BackgroundContainer{
     internal readonly object syn_bg;

    internal readonly(bool hasDensity,MaterialId material)[]voxels_bg=new(bool hasDensity,MaterialId material)[VoxelsPerChunk];

    internal readonly Dictionary<int,(bool hasDensity,MaterialId material)>[]neighbors_bg=new Dictionary<int,(bool,MaterialId)>[8];

     internal MarchingCubesBackgroundContainer(object syn){
      syn_bg=syn;

      for(int i=0;i<neighbors_bg.Length;++i){
       neighbors_bg[i]=new Dictionary<int,(bool hasDensity,MaterialId material)>();
      }
     }

     internal ExecutionMode executionMode_bg=ExecutionMode.terrain;
     internal enum ExecutionMode{
      terrain,
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

     internal static Vector3 trianglePosAdj{get;}=new Vector3((Width/2.0f)-0.5f,(Height/2.0f)-0.5f,(Depth/2.0f)-0.5f);

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
      if      (current.executionMode_bg==MarchingCubesBackgroundContainer.ExecutionMode.terrain){
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
           for(int x=-1;x<=1;x++){
           for(int z=-1;z<=1;z++){
            if(x==0&&z==0){
             continue;
            }
            Vector2Int nCoord1=current.cCoord_bg;
                       nCoord1.x+=x;
                       nCoord1.y+=z;
            if(Math.Abs(nCoord1.x)>=MaxcCoordx||
               Math.Abs(nCoord1.y)>=MaxcCoordy){
             continue;
            }
            int ngbIdx1=GetcnkIdx(nCoord1.x,nCoord1.y);
            editsFile=string.Format("{0}{1}/{2}",Core.perChunkSavePath,ngbIdx1,"edits.MessagePackSerializer");
            int oftIdx1=GetoftIdx(nCoord1-current.cCoord_bg)-1;
            if(File.Exists(editsFile)){
             using(var file=new FileStream(editsFile,FileMode.Open,FileAccess.Read,FileShare.Read)){
              Dictionary<Vector3Int,(double density,MaterialId materialId)>fromFileVoxels=(Dictionary<Vector3Int,(double density,MaterialId materialId)>)MessagePackSerializer.Deserialize(typeof(Dictionary<Vector3Int,(double density,MaterialId materialId)>),file);
              foreach(var voxelData in fromFileVoxels){
               neighbors[oftIdx1][GetvxlIdx(voxelData.Key.x,voxelData.Key.y,voxelData.Key.z)]=new Voxel(voxelData.Value.density,Vector3.zero,voxelData.Value.materialId);
              }
             }
            }
           }}
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
            Array.Clear(vertices,0,vertices.Length);
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
             if(p!=Vector3.zero){goto _Normal;}
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

          for(int i=0;i<voxels.Length;++i){var voxel=voxels[i];
           current.voxels_bg[i]=(-voxel.Density<IsoLevel,voxel.Material);
          }

          for(int i=0;i<neighbors.Length;++i){
           current.neighbors_bg[i].Clear();
           foreach(var item in neighbors[i]){
            current.neighbors_bg[i][item.Key]=(-item.Value.Density<IsoLevel,item.Value.Material);
           }
          }

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

        treeChancePerlin=new Perlin(frequency:Mathf.Pow(2,-2),lacunarity:2.0,persistence:0.5,octaves:6,seed:seed_v,quality:QualityMode.Low);

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
       internal float chance=1f;
       internal float verticalRotationFactor=1f;
       internal Vector3 minScale=Vector3.one;
       internal Vector3 maxScale=Vector3.one;
       internal float rootsDepth=1f;
       internal Vector3 spacing=Vector3.one;
       internal Vector3 spacingAll=Vector3.one;
      }

      readonly protected Dictionary<Type,TreeData[]>treesData=new Dictionary<Type,TreeData[]>(){
       {
        typeof(Pinus_elliottii),
        new TreeData[]{
         new TreeData{
          chance=.125f,
          verticalRotationFactor=.125f,
          minScale=Vector3.one*.5f,
          maxScale=Vector3.one*1.5f,
          rootsDepth=1.2f,
          spacing=Vector3.one*2.4f*2f,
          spacingAll=Vector3.one*1.2f*2f,
         },
        }
       },
       {
        typeof(Betula_occidentalis),
        new TreeData[]{
         new TreeData{
          chance=.2f,
          verticalRotationFactor=.125f,
          minScale=Vector3.one*.5f,
          maxScale=Vector3.one*1.5f,
          rootsDepth=.25f,
          spacing=Vector3.one*1.0f*2f,
          spacingAll=Vector3.one*1.0f*2f,
         },
        }
       },
      };

      readonly protected Dictionary<int,Type[]>treePicking=new Dictionary<int,Type[]>{
       {
        1,
        new Type[]{
         typeof(Pinus_elliottii),
         typeof(Betula_occidentalis),
        }
       },
      };

      protected Perlin treeChancePerlin;

      internal (Type tree,TreeData treeData)?Tree(Vector3Int noiseInputRounded){
                                          Vector3 noiseInput=noiseInputRounded+deround;
       if(treePicking.TryGetValue(Select(noiseInput),out Type[]treesPicked)){
        //  To do: random chance to use tree selected
        foreach(Type tree in treesPicked){TreeData treeData=treesData[tree][0];
         float chance=treeData.chance/treesPicked.Length;
         float dicing=((float)treeChancePerlin.GetValue(noiseInput.z,noiseInput.x,0)+1f)/2f;
         //Debug.Log("dicing:"+dicing+" of chance:"+chance+"; result:"+(dicing<=chance));
         if(dicing<=chance){
          return(tree,treeData);
         }
        }
       }
       return null;
      }

      internal struct TreeModifiersResults{
       internal float rotation;
       internal Vector3 scale;
      }

      internal virtual TreeModifiersResults TreeModifiers(Vector3Int noiseInputRounded,TreeData treeData,Perlin treeRotationModifierPerlin,Perlin treeScaleModifierPerlin){
                                                  Vector3 noiseInput=noiseInputRounded+deround;
       float rotation=(float)treeRotationModifierPerlin.GetValue(noiseInput.z,noiseInput.x,0)*720f;
       Vector3 scale=Vector3.Lerp(treeData.minScale,treeData.maxScale,Mathf.Clamp01(((float)treeScaleModifierPerlin.GetValue(noiseInput.z,noiseInput.x,0)+1f)/2f));
       return new TreeModifiersResults{
        rotation=rotation,
        scale=scale,
       };
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
        
    internal VoxelWaterChunk.WaterMarchingCubesBackgroundContainer wmarchingCubesBG;

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
     internal TreesBackgroundContainer(){
      treeRotationModifierPerlin_bg=new Perlin(frequency:Mathf.Pow(2,-.25f),lacunarity:3.5,persistence:0.8,octaves:6,seed:0,quality:QualityMode.Low);
       treeScaleModifierPerlin_bg  =new Perlin(frequency:Mathf.Pow(2,-.5f ),lacunarity:3.5,persistence:0.8,octaves:6,seed:0,quality:QualityMode.Low);
     }

     internal ExecutionMode executionMode_bg=ExecutionMode._1;
     internal enum ExecutionMode{
      _1,
      _2,
      _3,
     }

     internal Vector2Int cCoord_bg;
     internal Vector2Int cnkRgn_bg;
     internal        int cnkIdx_bg;

     internal NativeList<RaycastCommand>GetGroundRays;
     internal NativeList<RaycastHit    >GetGroundHits;

            internal readonly List<(int x,int z)>gotGroundRays_bg=new List<(int,int)>();
     internal readonly Dictionary<int,RaycastHit>gotGroundHits_bg=new Dictionary<int,RaycastHit>(Width*Depth);
                
     internal Perlin treeRotationModifierPerlin_bg;
     internal Perlin  treeScaleModifierPerlin_bg;

     internal readonly Dictionary<(int x,int z),(Type tree,MarchingCubesMultithreaded.BaseBiome.TreeData treeData)>treeAt_bg=new Dictionary<(int,int),(Type,MarchingCubesMultithreaded.BaseBiome.TreeData)>();
      internal readonly Dictionary<(int x,int z),MarchingCubesMultithreaded.BaseBiome.TreeModifiersResults>treeModifiers_bg=new Dictionary<(int,int),MarchingCubesMultithreaded.BaseBiome.TreeModifiersResults>();

     internal readonly SimObjectSpawner.SpawnData toSpawn_bg=new SimObjectSpawner.SpawnData(Width*Depth);

     internal bool findPositionsCoroutineIdleWaiting=true;

     internal bool findPositionsCoroutineBeginFlag;

     JobHandle doRaycastsHandle;

     bool step1;
     bool step2;
     bool step3;
     bool step4;
     bool step5;
     bool step6;
     internal void FindPositionsManualRoutine(){

      if(step6){
       if(this.IsCompleted(VoxelTerrain.Singleton.addTreesBGThreads[0].IsRunning)){
        step6=false;

        findPositionsCoroutineIdleWaiting=true;
       }
 
      }else{
       if(step5){
        if(toSpawn_bg.dequeued){
         step5=false;
 
         executionMode_bg=ExecutionMode._3;
         TreesMultithreaded.Schedule(this);
 
         step6=true;
        }
 
       }else{
        if(step4){
         if(this.IsCompleted(VoxelTerrain.Singleton.addTreesBGThreads[0].IsRunning)){                   
          step4=false;
  
          SimObjectSpawner.Singleton.SpawnQueue.Enqueue(toSpawn_bg);
  
          step5=true;
         } 
  
        }else{
         if(step3){
          if(doRaycastsHandle.IsCompleted){
           doRaycastsHandle.Complete();
           step3=false;
   
           Vector3Int vCoord1=new Vector3Int(0,0,0);
           int i=0;
           for(vCoord1.x=0             ;vCoord1.x<Width;vCoord1.x++){
           for(vCoord1.z=0             ;vCoord1.z<Depth;vCoord1.z++){
            if(gotGroundRays_bg.Contains((vCoord1.x,vCoord1.z))){
             RaycastHit hit=GetGroundHits[i++];
             if(hit.collider!=null){
              int index=vCoord1.z+vCoord1.x*Depth;
              gotGroundHits_bg.Add(index,hit);
                                            
              //Debug.DrawRay(GetGroundHits[i-1].point,(GetGroundRays[i-1].from-GetGroundHits[i-1].point).normalized,Color.white,5f);
    
             }
            }
           }}
   
           executionMode_bg=ExecutionMode._2;
           TreesMultithreaded.Schedule(this);
   
           step4=true;
          }
   
         }else{
          if(step2){
           if(this.IsCompleted(VoxelTerrain.Singleton.addTreesBGThreads[0].IsRunning)){
            step2=false;
   
            doRaycastsHandle=RaycastCommand.ScheduleBatch(GetGroundRays,GetGroundHits,1,default(JobHandle));
    
            step3=true;
           }
    
          }else{
           if(step1){
            step1=false;
    
            executionMode_bg=ExecutionMode._1;
            TreesMultithreaded.Schedule(this);
    
            step2=true;
     
           }else{
            //Debug.Log("FindPositionsCoroutine():begin flag was set true:"+cnkRgn_bg);
      
            GetGroundRays.Clear();
            GetGroundHits.Clear();
      
            gotGroundRays_bg.Clear();
            gotGroundHits_bg.Clear();
      
            step1=true;
     
           }
    
          }
   
         }
  
        }
 
       }

      }
 
     }
    }
    internal class TreesMultithreaded:BaseMultithreaded<TreesBackgroundContainer>{

     readonly static object mutex=new object();

                 readonly Dictionary<int,Vector2Int>spacingAllTypes=new Dictionary<int,Vector2Int>();
     readonly Dictionary<(Type type,int z),Vector2Int>spacingOwnTypeOnly=new Dictionary<(Type,int),Vector2Int>();

     protected override void Cleanup(){
       spacingAllTypes.Clear();
      spacingOwnTypeOnly.Clear();
     }

                 readonly List<int>spacingAllTypes_tmpList=new List<int>();
     readonly List<(Type type,int z)>spacingOwnTypeOnly_tmpList=new List<(Type,int)>();
     protected override void Execute(){
      //Debug.Log("TreesMultithreaded:Execute:");
      if      (current.executionMode_bg==TreesBackgroundContainer.ExecutionMode._1){
       //Debug.Log("TreesMultithreaded:Execute:_1:get rays to ground:"+current.cCoord_bg);

       current.treeAt_bg.Clear();

       current.treeModifiers_bg.Clear();

       string treesAddedFile=string.Format("{0}{1}/{2}",Core.perChunkSavePath,current.cnkIdx_bg,"trees.txt");
       lock(mutex){
        if(File.Exists(treesAddedFile)){
         //Debug.Log("TreesMultithreaded:treesAddedFile present:cancel adding trees:"+current.cCoord_bg);
         return;
        }
       }
   
       current.treeRotationModifierPerlin_bg.Seed=current.cnkRgn_bg.x+current.cnkRgn_bg.y;
       current. treeScaleModifierPerlin_bg  .Seed=current.cnkRgn_bg.x+current.cnkRgn_bg.y;

       Vector3Int vCoord1=new Vector3Int(0,Height/2-1,0);

       for(vCoord1.x=0             ;vCoord1.x<Width;vCoord1.x++){

        spacingAllTypes_tmpList.Clear();
        spacingAllTypes_tmpList.AddRange(spacingAllTypes.Keys);
        foreach(var coord in spacingAllTypes_tmpList){Vector2Int spacedAll=spacingAllTypes[coord];
         spacedAll.y=0;
         spacedAll.x--;
         if(spacedAll.x>0){
          spacingAllTypes[coord]=spacedAll;
         }else{
          spacingAllTypes.Remove(coord);
         }
        }

        spacingOwnTypeOnly_tmpList.Clear();
        spacingOwnTypeOnly_tmpList.AddRange(spacingOwnTypeOnly.Keys);
        foreach(var tree in spacingOwnTypeOnly_tmpList){Vector2Int spaced=spacingOwnTypeOnly[tree];
         spaced.y=0;
         spaced.x--;
         if(spaced.x>0){
          spacingOwnTypeOnly[tree]=spaced;
         }else{
          spacingOwnTypeOnly.Remove(tree);
         }
        }

       for(vCoord1.z=0             ;vCoord1.z<Depth;vCoord1.z++){
                            
        spacingAllTypes_tmpList.Clear();
        spacingAllTypes_tmpList.AddRange(spacingAllTypes.Keys);
        foreach(var coord in spacingAllTypes_tmpList){Vector2Int spacedAll=spacingAllTypes[coord];
         if(spacedAll.y>0){
          spacedAll.y--;
          spacingAllTypes[coord]=spacedAll;
         }
        }
        
        spacingOwnTypeOnly_tmpList.Clear();
        spacingOwnTypeOnly_tmpList.AddRange(spacingOwnTypeOnly.Keys);
        foreach(var tree in spacingOwnTypeOnly_tmpList){Vector2Int spaced=spacingOwnTypeOnly[tree];
         if(spaced.y>0){
          spaced.y--;
          spacingOwnTypeOnly[tree]=spaced;
         }
        }

        if(spacingAllTypes.TryGetValue(vCoord1.z,out Vector2Int blockedBySpacedAll)){
         if(blockedBySpacedAll.x>0||
            blockedBySpacedAll.y>0
         ){
          continue;
         }
        }

        Vector3Int noiseInput=vCoord1;noiseInput.x+=current.cnkRgn_bg.x;
                                      noiseInput.z+=current.cnkRgn_bg.y;

        (Type tree,MarchingCubesMultithreaded.BaseBiome.TreeData treeData)?treePicked=MarchingCubesMultithreaded.biome.Tree(noiseInput);
        if(treePicked!=null){

         if(vCoord1.x<treePicked.Value.treeData.spacing.x||
            vCoord1.z<treePicked.Value.treeData.spacing.z
         ){
          continue;
         }

         if(spacingOwnTypeOnly.TryGetValue((treePicked.Value.tree,vCoord1.z),out Vector2Int blockedBySpaced)){
          if(blockedBySpaced.x>0||
             blockedBySpaced.y>0
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
         //Debug.Log("treePicked.Value.tree:"+treePicked.Value.tree);

         MarchingCubesMultithreaded.BaseBiome.TreeModifiersResults modifiers=MarchingCubesMultithreaded.biome.TreeModifiers(noiseInput,treePicked.Value.treeData,current.treeRotationModifierPerlin_bg,current.treeScaleModifierPerlin_bg);

         current.treeModifiers_bg.Add((vCoord1.x,vCoord1.z),modifiers);

         Vector3 spacing=treePicked.Value.treeData.spacing;
                 spacing=Vector3.Scale(spacing,modifiers.scale);
                 spacing.x=Mathf.Max(spacing.x,1f);
                 spacing.y=Mathf.Max(spacing.y,1f);
         //Debug.Log("spacing:"+spacing);

         spacingOwnTypeOnly[(treePicked.Value.tree,vCoord1.z)]=new Vector2Int((int)Math.Ceiling(spacing.x),
                                                                              (int)Math.Ceiling(spacing.z)
         );

         Vector3 spacingAll=treePicked.Value.treeData.spacingAll;
                 spacingAll=Vector3.Scale(spacingAll,modifiers.scale);
                 spacingAll.x=Mathf.Max(spacingAll.x,1f);
                 spacingAll.y=Mathf.Max(spacingAll.y,1f);
         //Debug.Log("spacingAll:"+spacingAll);

         spacingAllTypes[vCoord1.z]=new Vector2Int((int)Math.Ceiling(spacingAll.x),
                                                   (int)Math.Ceiling(spacingAll.z)
         );
        }

       }
       }

      }else if(current.executionMode_bg==TreesBackgroundContainer.ExecutionMode._2){
       //Debug.Log("TreesMultithreaded:Execute:_2:got ground hits:"+current.cCoord_bg);

       //Debug.Log("current.gotGroundHits_bg.Count:"+current.gotGroundHits_bg.Count);
                    
       current.toSpawn_bg.at.Clear();
       current.toSpawn_bg.dequeued=false;

       Vector3Int vCoord1=new Vector3Int(0,Height/2-1,0);
       int i=0;
       for(vCoord1.x=0             ;vCoord1.x<Width;vCoord1.x++){
       for(vCoord1.z=0             ;vCoord1.z<Depth;vCoord1.z++){
        int index=vCoord1.z+vCoord1.x*Depth;
        if(current.gotGroundHits_bg.TryGetValue(index,out RaycastHit floor)){
         (Type tree,MarchingCubesMultithreaded.BaseBiome.TreeData treeData)treeAt=current.treeAt_bg[(vCoord1.x,vCoord1.z)];

         MarchingCubesMultithreaded.BaseBiome.TreeModifiersResults modifiers=current.treeModifiers_bg[(vCoord1.x,vCoord1.z)];

         Quaternion rotation=Quaternion.SlerpUnclamped(Quaternion.identity,Quaternion.FromToRotation(Vector3.up,floor.normal),treeAt.treeData.verticalRotationFactor)*Quaternion.Euler(new Vector3(0f,modifiers.rotation,0f));

         Vector3 position=new Vector3(floor.point.x,floor.point.y-modifiers.scale.y*treeAt.treeData.rootsDepth,floor.point.z)+rotation*(Vector3.down*modifiers.scale.y);

         current.toSpawn_bg.at.Add((position,rotation.eulerAngles,modifiers.scale,treeAt.tree,null));
        }
       }}
   
      }else if(current.executionMode_bg==TreesBackgroundContainer.ExecutionMode._3){
       //Debug.Log("TreesMultithreaded:Execute:_3:save \"done\" file:"+current.cCoord_bg);

       string treesAddedFile=string.Format("{0}{1}/{2}",Core.perChunkSavePath,current.cnkIdx_bg,"trees.txt");
       string treesAddedPath=Path.GetDirectoryName(treesAddedFile).Replace("\\","/");
       Directory.CreateDirectory(treesAddedPath);
       lock(mutex){
        using(var file=new FileStream(treesAddedFile,FileMode.OpenOrCreate,FileAccess.ReadWrite,FileShare.None)){
        }
       }
      }
     }
    }

    void Awake(){
     marchingCubesBG=new MarchingCubesBackgroundContainer(syn);
      wmarchingCubesBG=new VoxelWaterChunk.WaterMarchingCubesBackgroundContainer(water_bg);

     renderer=GetComponent<MeshRenderer>();
     collider=GetComponent<MeshCollider>();
            
     collider.enabled=false;
     renderer.enabled=false;

     mesh=new Mesh(){
      bounds=worldBounds=new Bounds(Vector3.zero,new Vector3(Width,Height,Depth)),
     };
      wmesh=new Mesh(){
       bounds=worldBounds,
      };

     filter=GetComponent<MeshFilter>();
     filter.mesh=mesh;
      wfilter=waterGameObject.GetComponent<MeshFilter>();
      wfilter.mesh=wmesh;

     bakeJob=new BakerJob(){
      meshId=mesh.GetInstanceID(),
     };

     VoxelTerrain.Singleton.navMeshSources[gameObject]=new NavMeshBuildSource{
      transform=transform.localToWorldMatrix,//  Deve ser atualizado sempre que o chunk se move
      shape=NavMeshBuildSourceShape.Mesh,
      sourceObject=mesh,
      component=collider,
      area=0,//  walkable
     };
     VoxelTerrain.Singleton.navMeshMarkups[gameObject]=new NavMeshBuildMarkup{
      root=transform,
      area=0,//  walkable
      overrideArea=false,
      ignoreFromBuild=false,
     };
    }

    internal void OnActivated(){
     //Debug.Log("VoxelTerrainChunk:OnActivated");
     marchingCubesBG.TempVer=new NativeList<Vertex>(Allocator.Persistent);
     marchingCubesBG.TempTri=new NativeList<UInt32>(Allocator.Persistent);
      wmarchingCubesBG.TempWVer=new NativeList<WVertex>(Allocator.Persistent);
      wmarchingCubesBG.TempWTri=new NativeList< UInt32>(Allocator.Persistent);

     addTreesBG.GetGroundRays=new NativeList<RaycastCommand>(Width*Depth,Allocator.Persistent);
     addTreesBG.GetGroundHits=new NativeList<RaycastHit    >(Width*Depth,Allocator.Persistent);
    }

    internal void OnExit(){
     //Debug.Log("VoxelTerrainChunk:OnExit");
     marchingCubesBG.IsCompleted(VoxelTerrain.Singleton.marchingCubesBGThreads[0].IsRunning,-1);
     if(marchingCubesBG.TempVer.IsCreated)marchingCubesBG.TempVer.Dispose();
     if(marchingCubesBG.TempTri.IsCreated)marchingCubesBG.TempTri.Dispose();
      wmarchingCubesBG.IsCompleted(VoxelTerrain.Singleton.wmarchingCubesBGThreads[0].IsRunning,-1);
      if(wmarchingCubesBG.TempWVer.IsCreated)wmarchingCubesBG.TempWVer.Dispose();
      if(wmarchingCubesBG.TempWTri.IsCreated)wmarchingCubesBG.TempWTri.Dispose();

     if(this!=null){
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

    bool keepMeshColliderAssigned;
    internal void OnKeepMeshColliderAssigned(bool state){
     keepMeshColliderAssigned=state;
    }

    internal void OnEdited(){
     rebuildFlag=true;

     rebuildRequired=true;
    }

    internal void OnResumeWater(){
     waterUpdateFlag=true;
    }

    internal void OnPauseWater(){
     //Debug.Log("OnPauseWater");
     waterUpdateFlag=false;
    }

    float waterUpdateInterval=.125f;
     float waterUpdateTimer=0f;
        
    bool waterUpdateFlag;
    bool waterUpdating;
    bool waterUpdateRequested;
    bool addingTrees;
    bool addTreesRequired;
    bool addTreesRequested;
    bool bakingMesh;
    bool bakeRequested;
    bool runningMarchingCubes;
    bool buildRequested;
    bool rebuildFlag;
    bool rebuildRequired;
    bool moveRequired;
    internal bool ManualUpdate(){bool busy=true;
     waterUpdateFlag=waterUpdateFlag||water_bg.HasPendingChanges;
     if(waterUpdateTimer>0f){
      waterUpdateTimer-=Time.deltaTime;
     }
     if(waterUpdating){
      if(waterUpdateRequested&&OnWaterUpdated()){
       waterUpdateRequested=false;
       //Debug.Log("ManualUpdate:water updated:"+cnkRgn);
       waterUpdating=false;
      }

     }else{
      if(addingTrees){
       if(addTreesRequested&&OnAddedTrees()){
        addTreesRequested=false;
        //Debug.Log("ManualUpdate:added trees:they'll be spawned shortly:"+cnkRgn);
        addingTrees=false;
       }else if(addTreesRequired&&OnAddingTrees()){
        addTreesRequired=false;
        //Debug.Log("ManualUpdate:adding trees:find positions:"+cnkRgn);
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
         if(rebuildFlag){
          if(rebuildRequired&&OnRebuild()){
           rebuildRequired=false;
           Debug.Log("ManualUpdate:rebuildRequired:"+cnkRgn);
           rebuildFlag=false;
           OnRebuilding();
          }
 
         }else{
          if(moveRequired&&OnMoving()){
           moveRequired=false;
           //Debug.Log("ManualUpdate:moveRequired:"+cnkRgn);
           OnMoved();
 
          }else{
           if(waterUpdateFlag){
            if(waterUpdateTimer<=0f&&OnWaterUpdate()){
             waterUpdateTimer=waterUpdateInterval;
             //Debug.Log("waterUpdateTimer:"+waterUpdateTimer);
             waterUpdateFlag=false;
             OnWaterUpdating();
            }
 
           }else{
            if(keepMeshColliderAssigned){
             collider.enabled=true;
            }else{
             collider.enabled=false;
            }
  
            busy=false;
 
           }
 
          }
 
         }
      
        }
  
       }
 
      }

     }
     return busy;
    }

    internal static int marchingCubesCount;

    bool OnMoving(){
     if(marchingCubesCount>=VoxelTerrain.Singleton.marchingCubesLimit){
      return false;
     }
     if(marchingCubesBG.IsCompleted(VoxelTerrain.Singleton.marchingCubesBGThreads[0].IsRunning)){
      waterUpdateFlag=true;
      collider.sharedMesh=null;
      collider.enabled=false;
      renderer.enabled=false;
      worldBounds.center=transform.position=new Vector3(cnkRgn.x,0,cnkRgn.y);
      var navMeshSource=VoxelTerrain.Singleton.navMeshSources[gameObject];
          navMeshSource.transform=transform.localToWorldMatrix;
      VoxelTerrain.Singleton.navMeshSources[gameObject]=navMeshSource;

      #if UNITY_EDITOR
      SetName();
      #endif

      marchingCubesBG.executionMode_bg=MarchingCubesBackgroundContainer.ExecutionMode.terrain;
      marchingCubesBG.cCoord_bg=cCoord;
      marchingCubesBG.cnkRgn_bg=cnkRgn;
      marchingCubesBG.cnkIdx_bg=cnkIdx.Value;
      marchingCubesCount++;
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

    internal static int bakeJobsCount;

    bool meshBuilt;

    bool OnBuilt(){
     if(bakeJobsCount>=VoxelTerrain.Singleton.bakeJobsLimit){
      return false;
     }
     if(marchingCubesBG.IsCompleted(VoxelTerrain.Singleton.marchingCubesBGThreads[0].IsRunning)){
      bakeJobsCount++;
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

      mesh.OptimizeIndexBuffers();
      mesh.OptimizeReorderVertexBuffer();

      renderer.enabled=true;

      meshBuilt=true;

      marchingCubesCount--;
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
      collider.enabled=true;
      collider.sharedMesh=mesh;
      bakeJobsCount--;
      return true;
     }
     return false;
    }
    void OnAddTrees(){
     addingTrees=true;
     //Debug.Log("OnAddTrees:chunk has a valid collider:add trees");
     addTreesRequired=true;
    }

    internal static int addTreesBGCount;

    bool OnAddingTrees(){
     if(addTreesBGCount>=VoxelTerrain.Singleton.addTreesBGLimit){
      return false;
     }
     if(addTreesBG.IsCompleted(VoxelTerrain.Singleton.addTreesBGThreads[0].IsRunning)&&addTreesBG.findPositionsCoroutineIdleWaiting){
      addTreesBGCount++;
      addTreesBG.cCoord_bg=cCoord;
      addTreesBG.cnkRgn_bg=cnkRgn;
      addTreesBG.cnkIdx_bg=cnkIdx.Value;
      addTreesBG.findPositionsCoroutineIdleWaiting=false;
      addTreesBG.findPositionsCoroutineBeginFlag=true;
      return true;
     }
     return false;
    }
    bool OnAddedTrees(){

     addTreesBG.FindPositionsManualRoutine();

     if(addTreesBG.IsCompleted(VoxelTerrain.Singleton.addTreesBGThreads[0].IsRunning)&&addTreesBG.findPositionsCoroutineIdleWaiting){
      VoxelTerrain.Singleton.navMeshDirty=true;
      addTreesBGCount--;
      return true;
     }
     return false;
    }

    bool OnRebuild(){
     if(marchingCubesBG.IsCompleted(VoxelTerrain.Singleton.marchingCubesBGThreads[0].IsRunning)){
      waterUpdateFlag=true;
      marchingCubesBG.executionMode_bg=MarchingCubesBackgroundContainer.ExecutionMode.terrain;
      MarchingCubesMultithreaded.Schedule(marchingCubesBG);
      return true;
     }
     return false;
    }
    void OnRebuilding(){
     runningMarchingCubes=true;
     Debug.Log("OnRebuilding:chunk edited:running Marching Cubes");
     buildRequested=true;
    }

    internal static int wmarchingCubesCount;

    bool OnWaterUpdate(){
     if(marchingCubesCount>0){
      return false;
     }
     if(wmarchingCubesCount>=VoxelTerrain.Singleton.wmarchingCubesLimit){
      return false;
     }
     if(wmarchingCubesBG.IsCompleted(VoxelTerrain.Singleton.wmarchingCubesBGThreads[0].IsRunning)){
      wmarchingCubesBG.cCoord_bg=cCoord;
      wmarchingCubesBG.cnkRgn_bg=cnkRgn;
      wmarchingCubesBG.cnkIdx_bg=cnkIdx.Value;
      wmarchingCubesBG.voxels_bg=marchingCubesBG.voxels_bg;
      for(int i=0;i<marchingCubesBG.neighbors_bg.Length;++i){
       wmarchingCubesBG.neighbors_bg[i]=marchingCubesBG.neighbors_bg[i];
      }
      wmarchingCubesCount++;
      water_bg.HasPendingChanges=false;
      VoxelWaterChunk.WaterMarchingCubesMultithreaded.Schedule(wmarchingCubesBG);
      return true;
     }
     return false;
    }
    void OnWaterUpdating(){
     waterUpdating=true;
     //Debug.Log("OnWaterUpdating:running Marching Cubes for water");
     waterUpdateRequested=true;
    }
    bool OnWaterUpdated(){
     if(wmarchingCubesBG.IsCompleted(VoxelTerrain.Singleton.wmarchingCubesBGThreads[0].IsRunning)){
      if(wmarchingCubesBG.water_bg.result_bg==2){
       waterUpdateFlag=true;
      }
      bool resize;
      if(resize=wmarchingCubesBG.TempWVer.Length>wmesh.vertexCount){
       wmesh.SetVertexBufferParams(wmarchingCubesBG.TempWVer.Length,wlayout);
      }
      wmesh.SetVertexBufferData(wmarchingCubesBG.TempWVer.AsArray(),0,0,wmarchingCubesBG.TempWVer.Length,0,wmeshFlags);
      if(resize){
       wmesh.SetIndexBufferParams(wmarchingCubesBG.TempWTri.Length,IndexFormat.UInt32);
      }
      wmesh.SetIndexBufferData(wmarchingCubesBG.TempWTri.AsArray(),0,0,wmarchingCubesBG.TempWTri.Length,wmeshFlags);
      wmesh.subMeshCount=1;
      wmesh.SetSubMesh(0,new SubMeshDescriptor(0,wmarchingCubesBG.TempWTri.Length){firstVertex=0,vertexCount=wmarchingCubesBG.TempWVer.Length},wmeshFlags);
                
      wmesh.OptimizeIndexBuffers();
      wmesh.OptimizeReorderVertexBuffer();

      wmarchingCubesCount--;
      return true;
     }
     return false;
    }

    void SetName(){
     #if UNITY_EDITOR
     var cCoord=vecPosTocCoord(transform.position);
     var cnkIdx=GetcnkIdx(cCoord.x,cCoord.y);
     name=GetType()+":"+cCoord+":"+cnkIdx;
     #endif
    }

    #if UNITY_EDITOR
    [SerializeField]bool DEBUG_DRAW_VOXELS_DENSITY=false;
    void OnDrawGizmos(){
     //Core.DrawBounds(worldBounds,Color.white);
     if(DEBUG_DRAW_VOXELS_DENSITY){
      DrawVoxelsDensity();
     }
    }
    void DrawVoxelsDensity(){
     if(water_bg.voxels.Count<=0){
      return;
     }
     Vector3Int vCoord1;
     for(vCoord1=new Vector3Int();vCoord1.y<Height;vCoord1.y++){
     for(vCoord1.x=0             ;vCoord1.x<Width ;vCoord1.x++){
     for(vCoord1.z=0             ;vCoord1.z<Depth ;vCoord1.z++){
      Vector3Int vCoord2=vCoord1;
      int vxlIdx2=GetvxlIdx(vCoord2.x,vCoord2.y,vCoord2.z);
      if(water_bg.voxels.TryGetValue(vxlIdx2,out(double density,bool sleeping,double absorbing)voxel)){double density=voxel.density;
       //Debug.Log("debug draw water at voxel:"+vCoord2+";density:"+density);
       if(-density<IsoLevel){
        Gizmos.color=Color.white;
       }else{
        Gizmos.color=Color.black;
       }
       Gizmos.DrawCube(transform.position+vCoord2-MarchingCubesMultithreaded.trianglePosAdj-(Vector3.one*.5f),Vector3.one*(float)(density*.01d));
      }
     }}}
    }
    #endif

 }

 internal class VoxelWaterChunk{
  internal readonly object syn=new object();    

  internal bool HasPendingChanges{
   get{bool tmp;lock(HasPendingChanges_syn){tmp=HasPendingChanges_v;      }return tmp;}
   set{         lock(HasPendingChanges_syn){    HasPendingChanges_v=value;}           }
  }bool HasPendingChanges_v=false;readonly object HasPendingChanges_syn=new object();

  internal readonly ConcurrentDictionary<int,(double density,bool sleeping,double absorbing)>voxels=new ConcurrentDictionary<int,(double,bool,double)>();
   internal readonly ConcurrentDictionary<Vector3Int,double>absorbing=new ConcurrentDictionary<Vector3Int,double>();
   internal readonly ConcurrentDictionary<Vector3Int,double>spreading=new ConcurrentDictionary<Vector3Int,double>();

   internal Vector2Int cCoord_bg;
   internal Vector2Int cnkRgn_bg;
   internal        int cnkIdx_bg;
  internal int result_bg=0;
        
    internal class WaterMarchingCubesBackgroundContainer:BackgroundContainer{
     internal readonly VoxelWaterChunk water_bg;

    internal(bool hasDensity,MaterialId material)[]voxels_bg;

    internal readonly Dictionary<int,(bool hasDensity,MaterialId material)>[]neighbors_bg=new Dictionary<int,(bool,MaterialId)>[8];
            
     internal WaterMarchingCubesBackgroundContainer(VoxelWaterChunk water){

      water_bg=water;

     }
            
      internal NativeList<WVertex>TempWVer;
      [StructLayout(LayoutKind.Sequential)]internal struct WVertex{
       internal Vector3 pos;
       internal Vector3 normal;
       internal WVertex(Vector3 p,Vector3 n){
        pos=p;
        normal=n;
       }
      }
      internal NativeList< UInt32>TempWTri;
            
     internal bool initialization_bg=true;
     internal Vector2Int cCoord_bg;
     internal Vector2Int cnkRgn_bg;
     internal        int cnkIdx_bg;
    }
    internal class WaterMarchingCubesMultithreaded:BaseMultithreaded<WaterMarchingCubesBackgroundContainer>{
            
      readonly(double Density,Vector3 Normal)[]wpolygonCell=new(double,Vector3)[8];
            
      readonly(double Density,Vector3 Normal)[][][]wvoxelsCache1=new(double,Vector3)[3][][]{new(double Density,Vector3 Normal)[1][]{new(double Density,Vector3 Normal)[4],},new(double Density,Vector3 Normal)[Depth][],new(double Density,Vector3 Normal)[FlattenOffset][],};
            
      readonly(double Density,Vector3 Normal)[]wtmpvxl=new(double,Vector3)[6];

      readonly Vector3[]wvertices=new Vector3[12];
       readonly Vector3[]wnormals=new Vector3[12];
            
      readonly Vector3[][][]wverticesCache=new Vector3[3][][]{new Vector3[1][]{new Vector3[4],},new Vector3[Depth][],new Vector3[FlattenOffset][],};
            
      readonly double[]wdensity=new double[2];
       readonly Vector3[]wvertex=new Vector3[2];
        readonly float[]wdistance=new float[2];

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

      readonly int[]widx=new int[3];
       readonly Vector3[]wverPos=new Vector3[3];

     internal static Vector3 trianglePosAdj{get;}=new Vector3((Width/2.0f)-0.5f,(Height/2.0f)-0.5f,(Depth/2.0f)-0.5f);
            
     internal WaterMarchingCubesMultithreaded(){
       for(int i=0;i<wvoxelsCache1[2].Length;++i){
        wvoxelsCache1[2][i]=new(double Density,Vector3 Normal)[4];
        if(i<wvoxelsCache1[1].Length){
         wvoxelsCache1[1][i]=new(double Density,Vector3 Normal)[4];
        }
       }

       for(int i=0;i<wverticesCache[2].Length;++i){
        wverticesCache[2][i]=new Vector3[4];
        if(i<wverticesCache[1].Length){
         wverticesCache[1][i]=new Vector3[4];
        }
       }
     }

     protected override void Cleanup(){
       for(int i=0;i<wvoxelsCache1[0].Length;++i){Array.Clear(wvoxelsCache1[0][i],0,wvoxelsCache1[0][i].Length);}
       for(int i=0;i<wvoxelsCache1[1].Length;++i){Array.Clear(wvoxelsCache1[1][i],0,wvoxelsCache1[1][i].Length);}
       for(int i=0;i<wvoxelsCache1[2].Length;++i){Array.Clear(wvoxelsCache1[2][i],0,wvoxelsCache1[2][i].Length);}
       
       for(int i=0;i<wverticesCache[0].Length;++i){Array.Clear(wverticesCache[0][i],0,wverticesCache[0][i].Length);}
       for(int i=0;i<wverticesCache[1].Length;++i){Array.Clear(wverticesCache[1][i],0,wverticesCache[1][i].Length);}
       for(int i=0;i<wverticesCache[2].Length;++i){Array.Clear(wverticesCache[2][i],0,wverticesCache[2][i].Length);}
     }
     protected override void Execute(){
      if(current.initialization_bg||current.water_bg.cnkIdx_bg!=current.cnkIdx_bg){
       lock(current.water_bg.syn){
        current.water_bg.cCoord_bg=current.cCoord_bg;
        current.water_bg.cnkRgn_bg=current.cnkRgn_bg;
        current.water_bg.cnkIdx_bg=current.cnkIdx_bg;
        current.water_bg.voxels.Clear();
        current.water_bg.absorbing.Clear();
        current.water_bg.spreading.Clear();
       }
      }
      current.initialization_bg=false;
       //Debug.Log("MarchingCubesBackgroundContainer.ExecutionMode.water");

       if      (current.water_bg.result_bg==2){
        current.water_bg.result_bg=1;
       }else if(current.water_bg.result_bg==1){
        current.water_bg.result_bg=0;
       }

          current.TempWVer.Clear();
          current.TempWTri.Clear();

          UInt32 wvertexCount=0;

       Vector3Int vCoord1;
       for(vCoord1=new Vector3Int();vCoord1.y<Height;vCoord1.y++){
       for(vCoord1.x=0             ;vCoord1.x<Width ;vCoord1.x++){
       for(vCoord1.z=0             ;vCoord1.z<Depth ;vCoord1.z++){

        Vector3Int vCoord2=vCoord1;
        int vxlIdx2=GetvxlIdx(vCoord2.x,vCoord2.y,vCoord2.z); 
        if(current.water_bg.voxels.TryGetValue(vxlIdx2,out(double density,bool sleeping,double absorbing)vxl2)){
         if(vxl2.absorbing>0d){
         }
         if(!vxl2.sleeping){
          current.water_bg.spreading.AddOrUpdate(vCoord2,vxl2.density,
           (key,oldValue)=>{
            return Math.Max(oldValue,vxl2.density);
           }
          );
          current.water_bg.voxels.TryUpdate(vxlIdx2,(vxl2.density,true,vxl2.absorbing),vxl2);
         }
         if(vxl2.density<=0d){//  remove
         }
        }

        int corner=0;Vector3Int vCoord3=vCoord1;                                       if(vCoord1.z>0)wpolygonCell[corner]=wvoxelsCache1[0][0][0];else if(vCoord1.x>0)wpolygonCell[corner]=wvoxelsCache1[1][vCoord1.z][0];else if(vCoord1.y>0)wpolygonCell[corner]=wvoxelsCache1[2][vCoord1.z+vCoord1.x*Depth][0];else SetwpolygonCellVoxel();
            corner++;           vCoord3=vCoord1;vCoord3.x+=1;                          if(vCoord1.z>0)wpolygonCell[corner]=wvoxelsCache1[0][0][1];                                                                        else if(vCoord1.y>0)wpolygonCell[corner]=wvoxelsCache1[2][vCoord1.z+vCoord1.x*Depth][1];else SetwpolygonCellVoxel();
            corner++;           vCoord3=vCoord1;vCoord3.x+=1;vCoord3.y+=1;             if(vCoord1.z>0)wpolygonCell[corner]=wvoxelsCache1[0][0][2];                                                                                                                                                                else SetwpolygonCellVoxel();
            corner++;           vCoord3=vCoord1;             vCoord3.y+=1;             if(vCoord1.z>0)wpolygonCell[corner]=wvoxelsCache1[0][0][3];else if(vCoord1.x>0)wpolygonCell[corner]=wvoxelsCache1[1][vCoord1.z][1];                                                                                        else SetwpolygonCellVoxel();
            corner++;           vCoord3=vCoord1;                          vCoord3.z+=1;                                                                if(vCoord1.x>0)wpolygonCell[corner]=wvoxelsCache1[1][vCoord1.z][2];else if(vCoord1.y>0)wpolygonCell[corner]=wvoxelsCache1[2][vCoord1.z+vCoord1.x*Depth][2];else SetwpolygonCellVoxel();
            corner++;           vCoord3=vCoord1;vCoord3.x+=1;             vCoord3.z+=1;                                                                                                                                        if(vCoord1.y>0)wpolygonCell[corner]=wvoxelsCache1[2][vCoord1.z+vCoord1.x*Depth][3];else SetwpolygonCellVoxel();
            corner++;           vCoord3=vCoord1;vCoord3.x+=1;vCoord3.y+=1;vCoord3.z+=1;                                                                                                                                                                                                                                SetwpolygonCellVoxel();
            corner++;           vCoord3=vCoord1;             vCoord3.y+=1;vCoord3.z+=1;                                                                if(vCoord1.x>0)wpolygonCell[corner]=wvoxelsCache1[1][vCoord1.z][3];                                                                                        else SetwpolygonCellVoxel();
        wvoxelsCache1[0][0][0]=wpolygonCell[4];
        wvoxelsCache1[0][0][1]=wpolygonCell[5];
        wvoxelsCache1[0][0][2]=wpolygonCell[6];
        wvoxelsCache1[0][0][3]=wpolygonCell[7];
        wvoxelsCache1[1][vCoord1.z][0]=wpolygonCell[1];
        wvoxelsCache1[1][vCoord1.z][1]=wpolygonCell[2];
        wvoxelsCache1[1][vCoord1.z][2]=wpolygonCell[5];
        wvoxelsCache1[1][vCoord1.z][3]=wpolygonCell[6];
        wvoxelsCache1[2][vCoord1.z+vCoord1.x*Depth][0]=wpolygonCell[3];
        wvoxelsCache1[2][vCoord1.z+vCoord1.x*Depth][1]=wpolygonCell[2];
        wvoxelsCache1[2][vCoord1.z+vCoord1.x*Depth][2]=wpolygonCell[7];
        wvoxelsCache1[2][vCoord1.z+vCoord1.x*Depth][3]=wpolygonCell[6];

        void SetwpolygonCellVoxel(){
         if(vCoord3.y<0){
          wpolygonCell[corner]=(0d,Vector3.zero);
         }else if(vCoord3.y>=Height){
          wpolygonCell[corner]=(0d,Vector3.zero);
         }else{
          if(vCoord3.x<0||vCoord3.x>=Width||
             vCoord3.z<0||vCoord3.z>=Depth
          ){
           //  pegar valor dos chunks vizinhos
           Vector2Int cnkRgn3=current.cnkRgn_bg;
           Vector2Int cCoord3=current.cCoord_bg;
           ValidateCoord(ref cnkRgn3,ref vCoord3);
           cCoord3=cnkRgnTocCoord(cnkRgn3);
           int cnkIdx3=GetcnkIdx(cCoord3.x,cCoord3.y);
           bool success=false;
           if(VoxelTerrain.water.TryGetValue(cnkIdx3,out VoxelWaterChunk wcnk)){
            lock(wcnk.syn){
             if(wcnk.cnkIdx_bg==cnkIdx3){
              int vxlIdx3=GetvxlIdx(vCoord3.x,vCoord3.y,vCoord3.z);
              if(wcnk.voxels.TryGetValue(vxlIdx3,out(double density,bool sleeping,double absorbing)vxl3)){
               wpolygonCell[corner]=(vxl3.density,Vector3.zero);
               success=true;
              }
             }
            }
           }
           if(!success){
            wpolygonCell[corner]=(0d,Vector3.zero);
           }
          }else{
           int vxlIdx3=GetvxlIdx(vCoord3.x,vCoord3.y,vCoord3.z); 
           if(current.water_bg.voxels.TryGetValue(vxlIdx3,out(double density,bool sleeping,double absorbing)vxl3)){
            wpolygonCell[corner]=(vxl3.density,Vector3.zero);
           }else{
            wpolygonCell[corner]=(0d,Vector3.zero);
           }
          }
         }

              //  calcular normal:
              int tmpIdx=0;Vector3Int vCoord4=vCoord3;vCoord4.x++;                        SetwpolygonCellNormalSetwtmpvxl();
                  tmpIdx++;           vCoord4=vCoord3;vCoord4.x--;                        SetwpolygonCellNormalSetwtmpvxl();
                  tmpIdx++;           vCoord4=vCoord3;            vCoord4.y++;            SetwpolygonCellNormalSetwtmpvxl();
                  tmpIdx++;           vCoord4=vCoord3;            vCoord4.y--;            SetwpolygonCellNormalSetwtmpvxl();
                  tmpIdx++;           vCoord4=vCoord3;                        vCoord4.z++;SetwpolygonCellNormalSetwtmpvxl();
                  tmpIdx++;           vCoord4=vCoord3;                        vCoord4.z--;SetwpolygonCellNormalSetwtmpvxl();

              void SetwpolygonCellNormalSetwtmpvxl(){
               if(vCoord4.y<0){
                wtmpvxl[tmpIdx]=(0d,Vector3.zero);
               }else if(vCoord4.y>=Height){
                wtmpvxl[tmpIdx]=(0d,Vector3.zero);
               }else{
                if(vCoord4.x<0||vCoord4.x>=Width||
                   vCoord4.z<0||vCoord4.z>=Depth
                ){
                 //  TO DO: pegar valor dos chunks vizinhos
                 wtmpvxl[tmpIdx]=(0d,Vector3.zero);
                }else{
                 int vxlIdx4=GetvxlIdx(vCoord4.x,vCoord4.y,vCoord4.z); 
                 if(current.water_bg.voxels.TryGetValue(vxlIdx4,out(double density,bool sleeping,double absorbing)vxl4)){
                  wtmpvxl[tmpIdx]=(vxl4.density,Vector3.zero);
                 }else{
                  wtmpvxl[tmpIdx]=(0d,Vector3.zero);
                 }
                }
               }
              }

              Vector3 wpolygonCellNormal=new Vector3{
               x=(float)(wtmpvxl[1].Density-wtmpvxl[0].Density),
               y=(float)(wtmpvxl[3].Density-wtmpvxl[2].Density),
               z=(float)(wtmpvxl[5].Density-wtmpvxl[4].Density)
              };

              wpolygonCell[corner].Normal=wpolygonCellNormal;
              if(wpolygonCell[corner].Normal!=Vector3.zero){
               wpolygonCell[corner].Normal.Normalize();
              }

        }

           int edgeIndex;
           /*
               Determine the index into the edge table which
               tells us which vertices are inside of the surface
           */
                                                edgeIndex =  0;
           if(-wpolygonCell[0].Density<IsoLevel)edgeIndex|=  1;
           if(-wpolygonCell[1].Density<IsoLevel)edgeIndex|=  2;
           if(-wpolygonCell[2].Density<IsoLevel)edgeIndex|=  4;
           if(-wpolygonCell[3].Density<IsoLevel)edgeIndex|=  8;
           if(-wpolygonCell[4].Density<IsoLevel)edgeIndex|= 16;
           if(-wpolygonCell[5].Density<IsoLevel)edgeIndex|= 32;
           if(-wpolygonCell[6].Density<IsoLevel)edgeIndex|= 64;
           if(-wpolygonCell[7].Density<IsoLevel)edgeIndex|=128;
           if(Tables.EdgeTable[edgeIndex]!=0){/*  Cube is not entirely in/out of the surface  */
                                    
            //  Use cached data if available
            Array.Clear(wvertices,0,wvertices.Length);
            wvertices[ 0]=(vCoord1.z>0?wverticesCache[0][0][0]:(vCoord1.y>0?wverticesCache[2][vCoord1.z+vCoord1.x*Depth][0]:Vector3.zero));
            wvertices[ 1]=(vCoord1.z>0?wverticesCache[0][0][1]:Vector3.zero);
            wvertices[ 2]=(vCoord1.z>0?wverticesCache[0][0][2]:Vector3.zero);
            wvertices[ 3]=(vCoord1.z>0?wverticesCache[0][0][3]:(vCoord1.x>0?wverticesCache[1][vCoord1.z][0]:Vector3.zero));
            wvertices[ 4]=(vCoord1.y>0?wverticesCache[2][vCoord1.z+vCoord1.x*Depth][1]:Vector3.zero);
            wvertices[ 7]=(vCoord1.x>0?wverticesCache[1][vCoord1.z][1]:Vector3.zero);
            wvertices[ 8]=(vCoord1.x>0?wverticesCache[1][vCoord1.z][2]:(vCoord1.y>0?wverticesCache[2][vCoord1.z+vCoord1.x*Depth][3]:Vector3.zero));
            wvertices[ 9]=(vCoord1.y>0?wverticesCache[2][vCoord1.z+vCoord1.x*Depth][2]:Vector3.zero);
            wvertices[11]=(vCoord1.x>0?wverticesCache[1][vCoord1.z][3]:Vector3.zero);

            if(0!=(Tables.EdgeTable[edgeIndex]&   1)){wvertexInterp(0,1,ref wvertices[ 0],ref wnormals[ 0]);}
            if(0!=(Tables.EdgeTable[edgeIndex]&   2)){wvertexInterp(1,2,ref wvertices[ 1],ref wnormals[ 1]);}
            if(0!=(Tables.EdgeTable[edgeIndex]&   4)){wvertexInterp(2,3,ref wvertices[ 2],ref wnormals[ 2]);}
            if(0!=(Tables.EdgeTable[edgeIndex]&   8)){wvertexInterp(3,0,ref wvertices[ 3],ref wnormals[ 3]);}
            if(0!=(Tables.EdgeTable[edgeIndex]&  16)){wvertexInterp(4,5,ref wvertices[ 4],ref wnormals[ 4]);}
            if(0!=(Tables.EdgeTable[edgeIndex]&  32)){wvertexInterp(5,6,ref wvertices[ 5],ref wnormals[ 5]);}
            if(0!=(Tables.EdgeTable[edgeIndex]&  64)){wvertexInterp(6,7,ref wvertices[ 6],ref wnormals[ 6]);}
            if(0!=(Tables.EdgeTable[edgeIndex]& 128)){wvertexInterp(7,4,ref wvertices[ 7],ref wnormals[ 7]);}
            if(0!=(Tables.EdgeTable[edgeIndex]& 256)){wvertexInterp(0,4,ref wvertices[ 8],ref wnormals[ 8]);}
            if(0!=(Tables.EdgeTable[edgeIndex]& 512)){wvertexInterp(1,5,ref wvertices[ 9],ref wnormals[ 9]);}
            if(0!=(Tables.EdgeTable[edgeIndex]&1024)){wvertexInterp(2,6,ref wvertices[10],ref wnormals[10]);}
            if(0!=(Tables.EdgeTable[edgeIndex]&2048)){wvertexInterp(3,7,ref wvertices[11],ref wnormals[11]);}
            void wvertexInterp(int c0,int c1,ref Vector3 p,ref Vector3 n){
             wdensity[0]=-wpolygonCell[c0].Density;wvertex[0]=corners[c0];
             wdensity[1]=-wpolygonCell[c1].Density;wvertex[1]=corners[c1];

             //  p
             if(p!=Vector3.zero){goto _Normal;}
             if(Math.Abs(IsoLevel-wdensity[0])<double.Epsilon){p=wvertex[0];goto _Normal;}
             if(Math.Abs(IsoLevel-wdensity[1])<double.Epsilon){p=wvertex[1];goto _Normal;}
             if(Math.Abs(wdensity[0]-wdensity[1])<double.Epsilon){p=wvertex[0];goto _Normal;}
             double marchingUnit=(IsoLevel-wdensity[0])/(wdensity[1]-wdensity[0]);
             p.x=(float)(wvertex[0].x+marchingUnit*(wvertex[1].x-wvertex[0].x));
             p.y=(float)(wvertex[0].y+marchingUnit*(wvertex[1].y-wvertex[0].y));
             p.z=(float)(wvertex[0].z+marchingUnit*(wvertex[1].z-wvertex[0].z));
                                        
             //  n
             _Normal:{
              wdistance[0]=Vector3.Distance(wvertex[0],wvertex[1]);
              wdistance[1]=Vector3.Distance(wvertex[1],p);
              n=Vector3.Lerp(
               wpolygonCell[c1].Normal,
               wpolygonCell[c0].Normal,
               wdistance[1]/wdistance[0]
              );
              n=n!=Vector3.zero?n.normalized:Vector3.down;
             }

            }

            //  Cache the data
            wverticesCache[0][0][0]=wvertices[ 4]+Vector3.back;//  Adiciona um valor "negativo" porque o voxelCoord próximo vai usar esse valor mas precisa obter "uma posição anterior"
            wverticesCache[0][0][1]=wvertices[ 5]+Vector3.back;
            wverticesCache[0][0][2]=wvertices[ 6]+Vector3.back;
            wverticesCache[0][0][3]=wvertices[ 7]+Vector3.back;
            wverticesCache[1][vCoord1.z][0]=wvertices[ 1]+Vector3.left;
            wverticesCache[1][vCoord1.z][1]=wvertices[ 5]+Vector3.left;
            wverticesCache[1][vCoord1.z][2]=wvertices[ 9]+Vector3.left;
            wverticesCache[1][vCoord1.z][3]=wvertices[10]+Vector3.left;
            wverticesCache[2][vCoord1.z+vCoord1.x*Depth][0]=wvertices[ 2]+Vector3.down;
            wverticesCache[2][vCoord1.z+vCoord1.x*Depth][1]=wvertices[ 6]+Vector3.down;
            wverticesCache[2][vCoord1.z+vCoord1.x*Depth][2]=wvertices[10]+Vector3.down;
            wverticesCache[2][vCoord1.z+vCoord1.x*Depth][3]=wvertices[11]+Vector3.down;

            /*  Create the triangle  */
            for(int i=0;Tables.TriangleTable[edgeIndex][i]!=-1;i+=3){
             widx[0]=Tables.TriangleTable[edgeIndex][i  ];
             widx[1]=Tables.TriangleTable[edgeIndex][i+1];
             widx[2]=Tables.TriangleTable[edgeIndex][i+2];

             Vector3 pos=vCoord1-trianglePosAdj;

             current.TempWVer.Add(new WVertex(wverPos[0]=pos+wvertices[widx[0]],wnormals[widx[0]]));
             current.TempWVer.Add(new WVertex(wverPos[1]=pos+wvertices[widx[1]],wnormals[widx[1]]));
             current.TempWVer.Add(new WVertex(wverPos[2]=pos+wvertices[widx[2]],wnormals[widx[2]]));
             current.TempWTri.Add(wvertexCount+2);
             current.TempWTri.Add(wvertexCount+1);
             current.TempWTri.Add(wvertexCount  );
                                  wvertexCount+=3;
            }

           }
       }}} 

       if(current.water_bg.absorbing.Count>0||
          current.water_bg.spreading.Count>0
       ){
        current.water_bg.result_bg=2;
       }

       foreach(var voxel in current.water_bg.absorbing){
       }
       foreach(var voxel in current.water_bg.spreading){
        Vector3Int vCoord2=voxel.Key;
        if(current.water_bg.spreading.TryRemove(vCoord2,out double density)){
         //Debug.Log("spreading:"+vCoord2);
         Vector3Int d_vCoord=new Vector3Int(vCoord2.x,vCoord2.y-1,vCoord2.z);
         bool waterfall=VerticalSpread(d_vCoord,d_vCoord.y>=0);
         bool VerticalSpread(Vector3Int v_vCoord,bool insideAxisLength){
          if(insideAxisLength){
           int v_vxlIdx=GetvxlIdx(v_vCoord.x,v_vCoord.y,v_vCoord.z);
           return Spread(v_vxlIdx);
          }
          bool Spread(int v_vxlIdx){
           bool spread=true;
           (double density,bool sleeping,double absorbing)newValue=(density,false,0d);
           if(newValue.density<30d){
            return false;
           }
           bool blocked=current.voxels_bg[v_vxlIdx].hasDensity;
           if(blocked){
            spread=false;
            newValue.sleeping=true;
           }
           current.water_bg.voxels.AddOrUpdate(v_vxlIdx,newValue,
            (key,oldValue)=>{
             if(oldValue.density>=newValue.density){
              return oldValue;
             }
             newValue.absorbing=Math.Max(oldValue.absorbing,newValue.absorbing);
             return newValue;
            }
           );
           return spread;
          }
          return false;
         }
         if(!waterfall){
          Vector3Int r_vCoord=new Vector3Int(vCoord2.x+1,vCoord2.y,vCoord2.z);
          HorizontalSpread(r_vCoord,r_vCoord.x<Width);
          Vector3Int l_vCoord=new Vector3Int(vCoord2.x-1,vCoord2.y,vCoord2.z);
          HorizontalSpread(l_vCoord,l_vCoord.x>=0);
          Vector3Int f_vCoord=new Vector3Int(vCoord2.x,vCoord2.y,vCoord2.z+1);
          HorizontalSpread(f_vCoord,f_vCoord.z<Depth);
          Vector3Int b_vCoord=new Vector3Int(vCoord2.x,vCoord2.y,vCoord2.z-1);
          HorizontalSpread(b_vCoord,b_vCoord.z>=0);
         }
         bool HorizontalSpread(Vector3Int h_vCoord,bool insideAxisLength){
          if(insideAxisLength){
           int h_vxlIdx=GetvxlIdx(h_vCoord.x,h_vCoord.y,h_vCoord.z);
           return Spread(h_vxlIdx);
          }else{
           //  passar pra outros chunks
           Vector3Int vCoord3=h_vCoord;
           Vector2Int cnkRgn3=current.cnkRgn_bg;
           Vector2Int cCoord3=current.cCoord_bg;
           ValidateCoord(ref cnkRgn3,ref vCoord3);
           cCoord3=cnkRgnTocCoord(cnkRgn3);
           int cnkIdx3=GetcnkIdx(cCoord3.x,cCoord3.y);
           //Debug.Log("cCoord3:"+cCoord3);
           if(VoxelTerrain.water.TryGetValue(cnkIdx3,out VoxelWaterChunk wcnk)){
            lock(wcnk.syn){
             if(wcnk.cnkIdx_bg==cnkIdx3){

              int vxlIdx3=GetvxlIdx(vCoord3.x,vCoord3.y,vCoord3.z);

              int oftIdx3=GetoftIdx(cCoord3-current.cCoord_bg);

              bool spread=true;
              (double density,bool sleeping,double absorbing)newValue=(density-5d,false,0d);
              if(newValue.density<30d){
               return false;
              }
              bool blocked=current.neighbors_bg[oftIdx3-1].TryGetValue(vxlIdx3,out(bool hasDensity,MaterialId material)ngbvxl3)&&ngbvxl3.hasDensity;
              if(blocked){
               spread=false;
               newValue.sleeping=true;
              }
              wcnk.voxels.AddOrUpdate(vxlIdx3,newValue,
               (key,oldValue)=>{
                if(oldValue.density>=newValue.density){
                 spread=false;
                 return oldValue;
                }
                newValue.absorbing=Math.Max(oldValue.absorbing,newValue.absorbing);
                return newValue;
               }
              );
              wcnk.HasPendingChanges=true;
              return spread;
             }
            }
           }
           current.water_bg.spreading.AddOrUpdate(vCoord2,density,
            (key,oldValue)=>{
             return Math.Max(oldValue,density);
            }
           );
           return true;
          }
          bool Spread(int h_vxlIdx){
           bool spread=true;
           (double density,bool sleeping,double absorbing)newValue=(density-5d,false,0d);
           if(newValue.density<30d){
            return false;
           }
           bool blocked=current.voxels_bg[h_vxlIdx].hasDensity;
           if(blocked){
            spread=false;
            newValue.sleeping=true;
           }
           current.water_bg.voxels.AddOrUpdate(h_vxlIdx,newValue,
            (key,oldValue)=>{
             if(oldValue.density>=newValue.density){
              spread=false;
              return oldValue;
             }
             newValue.absorbing=Math.Max(oldValue.absorbing,newValue.absorbing);
             return newValue;
            }
           );
           return spread;
          }
         }
        }
       }

       //Debug.Log("MarchingCubesBackgroundContainer.ExecutionMode.water done!");
     }
    }
 }

}

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