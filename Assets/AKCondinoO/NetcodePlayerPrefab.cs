using AKCondinoO.Sims;
using AKCondinoO.Voxels;
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;
using static AKCondinoO.Voxels.VoxelTerrain;

namespace AKCondinoO{
 internal class NetcodePlayerPrefab:MonoBehaviour{
    internal Vector2Int cCoord,cCoord_Pre;
    internal Vector2Int cnkRgn;
        
    internal Bounds worldBounds;

    internal NavMeshData navMeshData;
     internal NavMeshDataInstance navMeshInstance;

    void Awake(){
     Core.Singleton.OnDestroyingCoreEvent+=OnDestroyingCoreEvent;

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
     navMeshData=new NavMeshData(0){//  Humanoid agent: 0
      hideFlags=HideFlags.None,
     };
     navMeshInstance=NavMesh.AddNavMeshData(navMeshData);
    }

    void OnDestroyingCoreEvent(object sender,EventArgs e){
     Debug.Log("OnDestroyingCoreEvent");
     OnDestroyingDependents();
    }

    void OnDestroy(){
     OnDestroyingDependents();
    }

    void OnDestroyingDependents(){
     Debug.Log("NetcodePlayerPrefab:OnDestroyingDependents");
     NavMesh.RemoveNavMeshData(navMeshInstance);
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
       VoxelTerrain.Singleton.playersMovement[this]=(cCoord,cCoord_Pre,true);
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

    internal AsyncOperation BuildNavMesh(List<NavMeshBuildSource>sources){
     return NavMeshBuilder.UpdateNavMeshDataAsync(navMeshData,Core.Singleton.navMeshBuildSettings,sources,worldBounds);
    }
        
    #if UNITY_EDITOR
    void OnDrawGizmos(){
     Core.DrawBounds(worldBounds,Color.white);
    }
    #endif
 }
}