using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AKCondinoO.Sims.Actors{
 internal class VanilmirthActionHitboxes:ActionHitboxes{
        
    internal override void ManualUpdate(){
     
     base.ManualUpdate();

    }

    internal override Vector3[]bodyPos_MOTION_STAND{get;}=new Vector3[]{
     Vector3.down*.25f,
     Vector3.down*.45f,
     Vector3.down*.55f,
     Vector3.down*.45f,
    };

    internal override void OnMOTION_STAND(){

     base.OnMOTION_STAND();

    }

    internal override Vector3[]bodyPos_MOTION_MOVE{get;}=new Vector3[]{
     new Vector3(0,-.25f,1.20f),
     new Vector3(0,-.45f,.750f),
     new Vector3(0,-.55f,1.20f),
     new Vector3(0,-.45f,.750f),
    };

 }
}