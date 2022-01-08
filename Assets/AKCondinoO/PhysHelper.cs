using System.Collections;
using System.Collections.Generic;
using UnityEngine;

internal static class PhysHelper{

    internal static int VoxelTerrain;

    internal static int NavMesh;

    internal static void SetLayerMasks(){
     VoxelTerrain=1<<LayerMask.NameToLayer("VoxelTerrain");
     //Debug.Log("SetLayerMasks():\"VoxelTerrain\":"+VoxelTerrain);
     NavMesh=1<<LayerMask.NameToLayer("VoxelTerrain");
     //Debug.Log("SetLayerMasks():\"NavMesh\":"+NavMesh);
    }

}