using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using static AKCondinoO.Voxels.VoxelTerrain;

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

}}