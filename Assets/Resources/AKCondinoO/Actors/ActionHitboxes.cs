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
     protected int bodyCurrentPositionIndex=0;
      protected float bodyPositionLerpVal=0f;
       protected bool bodyPositionLerping=false;
        protected float bodyPositionLerpSpeed;
         protected Vector3 bodyStartPosition;
          protected Vector3 bodyDesiredPosition;

    void OnChangedMotionEvent(object sender,EventArgs e){
     bodyCurrentPositionIndex=0;
     bodyPositionLerpVal=0f;
     bodyPositionLerping=false;
    }

    protected virtual void Update(){
     Debug.Log("actor.GetV_Motion:"+actor.GetV_Motion);
     if(actor.GetV_Motion==SimActor.Motion.MOTION_STAND){
      OnMOTION_STAND();
     }
     if(actor.GetV_Motion==SimActor.Motion.MOTION_MOVE){
      OnMOTION_MOVE();
     }
     
     Debug.Log("body_desiredPosition:"+bodyDesiredPosition);

     if(bodyPositionLerping){
      bodyPositionLerpVal+=bodyPositionLerpSpeed;
      if(bodyPositionLerpVal>=1f){
       bodyPositionLerpVal=1f;
      }
     }

     body.transform.position=Vector3.Lerp(bodyStartPosition,bodyDesiredPosition,bodyPositionLerpVal);

    }

    internal virtual Vector3[]MOTION_STAND_bodyPositions{get;}=new Vector3[]{
     Vector3.zero,
    };

    internal virtual void OnMOTION_STAND(){
     Debug.Log("OnMOTION_STAND");
            
     SetBodyNextPositionIndex(MOTION_STAND_bodyPositions);
            
     BeginLerpingBodyPosition(MOTION_STAND_bodyPositions);

    }

    internal virtual Vector3[]MOTION_MOVE_bodyPositions{get;}=new Vector3[]{
     Vector3.zero,
    };

    internal virtual void OnMOTION_MOVE(){
     Debug.Log("OnMOTION_MOVE");

     SetBodyNextPositionIndex(MOTION_MOVE_bodyPositions);

     BeginLerpingBodyPosition(MOTION_MOVE_bodyPositions);

    }

    void SetBodyNextPositionIndex(Vector3[]positions){
     if(bodyPositionLerpVal>=1f){
      bodyPositionLerping=false;
      bodyCurrentPositionIndex++;
      if(bodyCurrentPositionIndex>=positions.Length){
       bodyCurrentPositionIndex=0;
      }
     }
    }

    void BeginLerpingBodyPosition(Vector3[]positions,float lerpSpeed=.05f){
     if(!bodyPositionLerping){
      Quaternion rotation;
      if(actor.navMeshAgent.desiredVelocity.sqrMagnitude!=0f){
       rotation=Quaternion.LookRotation(actor.navMeshAgent.velocity.normalized);
      }else{
       rotation=transform.root.rotation;
      }
      bodyStartPosition=body.transform.position;
      bodyDesiredPosition=transform.root.position+rotation*positions[bodyCurrentPositionIndex];
      bodyPositionLerpSpeed=lerpSpeed;
      bodyPositionLerpVal=0f;
      bodyPositionLerping=true;
     }
    }

 }
}