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
     Debug.Log("actor.GetV_Motion:"+actor.GetV_Motion);
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
     Debug.Log("OnMOTION_STAND");
            
     SetBodyNextPositionIndex(bodyPos_MOTION_STAND);
            
     BeginLerpingBodyPosition(bodyPos_MOTION_STAND);

    }

    internal virtual Vector3[]bodyPos_MOTION_MOVE{get;}=new Vector3[]{
     Vector3.zero,
    };

    internal virtual void OnMOTION_MOVE(){
     Debug.Log("OnMOTION_MOVE");

     SetBodyNextPositionIndex(bodyPos_MOTION_MOVE);

     BeginLerpingBodyPosition(bodyPos_MOTION_MOVE);

    }

    void SetBodyNextPositionIndex(Vector3[]positions){
     if(bodyPosLerpVal>=1f){
      bodyPosLerping=false;
      bodyPosIdx++;
      if(bodyPosIdx>=positions.Length){
       bodyPosIdx=0;
      }
     }
    }

    void BeginLerpingBodyPosition(Vector3[]positions,float lerpSpeed=.05f){
     if(!bodyPosLerping){
      Quaternion rotation;
      if(actor.GetV_Motion==SimActor.Motion.MOTION_MOVE){
       rotation=Quaternion.LookRotation(actor.navMeshAgent.velocity.normalized);
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