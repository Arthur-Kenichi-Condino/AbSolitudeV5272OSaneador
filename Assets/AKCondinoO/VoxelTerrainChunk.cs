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
}
internal class MarchingCubesMultithreaded:BaseMultithreaded<MarchingCubesBackgroundContainer>{
protected override void Execute(){
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
 if(moveRequired){
  moveRequired=false;
  Debug.Log("ManualUpdate:moveRequired:"+cnkRgn);
  worldBounds.center=transform.position=new Vector3(cnkRgn.x,0,cnkRgn.y);
 }
}

#if UNITY_EDITOR
void OnDrawGizmos(){
 Core.DrawBounds(worldBounds,Color.white);
}
#endif

}}