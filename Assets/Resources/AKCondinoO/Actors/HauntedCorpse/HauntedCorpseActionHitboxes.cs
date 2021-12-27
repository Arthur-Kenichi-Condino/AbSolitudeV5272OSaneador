using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AKCondinoO.Sims.Actors{
 internal class HauntedCorpseActionHitboxes:ActionHitboxes{
        
    internal override void ManualUpdate(){
     
     base.ManualUpdate();

    }

    internal override Vector3[]bodyPos_MOTION_MOVE{get;}=new Vector3[]{
     new Vector3(0,0,1.0f),
    };
        
 }
}