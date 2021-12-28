using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AKCondinoO.Sims.Actors{
 internal class VanilmirthActionHitboxes:ActionHitboxes{

    Vector3[]bodyPos_MOTION_STAND_v;
    internal override Vector3[]bodyPos_MOTION_STAND{
     get{
      if(bodyPos_MOTION_STAND_v==null){
       GenerateMovementCycle(ref bodyPos_MOTION_STAND_v,new Vector3(0,-.25f,0),new Vector3(0,-.85f,0),2);
      }
      return bodyPos_MOTION_STAND_v;
     }
    }
        
    Vector3[]bodyPos_MOTION_MOVE_v;
    internal override Vector3[]bodyPos_MOTION_MOVE{
     get{
      if(bodyPos_MOTION_MOVE_v==null){
       GenerateMovementCycle(ref bodyPos_MOTION_MOVE_v,new Vector3(0,-.25f,0),new Vector3(0,-.85f,.6f),2);
      }
      return bodyPos_MOTION_MOVE_v;
     }
    }

 }
}