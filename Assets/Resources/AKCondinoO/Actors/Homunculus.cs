using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace AKCondinoO.Sims.Actors{
 internal class Homunculus:SimActor{

      internal override void OnIDLE_ST(){

       base.OnIDLE_ST();
            
       //Debug.Log("OnIDLE_ST_data.timerToRandomMove:"+OnIDLE_ST_data.timerToRandomMove);
       if(OnIDLE_ST_data.timerToRandomMove<=0f){
        OnIDLE_ST_data.timerToRandomMove+=OnIDLE_ST_data.timeToRandomMove;
        if(RandomPoint(transform.position,8f,out Vector3 result)){
         Debug.Log("RandomPoint:result:"+result);
         navMeshAgent.destination=result;
        }
       }else{
        OnIDLE_ST_data.timerToRandomMove-=Time.deltaTime;
       }

      }

 }
}