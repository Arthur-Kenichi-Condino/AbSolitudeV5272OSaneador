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

    protected void GenerateMovementCycle(ref Vector3[]positions,Vector3 startPoint,Vector3 middlePoint,int numberOfPointsUntilMiddle){
     int numberOfPoints=numberOfPointsUntilMiddle*2;
     positions=new Vector3[numberOfPoints];
     Vector3 increaseValue=(middlePoint-startPoint)/numberOfPoints;
     for(int i=0;i<numberOfPoints;++i){
      if(i>=numberOfPointsUntilMiddle){
       positions[i]=middlePoint-increaseValue*i;
      }else{
       positions[i]=startPoint+increaseValue*i;
      }
      Debug.Log("GenerateMovementCycle:positions[i]:"+positions[i]);
     }
    }
    
    [SerializeField]internal GameObject body;
     protected int bodyPosIdx=0;
      protected bool bodyPosLerping=false;
       protected float bodyPosLerpSpeed;
        protected float bodyPosLerpVal=0f;
         protected Vector3 bodyPosLerpA;
         protected Vector3 bodyPosLerpB;

    bool changedMotion;
    void OnChangedMotionEvent(object sender,EventArgs e){
     changedMotion=true;
     bodyPosLerping=false;
     bodyPosLerpVal=0f;
     bodyPosIdx=0;
    }

    internal virtual void ManualUpdate(){
     //Debug.Log("actor.GetV_Motion:"+actor.GetV_Motion);
     if(actor.GetV_Motion==SimActor.Motion.MOTION_STAND){
      OnMOTION_STAND();
     }
     if(actor.GetV_Motion==SimActor.Motion.MOTION_MOVE){
      OnMOTION_MOVE();
     }
     
     //Debug.Log("bodyPosLerpB:"+bodyPosLerpB);

     if(bodyPosLerping){
      bodyPosLerpVal+=bodyPosLerpSpeed;
      if(bodyPosLerpVal>=1f){
       bodyPosLerpVal=1f;
      }
     }

     body.transform.position=Vector3.Lerp(bodyPosLerpA,bodyPosLerpB,bodyPosLerpVal);

    }

    internal virtual Vector3[]bodyPos_MOTION_STAND{get;}=new Vector3[]{
     Vector3.zero,
    };

    internal virtual void OnMOTION_STAND(){
     //Debug.Log("OnMOTION_STAND");
            
     SetBodyNextPositionIndex(bodyPos_MOTION_STAND);
            
     BeginLerpingBodyPosition(bodyPos_MOTION_STAND,.1f);

    }

    internal virtual Vector3[]bodyPos_MOTION_MOVE{get;}=new Vector3[]{
     Vector3.zero,
    };

    internal virtual void OnMOTION_MOVE(){
     //Debug.Log("OnMOTION_MOVE");

     SetBodyNextPositionIndex(bodyPos_MOTION_MOVE);

     BeginLerpingBodyPosition(bodyPos_MOTION_MOVE,.1f);

    }

    protected void SetBodyNextPositionIndex(Vector3[]positions){
     if(bodyPosLerpVal>=1f){
      bodyPosLerping=false;
      bodyPosIdx++;
      if(bodyPosIdx>=positions.Length){
       bodyPosIdx=0;
      }
     }
    }

    protected void BeginLerpingBodyPosition(Vector3[]positions,float lerpSpeed=.05f){
     if(!bodyPosLerping){
      Quaternion rotation;
      if(actor.GetV_Motion==SimActor.Motion.MOTION_MOVE){
       Vector3 horizontalVelocity=actor.navMeshAgent.velocity;
               horizontalVelocity.y=0f;
       Vector3 normalized=horizontalVelocity.normalized;
       if(Mathf.Approximately(normalized.sqrMagnitude,0f)){
        rotation=transform.root.rotation;
       }else{
        rotation=Quaternion.LookRotation(normalized);
       }
      }else{
       rotation=transform.root.rotation;
      }
      bodyPosLerpA=body.transform.position;
      bodyPosLerpB=transform.root.position+rotation*positions[bodyPosIdx];
      bodyPosLerpSpeed=lerpSpeed;
      bodyPosLerpVal=0f;
      bodyPosLerping=true;
     }
    }

 }
}