using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;

namespace AKCondinoO{internal class InputHandler:MonoBehaviour{internal static InputHandler Singleton;

internal readonly Dictionary<string,object[]>AllCommands=new Dictionary<string,object[]>();

internal readonly Dictionary<string,object[]>AllStates  =new Dictionary<string,object[]>();

readonly Dictionary<Type,Delegate>GetsDelegates=new Dictionary<Type,Delegate>();
 readonly Dictionary<Type,object[]>Gets=new Dictionary<Type,object[]>();

void Awake(){if(Singleton==null){Singleton=this;}else{DestroyImmediate(this);return;}

 foreach(FieldInfo field in typeof(Commands).GetFields(BindingFlags.NonPublic|BindingFlags.Static)){
  Debug.Log("process Commands field:"+field.Name);
  if(field.GetValue(null)is object[]command){
   Debug.Log("field is a command input to be handled, add it to AllCommands:"+field.Name);
   AllCommands.Add(field.Name,command);
  }
 }
 foreach(FieldInfo field in typeof(Enabled).GetFields(BindingFlags.NonPublic|BindingFlags.Static)){
  Debug.Log("process Enabled field:"+field.Name);
  if(field.GetValue(null)is object[]state){
   Debug.Log("add input state field:"+field.Name);
   AllStates.Add(field.Name,state);
  }
 }

 foreach(MethodInfo method in GetType().GetMethods(BindingFlags.NonPublic|BindingFlags.Instance)){
  //Debug.Log("process method:"+method.Name);
  if(method.Name=="Get"){
   var inputType=method.GetParameters()[1].ParameterType;
   Delegate result;
   if(inputType==typeof(KeyCode))result=method.CreateDelegate(typeof(Func<Func<KeyCode,bool>,KeyCode,bool>),this);else
   if(inputType==typeof(int    ))result=method.CreateDelegate(typeof(Func<Func<int    ,bool>,int    ,bool>),this);else
                                 result=method.CreateDelegate(typeof(Func<Func<string ,bool>,string ,bool>),this);
   GetsDelegates[inputType]=result;
  }
 }

 Gets.Add(typeof(KeyCode),  keyboardGets);
 Gets.Add(typeof(int    ),     mouseGets);
 Gets.Add(typeof(string ),controllerGets);
}

// Update is called once per frame
void Update(){
 foreach(var command in AllCommands){
  string         name=command.Key;
  Type           type=command.Value[0].GetType();
  Commands.Modes mode=(Commands.Modes)command.Value[1];
  object[]state=AllStates[name];
                
  state[1]=state[0];
  UpdateCommandState();

  void UpdateCommandState(){
   if      (mode==Commands.Modes.holdDelayAfterInRange){
    state[0]=false;
    if((bool)command.Value[3]&&GetsDelegatesInvoke(0)){
     float heldTime=(float)state[2];
           heldTime+=Time.deltaTime;
     if(heldTime>=(float)command.Value[2]){
      heldTime=0;
      state[0]=true;
     }
     state[2]=heldTime;
    }else{
     state[2]=0f;
    }
    command.Value[3]=false;

   }else if(mode==Commands.Modes.holdDelay){
    state[0]=false;
    if(GetsDelegatesInvoke(0)){
     float heldTime=(float)state[2];
           heldTime+=Time.deltaTime;
     if(heldTime>=(float)command.Value[2]){
      heldTime=0;
      state[0]=true;
     }
     state[2]=heldTime;
    }else{
     state[2]=0f;
    }

   }else if(mode==Commands.Modes.activeHeld){
    state[0]=GetsDelegatesInvoke(0);

   }

   bool GetsDelegatesInvoke(int getsType){
    if(type==typeof(KeyCode))return((Func<Func<KeyCode,bool>,KeyCode,bool>)GetsDelegates[type]).Invoke((Func<KeyCode,bool>)Gets[type][getsType],(KeyCode)command.Value[0]);else
    if(type==typeof(int    ))return((Func<Func<int    ,bool>,int    ,bool>)GetsDelegates[type]).Invoke((Func<int    ,bool>)Gets[type][getsType],(int    )command.Value[0]);else
                             return((Func<Func<string ,bool>,string ,bool>)GetsDelegates[type]).Invoke((Func<string ,bool>)Gets[type][getsType],(string )command.Value[0]);
   }

  }
 }
}   

#pragma warning disable IDE0051 //  Ignore "remover membros privados não utilizados"
bool Get(Func<KeyCode,bool>  keyboardGet,KeyCode   key){return   keyboardGet(   key);}readonly Func<KeyCode,bool>[]  keyboardGets=new Func<KeyCode,bool>[3]{Input.GetKey        ,Input.GetKeyUp        ,Input.GetKeyDown        ,};
bool Get(Func<int    ,bool>     mouseGet,int    button){return      mouseGet(button);}readonly Func<int    ,bool>[]     mouseGets=new Func<int    ,bool>[3]{Input.GetMouseButton,Input.GetMouseButtonUp,Input.GetMouseButtonDown,};
bool Get(Func<string ,bool>controllerGet,string button){return controllerGet(button);}readonly Func<string ,bool>[]controllerGets=new Func<string ,bool>[3]{Input.GetButton     ,Input.GetButtonUp     ,Input.GetButtonDown     ,};
#pragma warning restore IDE0051 
}

internal static class Commands{
 internal static object[]PAUSE={KeyCode.Tab,Modes.alternateDown};

 internal enum Modes{holdDelayAfterInRange,holdDelay,activeHeld,alternateDown,whenUp,}
}

internal static class Enabled{
 internal static readonly object[]PAUSE={true,true};
}

}