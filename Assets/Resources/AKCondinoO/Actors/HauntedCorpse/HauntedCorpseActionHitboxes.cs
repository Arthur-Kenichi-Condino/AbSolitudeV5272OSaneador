using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AKCondinoO.Sims.Actors{
 internal class HauntedCorpseActionHitboxes:ActionHitboxes{
        
    protected override void Update(){
     
     base.Update();

    }

    internal override Vector3[]MOTION_MOVE_bodyPositions{get;}=new Vector3[]{
     new Vector3(0,0,1.0f),
    };
        
 }
}