using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AKCondinoO.Sims.Actors{
 internal class VanilmirthActionHitboxes:ActionHitboxes{
        
    protected override void Update(){
     
     base.Update();

    }

    internal override Vector3[]MOTION_STAND_bodyPositions{get;}=new Vector3[]{
     Vector3.down*.25f,
     Vector3.down*.45f,
     Vector3.down*.55f,
     Vector3.down*.45f,
    };

    internal override void OnMOTION_STAND(){

     base.OnMOTION_STAND();

    }

    internal override Vector3[]MOTION_MOVE_bodyPositions{get;}=new Vector3[]{
     new Vector3(0,-.25f,1.20f),
     new Vector3(0,-.45f,.750f),
     new Vector3(0,-.55f,1.20f),
     new Vector3(0,-.45f,.750f),
    };

 }
}