using AKCondinoO.Sims;
using AKCondinoO.Voxels;
using UnityEngine;
using static AKCondinoO.Voxels.VoxelTerrain;

namespace AKCondinoO{internal class NetcodePlayerPrefab:MonoBehaviour{

bool initialization=true;

internal Vector2Int cCoord,cCoord_Pre;
internal Vector2Int cnkRgn;

void Awake(){
 cCoord_Pre=cCoord=vecPosTocCoord(transform.position);
}

bool moved;
void Update(){
 if(transform.hasChanged){
  transform.hasChanged=false;
  moved=true;
 }
 if(moved||initialization){
  moved=false;
  Debug.Log("NetcodePlayerPrefab:moved!",this);
  cCoord_Pre=cCoord;
  cCoord=vecPosTocCoord(transform.position);
  if(cCoord!=cCoord_Pre||initialization){
   Debug.Log("NetcodePlayerPrefab:changed to cCoord:"+cCoord+"!",this);
   SimObjectSpawner.Singleton.playersMovement.Add(cCoord);
   VoxelTerrain.Singleton.playersMovement.Add(this,(cCoord,cCoord_Pre));
   cnkRgn=cCoordTocnkRgn(cCoord);
   Debug.Log("NetcodePlayerPrefab:changed to cnkRgn:"+cnkRgn+"!",this);
  }
 }
 initialization=false;
}

}}