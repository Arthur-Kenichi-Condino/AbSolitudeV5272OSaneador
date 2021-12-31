using AKCondinoO.Sims.Actors;
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

    internal ActionHitboxes hitboxes;
        
    internal float maxStamina;
     internal float stamina;
    internal float maxFocus;
     internal float focus;
    [Serializable]internal class ActorSerializableSpecsData:PersistentDataBackgroundContainer.SerializableSpecsData{
     public float maxStamina;
      public float stamina;
     public float maxFocus;
      public float focus;
    }

    protected override void Awake(){
     if(container==null){container=new PersistentDataBackgroundContainer(syn);}
     if(container.specsData_bg==null){container.specsData_bg=new ActorSerializableSpecsData();}
     if(container.transform_bg==null){container.transform_bg=new PersistentDataBackgroundContainer.SerializableTransform();}

     base.Awake();

     hitboxes=GetComponentInChildren<ActionHitboxes>();
     hitboxes.OnMotionCycleEndEvent+=OnMotionCycleEndEvent;

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

    protected override void OnDestroy(){

     base.OnDestroy();
            
     if(hitboxes!=null){
      hitboxes.OnMotionCycleEndEvent-=OnMotionCycleEndEvent;
     }
    }

    protected override void GetPersistentData(){

     base.GetPersistentData();

     if(container.specsData_bg is ActorSerializableSpecsData specsData){
      Debug.Log("ActorSerializableSpecsData");
      maxStamina=specsData.maxStamina;
       stamina=specsData.stamina;
      if(maxStamina<stamina){
       maxStamina=stamina;
      }
      maxFocus=specsData.maxFocus;
       focus=specsData.focus;
      if(maxFocus<focus){
       maxFocus=focus;
      }
     }

    }

    protected override void SetPersistentData(){

     if(container.specsData_bg is ActorSerializableSpecsData specsData){
      Debug.Log("ActorSerializableSpecsData");
      specsData.maxStamina=maxStamina;
       specsData.stamina=stamina;
      specsData.maxFocus=maxFocus;
       specsData.focus=focus;
     }

     base.SetPersistentData();

    }

    void OnMotionCycleEndEvent(object sender,EventArgs e){
     Debug.Log("OnMotionCycleEndEvent");
     isMotionLocked=false;
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

         if(doAttack>=0){
          StopMovement();
         }

         UpdateMotion();

         if(isMotionLocked){
          StopMovement();
         }

         hitboxes.ManualUpdate();

        }

       }
      }
     }
    }

    internal enum Motion:int{
     MOTION_STAND =0,
     MOTION_MOVE  =1,
     MOTION_ATTACK=2,
    }

    protected Motion MyMotion=Motion.MOTION_STAND;
     internal Motion GetV_Motion{get{return MyMotion;}}

    internal enum State:int{
     IDLE_ST=0,
    }

    protected State MyState=State.IDLE_ST;
     internal State GetV_State{get{return MyState;}}
        
    [SerializeField]bool DEBUG_ATTACK=false;

    internal virtual void AI(){
     if(MyState==State.IDLE_ST){
      OnIDLE_ST();
     }

     if(DEBUG_ATTACK){
      DEBUG_ATTACK=false;
      Attack();
     }

    }
        
    protected bool isMotionLocked=false;

    internal virtual void UpdateMotion(){
     if(!Mathf.Approximately(navMeshAgent.velocity.sqrMagnitude,0f)){
      SetMotion(Motion.MOTION_MOVE);
      return;
     }
     if(doAttack>=0){
      if(SetMotion(Motion.MOTION_ATTACK,true)){
       doAttack=-1;
      }
      return;
     }
     SetMotion(Motion.MOTION_STAND);
    }

    bool SetMotion(Motion nextMotion,bool lockMotion=false){
     if(isMotionLocked){
      return false;
     }
     if(MyMotion!=nextMotion){OnChangedMotion(MyMotion,nextMotion);}
     MyMotion=nextMotion;
     isMotionLocked=lockMotion;
     return true;
    }

    void OnChangedMotion(Motion fromMotion,Motion toMotion){
     EventHandler handler=OnChangedMotionEvent;handler?.Invoke(this,new OnChangedMotionEventArgs(){
      fromMotion=fromMotion,toMotion=toMotion,
     });
    }
    internal event EventHandler OnChangedMotionEvent;
    internal class OnChangedMotionEventArgs:EventArgs{
     internal Motion fromMotion;internal Motion toMotion;
    }

    [SerializeField]internal OnIDLE_ST_Data OnIDLE_ST_data=new OnIDLE_ST_Data();
    [Serializable]
    internal class OnIDLE_ST_Data{
     [SerializeField]internal float timeToRandomMove=8f;
      internal float timerToRandomMove=1f;
    }
    internal virtual void OnIDLE_ST(){
     //Debug.Log("OnIDLE_ST");
    }

    int doAttack=-1;
    protected virtual void Attack(){
     doAttack=0;
    }

    protected virtual void StopMovement(){
     if(navMeshAgent.enabled){
      if(navMeshAgent.hasPath||navMeshAgent.pathPending){
       Debug.Log("stop movement");
       navMeshAgent.ResetPath();
       navMeshAgent.velocity=Vector3.zero;
      }
     }
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

    internal bool DestinationReached(){
     if(!navMeshAgent.enabled){
      return false;
     }
     if(navMeshAgent.pathPending){
      return false;
     }
     if(!navMeshAgent.hasPath){
      return true;
     }
     if(navMeshAgent.remainingDistance==Mathf.Infinity){
      return true;
     }
     if(navMeshAgent.remainingDistance>navMeshAgent.stoppingDistance){
      return false;
     }
     if(Mathf.Approximately(navMeshAgent.velocity.sqrMagnitude,0f)){
      return true;
     }
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
       //Debug.Log("hitResult.hit:"+hitResult.hit);
      }else{
       //Debug.LogWarning("EnableNavMeshAgent:cancel:no NavMesh built yet");
      }
     }
    }

    internal void DisableNavMeshAgent(){
     navMeshAgent.enabled=false;
    }
 }
}