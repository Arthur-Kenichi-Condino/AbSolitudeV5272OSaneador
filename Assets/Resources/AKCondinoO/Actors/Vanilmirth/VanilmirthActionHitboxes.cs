using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AKCondinoO.Sims.Actors{
 internal class VanilmirthActionHitboxes:ActionHitboxes{
        
    protected override void Update(){
     
     base.Update();

    }

    internal override Vector3[]body_MOTION_STAND_positions{get;}=new Vector3[]{
     Vector3.down*.25f,
     Vector3.down*.45f,
     Vector3.down*.55f,
     Vector3.down*.45f,
    };

    internal override void OnMOTION_STAND(){

     base.OnMOTION_STAND();

    }

 }
}