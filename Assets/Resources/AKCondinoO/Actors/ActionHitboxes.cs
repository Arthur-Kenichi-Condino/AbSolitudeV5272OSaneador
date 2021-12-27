using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AKCondinoO.Sims.Actors{
 internal class ActionHitboxes:MonoBehaviour{

    internal SimActor actor;

    protected virtual void Awake(){

     actor=transform.root.GetComponent<SimActor>();

    }
    
    [SerializeField]internal GameObject body;
     protected int body_currentPositionIndex=0;
      protected float body_position_lerpVal=0f;
       protected bool body_position_lerping=false;
        protected Vector3 body_startPosition;
         protected Vector3 body_desiredPosition;

    protected virtual void Update(){
     Debug.Log("actor.GetV_Motion:"+actor.GetV_Motion);
     if(actor.GetV_Motion==SimActor.Motion.MOTION_STAND){
      OnMOTION_STAND();
     }
     
     Debug.Log("body_desiredPosition:"+body_desiredPosition);

     if(body_position_lerping){
      body_position_lerpVal+=.05f;
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
            
     if(body_position_lerpVal>=1f){
      body_position_lerping=false;
      body_currentPositionIndex++;
      if(body_currentPositionIndex>=body_MOTION_STAND_positions.Length){
       body_currentPositionIndex=0;
      }
     }

     if(!body_position_lerping){

      body_startPosition=body.transform.position;
       body_desiredPosition=transform.root.position+body_MOTION_STAND_positions[body_currentPositionIndex];

      body_position_lerpVal=0f;
      body_position_lerping=true;
     }

    }

 }
}