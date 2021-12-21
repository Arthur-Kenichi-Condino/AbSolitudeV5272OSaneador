using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

namespace AKCondinoO.Sims{
 internal class SimActor:SimObject{

    internal NavMeshAgent navMeshAgent;

    internal CharacterController characterController;

    protected override void Awake(){

     base.Awake();

     characterController=GetComponentInChildren<CharacterController>();
     localBounds=new Bounds(transform.position,
      new Vector3(
       characterController.radius*2f,
       characterController.height,
       characterController.radius*2f
      )
     );
     localBounds.center=transform.InverseTransformPoint(localBounds.center);
     Debug.Log("characterController localBounds.center:"+localBounds.center+";localBounds.size:"+localBounds.size,this);

     navMeshAgent=GetComponent<NavMeshAgent>();
     Debug.Log("navMeshAgent:"+navMeshAgent+" "+navMeshAgent.agentTypeID,this);
     navMeshAgent.enabled=false;
    }

    internal override void OnActivated(bool load){

     base.OnActivated(load);

    }

    internal bool isUsingAI=true;

    internal override void ManualUpdate(){

     base.ManualUpdate();

    }
 }
}