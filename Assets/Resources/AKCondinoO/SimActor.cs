using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AKCondinoO.Sims{
 internal class SimActor:SimObject{
    protected override void Awake(){

     base.Awake();

    }

    internal override void OnActivated(bool load){

     base.OnActivated(load);

    }

    internal override void ManualUpdate(){

     base.ManualUpdate();

    }
 }
}