using System;
using UnityEngine;

internal static class Utils{

#region[https://answers.unity.com/questions/956047/serialize-quaternion-or-vector3.html]

/// <summary>
///  Since unity doesn't flag the Vector3 as serializable, we
/// need to create our own version. This one will automatically convert
/// between Vector3 and SerializableVector3
/// </summary>
[Serializable]internal struct SerializableVector3{
/// <summary>
/// x component
/// </summary>
public float x;
/// <summary>
/// y component
/// </summary>
public float y;
/// <summary>
/// z component
/// </summary>
public float z;
/// <summary>
/// Constructor
/// </summary>
/// <param name="rX"></param>
/// <param name="rY"></param>
/// <param name="rZ"></param>
public SerializableVector3(float rX,float rY,float rZ){
x=rX;
y=rY;
z=rZ;
}
/// <summary>
/// Returns a string representation of the object
/// </summary>
/// <returns></returns>
public override string ToString(){
return String.Format("[{0}_{1}_{2}]",x,y,z);
}
/// <summary>
/// Automatic conversion from SerializableVector3 to Vector3
/// </summary>
/// <param name="rValue"></param>
/// <returns></returns>
public static implicit operator Vector3(SerializableVector3 rValue){
return new Vector3(rValue.x,rValue.y,rValue.z);
}
/// <summary>
/// Automatic conversion from Vector3 to SerializableVector3
/// </summary>
/// <param name="rValue"></param>
/// <returns></returns>
public static implicit operator SerializableVector3(Vector3 rValue){
return new SerializableVector3(rValue.x,rValue.y,rValue.z);
}
}

[Serializable]internal struct SerializableVector3Int{
/// <summary>
/// x component
/// </summary>
public int x;
/// <summary>
/// y component
/// </summary>
public int y;
/// <summary>
/// z component
/// </summary>
public int z;
/// <summary>
/// Constructor
/// </summary>
/// <param name="rX"></param>
/// <param name="rY"></param>
/// <param name="rZ"></param>
public SerializableVector3Int(int rX,int rY,int rZ){
x=rX;
y=rY;
z=rZ;
}
/// <summary>
/// Returns a string representation of the object
/// </summary>
/// <returns></returns>
public override string ToString(){
return String.Format("[{0}_{1}_{2}]Int",x,y,z);
}
/// <summary>
/// Automatic conversion from SerializableVector3Int to Vector3Int
/// </summary>
/// <param name="rValue"></param>
/// <returns></returns>
public static implicit operator Vector3Int(SerializableVector3Int rValue){
return new Vector3Int(rValue.x,rValue.y,rValue.z);
}
/// <summary>
/// Automatic conversion from Vector3Int to SerializableVector3Int
/// </summary>
/// <param name="rValue"></param>
/// <returns></returns>
public static implicit operator SerializableVector3Int(Vector3Int rValue){
return new SerializableVector3Int(rValue.x,rValue.y,rValue.z);
}
}

/// <summary>
///  Since unity doesn't flag the Quaternion as serializable, we
/// need to create our own version. This one will automatically convert
/// between Quaternion and SerializableQuaternion
/// </summary>
[Serializable]internal struct SerializableQuaternion{
/// <summary>
/// x component
/// </summary>
public float x;     
/// <summary>
/// y component
/// </summary>
public float y;     
/// <summary>
/// z component
/// </summary>
public float z;     
/// <summary>
/// w component
/// </summary>
public float w;     
/// <summary>
/// Constructor
/// </summary>
/// <param name="rX"></param>
/// <param name="rY"></param>
/// <param name="rZ"></param>
/// <param name="rW"></param>
public SerializableQuaternion(float rX,float rY,float rZ,float rW){
x=rX;
y=rY;
z=rZ;
w=rW;
}     
/// <summary>
/// Returns a string representation of the object
/// </summary>
/// <returns></returns>
public override string ToString(){
return String.Format("[{0}_{1}_{2}_{3}]",x,y,z,w);
}
/// <summary>
/// Automatic conversion from SerializableQuaternion to Quaternion
/// </summary>
/// <param name="rValue"></param>
/// <returns></returns>
public static implicit operator Quaternion(SerializableQuaternion rValue){
return new Quaternion(rValue.x,rValue.y,rValue.z,rValue.w);
}     
/// <summary>
/// Automatic conversion from Quaternion to SerializableQuaternion
/// </summary>
/// <param name="rValue"></param>
/// <returns></returns>
public static implicit operator SerializableQuaternion(Quaternion rValue){
return new SerializableQuaternion(rValue.x,rValue.y,rValue.z,rValue.w);
}
}

#endregion

}