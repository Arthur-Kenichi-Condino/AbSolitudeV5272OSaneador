using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AKCondinoO{internal class MainCamera:MonoBehaviour{internal static MainCamera Singleton;

void Awake(){if(Singleton==null){Singleton=this;}else{DestroyImmediate(this);return;}
 Camera.main.transparencySortMode=TransparencySortMode.Default;
 tgtRot=tgtRot_Pre=transform.eulerAngles;
 tgtPos=tgtPos_Pre=transform.position;
}

Vector3 tgtRot,tgtRot_Pre;
Vector3 tgtPos,tgtPos_Pre;
// Update is called once per frame
void Update(){         
}

}}