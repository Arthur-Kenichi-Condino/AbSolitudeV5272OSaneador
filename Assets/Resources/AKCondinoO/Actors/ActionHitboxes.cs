using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AKCondinoO.Sims.Actors{
 internal class ActionHitboxes:MonoBehaviour{

    internal SimActor actor;

    protected virtual void Awake(){

     actor=transform.root.GetComponent<SimActor>();
     actor.OnChangedMotionEvent+=OnChangedMotionEvent;

    }

    protected virtual void OnDestroy(){

     if(actor!=null){
      actor.OnChangedMotionEvent-=OnChangedMotionEvent;
     }

    }
    
    [SerializeField]internal GameObject body;
     protected int body_currentPositionIndex=0;
      protected float body_position_lerpVal=0f;
       protected bool body_position_lerping=false;
        protected float body_position_lerpSpeed;
         protected Vector3 body_startPosition;
          protected Vector3 body_desiredPosition;

    void OnChangedMotionEvent(object sender,EventArgs e){
     body_currentPositionIndex=0;
     body_position_lerpVal=0f;
     body_position_lerping=false;
    }

    protected virtual void Update(){
     Debug.Log("actor.GetV_Motion:"+actor.GetV_Motion);
     if(actor.GetV_Motion==SimActor.Motion.MOTION_STAND){
      OnMOTION_STAND();
     }
     if(actor.GetV_Motion==SimActor.Motion.MOTION_MOVE){
      OnMOTION_MOVE();
     }
     
     Debug.Log("body_desiredPosition:"+body_desiredPosition);

     if(body_position_lerping){
      body_position_lerpVal+=body_position_lerpSpeed;
      if(body_position_lerpVal>=1f){
       body_position_lerpVal=1f;
      }
     }

     body.transform.position=Vector3.Lerp(body_startPosition,body_desiredPosition,body_position_lerpVal);

    }

    internal virtual Vector3[]body_MOTION_STAND_positions{get;}=new Vector3[]{
     Vector3.zero,
    };

    internal virtual void OnMOTION_STAND(){
     Debug.Log("OnMOTION_STAND");
            
     SetBodyNextPositionIndex(body_MOTION_STAND_positions);
            
     BeginLerpingBodyPosition(body_MOTION_STAND_positions);

    }

    internal virtual Vector3[]body_MOTION_MOVE_positions{get;}=new Vector3[]{
     Vector3.zero,
    };

    internal virtual void OnMOTION_MOVE(){
     Debug.Log("OnMOTION_MOVE");

     SetBodyNextPositionIndex(body_MOTION_MOVE_positions);

     BeginLerpingBodyPosition(body_MOTION_MOVE_positions);

    }

    void SetBodyNextPositionIndex(Vector3[]positions){
     if(body_position_lerpVal>=1f){
      body_position_lerping=false;
      body_currentPositionIndex++;
      if(body_currentPositionIndex>=positions.Length){
       body_currentPositionIndex=0;
      }
     }
    }

    void BeginLerpingBodyPosition(Vector3[]positions,float lerpSpeed=.05f){
     if(!body_position_lerping){
      Quaternion rotation;
      if(actor.navMeshAgent.desiredVelocity.sqrMagnitude!=0f){
       rotation=Quaternion.LookRotation(actor.navMeshAgent.velocity.normalized);
      }else{
       rotation=transform.root.rotation;
      }
      body_startPosition=body.transform.position;
      body_desiredPosition=transform.root.position+rotation*positions[body_currentPositionIndex];
      body_position_lerpSpeed=lerpSpeed;
      body_position_lerpVal=0f;
      body_position_lerping=true;
     }
    }

 }
}