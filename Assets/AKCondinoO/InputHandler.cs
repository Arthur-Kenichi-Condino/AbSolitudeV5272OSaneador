using System;
using System.Collections;
using System.Collections.Generic;
using System.Reflection;
using UnityEngine;

namespace AKCondinoO{
 internal class InputHandler:MonoBehaviour{internal static InputHandler Singleton;

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

    internal bool Focus=true;
    void OnApplicationFocus(bool focus){
     Focus=focus;
    }
        
    internal Ray ScreenPointRay;
    internal bool Escape;
    // Update is called once per frame
    void Update(){
     ScreenPointRay=(Camera.current!=null?Camera.current:Camera.main).ScreenPointToRay(Input.mousePosition);

     Escape=Input.GetKey(KeyCode.Escape)||Input.GetKeyDown(KeyCode.Escape)||Input.GetKeyUp(KeyCode.Escape);

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

       }else if(mode==Commands.Modes.alternateDown){
        if(GetsDelegatesInvoke(2)){
         state[0]=!(bool)state[0];
        }

       }

       bool GetsDelegatesInvoke(int getsType){
        if(type==typeof(KeyCode))return((Func<Func<KeyCode,bool>,KeyCode,bool>)GetsDelegates[type]).Invoke((Func<KeyCode,bool>)Gets[type][getsType],(KeyCode)command.Value[0]);else
        if(type==typeof(int    ))return((Func<Func<int    ,bool>,int    ,bool>)GetsDelegates[type]).Invoke((Func<int    ,bool>)Gets[type][getsType],(int    )command.Value[0]);else
                                 return((Func<Func<string ,bool>,string ,bool>)GetsDelegates[type]).Invoke((Func<string ,bool>)Gets[type][getsType],(string )command.Value[0]);
       }

      }
     }

     Enabled.PAUSE[0]=(bool)Enabled.PAUSE[0]||Escape||!Focus;
     if((bool)Enabled.PAUSE[0]!=(bool)Enabled.PAUSE[1]){
      if((bool)Enabled.PAUSE[0]){
       Cursor.visible=true;
       Cursor.lockState=CursorLockMode.None;
      }else{
       Cursor.visible=false;
       Cursor.lockState=CursorLockMode.Locked;
      }
     }

     Enabled.MOUSE_ROTATION_DELTA_X[1]=Enabled.MOUSE_ROTATION_DELTA_X[0];Enabled.MOUSE_ROTATION_DELTA_X[0]=Commands.ROTATION_SENSITIVITY_X*Input.GetAxis("Mouse X");
     Enabled.MOUSE_ROTATION_DELTA_Y[1]=Enabled.MOUSE_ROTATION_DELTA_Y[0];Enabled.MOUSE_ROTATION_DELTA_Y[0]=Commands.ROTATION_SENSITIVITY_Y*Input.GetAxis("Mouse Y");

    }   

    #pragma warning disable IDE0051 //  Ignore "remover membros privados n?o utilizados"
    bool Get(Func<KeyCode,bool>  keyboardGet,KeyCode   key){return   keyboardGet(   key);}readonly Func<KeyCode,bool>[]  keyboardGets=new Func<KeyCode,bool>[3]{Input.GetKey        ,Input.GetKeyUp        ,Input.GetKeyDown        ,};
    bool Get(Func<int    ,bool>     mouseGet,int    button){return      mouseGet(button);}readonly Func<int    ,bool>[]     mouseGets=new Func<int    ,bool>[3]{Input.GetMouseButton,Input.GetMouseButtonUp,Input.GetMouseButtonDown,};
    bool Get(Func<string ,bool>controllerGet,string button){return controllerGet(button);}readonly Func<string ,bool>[]controllerGets=new Func<string ,bool>[3]{Input.GetButton     ,Input.GetButtonUp     ,Input.GetButtonDown     ,};
    #pragma warning restore IDE0051 
 }

 internal static class Commands{
  internal static object[]PAUSE={KeyCode.Tab,Modes.alternateDown};
  internal static object[]FORWARD ={KeyCode.W,Modes.activeHeld};
  internal static object[]BACKWARD={KeyCode.S,Modes.activeHeld};
  internal static object[]RIGHT   ={KeyCode.D,Modes.activeHeld};
  internal static object[]LEFT    ={KeyCode.A,Modes.activeHeld};
  internal static float ROTATION_SENSITIVITY_X=360.0f;
  internal static float ROTATION_SENSITIVITY_Y=360.0f;
 
  internal enum Modes{holdDelayAfterInRange,holdDelay,activeHeld,alternateDown,whenUp,}
 }

 internal static class Enabled{
  internal static readonly object[]PAUSE={true,true};
  internal static readonly object[]FORWARD ={false,false};
  internal static readonly object[]BACKWARD={false,false};
  internal static readonly object[]RIGHT   ={false,false};
  internal static readonly object[]LEFT    ={false,false};
  internal static readonly float[]MOUSE_ROTATION_DELTA_X={0,0};
  internal static readonly float[]MOUSE_ROTATION_DELTA_Y={0,0};
 }

}