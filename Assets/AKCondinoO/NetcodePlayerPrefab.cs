using AKCondinoO.Sims;
using AKCondinoO.Voxels;
using UnityEngine;
using UnityEngine.AI;
using static AKCondinoO.Voxels.VoxelTerrain;

namespace AKCondinoO{
 internal class NetcodePlayerPrefab:MonoBehaviour{
    internal Vector2Int cCoord,cCoord_Pre;
    internal Vector2Int cnkRgn;
        
    internal Bounds worldBounds;

    internal NavMeshDataInstance navMesh;
     internal NavMeshData navMeshData;

    void Awake(){
     cCoord_Pre=cCoord=vecPosTocCoord(transform.position);
     worldBounds=new Bounds(Vector3.zero,
      new Vector3(
       (instantiationDistance.x*2+1)*VoxelTerrainChunk.Width,
       VoxelTerrainChunk.Height,
       (instantiationDistance.y*2+1)*VoxelTerrainChunk.Depth
      )
     );
     var navMeshValidation=Core.Singleton.navMeshBuildSettings.ValidationReport(worldBounds);
     foreach(var s in navMeshValidation){Debug.LogError(s);}
    }

    [SerializeField]float loadInterval=1f;
     float loadTimer=0f;
        
    bool initialization=true;

    bool moved;
    void Update(){
     transform.position=Camera.main.transform.position;

     loadTimer+=Time.deltaTime;

     if(transform.hasChanged){
      transform.hasChanged=false;
      moved=true;
     }
     if(moved||initialization){
      moved=false;
      //Debug.Log("NetcodePlayerPrefab:moved!",this);
      cCoord_Pre=cCoord;
      cCoord=vecPosTocCoord(transform.position);
      if(cCoord!=cCoord_Pre||initialization){
       loadTimer=0;
       Debug.Log("NetcodePlayerPrefab:changed to cCoord:"+cCoord+"!",this);
       SimObjectSpawner.Singleton.playersMovement.Add(cCoord);
       VoxelTerrain.Singleton.playersMovement.Add(this,(cCoord,cCoord_Pre));
       cnkRgn=cCoordTocnkRgn(cCoord);
       Debug.Log("NetcodePlayerPrefab:changed to cnkRgn:"+cnkRgn+"!",this);
       worldBounds.center=new Vector3(cnkRgn.x,0,cnkRgn.y);
      }
     }else if(loadTimer>=loadInterval){
      loadTimer=0;
      Debug.Log("NetcodePlayerPrefab:reload time reached",this);
      SimObjectSpawner.Singleton.playersMovement.Add(cCoord);
     }
     initialization=false;
    }
        
    #if UNITY_EDITOR
    void OnDrawGizmos(){
     Core.DrawBounds(worldBounds,Color.white);
    }
    #endif
 }
}