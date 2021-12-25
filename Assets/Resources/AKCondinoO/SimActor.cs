using AKCondinoO.Voxels;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.AI;

namespace AKCondinoO.Sims{
 internal class SimActor:SimObject{

    internal NavMeshAgent navMeshAgent;

    internal CharacterController characterController;

    protected override void Awake(){

     base.Awake();

     characterController=GetComponentInChildren<CharacterController>();
     localBounds=new Bounds(transform.position,
      new Vector3(
       characterController.radius*2f,
       characterController.height,
       characterController.radius*2f
      )
     );
     localBounds.center=transform.InverseTransformPoint(localBounds.center);
     Debug.Log("characterController localBounds.center:"+localBounds.center+";localBounds.size:"+localBounds.size,this);

     navMeshAgent=GetComponent<NavMeshAgent>();
     Debug.Log("navMeshAgent:"+navMeshAgent+" "+navMeshAgent.agentTypeID,this);
     navMeshAgent.enabled=false;
    }

    internal override void OnActivated(bool load){

     base.OnActivated(load);

    }

    internal bool isUsingAI=true;

    internal override void ManualUpdate(){

     base.ManualUpdate();
            
     if(!InteractionsEnabled){

      DisableNavMeshAgent();

     }

     if(!unplacing){
      if(!unloading){
       if(!loading){

        if(InteractionsEnabled){
         //Debug.Log("InteractionsEnabled");
         if(isUsingAI){

          EnableNavMeshAgent();

          if(!navMeshAgent.isOnNavMesh){
           DisableNavMeshAgent();
          }
   
          //Debug.Log("navMeshAgent.enabled:"+navMeshAgent.enabled);
          if(navMeshAgent.enabled){
           AI();
          }

         }else{

          DisableNavMeshAgent();
   
         }
        }

       }
      }
     }
    }

    internal enum State:int{
     IDLE_ST=0,
    }

    internal State MyState=State.IDLE_ST;

    internal virtual void AI(){
     if(MyState==State.IDLE_ST){
      OnIDLE_ST();
     }
    }

    [SerializeField]public OnIDLE_ST_Data OnIDLE_ST_data=new OnIDLE_ST_Data();
    [Serializable]
    internal class OnIDLE_ST_Data{
     [SerializeField]public float timeToRandomMove=8f;
      internal float timerToRandomMove=8f;
    }
    internal virtual void OnIDLE_ST(){
     //Debug.Log("OnIDLE_ST");
    }

    //  [https://docs.unity3d.com/ScriptReference/AI.NavMesh.SamplePosition.html]
    protected bool RandomPoint(Vector3 center,float range,out Vector3 result){
     for(int i=0;i<30;i++){
      Vector3 randomPoint=center+UnityEngine.Random.insideUnitSphere*range;
      if(NavMesh.SamplePosition(randomPoint,out NavMeshHit hit,1.0f,navMeshAgent.areaMask)){
       result=hit.position;
       return true;
      }
     }
     result=Vector3.zero;
     return false;
    }

    internal void EnableNavMeshAgent(){
     if(!navMeshAgent.enabled){
      if(VoxelTerrain.Singleton.navMeshAsyncOperations.Any(o=>o!=null&&o.isDone)){
       if(NavMesh.SamplePosition(transform.position,out NavMeshHit hitResult,VoxelTerrainChunk.Height,navMeshAgent.areaMask)&&
        Mathf.Abs(hitResult.position.x-transform.position.x)<VoxelTerrainChunk.Width/2f&&
        Mathf.Abs(hitResult.position.z-transform.position.z)<VoxelTerrainChunk.Depth/2f
       ){
        transform.position=hitResult.position+Vector3.up*navMeshAgent.height/2f;
        navMeshAgent.enabled=true;
       }
       Debug.Log("hitResult.hit:"+hitResult.hit);
      }else{
       Debug.LogWarning("EnableNavMeshAgent:cancel:no NavMesh built yet");
      }
     }
    }

    internal void DisableNavMeshAgent(){
     navMeshAgent.enabled=false;
    }
 }
}