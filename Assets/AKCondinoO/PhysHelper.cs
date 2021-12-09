using System.Collections;
using System.Collections.Generic;
using UnityEngine;

internal static class PhysHelper{

internal static int VoxelTerrain;

internal static void SetLayerMasks(){
 VoxelTerrain=1<<LayerMask.NameToLayer("VoxelTerrain");
 //Debug.Log("SetLayerMasks():\"VoxelTerrain\":"+VoxelTerrain);
}

}