using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AKCondinoO{
 internal class MainCamera:MonoBehaviour{internal static MainCamera Singleton;

    void Awake(){if(Singleton==null){Singleton=this;}else{DestroyImmediate(this);return;}
     Camera.main.transparencySortMode=TransparencySortMode.Perspective;
     tgtRot=tgtRot_Pre=transform.eulerAngles;
     tgtPos=tgtPos_Pre=transform.position;
    }

    Vector3 tgtRot,tgtRot_Pre;
     float tgtRotLerpTime;
      float tgtRotLerpMaxTime=.025f;
       float tgtRotLerpVal;
        float tgtRotLerpSpeed=18.75f;
         Quaternion tgtRotLerpA,tgtRotLerpB;
          Vector3 inputViewRotationEuler;
           [SerializeField]float ViewRotationSmoothValue=.025f;
    Vector3 tgtPos,tgtPos_Pre;
     float tgtPosLerpTime;
      float tgtPosLerpMaxTime=.05f;
       float tgtPosLerpVal;
        float tgtPosLerpSpeed=25f;
         Vector3 tgtPosLerpA,tgtPosLerpB;
          Vector3 inputMoveSpeed;
           [SerializeField]Vector3 MoveAcceleration=new Vector3(.01f,.01f,.01f);
            [SerializeField]Vector3 MaxMoveSpeed=new Vector3(.1f,.1f,.1f);
    // Update is called once per frame
    void Update(){         
     if(!(bool)Enabled.PAUSE[0]){
      #region ROTATE
      inputViewRotationEuler.x+=-Enabled.MOUSE_ROTATION_DELTA_Y[0]*ViewRotationSmoothValue;
      inputViewRotationEuler.y+= Enabled.MOUSE_ROTATION_DELTA_X[0]*ViewRotationSmoothValue;
      inputViewRotationEuler.x=inputViewRotationEuler.x%360;
      inputViewRotationEuler.y=inputViewRotationEuler.y%360;
      #endregion
      #region FORWARD BACKWARD
      if((bool)Enabled.FORWARD [0]){inputMoveSpeed.z+=MoveAcceleration.z;} 
      if((bool)Enabled.BACKWARD[0]){inputMoveSpeed.z-=MoveAcceleration.z;}
       if(!(bool)Enabled.FORWARD[0]&&!(bool)Enabled.BACKWARD[0]){inputMoveSpeed.z=0;}
        if( inputMoveSpeed.z>MaxMoveSpeed.z){inputMoveSpeed.z= MaxMoveSpeed.z;}
        if(-inputMoveSpeed.z>MaxMoveSpeed.z){inputMoveSpeed.z=-MaxMoveSpeed.z;}
      #endregion
      #region RIGHT LEFT
      if((bool)Enabled.RIGHT   [0]){inputMoveSpeed.x+=MoveAcceleration.x;} 
      if((bool)Enabled.LEFT    [0]){inputMoveSpeed.x-=MoveAcceleration.x;}
       if(!(bool)Enabled.RIGHT[0]&&!(bool)Enabled.LEFT[0]){inputMoveSpeed.x=0;}
        if( inputMoveSpeed.x>MaxMoveSpeed.x){inputMoveSpeed.x= MaxMoveSpeed.x;}
        if(-inputMoveSpeed.x>MaxMoveSpeed.x){inputMoveSpeed.x=-MaxMoveSpeed.x;}
      #endregion
     }else{
      inputViewRotationEuler=Vector3.zero;
      inputMoveSpeed=Vector3.zero;
     }

     #region ROTATION LERP
     if(inputViewRotationEuler!=Vector3.zero){
      tgtRot+=inputViewRotationEuler;
      inputViewRotationEuler=Vector3.zero;
     }
     if(tgtRotLerpTime==0){
      if(tgtRot!=tgtRot_Pre){
       //Debug.Log("input rotation detected:start rotating to tgtRot:"+tgtRot);
       tgtRotLerpVal=0;
       tgtRotLerpA=transform.rotation;
       tgtRotLerpB=Quaternion.Euler(tgtRot);
       tgtRotLerpTime+=Time.deltaTime;
       tgtRot_Pre=tgtRot;
      }
     }else{
      tgtRotLerpTime+=Time.deltaTime;
     }
     if(tgtRotLerpTime!=0){
      tgtRotLerpVal+=tgtRotLerpSpeed*Time.deltaTime;
      if(tgtRotLerpVal>=1){
       tgtRotLerpVal=1;
       tgtRotLerpTime=0;
       //Debug.Log("tgtRot:"+tgtRot+" reached");
      }
      //Debug.Log("tgtRotLerpA:"+tgtRotLerpA+";tgtRotLerpB:"+tgtRotLerpB);
      transform.rotation=Quaternion.Lerp(tgtRotLerpA,tgtRotLerpB,tgtRotLerpVal);
      if(tgtRotLerpTime>tgtRotLerpMaxTime){
       if(tgtRot!=tgtRot_Pre){
        //Debug.Log("get new tgtRot:"+tgtRot+";don't need to lerp all the way to old target before going to a new one");
        tgtRotLerpTime=0;
       }
      }
     }
     #endregion
 
     #region POSITION LERP
     if(inputMoveSpeed!=Vector3.zero){
      tgtPos+=transform.rotation*inputMoveSpeed;
     }
     if(tgtPosLerpTime==0){
      if(tgtPos!=tgtPos_Pre){
       //Debug.Log("input movement detected:start going to tgtPos:"+tgtPos);
       tgtPosLerpVal=0;
       tgtPosLerpA=transform.position;
       tgtPosLerpB=tgtPos;
       tgtPosLerpTime+=Time.deltaTime;
       tgtPos_Pre=tgtPos;
      }
     }else{
      tgtPosLerpTime+=Time.deltaTime;
     }
     if(tgtPosLerpTime!=0){
      tgtPosLerpVal+=tgtPosLerpSpeed*Time.deltaTime;
      if(tgtPosLerpVal>=1){
       tgtPosLerpVal=1;
       tgtPosLerpTime=0;
       //Debug.Log("tgtPos:"+tgtPos+" reached");
      }
      transform.position=Vector3.Lerp(tgtPosLerpA,tgtPosLerpB,tgtPosLerpVal);
      if(tgtPosLerpTime>tgtPosLerpMaxTime){
       if(tgtPos!=tgtPos_Pre){
        Debug.Log("get new tgtPos:"+tgtPos+";don't need to lerp all the way to old target before going to a new one");
        tgtPosLerpTime=0;
       }
      }
     }
     #endregion

    }

 }
}