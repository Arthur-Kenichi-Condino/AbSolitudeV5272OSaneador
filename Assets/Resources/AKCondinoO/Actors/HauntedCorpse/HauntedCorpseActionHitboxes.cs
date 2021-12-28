using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AKCondinoO.Sims.Actors{
 internal class HauntedCorpseActionHitboxes:ActionHitboxes{
        
    internal override Vector3[]bodyPos_MOTION_STAND{get;}=new Vector3[]{
     new Vector3(0,-.1f,0),
    };

    internal override Vector3[]bodyPos_MOTION_MOVE{get;}=new Vector3[]{
     new Vector3(0,-.1f,0),
    };
        
 }
}