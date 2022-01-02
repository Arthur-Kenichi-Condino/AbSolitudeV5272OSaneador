using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AKCondinoO.Sims.Actors{
 internal class VanilmirthActionHitboxes:ActionHitboxes{
        
    protected override void Awake(){

     base.Awake();

     

    }

    [SerializeField]internal GameObject tentacle;
     internal GameObject[]tentacles;

    Vector3[]bodyPos_MOTION_STAND_v;
    internal override Vector3[]bodyPos_MOTION_STAND{
     get{
      if(bodyPos_MOTION_STAND_v==null){
       List<Vector3>bodyPos=new List<Vector3>();
       GenerateMovementCycle(ref bodyPos,new Vector3(0,-.25f,0),new Vector3(0,-.85f,0),2);
       bodyPos_MOTION_STAND_v=bodyPos.ToArray();
      }
      return bodyPos_MOTION_STAND_v;
     }
    }
        
    Vector3[]bodyPos_MOTION_MOVE_v;
    internal override Vector3[]bodyPos_MOTION_MOVE{
     get{
      if(bodyPos_MOTION_MOVE_v==null){
       List<Vector3>bodyPos=new List<Vector3>();
       GenerateMovementCycle(ref bodyPos,new Vector3(0,-.25f,0),new Vector3(0,-.85f,.95f),4);
       bodyPos_MOTION_MOVE_v=bodyPos.ToArray();
      }
      return bodyPos_MOTION_MOVE_v;
     }
    }
        
    Vector3[]bodyPos_MOTION_ATTACK_v;
    internal override Vector3[]bodyPos_MOTION_ATTACK{
     get{
      if(bodyPos_MOTION_ATTACK_v==null){
       List<Vector3>bodyPos=new List<Vector3>();
       GenerateMovementCycle(ref bodyPos,new Vector3(0,-.25f,0),new Vector3(0,-.95f,0),2);
       bodyPos_MOTION_ATTACK_v=bodyPos.ToArray();
      }
      return bodyPos_MOTION_ATTACK_v;
     }
    }

 }
}