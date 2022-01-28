#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>>
struct Comparison_1_t25298E45AA65D77FB819F36226B05B6DD20979C6;
// System.Comparison`1<System.Double>
struct Comparison_1_t08C078C3FDDD0746272F4DC7A982874AB477F342;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>>
struct List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003;
// System.Collections.Generic.List`1<System.Double>
struct List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC;
// System.Collections.Generic.List`1<UnityEngine.GradientAlphaKey>
struct List_1_t50294AA606C939B6984B296A8267A187FCE02602;
// System.Collections.Generic.List`1<UnityEngine.GradientColorKey>
struct List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4;
// System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>[]
struct KeyValuePair_2U5BU5D_t788816ABE0E3287BD454F19104852EC72D7A0CB3;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
// UnityEngine.GradientAlphaKey[]
struct GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748;
// UnityEngine.GradientColorKey[]
struct GradientColorKeyU5BU5D_t93452502F87F8D08C4E848B95CFCBDFCD482056A;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// LibNoise.ModuleBase[]
struct ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Single[0...,0...]
struct SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43;
// LibNoise.Operator.Abs
struct Abs_t3D4E90837CFF0F12E0ACF032EFA3BBC03F04A3CA;
// LibNoise.Operator.Add
struct Add_tAE4004967034EB58DF9A60FE766FF27516BE0C1E;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// LibNoise.Generator.Billow
struct Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924;
// LibNoise.Operator.Blend
struct Blend_tA2EFFFE0486BDC378489884EC6D1A4F1A94D7745;
// LibNoise.Operator.Cache
struct Cache_tFA91265F5B3C95FE03C358711628C82BF208AEE2;
// LibNoise.Generator.Checker
struct Checker_t510AA9444F294B7689FC6F04D6FEE18CA8F66E13;
// LibNoise.Operator.Clamp
struct Clamp_tB7BB016243BB155599C7E5F651AA8A9A420F0AEB;
// LibNoise.Generator.Const
struct Const_tD83951719E3D1DF8F6238E59194E34DB93E331A5;
// LibNoise.Operator.Curve
struct Curve_tE1D649966CB928283357828809B3E017198D4231;
// LibNoise.Generator.Cylinders
struct Cylinders_t97A509D33FCBE86D6C38F1497D3A6E40636D53C5;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// LibNoise.Operator.Displace
struct Displace_t1E766D76C20CC985C213A502B793DCB3A5DCA255;
// LibNoise.Operator.Exponent
struct Exponent_t1FFCB9A4E8B689486050BA3D74E4A8915D175B5D;
// UnityEngine.Gradient
struct Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// LibNoise.Operator.Invert
struct Invert_t9B33D6DFB284DB1EDBC8288DEAD0FAA68D787E24;
// LibNoise.Operator.Max
struct Max_t17E53796374910CD1EEA7E9D931B2E2EF2B1976C;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// LibNoise.Operator.Min
struct Min_t0E9514465F128E7CA8049CFA02363B2602F97E7C;
// LibNoise.ModuleBase
struct ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D;
// LibNoise.Operator.Multiply
struct Multiply_t9CC1B780838A3AC2A0990824496F1F86BE9A973A;
// LibNoise.Noise2D
struct Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6;
// LibNoise.Generator.Perlin
struct Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283;
// LibNoise.Operator.Power
struct Power_tCDBE7D5ADEDE8730D9B958823060C25BC396AB3A;
// LibNoise.Generator.RidgedMultifractal
struct RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E;
// LibNoise.Operator.Rotate
struct Rotate_t4E7066470DB840FD8213C092E9104F7273681906;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// LibNoise.Operator.Scale
struct Scale_tA76AEF14F2E1C8A26EB8340B97357BF99A81516B;
// LibNoise.Operator.ScaleBias
struct ScaleBias_t0E79E66C15E96900C32A2E9080C75588E942F649;
// LibNoise.Operator.Select
struct Select_tE6E071398C0C3DC23EC6CDA27FCDDF69A7ED65ED;
// LibNoise.Generator.Spheres
struct Spheres_t5141EACFECDE72E6F0ADB1AC3621A1E3104731D3;
// System.String
struct String_t;
// LibNoise.Operator.Subtract
struct Subtract_t78AA38A2C6DD8A9928655EA7B68919774D901FCA;
// LibNoise.Operator.Terrace
struct Terrace_t441233268BCC329AC1DCD704A5891A0CD56EFB6B;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// LibNoise.Operator.Translate
struct Translate_tCD3593A12B920217B0A4E4DEC37F8D994D09B8F9;
// LibNoise.Operator.Turbulence
struct Turbulence_tC8326B21F7FB734FFC340C3052A21F6205F898A1;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// LibNoise.Generator.Voronoi
struct Voronoi_t3E6BF1D9F2351DBE1E5CB1700CF85775880B690E;
// LibNoise.Operator.Curve/<>c
struct U3CU3Ec_t8291FB9A9D7FC31DA0E9F94604011A923471642F;
// LibNoise.Operator.Terrace/<>c
struct U3CU3Ec_t1DF4E36F3C2F62F4817EF0F6147963476249A6C8;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_t08C078C3FDDD0746272F4DC7A982874AB477F342_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_t25298E45AA65D77FB819F36226B05B6DD20979C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t50294AA606C939B6984B296A8267A187FCE02602_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t1DF4E36F3C2F62F4817EF0F6147963476249A6C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t8291FB9A9D7FC31DA0E9F94604011A923471642F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t542D62BCE92B129CE3F76621A9BF5D987CFDFC58____783B86DB486276222DEFDC756C4542DAE60CAA36FBDAD4316D523055459E7BA0_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A449875E15B9B1B47416D884EB6E9D6952472F8;
IL2CPP_EXTERN_C String_t* _stringLiteral1659F11829F65A3C8EC878118EB90BB1DCC65F07;
IL2CPP_EXTERN_C String_t* _stringLiteral3473F008258A06F62B6DE5F99354A1C651D0EB88;
IL2CPP_EXTERN_C String_t* _stringLiteralBE50A66C284A9927279CC7D210D6BCEC70181A1A;
IL2CPP_EXTERN_C String_t* _stringLiteralC65FCAEF3FADD6F9E9F856D075A3FA056555DF87;
IL2CPP_EXTERN_C String_t* _stringLiteralCB405B14E02FB77760FC67C6E6AC1878004DF2A7;
IL2CPP_EXTERN_C String_t* _stringLiteralD2561016BE3142BD57B7AF7ED7B085A492AE4C65;
IL2CPP_EXTERN_C String_t* _stringLiteralD77331D45245217995283572F704CB58A25D4540;
IL2CPP_EXTERN_C String_t* _stringLiteralDF1866D1A8E51F214D5C7176A5D1013A56ACB3CE;
IL2CPP_EXTERN_C String_t* _stringLiteralEB098135D5C5BB4E46D3681AD3C5E45E1341C358;
IL2CPP_EXTERN_C const RuntimeMethod* Comparison_1__ctor_m331BF6165A41C6570EC02FA8FCAC0BADECA88E22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Comparison_1__ctor_m9006EAFA7D78F849994ABB321E930BC6238C116A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_m4AA4554410DD3E100FFFC9EC2192ECD14E76CC9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m538BD134D8B991D52E98EDB7473C8FE1BF5FB001_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mCF6D46FD8287F430682B061EA3FA2CD6FE8CC827_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8A25B1DF10203D9BEF53E31728C88B8E8A1E5802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m99353D132512446CCBFC3CE0FF9B97ED53768256_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m1398156EBC9D85513848E4D85288469D5A50B0A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mF271DBB69BEA5517448FE5A837FA429618F2F66F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mC006E18FFE41F1D091B4CAE8BA2A6C0FAC5439A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_mD87D363D3B6C004CE8030608165F3387B76DB6B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m44310CC5BD6029CA7490C6DBDF3962606BB28148_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_mFB2E395737E966A01268C06C2CFE4A8EA5DD6CD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m1D0591B02F36239FA5D61E3E1DA6222A866D4902_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mE9F83D6E8EC942001B3B786EDA3D4ED936060B6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m6907DF8DE758893DF85369A64084A2029D8023F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA0CE4C11D163EF853E9E6A0FD3C75486EF3A0F31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCFF83FB3AC66018A978ED540289D2D25CCF67088_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mEA809B63B96832E1ED95FFF86A400781EB3DE5E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m32DCE2DAC380E7E81E35C6D1459FC1B664C98D07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC1A91036A8488F4B39DA566C71D9631B796DCBE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m7DE788F9B3E4AB58167158D3EC8678D102CBA4C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleBase_get_Item_m44C31BA122658F8214A34CAE639CC7FD6AAFB2CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ModuleBase_set_Item_m2F9A0F870E3BD30FFC971D93524FC5B2A30D3821_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Noise2D_GenerateCylindrical_m93AF9FB04A15C92A24B7AD6298D8ED323300F89A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Noise2D_GeneratePlanar_mC1170ED189AF21E18822132544CA67A67713A987_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Noise2D_GenerateSpherical_m5A7E5A9608723DEA6E083BB095B413F16A41BAF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Noise2D_get_Item_m51A52F9839C00C9975DE25EB93CD910B0C7A45CF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Noise2D_set_Item_m12A5E85903CE03CDEFC79CDF63ED7763853D574C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Terrace_Generate_m79896A98ED3861A460D2DE855B71143B9920013C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAddU3Eb__12_0_m5F3AA2D89832EBEF312B142B5D07D3E0060DB61C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAddU3Eb__7_0_m94C041EC95A68E835DB83FCBD8D2DCA389CC30E6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Utils_GradientNoise3D_m2B24F2006EC3D79C07A45D5CDD9E8CE0842A3C20_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct KeyValuePair_2U5BU5D_t788816ABE0E3287BD454F19104852EC72D7A0CB3;
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
struct GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748;
struct GradientColorKeyU5BU5D_t93452502F87F8D08C4E848B95CFCBDFCD482056A;
struct ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774;
struct SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t5F4006F47DCB71AE982247FCD85C2E599B4EE0D0 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>>
struct List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_t788816ABE0E3287BD454F19104852EC72D7A0CB3* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003, ____items_1)); }
	inline KeyValuePair_2U5BU5D_t788816ABE0E3287BD454F19104852EC72D7A0CB3* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_t788816ABE0E3287BD454F19104852EC72D7A0CB3** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_t788816ABE0E3287BD454F19104852EC72D7A0CB3* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_t788816ABE0E3287BD454F19104852EC72D7A0CB3* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_t788816ABE0E3287BD454F19104852EC72D7A0CB3* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_t788816ABE0E3287BD454F19104852EC72D7A0CB3** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_t788816ABE0E3287BD454F19104852EC72D7A0CB3* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Double>
struct List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC, ____items_1)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get__items_1() const { return ____items_1; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC_StaticFields, ____emptyArray_5)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get__emptyArray_5() const { return ____emptyArray_5; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GradientAlphaKey>
struct List_1_t50294AA606C939B6984B296A8267A187FCE02602  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t50294AA606C939B6984B296A8267A187FCE02602, ____items_1)); }
	inline GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748* get__items_1() const { return ____items_1; }
	inline GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t50294AA606C939B6984B296A8267A187FCE02602, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t50294AA606C939B6984B296A8267A187FCE02602, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t50294AA606C939B6984B296A8267A187FCE02602, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t50294AA606C939B6984B296A8267A187FCE02602_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t50294AA606C939B6984B296A8267A187FCE02602_StaticFields, ____emptyArray_5)); }
	inline GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GradientColorKey>
struct List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GradientColorKeyU5BU5D_t93452502F87F8D08C4E848B95CFCBDFCD482056A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4, ____items_1)); }
	inline GradientColorKeyU5BU5D_t93452502F87F8D08C4E848B95CFCBDFCD482056A* get__items_1() const { return ____items_1; }
	inline GradientColorKeyU5BU5D_t93452502F87F8D08C4E848B95CFCBDFCD482056A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GradientColorKeyU5BU5D_t93452502F87F8D08C4E848B95CFCBDFCD482056A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GradientColorKeyU5BU5D_t93452502F87F8D08C4E848B95CFCBDFCD482056A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4_StaticFields, ____emptyArray_5)); }
	inline GradientColorKeyU5BU5D_t93452502F87F8D08C4E848B95CFCBDFCD482056A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GradientColorKeyU5BU5D_t93452502F87F8D08C4E848B95CFCBDFCD482056A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GradientColorKeyU5BU5D_t93452502F87F8D08C4E848B95CFCBDFCD482056A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// LibNoise.GradientPresets
struct GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1  : public RuntimeObject
{
public:

public:
};

struct GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_StaticFields
{
public:
	// UnityEngine.Gradient LibNoise.GradientPresets::_empty
	Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * ____empty_0;
	// UnityEngine.Gradient LibNoise.GradientPresets::_grayscale
	Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * ____grayscale_1;
	// UnityEngine.Gradient LibNoise.GradientPresets::_rgb
	Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * ____rgb_2;
	// UnityEngine.Gradient LibNoise.GradientPresets::_rgba
	Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * ____rgba_3;
	// UnityEngine.Gradient LibNoise.GradientPresets::_terrain
	Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * ____terrain_4;

public:
	inline static int32_t get_offset_of__empty_0() { return static_cast<int32_t>(offsetof(GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_StaticFields, ____empty_0)); }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * get__empty_0() const { return ____empty_0; }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 ** get_address_of__empty_0() { return &____empty_0; }
	inline void set__empty_0(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * value)
	{
		____empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____empty_0), (void*)value);
	}

	inline static int32_t get_offset_of__grayscale_1() { return static_cast<int32_t>(offsetof(GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_StaticFields, ____grayscale_1)); }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * get__grayscale_1() const { return ____grayscale_1; }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 ** get_address_of__grayscale_1() { return &____grayscale_1; }
	inline void set__grayscale_1(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * value)
	{
		____grayscale_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____grayscale_1), (void*)value);
	}

	inline static int32_t get_offset_of__rgb_2() { return static_cast<int32_t>(offsetof(GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_StaticFields, ____rgb_2)); }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * get__rgb_2() const { return ____rgb_2; }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 ** get_address_of__rgb_2() { return &____rgb_2; }
	inline void set__rgb_2(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * value)
	{
		____rgb_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rgb_2), (void*)value);
	}

	inline static int32_t get_offset_of__rgba_3() { return static_cast<int32_t>(offsetof(GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_StaticFields, ____rgba_3)); }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * get__rgba_3() const { return ____rgba_3; }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 ** get_address_of__rgba_3() { return &____rgba_3; }
	inline void set__rgba_3(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * value)
	{
		____rgba_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rgba_3), (void*)value);
	}

	inline static int32_t get_offset_of__terrain_4() { return static_cast<int32_t>(offsetof(GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_StaticFields, ____terrain_4)); }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * get__terrain_4() const { return ____terrain_4; }
	inline Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 ** get_address_of__terrain_4() { return &____terrain_4; }
	inline void set__terrain_4(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * value)
	{
		____terrain_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____terrain_4), (void*)value);
	}
};


// LibNoise.ModuleBase
struct ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D  : public RuntimeObject
{
public:
	// LibNoise.ModuleBase[] LibNoise.ModuleBase::_modules
	ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* ____modules_0;
	// System.Boolean LibNoise.ModuleBase::_disposed
	bool ____disposed_1;

public:
	inline static int32_t get_offset_of__modules_0() { return static_cast<int32_t>(offsetof(ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D, ____modules_0)); }
	inline ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* get__modules_0() const { return ____modules_0; }
	inline ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774** get_address_of__modules_0() { return &____modules_0; }
	inline void set__modules_0(ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* value)
	{
		____modules_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____modules_0), (void*)value);
	}

	inline static int32_t get_offset_of__disposed_1() { return static_cast<int32_t>(offsetof(ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D, ____disposed_1)); }
	inline bool get__disposed_1() const { return ____disposed_1; }
	inline bool* get_address_of__disposed_1() { return &____disposed_1; }
	inline void set__disposed_1(bool value)
	{
		____disposed_1 = value;
	}
};


// LibNoise.Noise2D
struct Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6  : public RuntimeObject
{
public:
	// System.Int32 LibNoise.Noise2D::_width
	int32_t ____width_10;
	// System.Int32 LibNoise.Noise2D::_height
	int32_t ____height_11;
	// System.Single[0...,0...] LibNoise.Noise2D::_data
	SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* ____data_12;
	// System.Int32 LibNoise.Noise2D::_ucWidth
	int32_t ____ucWidth_13;
	// System.Int32 LibNoise.Noise2D::_ucHeight
	int32_t ____ucHeight_14;
	// System.Int32 LibNoise.Noise2D::_ucBorder
	int32_t ____ucBorder_15;
	// System.Single[0...,0...] LibNoise.Noise2D::_ucData
	SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* ____ucData_16;
	// System.Single LibNoise.Noise2D::_borderValue
	float ____borderValue_17;
	// LibNoise.ModuleBase LibNoise.Noise2D::_generator
	ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ____generator_18;
	// System.Boolean LibNoise.Noise2D::_disposed
	bool ____disposed_19;

public:
	inline static int32_t get_offset_of__width_10() { return static_cast<int32_t>(offsetof(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6, ____width_10)); }
	inline int32_t get__width_10() const { return ____width_10; }
	inline int32_t* get_address_of__width_10() { return &____width_10; }
	inline void set__width_10(int32_t value)
	{
		____width_10 = value;
	}

	inline static int32_t get_offset_of__height_11() { return static_cast<int32_t>(offsetof(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6, ____height_11)); }
	inline int32_t get__height_11() const { return ____height_11; }
	inline int32_t* get_address_of__height_11() { return &____height_11; }
	inline void set__height_11(int32_t value)
	{
		____height_11 = value;
	}

	inline static int32_t get_offset_of__data_12() { return static_cast<int32_t>(offsetof(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6, ____data_12)); }
	inline SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* get__data_12() const { return ____data_12; }
	inline SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43** get_address_of__data_12() { return &____data_12; }
	inline void set__data_12(SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* value)
	{
		____data_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_12), (void*)value);
	}

	inline static int32_t get_offset_of__ucWidth_13() { return static_cast<int32_t>(offsetof(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6, ____ucWidth_13)); }
	inline int32_t get__ucWidth_13() const { return ____ucWidth_13; }
	inline int32_t* get_address_of__ucWidth_13() { return &____ucWidth_13; }
	inline void set__ucWidth_13(int32_t value)
	{
		____ucWidth_13 = value;
	}

	inline static int32_t get_offset_of__ucHeight_14() { return static_cast<int32_t>(offsetof(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6, ____ucHeight_14)); }
	inline int32_t get__ucHeight_14() const { return ____ucHeight_14; }
	inline int32_t* get_address_of__ucHeight_14() { return &____ucHeight_14; }
	inline void set__ucHeight_14(int32_t value)
	{
		____ucHeight_14 = value;
	}

	inline static int32_t get_offset_of__ucBorder_15() { return static_cast<int32_t>(offsetof(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6, ____ucBorder_15)); }
	inline int32_t get__ucBorder_15() const { return ____ucBorder_15; }
	inline int32_t* get_address_of__ucBorder_15() { return &____ucBorder_15; }
	inline void set__ucBorder_15(int32_t value)
	{
		____ucBorder_15 = value;
	}

	inline static int32_t get_offset_of__ucData_16() { return static_cast<int32_t>(offsetof(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6, ____ucData_16)); }
	inline SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* get__ucData_16() const { return ____ucData_16; }
	inline SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43** get_address_of__ucData_16() { return &____ucData_16; }
	inline void set__ucData_16(SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* value)
	{
		____ucData_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ucData_16), (void*)value);
	}

	inline static int32_t get_offset_of__borderValue_17() { return static_cast<int32_t>(offsetof(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6, ____borderValue_17)); }
	inline float get__borderValue_17() const { return ____borderValue_17; }
	inline float* get_address_of__borderValue_17() { return &____borderValue_17; }
	inline void set__borderValue_17(float value)
	{
		____borderValue_17 = value;
	}

	inline static int32_t get_offset_of__generator_18() { return static_cast<int32_t>(offsetof(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6, ____generator_18)); }
	inline ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * get__generator_18() const { return ____generator_18; }
	inline ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D ** get_address_of__generator_18() { return &____generator_18; }
	inline void set__generator_18(ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * value)
	{
		____generator_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____generator_18), (void*)value);
	}

	inline static int32_t get_offset_of__disposed_19() { return static_cast<int32_t>(offsetof(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6, ____disposed_19)); }
	inline bool get__disposed_19() const { return ____disposed_19; }
	inline bool* get_address_of__disposed_19() { return &____disposed_19; }
	inline void set__disposed_19(bool value)
	{
		____disposed_19 = value;
	}
};

struct Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_StaticFields
{
public:
	// System.Double LibNoise.Noise2D::South
	double ___South_0;
	// System.Double LibNoise.Noise2D::North
	double ___North_1;
	// System.Double LibNoise.Noise2D::West
	double ___West_2;
	// System.Double LibNoise.Noise2D::East
	double ___East_3;
	// System.Double LibNoise.Noise2D::AngleMin
	double ___AngleMin_4;
	// System.Double LibNoise.Noise2D::AngleMax
	double ___AngleMax_5;
	// System.Double LibNoise.Noise2D::Left
	double ___Left_6;
	// System.Double LibNoise.Noise2D::Right
	double ___Right_7;
	// System.Double LibNoise.Noise2D::Top
	double ___Top_8;
	// System.Double LibNoise.Noise2D::Bottom
	double ___Bottom_9;

public:
	inline static int32_t get_offset_of_South_0() { return static_cast<int32_t>(offsetof(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_StaticFields, ___South_0)); }
	inline double get_South_0() const { return ___South_0; }
	inline double* get_address_of_South_0() { return &___South_0; }
	inline void set_South_0(double value)
	{
		___South_0 = value;
	}

	inline static int32_t get_offset_of_North_1() { return static_cast<int32_t>(offsetof(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_StaticFields, ___North_1)); }
	inline double get_North_1() const { return ___North_1; }
	inline double* get_address_of_North_1() { return &___North_1; }
	inline void set_North_1(double value)
	{
		___North_1 = value;
	}

	inline static int32_t get_offset_of_West_2() { return static_cast<int32_t>(offsetof(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_StaticFields, ___West_2)); }
	inline double get_West_2() const { return ___West_2; }
	inline double* get_address_of_West_2() { return &___West_2; }
	inline void set_West_2(double value)
	{
		___West_2 = value;
	}

	inline static int32_t get_offset_of_East_3() { return static_cast<int32_t>(offsetof(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_StaticFields, ___East_3)); }
	inline double get_East_3() const { return ___East_3; }
	inline double* get_address_of_East_3() { return &___East_3; }
	inline void set_East_3(double value)
	{
		___East_3 = value;
	}

	inline static int32_t get_offset_of_AngleMin_4() { return static_cast<int32_t>(offsetof(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_StaticFields, ___AngleMin_4)); }
	inline double get_AngleMin_4() const { return ___AngleMin_4; }
	inline double* get_address_of_AngleMin_4() { return &___AngleMin_4; }
	inline void set_AngleMin_4(double value)
	{
		___AngleMin_4 = value;
	}

	inline static int32_t get_offset_of_AngleMax_5() { return static_cast<int32_t>(offsetof(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_StaticFields, ___AngleMax_5)); }
	inline double get_AngleMax_5() const { return ___AngleMax_5; }
	inline double* get_address_of_AngleMax_5() { return &___AngleMax_5; }
	inline void set_AngleMax_5(double value)
	{
		___AngleMax_5 = value;
	}

	inline static int32_t get_offset_of_Left_6() { return static_cast<int32_t>(offsetof(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_StaticFields, ___Left_6)); }
	inline double get_Left_6() const { return ___Left_6; }
	inline double* get_address_of_Left_6() { return &___Left_6; }
	inline void set_Left_6(double value)
	{
		___Left_6 = value;
	}

	inline static int32_t get_offset_of_Right_7() { return static_cast<int32_t>(offsetof(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_StaticFields, ___Right_7)); }
	inline double get_Right_7() const { return ___Right_7; }
	inline double* get_address_of_Right_7() { return &___Right_7; }
	inline void set_Right_7(double value)
	{
		___Right_7 = value;
	}

	inline static int32_t get_offset_of_Top_8() { return static_cast<int32_t>(offsetof(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_StaticFields, ___Top_8)); }
	inline double get_Top_8() const { return ___Top_8; }
	inline double* get_address_of_Top_8() { return &___Top_8; }
	inline void set_Top_8(double value)
	{
		___Top_8 = value;
	}

	inline static int32_t get_offset_of_Bottom_9() { return static_cast<int32_t>(offsetof(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_StaticFields, ___Bottom_9)); }
	inline double get_Bottom_9() const { return ___Bottom_9; }
	inline double* get_address_of_Bottom_9() { return &___Bottom_9; }
	inline void set_Bottom_9(double value)
	{
		___Bottom_9 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// LibNoise.Utils
struct Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A  : public RuntimeObject
{
public:

public:
};

struct Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_StaticFields
{
public:
	// System.Double[] LibNoise.Utils::Randoms
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ___Randoms_7;

public:
	inline static int32_t get_offset_of_Randoms_7() { return static_cast<int32_t>(offsetof(Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_StaticFields, ___Randoms_7)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get_Randoms_7() const { return ___Randoms_7; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of_Randoms_7() { return &___Randoms_7; }
	inline void set_Randoms_7(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		___Randoms_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Randoms_7), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// LibNoise.Operator.Curve/<>c
struct U3CU3Ec_t8291FB9A9D7FC31DA0E9F94604011A923471642F  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t8291FB9A9D7FC31DA0E9F94604011A923471642F_StaticFields
{
public:
	// LibNoise.Operator.Curve/<>c LibNoise.Operator.Curve/<>c::<>9
	U3CU3Ec_t8291FB9A9D7FC31DA0E9F94604011A923471642F * ___U3CU3E9_0;
	// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>> LibNoise.Operator.Curve/<>c::<>9__7_0
	Comparison_1_t25298E45AA65D77FB819F36226B05B6DD20979C6 * ___U3CU3E9__7_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8291FB9A9D7FC31DA0E9F94604011A923471642F_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t8291FB9A9D7FC31DA0E9F94604011A923471642F * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t8291FB9A9D7FC31DA0E9F94604011A923471642F ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t8291FB9A9D7FC31DA0E9F94604011A923471642F * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__7_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8291FB9A9D7FC31DA0E9F94604011A923471642F_StaticFields, ___U3CU3E9__7_0_1)); }
	inline Comparison_1_t25298E45AA65D77FB819F36226B05B6DD20979C6 * get_U3CU3E9__7_0_1() const { return ___U3CU3E9__7_0_1; }
	inline Comparison_1_t25298E45AA65D77FB819F36226B05B6DD20979C6 ** get_address_of_U3CU3E9__7_0_1() { return &___U3CU3E9__7_0_1; }
	inline void set_U3CU3E9__7_0_1(Comparison_1_t25298E45AA65D77FB819F36226B05B6DD20979C6 * value)
	{
		___U3CU3E9__7_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__7_0_1), (void*)value);
	}
};


// LibNoise.Operator.Terrace/<>c
struct U3CU3Ec_t1DF4E36F3C2F62F4817EF0F6147963476249A6C8  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t1DF4E36F3C2F62F4817EF0F6147963476249A6C8_StaticFields
{
public:
	// LibNoise.Operator.Terrace/<>c LibNoise.Operator.Terrace/<>c::<>9
	U3CU3Ec_t1DF4E36F3C2F62F4817EF0F6147963476249A6C8 * ___U3CU3E9_0;
	// System.Comparison`1<System.Double> LibNoise.Operator.Terrace/<>c::<>9__12_0
	Comparison_1_t08C078C3FDDD0746272F4DC7A982874AB477F342 * ___U3CU3E9__12_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1DF4E36F3C2F62F4817EF0F6147963476249A6C8_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t1DF4E36F3C2F62F4817EF0F6147963476249A6C8 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t1DF4E36F3C2F62F4817EF0F6147963476249A6C8 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t1DF4E36F3C2F62F4817EF0F6147963476249A6C8 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t1DF4E36F3C2F62F4817EF0F6147963476249A6C8_StaticFields, ___U3CU3E9__12_0_1)); }
	inline Comparison_1_t08C078C3FDDD0746272F4DC7A982874AB477F342 * get_U3CU3E9__12_0_1() const { return ___U3CU3E9__12_0_1; }
	inline Comparison_1_t08C078C3FDDD0746272F4DC7A982874AB477F342 ** get_address_of_U3CU3E9__12_0_1() { return &___U3CU3E9__12_0_1; }
	inline void set_U3CU3E9__12_0_1(Comparison_1_t08C078C3FDDD0746272F4DC7A982874AB477F342 * value)
	{
		___U3CU3E9__12_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_0_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>
struct KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	double ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	double ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10, ___key_0)); }
	inline double get_key_0() const { return ___key_0; }
	inline double* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(double value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10, ___value_1)); }
	inline double get_value_1() const { return ___value_1; }
	inline double* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(double value)
	{
		___value_1 = value;
	}
};


// LibNoise.Operator.Abs
struct Abs_t3D4E90837CFF0F12E0ACF032EFA3BBC03F04A3CA  : public ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D
{
public:

public:
};


// LibNoise.Operator.Add
struct Add_tAE4004967034EB58DF9A60FE766FF27516BE0C1E  : public ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D
{
public:

public:
};


// LibNoise.Operator.Blend
struct Blend_tA2EFFFE0486BDC378489884EC6D1A4F1A94D7745  : public ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D
{
public:

public:
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// LibNoise.Operator.Cache
struct Cache_tFA91265F5B3C95FE03C358711628C82BF208AEE2  : public ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D
{
public:
	// System.Double LibNoise.Operator.Cache::_value
	double ____value_2;
	// System.Boolean LibNoise.Operator.Cache::_cached
	bool ____cached_3;
	// System.Double LibNoise.Operator.Cache::_x
	double ____x_4;
	// System.Double LibNoise.Operator.Cache::_y
	double ____y_5;
	// System.Double LibNoise.Operator.Cache::_z
	double ____z_6;

public:
	inline static int32_t get_offset_of__value_2() { return static_cast<int32_t>(offsetof(Cache_tFA91265F5B3C95FE03C358711628C82BF208AEE2, ____value_2)); }
	inline double get__value_2() const { return ____value_2; }
	inline double* get_address_of__value_2() { return &____value_2; }
	inline void set__value_2(double value)
	{
		____value_2 = value;
	}

	inline static int32_t get_offset_of__cached_3() { return static_cast<int32_t>(offsetof(Cache_tFA91265F5B3C95FE03C358711628C82BF208AEE2, ____cached_3)); }
	inline bool get__cached_3() const { return ____cached_3; }
	inline bool* get_address_of__cached_3() { return &____cached_3; }
	inline void set__cached_3(bool value)
	{
		____cached_3 = value;
	}

	inline static int32_t get_offset_of__x_4() { return static_cast<int32_t>(offsetof(Cache_tFA91265F5B3C95FE03C358711628C82BF208AEE2, ____x_4)); }
	inline double get__x_4() const { return ____x_4; }
	inline double* get_address_of__x_4() { return &____x_4; }
	inline void set__x_4(double value)
	{
		____x_4 = value;
	}

	inline static int32_t get_offset_of__y_5() { return static_cast<int32_t>(offsetof(Cache_tFA91265F5B3C95FE03C358711628C82BF208AEE2, ____y_5)); }
	inline double get__y_5() const { return ____y_5; }
	inline double* get_address_of__y_5() { return &____y_5; }
	inline void set__y_5(double value)
	{
		____y_5 = value;
	}

	inline static int32_t get_offset_of__z_6() { return static_cast<int32_t>(offsetof(Cache_tFA91265F5B3C95FE03C358711628C82BF208AEE2, ____z_6)); }
	inline double get__z_6() const { return ____z_6; }
	inline double* get_address_of__z_6() { return &____z_6; }
	inline void set__z_6(double value)
	{
		____z_6 = value;
	}
};


// LibNoise.Generator.Checker
struct Checker_t510AA9444F294B7689FC6F04D6FEE18CA8F66E13  : public ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D
{
public:

public:
};


// LibNoise.Operator.Clamp
struct Clamp_tB7BB016243BB155599C7E5F651AA8A9A420F0AEB  : public ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D
{
public:
	// System.Double LibNoise.Operator.Clamp::_min
	double ____min_2;
	// System.Double LibNoise.Operator.Clamp::_max
	double ____max_3;

public:
	inline static int32_t get_offset_of__min_2() { return static_cast<int32_t>(offsetof(Clamp_tB7BB016243BB155599C7E5F651AA8A9A420F0AEB, ____min_2)); }
	inline double get__min_2() const { return ____min_2; }
	inline double* get_address_of__min_2() { return &____min_2; }
	inline void set__min_2(double value)
	{
		____min_2 = value;
	}

	inline static int32_t get_offset_of__max_3() { return static_cast<int32_t>(offsetof(Clamp_tB7BB016243BB155599C7E5F651AA8A9A420F0AEB, ____max_3)); }
	inline double get__max_3() const { return ____max_3; }
	inline double* get_address_of__max_3() { return &____max_3; }
	inline void set__max_3(double value)
	{
		____max_3 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// LibNoise.Generator.Const
struct Const_tD83951719E3D1DF8F6238E59194E34DB93E331A5  : public ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D
{
public:
	// System.Double LibNoise.Generator.Const::_value
	double ____value_2;

public:
	inline static int32_t get_offset_of__value_2() { return static_cast<int32_t>(offsetof(Const_tD83951719E3D1DF8F6238E59194E34DB93E331A5, ____value_2)); }
	inline double get__value_2() const { return ____value_2; }
	inline double* get_address_of__value_2() { return &____value_2; }
	inline void set__value_2(double value)
	{
		____value_2 = value;
	}
};


// LibNoise.Operator.Curve
struct Curve_tE1D649966CB928283357828809B3E017198D4231  : public ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D
{
public:
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>> LibNoise.Operator.Curve::_data
	List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * ____data_2;

public:
	inline static int32_t get_offset_of__data_2() { return static_cast<int32_t>(offsetof(Curve_tE1D649966CB928283357828809B3E017198D4231, ____data_2)); }
	inline List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * get__data_2() const { return ____data_2; }
	inline List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 ** get_address_of__data_2() { return &____data_2; }
	inline void set__data_2(List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * value)
	{
		____data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_2), (void*)value);
	}
};


// LibNoise.Generator.Cylinders
struct Cylinders_t97A509D33FCBE86D6C38F1497D3A6E40636D53C5  : public ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D
{
public:
	// System.Double LibNoise.Generator.Cylinders::_frequency
	double ____frequency_2;

public:
	inline static int32_t get_offset_of__frequency_2() { return static_cast<int32_t>(offsetof(Cylinders_t97A509D33FCBE86D6C38F1497D3A6E40636D53C5, ____frequency_2)); }
	inline double get__frequency_2() const { return ____frequency_2; }
	inline double* get_address_of__frequency_2() { return &____frequency_2; }
	inline void set__frequency_2(double value)
	{
		____frequency_2 = value;
	}
};


// LibNoise.Operator.Displace
struct Displace_t1E766D76C20CC985C213A502B793DCB3A5DCA255  : public ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D
{
public:

public:
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// LibNoise.Operator.Exponent
struct Exponent_t1FFCB9A4E8B689486050BA3D74E4A8915D175B5D  : public ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D
{
public:
	// System.Double LibNoise.Operator.Exponent::_exponent
	double ____exponent_2;

public:
	inline static int32_t get_offset_of__exponent_2() { return static_cast<int32_t>(offsetof(Exponent_t1FFCB9A4E8B689486050BA3D74E4A8915D175B5D, ____exponent_2)); }
	inline double get__exponent_2() const { return ____exponent_2; }
	inline double* get_address_of__exponent_2() { return &____exponent_2; }
	inline void set__exponent_2(double value)
	{
		____exponent_2 = value;
	}
};


// UnityEngine.GradientAlphaKey
struct GradientAlphaKey_t2EB9572FC9B85C468D39D2DC7A02A441F3A7E36D 
{
public:
	// System.Single UnityEngine.GradientAlphaKey::alpha
	float ___alpha_0;
	// System.Single UnityEngine.GradientAlphaKey::time
	float ___time_1;

public:
	inline static int32_t get_offset_of_alpha_0() { return static_cast<int32_t>(offsetof(GradientAlphaKey_t2EB9572FC9B85C468D39D2DC7A02A441F3A7E36D, ___alpha_0)); }
	inline float get_alpha_0() const { return ___alpha_0; }
	inline float* get_address_of_alpha_0() { return &___alpha_0; }
	inline void set_alpha_0(float value)
	{
		___alpha_0 = value;
	}

	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(GradientAlphaKey_t2EB9572FC9B85C468D39D2DC7A02A441F3A7E36D, ___time_1)); }
	inline float get_time_1() const { return ___time_1; }
	inline float* get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(float value)
	{
		___time_1 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// LibNoise.Operator.Invert
struct Invert_t9B33D6DFB284DB1EDBC8288DEAD0FAA68D787E24  : public ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D
{
public:

public:
};


// LibNoise.Operator.Max
struct Max_t17E53796374910CD1EEA7E9D931B2E2EF2B1976C  : public ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D
{
public:

public:
};


// LibNoise.Operator.Min
struct Min_t0E9514465F128E7CA8049CFA02363B2602F97E7C  : public ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D
{
public:

public:
};


// LibNoise.Operator.Multiply
struct Multiply_t9CC1B780838A3AC2A0990824496F1F86BE9A973A  : public ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D
{
public:

public:
};


// LibNoise.Operator.Power
struct Power_tCDBE7D5ADEDE8730D9B958823060C25BC396AB3A  : public ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D
{
public:

public:
};


// LibNoise.Operator.Rotate
struct Rotate_t4E7066470DB840FD8213C092E9104F7273681906  : public ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D
{
public:
	// System.Double LibNoise.Operator.Rotate::_x
	double ____x_2;
	// System.Double LibNoise.Operator.Rotate::_x1Matrix
	double ____x1Matrix_3;
	// System.Double LibNoise.Operator.Rotate::_x2Matrix
	double ____x2Matrix_4;
	// System.Double LibNoise.Operator.Rotate::_x3Matrix
	double ____x3Matrix_5;
	// System.Double LibNoise.Operator.Rotate::_y
	double ____y_6;
	// System.Double LibNoise.Operator.Rotate::_y1Matrix
	double ____y1Matrix_7;
	// System.Double LibNoise.Operator.Rotate::_y2Matrix
	double ____y2Matrix_8;
	// System.Double LibNoise.Operator.Rotate::_y3Matrix
	double ____y3Matrix_9;
	// System.Double LibNoise.Operator.Rotate::_z
	double ____z_10;
	// System.Double LibNoise.Operator.Rotate::_z1Matrix
	double ____z1Matrix_11;
	// System.Double LibNoise.Operator.Rotate::_z2Matrix
	double ____z2Matrix_12;
	// System.Double LibNoise.Operator.Rotate::_z3Matrix
	double ____z3Matrix_13;

public:
	inline static int32_t get_offset_of__x_2() { return static_cast<int32_t>(offsetof(Rotate_t4E7066470DB840FD8213C092E9104F7273681906, ____x_2)); }
	inline double get__x_2() const { return ____x_2; }
	inline double* get_address_of__x_2() { return &____x_2; }
	inline void set__x_2(double value)
	{
		____x_2 = value;
	}

	inline static int32_t get_offset_of__x1Matrix_3() { return static_cast<int32_t>(offsetof(Rotate_t4E7066470DB840FD8213C092E9104F7273681906, ____x1Matrix_3)); }
	inline double get__x1Matrix_3() const { return ____x1Matrix_3; }
	inline double* get_address_of__x1Matrix_3() { return &____x1Matrix_3; }
	inline void set__x1Matrix_3(double value)
	{
		____x1Matrix_3 = value;
	}

	inline static int32_t get_offset_of__x2Matrix_4() { return static_cast<int32_t>(offsetof(Rotate_t4E7066470DB840FD8213C092E9104F7273681906, ____x2Matrix_4)); }
	inline double get__x2Matrix_4() const { return ____x2Matrix_4; }
	inline double* get_address_of__x2Matrix_4() { return &____x2Matrix_4; }
	inline void set__x2Matrix_4(double value)
	{
		____x2Matrix_4 = value;
	}

	inline static int32_t get_offset_of__x3Matrix_5() { return static_cast<int32_t>(offsetof(Rotate_t4E7066470DB840FD8213C092E9104F7273681906, ____x3Matrix_5)); }
	inline double get__x3Matrix_5() const { return ____x3Matrix_5; }
	inline double* get_address_of__x3Matrix_5() { return &____x3Matrix_5; }
	inline void set__x3Matrix_5(double value)
	{
		____x3Matrix_5 = value;
	}

	inline static int32_t get_offset_of__y_6() { return static_cast<int32_t>(offsetof(Rotate_t4E7066470DB840FD8213C092E9104F7273681906, ____y_6)); }
	inline double get__y_6() const { return ____y_6; }
	inline double* get_address_of__y_6() { return &____y_6; }
	inline void set__y_6(double value)
	{
		____y_6 = value;
	}

	inline static int32_t get_offset_of__y1Matrix_7() { return static_cast<int32_t>(offsetof(Rotate_t4E7066470DB840FD8213C092E9104F7273681906, ____y1Matrix_7)); }
	inline double get__y1Matrix_7() const { return ____y1Matrix_7; }
	inline double* get_address_of__y1Matrix_7() { return &____y1Matrix_7; }
	inline void set__y1Matrix_7(double value)
	{
		____y1Matrix_7 = value;
	}

	inline static int32_t get_offset_of__y2Matrix_8() { return static_cast<int32_t>(offsetof(Rotate_t4E7066470DB840FD8213C092E9104F7273681906, ____y2Matrix_8)); }
	inline double get__y2Matrix_8() const { return ____y2Matrix_8; }
	inline double* get_address_of__y2Matrix_8() { return &____y2Matrix_8; }
	inline void set__y2Matrix_8(double value)
	{
		____y2Matrix_8 = value;
	}

	inline static int32_t get_offset_of__y3Matrix_9() { return static_cast<int32_t>(offsetof(Rotate_t4E7066470DB840FD8213C092E9104F7273681906, ____y3Matrix_9)); }
	inline double get__y3Matrix_9() const { return ____y3Matrix_9; }
	inline double* get_address_of__y3Matrix_9() { return &____y3Matrix_9; }
	inline void set__y3Matrix_9(double value)
	{
		____y3Matrix_9 = value;
	}

	inline static int32_t get_offset_of__z_10() { return static_cast<int32_t>(offsetof(Rotate_t4E7066470DB840FD8213C092E9104F7273681906, ____z_10)); }
	inline double get__z_10() const { return ____z_10; }
	inline double* get_address_of__z_10() { return &____z_10; }
	inline void set__z_10(double value)
	{
		____z_10 = value;
	}

	inline static int32_t get_offset_of__z1Matrix_11() { return static_cast<int32_t>(offsetof(Rotate_t4E7066470DB840FD8213C092E9104F7273681906, ____z1Matrix_11)); }
	inline double get__z1Matrix_11() const { return ____z1Matrix_11; }
	inline double* get_address_of__z1Matrix_11() { return &____z1Matrix_11; }
	inline void set__z1Matrix_11(double value)
	{
		____z1Matrix_11 = value;
	}

	inline static int32_t get_offset_of__z2Matrix_12() { return static_cast<int32_t>(offsetof(Rotate_t4E7066470DB840FD8213C092E9104F7273681906, ____z2Matrix_12)); }
	inline double get__z2Matrix_12() const { return ____z2Matrix_12; }
	inline double* get_address_of__z2Matrix_12() { return &____z2Matrix_12; }
	inline void set__z2Matrix_12(double value)
	{
		____z2Matrix_12 = value;
	}

	inline static int32_t get_offset_of__z3Matrix_13() { return static_cast<int32_t>(offsetof(Rotate_t4E7066470DB840FD8213C092E9104F7273681906, ____z3Matrix_13)); }
	inline double get__z3Matrix_13() const { return ____z3Matrix_13; }
	inline double* get_address_of__z3Matrix_13() { return &____z3Matrix_13; }
	inline void set__z3Matrix_13(double value)
	{
		____z3Matrix_13 = value;
	}
};


// LibNoise.Operator.Scale
struct Scale_tA76AEF14F2E1C8A26EB8340B97357BF99A81516B  : public ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D
{
public:
	// System.Double LibNoise.Operator.Scale::_x
	double ____x_2;
	// System.Double LibNoise.Operator.Scale::_y
	double ____y_3;
	// System.Double LibNoise.Operator.Scale::_z
	double ____z_4;

public:
	inline static int32_t get_offset_of__x_2() { return static_cast<int32_t>(offsetof(Scale_tA76AEF14F2E1C8A26EB8340B97357BF99A81516B, ____x_2)); }
	inline double get__x_2() const { return ____x_2; }
	inline double* get_address_of__x_2() { return &____x_2; }
	inline void set__x_2(double value)
	{
		____x_2 = value;
	}

	inline static int32_t get_offset_of__y_3() { return static_cast<int32_t>(offsetof(Scale_tA76AEF14F2E1C8A26EB8340B97357BF99A81516B, ____y_3)); }
	inline double get__y_3() const { return ____y_3; }
	inline double* get_address_of__y_3() { return &____y_3; }
	inline void set__y_3(double value)
	{
		____y_3 = value;
	}

	inline static int32_t get_offset_of__z_4() { return static_cast<int32_t>(offsetof(Scale_tA76AEF14F2E1C8A26EB8340B97357BF99A81516B, ____z_4)); }
	inline double get__z_4() const { return ____z_4; }
	inline double* get_address_of__z_4() { return &____z_4; }
	inline void set__z_4(double value)
	{
		____z_4 = value;
	}
};


// LibNoise.Operator.ScaleBias
struct ScaleBias_t0E79E66C15E96900C32A2E9080C75588E942F649  : public ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D
{
public:
	// System.Double LibNoise.Operator.ScaleBias::<Bias>k__BackingField
	double ___U3CBiasU3Ek__BackingField_2;
	// System.Double LibNoise.Operator.ScaleBias::<Scale>k__BackingField
	double ___U3CScaleU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CBiasU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ScaleBias_t0E79E66C15E96900C32A2E9080C75588E942F649, ___U3CBiasU3Ek__BackingField_2)); }
	inline double get_U3CBiasU3Ek__BackingField_2() const { return ___U3CBiasU3Ek__BackingField_2; }
	inline double* get_address_of_U3CBiasU3Ek__BackingField_2() { return &___U3CBiasU3Ek__BackingField_2; }
	inline void set_U3CBiasU3Ek__BackingField_2(double value)
	{
		___U3CBiasU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CScaleU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ScaleBias_t0E79E66C15E96900C32A2E9080C75588E942F649, ___U3CScaleU3Ek__BackingField_3)); }
	inline double get_U3CScaleU3Ek__BackingField_3() const { return ___U3CScaleU3Ek__BackingField_3; }
	inline double* get_address_of_U3CScaleU3Ek__BackingField_3() { return &___U3CScaleU3Ek__BackingField_3; }
	inline void set_U3CScaleU3Ek__BackingField_3(double value)
	{
		___U3CScaleU3Ek__BackingField_3 = value;
	}
};


// LibNoise.Operator.Select
struct Select_tE6E071398C0C3DC23EC6CDA27FCDDF69A7ED65ED  : public ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D
{
public:
	// System.Double LibNoise.Operator.Select::_fallOff
	double ____fallOff_2;
	// System.Double LibNoise.Operator.Select::_raw
	double ____raw_3;
	// System.Double LibNoise.Operator.Select::_min
	double ____min_4;
	// System.Double LibNoise.Operator.Select::_max
	double ____max_5;

public:
	inline static int32_t get_offset_of__fallOff_2() { return static_cast<int32_t>(offsetof(Select_tE6E071398C0C3DC23EC6CDA27FCDDF69A7ED65ED, ____fallOff_2)); }
	inline double get__fallOff_2() const { return ____fallOff_2; }
	inline double* get_address_of__fallOff_2() { return &____fallOff_2; }
	inline void set__fallOff_2(double value)
	{
		____fallOff_2 = value;
	}

	inline static int32_t get_offset_of__raw_3() { return static_cast<int32_t>(offsetof(Select_tE6E071398C0C3DC23EC6CDA27FCDDF69A7ED65ED, ____raw_3)); }
	inline double get__raw_3() const { return ____raw_3; }
	inline double* get_address_of__raw_3() { return &____raw_3; }
	inline void set__raw_3(double value)
	{
		____raw_3 = value;
	}

	inline static int32_t get_offset_of__min_4() { return static_cast<int32_t>(offsetof(Select_tE6E071398C0C3DC23EC6CDA27FCDDF69A7ED65ED, ____min_4)); }
	inline double get__min_4() const { return ____min_4; }
	inline double* get_address_of__min_4() { return &____min_4; }
	inline void set__min_4(double value)
	{
		____min_4 = value;
	}

	inline static int32_t get_offset_of__max_5() { return static_cast<int32_t>(offsetof(Select_tE6E071398C0C3DC23EC6CDA27FCDDF69A7ED65ED, ____max_5)); }
	inline double get__max_5() const { return ____max_5; }
	inline double* get_address_of__max_5() { return &____max_5; }
	inline void set__max_5(double value)
	{
		____max_5 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// LibNoise.Generator.Spheres
struct Spheres_t5141EACFECDE72E6F0ADB1AC3621A1E3104731D3  : public ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D
{
public:
	// System.Double LibNoise.Generator.Spheres::_frequency
	double ____frequency_2;

public:
	inline static int32_t get_offset_of__frequency_2() { return static_cast<int32_t>(offsetof(Spheres_t5141EACFECDE72E6F0ADB1AC3621A1E3104731D3, ____frequency_2)); }
	inline double get__frequency_2() const { return ____frequency_2; }
	inline double* get_address_of__frequency_2() { return &____frequency_2; }
	inline void set__frequency_2(double value)
	{
		____frequency_2 = value;
	}
};


// LibNoise.Operator.Subtract
struct Subtract_t78AA38A2C6DD8A9928655EA7B68919774D901FCA  : public ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D
{
public:

public:
};


// LibNoise.Operator.Terrace
struct Terrace_t441233268BCC329AC1DCD704A5891A0CD56EFB6B  : public ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D
{
public:
	// System.Collections.Generic.List`1<System.Double> LibNoise.Operator.Terrace::_data
	List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * ____data_2;
	// System.Boolean LibNoise.Operator.Terrace::_inverted
	bool ____inverted_3;

public:
	inline static int32_t get_offset_of__data_2() { return static_cast<int32_t>(offsetof(Terrace_t441233268BCC329AC1DCD704A5891A0CD56EFB6B, ____data_2)); }
	inline List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * get__data_2() const { return ____data_2; }
	inline List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC ** get_address_of__data_2() { return &____data_2; }
	inline void set__data_2(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * value)
	{
		____data_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_2), (void*)value);
	}

	inline static int32_t get_offset_of__inverted_3() { return static_cast<int32_t>(offsetof(Terrace_t441233268BCC329AC1DCD704A5891A0CD56EFB6B, ____inverted_3)); }
	inline bool get__inverted_3() const { return ____inverted_3; }
	inline bool* get_address_of__inverted_3() { return &____inverted_3; }
	inline void set__inverted_3(bool value)
	{
		____inverted_3 = value;
	}
};


// LibNoise.Operator.Translate
struct Translate_tCD3593A12B920217B0A4E4DEC37F8D994D09B8F9  : public ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D
{
public:
	// System.Double LibNoise.Operator.Translate::_x
	double ____x_2;
	// System.Double LibNoise.Operator.Translate::_y
	double ____y_3;
	// System.Double LibNoise.Operator.Translate::_z
	double ____z_4;

public:
	inline static int32_t get_offset_of__x_2() { return static_cast<int32_t>(offsetof(Translate_tCD3593A12B920217B0A4E4DEC37F8D994D09B8F9, ____x_2)); }
	inline double get__x_2() const { return ____x_2; }
	inline double* get_address_of__x_2() { return &____x_2; }
	inline void set__x_2(double value)
	{
		____x_2 = value;
	}

	inline static int32_t get_offset_of__y_3() { return static_cast<int32_t>(offsetof(Translate_tCD3593A12B920217B0A4E4DEC37F8D994D09B8F9, ____y_3)); }
	inline double get__y_3() const { return ____y_3; }
	inline double* get_address_of__y_3() { return &____y_3; }
	inline void set__y_3(double value)
	{
		____y_3 = value;
	}

	inline static int32_t get_offset_of__z_4() { return static_cast<int32_t>(offsetof(Translate_tCD3593A12B920217B0A4E4DEC37F8D994D09B8F9, ____z_4)); }
	inline double get__z_4() const { return ____z_4; }
	inline double* get_address_of__z_4() { return &____z_4; }
	inline void set__z_4(double value)
	{
		____z_4 = value;
	}
};


// LibNoise.Operator.Turbulence
struct Turbulence_tC8326B21F7FB734FFC340C3052A21F6205F898A1  : public ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D
{
public:
	// System.Double LibNoise.Operator.Turbulence::_power
	double ____power_11;
	// LibNoise.Generator.Perlin LibNoise.Operator.Turbulence::_xDistort
	Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * ____xDistort_12;
	// LibNoise.Generator.Perlin LibNoise.Operator.Turbulence::_yDistort
	Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * ____yDistort_13;
	// LibNoise.Generator.Perlin LibNoise.Operator.Turbulence::_zDistort
	Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * ____zDistort_14;

public:
	inline static int32_t get_offset_of__power_11() { return static_cast<int32_t>(offsetof(Turbulence_tC8326B21F7FB734FFC340C3052A21F6205F898A1, ____power_11)); }
	inline double get__power_11() const { return ____power_11; }
	inline double* get_address_of__power_11() { return &____power_11; }
	inline void set__power_11(double value)
	{
		____power_11 = value;
	}

	inline static int32_t get_offset_of__xDistort_12() { return static_cast<int32_t>(offsetof(Turbulence_tC8326B21F7FB734FFC340C3052A21F6205F898A1, ____xDistort_12)); }
	inline Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * get__xDistort_12() const { return ____xDistort_12; }
	inline Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 ** get_address_of__xDistort_12() { return &____xDistort_12; }
	inline void set__xDistort_12(Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * value)
	{
		____xDistort_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____xDistort_12), (void*)value);
	}

	inline static int32_t get_offset_of__yDistort_13() { return static_cast<int32_t>(offsetof(Turbulence_tC8326B21F7FB734FFC340C3052A21F6205F898A1, ____yDistort_13)); }
	inline Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * get__yDistort_13() const { return ____yDistort_13; }
	inline Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 ** get_address_of__yDistort_13() { return &____yDistort_13; }
	inline void set__yDistort_13(Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * value)
	{
		____yDistort_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____yDistort_13), (void*)value);
	}

	inline static int32_t get_offset_of__zDistort_14() { return static_cast<int32_t>(offsetof(Turbulence_tC8326B21F7FB734FFC340C3052A21F6205F898A1, ____zDistort_14)); }
	inline Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * get__zDistort_14() const { return ____zDistort_14; }
	inline Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 ** get_address_of__zDistort_14() { return &____zDistort_14; }
	inline void set__zDistort_14(Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * value)
	{
		____zDistort_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____zDistort_14), (void*)value);
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// LibNoise.Generator.Voronoi
struct Voronoi_t3E6BF1D9F2351DBE1E5CB1700CF85775880B690E  : public ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D
{
public:
	// System.Double LibNoise.Generator.Voronoi::_displacement
	double ____displacement_2;
	// System.Double LibNoise.Generator.Voronoi::_frequency
	double ____frequency_3;
	// System.Int32 LibNoise.Generator.Voronoi::_seed
	int32_t ____seed_4;
	// System.Boolean LibNoise.Generator.Voronoi::_distance
	bool ____distance_5;

public:
	inline static int32_t get_offset_of__displacement_2() { return static_cast<int32_t>(offsetof(Voronoi_t3E6BF1D9F2351DBE1E5CB1700CF85775880B690E, ____displacement_2)); }
	inline double get__displacement_2() const { return ____displacement_2; }
	inline double* get_address_of__displacement_2() { return &____displacement_2; }
	inline void set__displacement_2(double value)
	{
		____displacement_2 = value;
	}

	inline static int32_t get_offset_of__frequency_3() { return static_cast<int32_t>(offsetof(Voronoi_t3E6BF1D9F2351DBE1E5CB1700CF85775880B690E, ____frequency_3)); }
	inline double get__frequency_3() const { return ____frequency_3; }
	inline double* get_address_of__frequency_3() { return &____frequency_3; }
	inline void set__frequency_3(double value)
	{
		____frequency_3 = value;
	}

	inline static int32_t get_offset_of__seed_4() { return static_cast<int32_t>(offsetof(Voronoi_t3E6BF1D9F2351DBE1E5CB1700CF85775880B690E, ____seed_4)); }
	inline int32_t get__seed_4() const { return ____seed_4; }
	inline int32_t* get_address_of__seed_4() { return &____seed_4; }
	inline void set__seed_4(int32_t value)
	{
		____seed_4 = value;
	}

	inline static int32_t get_offset_of__distance_5() { return static_cast<int32_t>(offsetof(Voronoi_t3E6BF1D9F2351DBE1E5CB1700CF85775880B690E, ____distance_5)); }
	inline bool get__distance_5() const { return ____distance_5; }
	inline bool* get_address_of__distance_5() { return &____distance_5; }
	inline void set__distance_5(bool value)
	{
		____distance_5 = value;
	}
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=8192
struct __StaticArrayInitTypeSizeU3D8192_t51E77AF6BB0DE9E10DE8D791109259931CFE818F 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D8192_t51E77AF6BB0DE9E10DE8D791109259931CFE818F__padding[8192];
	};

public:
};


// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t542D62BCE92B129CE3F76621A9BF5D987CFDFC58  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t542D62BCE92B129CE3F76621A9BF5D987CFDFC58_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=8192 <PrivateImplementationDetails>::783B86DB486276222DEFDC756C4542DAE60CAA36FBDAD4316D523055459E7BA0
	__StaticArrayInitTypeSizeU3D8192_t51E77AF6BB0DE9E10DE8D791109259931CFE818F  ___783B86DB486276222DEFDC756C4542DAE60CAA36FBDAD4316D523055459E7BA0_0;

public:
	inline static int32_t get_offset_of_U3783B86DB486276222DEFDC756C4542DAE60CAA36FBDAD4316D523055459E7BA0_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t542D62BCE92B129CE3F76621A9BF5D987CFDFC58_StaticFields, ___783B86DB486276222DEFDC756C4542DAE60CAA36FBDAD4316D523055459E7BA0_0)); }
	inline __StaticArrayInitTypeSizeU3D8192_t51E77AF6BB0DE9E10DE8D791109259931CFE818F  get_U3783B86DB486276222DEFDC756C4542DAE60CAA36FBDAD4316D523055459E7BA0_0() const { return ___783B86DB486276222DEFDC756C4542DAE60CAA36FBDAD4316D523055459E7BA0_0; }
	inline __StaticArrayInitTypeSizeU3D8192_t51E77AF6BB0DE9E10DE8D791109259931CFE818F * get_address_of_U3783B86DB486276222DEFDC756C4542DAE60CAA36FBDAD4316D523055459E7BA0_0() { return &___783B86DB486276222DEFDC756C4542DAE60CAA36FBDAD4316D523055459E7BA0_0; }
	inline void set_U3783B86DB486276222DEFDC756C4542DAE60CAA36FBDAD4316D523055459E7BA0_0(__StaticArrayInitTypeSizeU3D8192_t51E77AF6BB0DE9E10DE8D791109259931CFE818F  value)
	{
		___783B86DB486276222DEFDC756C4542DAE60CAA36FBDAD4316D523055459E7BA0_0 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Gradient
struct Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.GradientColorKey
struct GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E 
{
public:
	// UnityEngine.Color UnityEngine.GradientColorKey::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_0;
	// System.Single UnityEngine.GradientColorKey::time
	float ___time_1;

public:
	inline static int32_t get_offset_of_color_0() { return static_cast<int32_t>(offsetof(GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E, ___color_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_0() const { return ___color_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_0() { return &___color_0; }
	inline void set_color_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_0 = value;
	}

	inline static int32_t get_offset_of_time_1() { return static_cast<int32_t>(offsetof(GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E, ___time_1)); }
	inline float get_time_1() const { return ___time_1; }
	inline float* get_address_of_time_1() { return &___time_1; }
	inline void set_time_1(float value)
	{
		___time_1 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// LibNoise.QualityMode
struct QualityMode_t9D3923E3DB9D6656AA756D9C89BA8B10B07F4093 
{
public:
	// System.Int32 LibNoise.QualityMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(QualityMode_t9D3923E3DB9D6656AA756D9C89BA8B10B07F4093, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.TextureWrapMode
struct TextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB 
{
public:
	// System.Int32 UnityEngine.TextureWrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureWrapMode_t86DDA8206E4AA784A1218D0DE3C5F6826D7549EB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LibNoise.Generator.Billow
struct Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924  : public ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D
{
public:
	// System.Double LibNoise.Generator.Billow::_frequency
	double ____frequency_2;
	// System.Double LibNoise.Generator.Billow::_lacunarity
	double ____lacunarity_3;
	// LibNoise.QualityMode LibNoise.Generator.Billow::_quality
	int32_t ____quality_4;
	// System.Int32 LibNoise.Generator.Billow::_octaveCount
	int32_t ____octaveCount_5;
	// System.Double LibNoise.Generator.Billow::_persistence
	double ____persistence_6;
	// System.Int32 LibNoise.Generator.Billow::_seed
	int32_t ____seed_7;

public:
	inline static int32_t get_offset_of__frequency_2() { return static_cast<int32_t>(offsetof(Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924, ____frequency_2)); }
	inline double get__frequency_2() const { return ____frequency_2; }
	inline double* get_address_of__frequency_2() { return &____frequency_2; }
	inline void set__frequency_2(double value)
	{
		____frequency_2 = value;
	}

	inline static int32_t get_offset_of__lacunarity_3() { return static_cast<int32_t>(offsetof(Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924, ____lacunarity_3)); }
	inline double get__lacunarity_3() const { return ____lacunarity_3; }
	inline double* get_address_of__lacunarity_3() { return &____lacunarity_3; }
	inline void set__lacunarity_3(double value)
	{
		____lacunarity_3 = value;
	}

	inline static int32_t get_offset_of__quality_4() { return static_cast<int32_t>(offsetof(Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924, ____quality_4)); }
	inline int32_t get__quality_4() const { return ____quality_4; }
	inline int32_t* get_address_of__quality_4() { return &____quality_4; }
	inline void set__quality_4(int32_t value)
	{
		____quality_4 = value;
	}

	inline static int32_t get_offset_of__octaveCount_5() { return static_cast<int32_t>(offsetof(Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924, ____octaveCount_5)); }
	inline int32_t get__octaveCount_5() const { return ____octaveCount_5; }
	inline int32_t* get_address_of__octaveCount_5() { return &____octaveCount_5; }
	inline void set__octaveCount_5(int32_t value)
	{
		____octaveCount_5 = value;
	}

	inline static int32_t get_offset_of__persistence_6() { return static_cast<int32_t>(offsetof(Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924, ____persistence_6)); }
	inline double get__persistence_6() const { return ____persistence_6; }
	inline double* get_address_of__persistence_6() { return &____persistence_6; }
	inline void set__persistence_6(double value)
	{
		____persistence_6 = value;
	}

	inline static int32_t get_offset_of__seed_7() { return static_cast<int32_t>(offsetof(Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924, ____seed_7)); }
	inline int32_t get__seed_7() const { return ____seed_7; }
	inline int32_t* get_address_of__seed_7() { return &____seed_7; }
	inline void set__seed_7(int32_t value)
	{
		____seed_7 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// LibNoise.Generator.Perlin
struct Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283  : public ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D
{
public:
	// System.Double LibNoise.Generator.Perlin::_frequency
	double ____frequency_2;
	// System.Double LibNoise.Generator.Perlin::_lacunarity
	double ____lacunarity_3;
	// LibNoise.QualityMode LibNoise.Generator.Perlin::_quality
	int32_t ____quality_4;
	// System.Int32 LibNoise.Generator.Perlin::_octaveCount
	int32_t ____octaveCount_5;
	// System.Double LibNoise.Generator.Perlin::_persistence
	double ____persistence_6;
	// System.Int32 LibNoise.Generator.Perlin::_seed
	int32_t ____seed_7;

public:
	inline static int32_t get_offset_of__frequency_2() { return static_cast<int32_t>(offsetof(Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283, ____frequency_2)); }
	inline double get__frequency_2() const { return ____frequency_2; }
	inline double* get_address_of__frequency_2() { return &____frequency_2; }
	inline void set__frequency_2(double value)
	{
		____frequency_2 = value;
	}

	inline static int32_t get_offset_of__lacunarity_3() { return static_cast<int32_t>(offsetof(Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283, ____lacunarity_3)); }
	inline double get__lacunarity_3() const { return ____lacunarity_3; }
	inline double* get_address_of__lacunarity_3() { return &____lacunarity_3; }
	inline void set__lacunarity_3(double value)
	{
		____lacunarity_3 = value;
	}

	inline static int32_t get_offset_of__quality_4() { return static_cast<int32_t>(offsetof(Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283, ____quality_4)); }
	inline int32_t get__quality_4() const { return ____quality_4; }
	inline int32_t* get_address_of__quality_4() { return &____quality_4; }
	inline void set__quality_4(int32_t value)
	{
		____quality_4 = value;
	}

	inline static int32_t get_offset_of__octaveCount_5() { return static_cast<int32_t>(offsetof(Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283, ____octaveCount_5)); }
	inline int32_t get__octaveCount_5() const { return ____octaveCount_5; }
	inline int32_t* get_address_of__octaveCount_5() { return &____octaveCount_5; }
	inline void set__octaveCount_5(int32_t value)
	{
		____octaveCount_5 = value;
	}

	inline static int32_t get_offset_of__persistence_6() { return static_cast<int32_t>(offsetof(Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283, ____persistence_6)); }
	inline double get__persistence_6() const { return ____persistence_6; }
	inline double* get_address_of__persistence_6() { return &____persistence_6; }
	inline void set__persistence_6(double value)
	{
		____persistence_6 = value;
	}

	inline static int32_t get_offset_of__seed_7() { return static_cast<int32_t>(offsetof(Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283, ____seed_7)); }
	inline int32_t get__seed_7() const { return ____seed_7; }
	inline int32_t* get_address_of__seed_7() { return &____seed_7; }
	inline void set__seed_7(int32_t value)
	{
		____seed_7 = value;
	}
};


// LibNoise.Generator.RidgedMultifractal
struct RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E  : public ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D
{
public:
	// System.Double LibNoise.Generator.RidgedMultifractal::_frequency
	double ____frequency_2;
	// System.Double LibNoise.Generator.RidgedMultifractal::_lacunarity
	double ____lacunarity_3;
	// LibNoise.QualityMode LibNoise.Generator.RidgedMultifractal::_quality
	int32_t ____quality_4;
	// System.Int32 LibNoise.Generator.RidgedMultifractal::_octaveCount
	int32_t ____octaveCount_5;
	// System.Double LibNoise.Generator.RidgedMultifractal::_exponent
	double ____exponent_6;
	// System.Double LibNoise.Generator.RidgedMultifractal::_gain
	double ____gain_7;
	// System.Double LibNoise.Generator.RidgedMultifractal::_offset
	double ____offset_8;
	// System.Int32 LibNoise.Generator.RidgedMultifractal::_seed
	int32_t ____seed_9;
	// System.Double[] LibNoise.Generator.RidgedMultifractal::_weights
	DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* ____weights_10;

public:
	inline static int32_t get_offset_of__frequency_2() { return static_cast<int32_t>(offsetof(RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E, ____frequency_2)); }
	inline double get__frequency_2() const { return ____frequency_2; }
	inline double* get_address_of__frequency_2() { return &____frequency_2; }
	inline void set__frequency_2(double value)
	{
		____frequency_2 = value;
	}

	inline static int32_t get_offset_of__lacunarity_3() { return static_cast<int32_t>(offsetof(RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E, ____lacunarity_3)); }
	inline double get__lacunarity_3() const { return ____lacunarity_3; }
	inline double* get_address_of__lacunarity_3() { return &____lacunarity_3; }
	inline void set__lacunarity_3(double value)
	{
		____lacunarity_3 = value;
	}

	inline static int32_t get_offset_of__quality_4() { return static_cast<int32_t>(offsetof(RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E, ____quality_4)); }
	inline int32_t get__quality_4() const { return ____quality_4; }
	inline int32_t* get_address_of__quality_4() { return &____quality_4; }
	inline void set__quality_4(int32_t value)
	{
		____quality_4 = value;
	}

	inline static int32_t get_offset_of__octaveCount_5() { return static_cast<int32_t>(offsetof(RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E, ____octaveCount_5)); }
	inline int32_t get__octaveCount_5() const { return ____octaveCount_5; }
	inline int32_t* get_address_of__octaveCount_5() { return &____octaveCount_5; }
	inline void set__octaveCount_5(int32_t value)
	{
		____octaveCount_5 = value;
	}

	inline static int32_t get_offset_of__exponent_6() { return static_cast<int32_t>(offsetof(RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E, ____exponent_6)); }
	inline double get__exponent_6() const { return ____exponent_6; }
	inline double* get_address_of__exponent_6() { return &____exponent_6; }
	inline void set__exponent_6(double value)
	{
		____exponent_6 = value;
	}

	inline static int32_t get_offset_of__gain_7() { return static_cast<int32_t>(offsetof(RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E, ____gain_7)); }
	inline double get__gain_7() const { return ____gain_7; }
	inline double* get_address_of__gain_7() { return &____gain_7; }
	inline void set__gain_7(double value)
	{
		____gain_7 = value;
	}

	inline static int32_t get_offset_of__offset_8() { return static_cast<int32_t>(offsetof(RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E, ____offset_8)); }
	inline double get__offset_8() const { return ____offset_8; }
	inline double* get_address_of__offset_8() { return &____offset_8; }
	inline void set__offset_8(double value)
	{
		____offset_8 = value;
	}

	inline static int32_t get_offset_of__seed_9() { return static_cast<int32_t>(offsetof(RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E, ____seed_9)); }
	inline int32_t get__seed_9() const { return ____seed_9; }
	inline int32_t* get_address_of__seed_9() { return &____seed_9; }
	inline void set__seed_9(int32_t value)
	{
		____seed_9 = value;
	}

	inline static int32_t get_offset_of__weights_10() { return static_cast<int32_t>(offsetof(RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E, ____weights_10)); }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* get__weights_10() const { return ____weights_10; }
	inline DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB** get_address_of__weights_10() { return &____weights_10; }
	inline void set__weights_10(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* value)
	{
		____weights_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____weights_10), (void*)value);
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>>
struct Comparison_1_t25298E45AA65D77FB819F36226B05B6DD20979C6  : public MulticastDelegate_t
{
public:

public:
};


// System.Comparison`1<System.Double>
struct Comparison_1_t08C078C3FDDD0746272F4DC7A982874AB477F342  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// LibNoise.ModuleBase[]
struct ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * m_Items[1];

public:
	inline ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GradientColorKey[]
struct GradientColorKeyU5BU5D_t93452502F87F8D08C4E848B95CFCBDFCD482056A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E  m_Items[1];

public:
	inline GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GradientAlphaKey[]
struct GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GradientAlphaKey_t2EB9572FC9B85C468D39D2DC7A02A441F3A7E36D  m_Items[1];

public:
	inline GradientAlphaKey_t2EB9572FC9B85C468D39D2DC7A02A441F3A7E36D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GradientAlphaKey_t2EB9572FC9B85C468D39D2DC7A02A441F3A7E36D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GradientAlphaKey_t2EB9572FC9B85C468D39D2DC7A02A441F3A7E36D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline GradientAlphaKey_t2EB9572FC9B85C468D39D2DC7A02A441F3A7E36D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GradientAlphaKey_t2EB9572FC9B85C468D39D2DC7A02A441F3A7E36D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GradientAlphaKey_t2EB9572FC9B85C468D39D2DC7A02A441F3A7E36D  value)
	{
		m_Items[index] = value;
	}
};
// System.Single[0...,0...]
struct SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
	inline float GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, float value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, float value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  m_Items[1];

public:
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>[]
struct KeyValuePair_2U5BU5D_t788816ABE0E3287BD454F19104852EC72D7A0CB3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10  m_Items[1];

public:
	inline KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mEA809B63B96832E1ED95FFF86A400781EB3DE5E0_gshared (List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m32DCE2DAC380E7E81E35C6D1459FC1B664C98D07_gshared_inline (List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m4AA4554410DD3E100FFFC9EC2192ECD14E76CC9F_gshared (KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10 * __this, double ___key0, double ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mC006E18FFE41F1D091B4CAE8BA2A6C0FAC5439A4_gshared (List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * __this, KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m8A25B1DF10203D9BEF53E31728C88B8E8A1E5802_gshared (List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * __this, KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10  ___item0, const RuntimeMethod* method);
// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_m9006EAFA7D78F849994ABB321E930BC6238C116A_gshared (Comparison_1_t25298E45AA65D77FB819F36226B05B6DD20979C6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>>::Sort(System.Comparison`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_mFB2E395737E966A01268C06C2CFE4A8EA5DD6CD4_gshared (List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * __this, Comparison_1_t25298E45AA65D77FB819F36226B05B6DD20979C6 * ___comparison0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m1398156EBC9D85513848E4D85288469D5A50B0A8_gshared (List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10  List_1_get_Item_m7DE788F9B3E4AB58167158D3EC8678D102CBA4C5_gshared_inline (List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KeyValuePair_2_get_Key_m538BD134D8B991D52E98EDB7473C8FE1BF5FB001_gshared_inline (KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KeyValuePair_2_get_Value_mCF6D46FD8287F430682B061EA3FA2CD6FE8CC827_gshared_inline (KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GradientColorKey>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m6907DF8DE758893DF85369A64084A2029D8023F3_gshared (List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GradientColorKey>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E_gshared (List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * __this, GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GradientAlphaKey>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mCFF83FB3AC66018A978ED540289D2D25CCF67088_gshared (List_1_t50294AA606C939B6984B296A8267A187FCE02602 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GradientAlphaKey>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m99353D132512446CCBFC3CE0FF9B97ED53768256_gshared (List_1_t50294AA606C939B6984B296A8267A187FCE02602 * __this, GradientAlphaKey_t2EB9572FC9B85C468D39D2DC7A02A441F3A7E36D  ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.GradientColorKey>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GradientColorKeyU5BU5D_t93452502F87F8D08C4E848B95CFCBDFCD482056A* List_1_ToArray_m1D0591B02F36239FA5D61E3E1DA6222A866D4902_gshared (List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.GradientAlphaKey>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748* List_1_ToArray_mE9F83D6E8EC942001B3B786EDA3D4ED936060B6E_gshared (List_1_t50294AA606C939B6984B296A8267A187FCE02602 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mA0CE4C11D163EF853E9E6A0FD3C75486EF3A0F31_gshared (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Double>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mC1A91036A8488F4B39DA566C71D9631B796DCBE2_gshared_inline (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Double>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_mD87D363D3B6C004CE8030608165F3387B76DB6B2_gshared (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, double ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Double>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929_gshared (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, double ___item0, const RuntimeMethod* method);
// System.Void System.Comparison`1<System.Double>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_m331BF6165A41C6570EC02FA8FCAC0BADECA88E22_gshared (Comparison_1_t08C078C3FDDD0746272F4DC7A982874AB477F342 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Double>::Sort(System.Comparison`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m44310CC5BD6029CA7490C6DBDF3962606BB28148_gshared (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, Comparison_1_t08C078C3FDDD0746272F4DC7A982874AB477F342 * ___comparison0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Double>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mF271DBB69BEA5517448FE5A837FA429618F2F66F_gshared (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Double>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_gshared_inline (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, int32_t ___index0, const RuntimeMethod* method);

// System.Void LibNoise.ModuleBase::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29 (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * __this, int32_t ___count0, const RuntimeMethod* method);
// LibNoise.ModuleBase[] LibNoise.ModuleBase::get_Modules()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * __this, const RuntimeMethod* method);
// System.Void LibNoise.Generator.Billow::set_Frequency(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Billow_set_Frequency_m1F538C7CDFD6A2CEA561C143154F792F6C647754_inline (Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924 * __this, double ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Generator.Billow::set_Lacunarity(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Billow_set_Lacunarity_m709EB0AEF2C30BC9F31EB5BD34286DFA8BE79EF7_inline (Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924 * __this, double ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Generator.Billow::set_OctaveCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Billow_set_OctaveCount_m99492C227D3B6D7C2A2C1AACC82FC5BBADA56727 (Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Generator.Billow::set_Persistence(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Billow_set_Persistence_m1507FB18AB6AD544CE2D79CFA9F306EEFEFF0B6E_inline (Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924 * __this, double ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Generator.Billow::set_Seed(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Billow_set_Seed_mE5A61A0905687C7B2CB17B7372071761C406D296_inline (Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Generator.Billow::set_Quality(LibNoise.QualityMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Billow_set_Quality_mB20EEF88780AC3B1C2DE6F471CB453647EFD52EF_inline (Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method);
// System.Double LibNoise.Utils::MakeInt32Range(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Utils_MakeInt32Range_m38E96B1EC6FD2C8CC3E6350486B2DA4523DEA945 (double ___value0, const RuntimeMethod* method);
// System.Double LibNoise.Utils::GradientCoherentNoise3D(System.Double,System.Double,System.Double,System.Int64,LibNoise.QualityMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Utils_GradientCoherentNoise3D_m14EC2F50807ACC5ACFDF3037ED5145768F1F6222 (double ___x0, double ___y1, double ___z2, int64_t ___seed3, int32_t ___quality4, const RuntimeMethod* method);
// System.Double LibNoise.Utils::InterpolateLinear(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Utils_InterpolateLinear_m67C385B25C06BA3BC751E5A962CCBCAE3C2A07AF (double ___a0, double ___b1, double ___position2, const RuntimeMethod* method);
// LibNoise.ModuleBase LibNoise.ModuleBase::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ModuleBase_get_Item_m44C31BA122658F8214A34CAE639CC7FD6AAFB2CF (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void LibNoise.ModuleBase::set_Item(System.Int32,LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleBase_set_Item_m2F9A0F870E3BD30FFC971D93524FC5B2A30D3821 (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * __this, int32_t ___index0, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___value1, const RuntimeMethod* method);
// System.Void LibNoise.Operator.Clamp::set_Minimum(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Clamp_set_Minimum_m62977D78ACB99137F066700ADB953ECFB17765A0_inline (Clamp_tB7BB016243BB155599C7E5F651AA8A9A420F0AEB * __this, double ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Operator.Clamp::set_Maximum(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Clamp_set_Maximum_m31D04595754BC2AB91A1FA4FC1A74A13C8917D77_inline (Clamp_tB7BB016243BB155599C7E5F651AA8A9A420F0AEB * __this, double ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Generator.Const::set_Value(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Const_set_Value_mBA35098D085B22743D036006F7483683BF8F4E7D_inline (Const_tD83951719E3D1DF8F6238E59194E34DB93E331A5 * __this, double ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>>::.ctor()
inline void List_1__ctor_mEA809B63B96832E1ED95FFF86A400781EB3DE5E0 (List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 *, const RuntimeMethod*))List_1__ctor_mEA809B63B96832E1ED95FFF86A400781EB3DE5E0_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>>::get_Count()
inline int32_t List_1_get_Count_m32DCE2DAC380E7E81E35C6D1459FC1B664C98D07_inline (List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 *, const RuntimeMethod*))List_1_get_Count_m32DCE2DAC380E7E81E35C6D1459FC1B664C98D07_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_m4AA4554410DD3E100FFFC9EC2192ECD14E76CC9F (KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10 * __this, double ___key0, double ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10 *, double, double, const RuntimeMethod*))KeyValuePair_2__ctor_m4AA4554410DD3E100FFFC9EC2192ECD14E76CC9F_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>>::Contains(!0)
inline bool List_1_Contains_mC006E18FFE41F1D091B4CAE8BA2A6C0FAC5439A4 (List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * __this, KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10  ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 *, KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10 , const RuntimeMethod*))List_1_Contains_mC006E18FFE41F1D091B4CAE8BA2A6C0FAC5439A4_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>>::Add(!0)
inline void List_1_Add_m8A25B1DF10203D9BEF53E31728C88B8E8A1E5802 (List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * __this, KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 *, KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10 , const RuntimeMethod*))List_1_Add_m8A25B1DF10203D9BEF53E31728C88B8E8A1E5802_gshared)(__this, ___item0, method);
}
// System.Void System.Comparison`1<System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m9006EAFA7D78F849994ABB321E930BC6238C116A (Comparison_1_t25298E45AA65D77FB819F36226B05B6DD20979C6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t25298E45AA65D77FB819F36226B05B6DD20979C6 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Comparison_1__ctor_m9006EAFA7D78F849994ABB321E930BC6238C116A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>>::Sort(System.Comparison`1<!0>)
inline void List_1_Sort_mFB2E395737E966A01268C06C2CFE4A8EA5DD6CD4 (List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * __this, Comparison_1_t25298E45AA65D77FB819F36226B05B6DD20979C6 * ___comparison0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 *, Comparison_1_t25298E45AA65D77FB819F36226B05B6DD20979C6 *, const RuntimeMethod*))List_1_Sort_mFB2E395737E966A01268C06C2CFE4A8EA5DD6CD4_gshared)(__this, ___comparison0, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>>::Clear()
inline void List_1_Clear_m1398156EBC9D85513848E4D85288469D5A50B0A8 (List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 *, const RuntimeMethod*))List_1_Clear_m1398156EBC9D85513848E4D85288469D5A50B0A8_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>>::get_Item(System.Int32)
inline KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10  List_1_get_Item_m7DE788F9B3E4AB58167158D3EC8678D102CBA4C5_inline (List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10  (*) (List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 *, int32_t, const RuntimeMethod*))List_1_get_Item_m7DE788F9B3E4AB58167158D3EC8678D102CBA4C5_gshared_inline)(__this, ___index0, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>::get_Key()
inline double KeyValuePair_2_get_Key_m538BD134D8B991D52E98EDB7473C8FE1BF5FB001_inline (KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10 * __this, const RuntimeMethod* method)
{
	return ((  double (*) (KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m538BD134D8B991D52E98EDB7473C8FE1BF5FB001_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>::get_Value()
inline double KeyValuePair_2_get_Value_mCF6D46FD8287F430682B061EA3FA2CD6FE8CC827_inline (KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10 * __this, const RuntimeMethod* method)
{
	return ((  double (*) (KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10 *, const RuntimeMethod*))KeyValuePair_2_get_Value_mCF6D46FD8287F430682B061EA3FA2CD6FE8CC827_gshared_inline)(__this, method);
}
// System.Double LibNoise.Utils::InterpolateCubic(System.Double,System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Utils_InterpolateCubic_m5C3389D766F789B95ED4BC9AE111D012D9ABB505 (double ___a0, double ___b1, double ___c2, double ___d3, double ___position4, const RuntimeMethod* method);
// System.Void LibNoise.Generator.Cylinders::set_Frequency(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cylinders_set_Frequency_mF0BC5F07111A66682234B909EC507119F3459AAA_inline (Cylinders_t97A509D33FCBE86D6C38F1497D3A6E40636D53C5 * __this, double ___value0, const RuntimeMethod* method);
// System.Double System.Math::Min(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Min_m029DC981252B020B92B6DEC21AF0D42C56FA12B9 (double ___val10, double ___val21, const RuntimeMethod* method);
// System.Void LibNoise.Operator.Exponent::set_Value(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Exponent_set_Value_m40A3752C11DF26BD1A7C19EA3CA170F0A08AF677_inline (Exponent_t1FFCB9A4E8B689486050BA3D74E4A8915D175B5D * __this, double ___value0, const RuntimeMethod* method);
// System.Double System.Math::Pow(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Pow_mC2C8700DAAD1316AA457A1D271F78CDF0D61AC2F (double ___x0, double ___y1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GradientColorKey>::.ctor()
inline void List_1__ctor_m6907DF8DE758893DF85369A64084A2029D8023F3 (List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 *, const RuntimeMethod*))List_1__ctor_m6907DF8DE758893DF85369A64084A2029D8023F3_gshared)(__this, method);
}
// UnityEngine.Color UnityEngine.Color::get_black()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982 (const RuntimeMethod* method);
// System.Void UnityEngine.GradientColorKey::.ctor(UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GradientColorKey__ctor_m8082D2E47E514E2708DDCD30A5063883CDD0FF20 (GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___col0, float ___time1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GradientColorKey>::Add(!0)
inline void List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E (List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * __this, GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 *, GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E , const RuntimeMethod*))List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E_gshared)(__this, ___item0, method);
}
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_green()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_blue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GradientAlphaKey>::.ctor()
inline void List_1__ctor_mCFF83FB3AC66018A978ED540289D2D25CCF67088 (List_1_t50294AA606C939B6984B296A8267A187FCE02602 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t50294AA606C939B6984B296A8267A187FCE02602 *, const RuntimeMethod*))List_1__ctor_mCFF83FB3AC66018A978ED540289D2D25CCF67088_gshared)(__this, method);
}
// System.Void UnityEngine.GradientAlphaKey::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GradientAlphaKey__ctor_mF4E157DB32F0177926B269D9DA4E11FC2ACF6F29 (GradientAlphaKey_t2EB9572FC9B85C468D39D2DC7A02A441F3A7E36D * __this, float ___alpha0, float ___time1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GradientAlphaKey>::Add(!0)
inline void List_1_Add_m99353D132512446CCBFC3CE0FF9B97ED53768256 (List_1_t50294AA606C939B6984B296A8267A187FCE02602 * __this, GradientAlphaKey_t2EB9572FC9B85C468D39D2DC7A02A441F3A7E36D  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t50294AA606C939B6984B296A8267A187FCE02602 *, GradientAlphaKey_t2EB9572FC9B85C468D39D2DC7A02A441F3A7E36D , const RuntimeMethod*))List_1_Add_m99353D132512446CCBFC3CE0FF9B97ED53768256_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method);
// System.Void UnityEngine.Gradient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gradient__ctor_m4B95822B3C5187566CE4FA66E283600DCC916C5A (Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * __this, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<UnityEngine.GradientColorKey>::ToArray()
inline GradientColorKeyU5BU5D_t93452502F87F8D08C4E848B95CFCBDFCD482056A* List_1_ToArray_m1D0591B02F36239FA5D61E3E1DA6222A866D4902 (List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * __this, const RuntimeMethod* method)
{
	return ((  GradientColorKeyU5BU5D_t93452502F87F8D08C4E848B95CFCBDFCD482056A* (*) (List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 *, const RuntimeMethod*))List_1_ToArray_m1D0591B02F36239FA5D61E3E1DA6222A866D4902_gshared)(__this, method);
}
// !0[] System.Collections.Generic.List`1<UnityEngine.GradientAlphaKey>::ToArray()
inline GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748* List_1_ToArray_mE9F83D6E8EC942001B3B786EDA3D4ED936060B6E (List_1_t50294AA606C939B6984B296A8267A187FCE02602 * __this, const RuntimeMethod* method)
{
	return ((  GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748* (*) (List_1_t50294AA606C939B6984B296A8267A187FCE02602 *, const RuntimeMethod*))List_1_ToArray_mE9F83D6E8EC942001B3B786EDA3D4ED936060B6E_gshared)(__this, method);
}
// System.Void UnityEngine.Gradient::SetKeys(UnityEngine.GradientColorKey[],UnityEngine.GradientAlphaKey[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gradient_SetKeys_mFA90BD1B1B00C045CA5C068A1C251929A1A6720E (Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * __this, GradientColorKeyU5BU5D_t93452502F87F8D08C4E848B95CFCBDFCD482056A* ___colorKeys0, GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748* ___alphaKeys1, const RuntimeMethod* method);
// System.Double System.Math::Max(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Max_mA7AFB223891668427745BC854ACBC24849AEDCB6 (double ___val10, double ___val21, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void LibNoise.ModuleBase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleBase_Dispose_m62D627135A4F6DA5B8EA09DBC5ABD923CAFEBA76 (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * __this, const RuntimeMethod* method);
// System.Void LibNoise.Noise2D::.ctor(System.Int32,System.Int32,LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Noise2D__ctor_m983FD3DDC24734DE8D37E8EE6089AC14E056FD43 (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, int32_t ___width0, int32_t ___height1, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___generator2, const RuntimeMethod* method);
// System.Single[0...,0...] LibNoise.Noise2D::GetData(System.Boolean,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* Noise2D_GetData_m98DEC17127ECCDAEEB4396CC634FD7B91BB215EC (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, bool ___isCropped0, int32_t ___xCrop1, int32_t ___yCrop2, bool ___isNormalized3, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Double LibNoise.Noise2D::GeneratePlanar(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Noise2D_GeneratePlanar_m2710FA7ECFC07D2124C5E4D695F0E7036DE23E74 (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, double ___x0, double ___y1, const RuntimeMethod* method);
// System.Double LibNoise.Noise2D::GenerateCylindrical(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Noise2D_GenerateCylindrical_m4FFD8E13FD137F51FCB8B8BF5CB0A2C46579111F (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, double ___angle0, double ___height1, const RuntimeMethod* method);
// System.Double LibNoise.Noise2D::GenerateSpherical(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Noise2D_GenerateSpherical_m2DF71C573F5F60640402CEEE79C9F3E4B907E99C (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, double ___lat0, double ___lon1, const RuntimeMethod* method);
// UnityEngine.Gradient LibNoise.GradientPresets::get_Grayscale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * GradientPresets_get_Grayscale_m32ED2651CD017DA8BFA22301110834F3BED7DCBB_inline (const RuntimeMethod* method);
// UnityEngine.Texture2D LibNoise.Noise2D::GetTexture(UnityEngine.Gradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * Noise2D_GetTexture_m3FE5327997772C943E3DDCA036245C037B7951E6 (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * ___gradient0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, int32_t ___width0, int32_t ___height1, const RuntimeMethod* method);
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599 (float ___f0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Gradient::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Gradient_Evaluate_m02EA0BFD41864C8673A29333EBC4569C9DAA3E37 (Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * __this, float ___time0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___colors0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture::set_wrapMode(UnityEngine.TextureWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Texture2D::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0 (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519 (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void LibNoise.Generator.Perlin::set_Frequency(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Perlin_set_Frequency_m094C85FD638DD0C24CBB608E0FA36971242BA271_inline (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, double ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Generator.Perlin::set_Lacunarity(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Perlin_set_Lacunarity_mA18A66C6FFD01EAB967DDF0932C494EF6CA06FF9_inline (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, double ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Generator.Perlin::set_OctaveCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Perlin_set_OctaveCount_mE516F4E18DAD9F9E527E13809A86463A47017FC9 (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Generator.Perlin::set_Persistence(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Perlin_set_Persistence_m2CA1B1D372AAD4199212DAD250D1EF6C2CF3D793_inline (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, double ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Generator.Perlin::set_Seed(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Perlin_set_Seed_m106B83E8805A46A44CB68874E86D9E430EB45DF2_inline (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Generator.Perlin::set_Quality(LibNoise.QualityMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Perlin_set_Quality_m47AF66301CAE1E7354C6368983B297179B6F57CD_inline (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Generator.RidgedMultifractal::UpdateWeights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RidgedMultifractal_UpdateWeights_m08469ACBA257F937E5FB0CD9F5F673E8C86DEA9A (RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E * __this, const RuntimeMethod* method);
// System.Void LibNoise.Generator.RidgedMultifractal::set_Frequency(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RidgedMultifractal_set_Frequency_m506DD1C43FBB5453359735A0B630DCBB93032D62_inline (RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E * __this, double ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Generator.RidgedMultifractal::set_Lacunarity(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RidgedMultifractal_set_Lacunarity_m7AE852ADAC2712D03F3ACB516CBC3E048D877C29 (RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E * __this, double ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Generator.RidgedMultifractal::set_OctaveCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RidgedMultifractal_set_OctaveCount_m34D2ED563BDCD90CF8CB832D8A99023C48AB23DD (RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Generator.RidgedMultifractal::set_Seed(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RidgedMultifractal_set_Seed_mB4867646D315FFA64F036F3576AEF6E04D05FF13_inline (RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Generator.RidgedMultifractal::set_Quality(LibNoise.QualityMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RidgedMultifractal_set_Quality_m7430A86CF54C65D392F2CDC56740C488094C5D23_inline (RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Operator.Rotate::SetAngles(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_SetAngles_mC02DE74B763918A5C52BC6933EE0FE105EE9CCA2 (Rotate_t4E7066470DB840FD8213C092E9104F7273681906 * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method);
// System.Void LibNoise.Operator.Scale::set_X(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Scale_set_X_mFF6E23D36CD6F8EC5AA4694BAD2B6A8C342C2331_inline (Scale_tA76AEF14F2E1C8A26EB8340B97357BF99A81516B * __this, double ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Operator.Scale::set_Y(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Scale_set_Y_m04C271A440BEBBAB4103FCF027F7972DD1C11F67_inline (Scale_tA76AEF14F2E1C8A26EB8340B97357BF99A81516B * __this, double ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Operator.Scale::set_Z(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Scale_set_Z_m6D611E7E48894BAB79CF9D5A9198483150DD250E_inline (Scale_tA76AEF14F2E1C8A26EB8340B97357BF99A81516B * __this, double ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Operator.ScaleBias::set_Scale(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScaleBias_set_Scale_m8EBFEE9B01E430A622ED0AE4CC406D61E944D09B_inline (ScaleBias_t0E79E66C15E96900C32A2E9080C75588E942F649 * __this, double ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Operator.ScaleBias::set_Bias(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScaleBias_set_Bias_mB55C01E47759FA23CC2163227F8CDDAA2E1E63A6_inline (ScaleBias_t0E79E66C15E96900C32A2E9080C75588E942F649 * __this, double ___value0, const RuntimeMethod* method);
// System.Double LibNoise.Operator.ScaleBias::get_Scale()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ScaleBias_get_Scale_m9DCAF05504ECA5726257ED94325FD4B14F4C1878_inline (ScaleBias_t0E79E66C15E96900C32A2E9080C75588E942F649 * __this, const RuntimeMethod* method);
// System.Double LibNoise.Operator.ScaleBias::get_Bias()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ScaleBias_get_Bias_m4FA0528DE1D5184893E074D70CECEE94637193E5_inline (ScaleBias_t0E79E66C15E96900C32A2E9080C75588E942F649 * __this, const RuntimeMethod* method);
// System.Void LibNoise.Operator.Select::.ctor(LibNoise.ModuleBase,LibNoise.ModuleBase,LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Select__ctor_m116A6047881813358DE209B8BE0E39E25C1D6154 (Select_tE6E071398C0C3DC23EC6CDA27FCDDF69A7ED65ED * __this, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___inputA0, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___inputB1, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___controller2, const RuntimeMethod* method);
// System.Void LibNoise.Operator.Select::set_FallOff(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Select_set_FallOff_mF33729E92DEDD37B673A77737326CD6DA99CFC49 (Select_tE6E071398C0C3DC23EC6CDA27FCDDF69A7ED65ED * __this, double ___value0, const RuntimeMethod* method);
// System.Double LibNoise.Utils::MapCubicSCurve(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Utils_MapCubicSCurve_mAF58D6A668F431FA198625EAB3EDF1C1E1E796EA (double ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Generator.Spheres::set_Frequency(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Spheres_set_Frequency_m30FDB3D279164D7DCC634750D9C3CA649EF564CA_inline (Spheres_t5141EACFECDE72E6F0ADB1AC3621A1E3104731D3 * __this, double ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor()
inline void List_1__ctor_mA0CE4C11D163EF853E9E6A0FD3C75486EF3A0F31 (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *, const RuntimeMethod*))List_1__ctor_mA0CE4C11D163EF853E9E6A0FD3C75486EF3A0F31_gshared)(__this, method);
}
// System.Void LibNoise.Operator.Terrace::set_IsInverted(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Terrace_set_IsInverted_m4E8927A180BCC33D35B81DAE215FB20D4D7B3C12_inline (Terrace_t441233268BCC329AC1DCD704A5891A0CD56EFB6B * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Double>::get_Count()
inline int32_t List_1_get_Count_mC1A91036A8488F4B39DA566C71D9631B796DCBE2_inline (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *, const RuntimeMethod*))List_1_get_Count_mC1A91036A8488F4B39DA566C71D9631B796DCBE2_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<System.Double>::Contains(!0)
inline bool List_1_Contains_mD87D363D3B6C004CE8030608165F3387B76DB6B2 (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, double ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *, double, const RuntimeMethod*))List_1_Contains_mD87D363D3B6C004CE8030608165F3387B76DB6B2_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.Double>::Add(!0)
inline void List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929 (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, double ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *, double, const RuntimeMethod*))List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929_gshared)(__this, ___item0, method);
}
// System.Void System.Comparison`1<System.Double>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m331BF6165A41C6570EC02FA8FCAC0BADECA88E22 (Comparison_1_t08C078C3FDDD0746272F4DC7A982874AB477F342 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_t08C078C3FDDD0746272F4DC7A982874AB477F342 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Comparison_1__ctor_m331BF6165A41C6570EC02FA8FCAC0BADECA88E22_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<System.Double>::Sort(System.Comparison`1<!0>)
inline void List_1_Sort_m44310CC5BD6029CA7490C6DBDF3962606BB28148 (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, Comparison_1_t08C078C3FDDD0746272F4DC7A982874AB477F342 * ___comparison0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *, Comparison_1_t08C078C3FDDD0746272F4DC7A982874AB477F342 *, const RuntimeMethod*))List_1_Sort_m44310CC5BD6029CA7490C6DBDF3962606BB28148_gshared)(__this, ___comparison0, method);
}
// System.Void System.Collections.Generic.List`1<System.Double>::Clear()
inline void List_1_Clear_mF271DBB69BEA5517448FE5A837FA429618F2F66F (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *, const RuntimeMethod*))List_1_Clear_mF271DBB69BEA5517448FE5A837FA429618F2F66F_gshared)(__this, method);
}
// System.Void LibNoise.Operator.Terrace::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrace_Clear_mCF7F40739EF800C4E998191354AA930FE136FE7A (Terrace_t441233268BCC329AC1DCD704A5891A0CD56EFB6B * __this, const RuntimeMethod* method);
// System.Void LibNoise.Operator.Terrace::Add(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrace_Add_m9837BB2EE40B152EFABC3FF0C44F4231D5006A93 (Terrace_t441233268BCC329AC1DCD704A5891A0CD56EFB6B * __this, double ___input0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Double>::get_Item(System.Int32)
inline double List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  double (*) (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *, int32_t, const RuntimeMethod*))List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_gshared_inline)(__this, ___index0, method);
}
// System.Void LibNoise.Operator.Translate::set_X(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Translate_set_X_mB7C01EFCB736591C5EC65169814825C8E5FF5570_inline (Translate_tCD3593A12B920217B0A4E4DEC37F8D994D09B8F9 * __this, double ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Operator.Translate::set_Y(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Translate_set_Y_mA21B95B32CD1F57EE3CB0FD2B798BDB9F256F6A0_inline (Translate_tCD3593A12B920217B0A4E4DEC37F8D994D09B8F9 * __this, double ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Operator.Translate::set_Z(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Translate_set_Z_mCAA830F8F3B42F11095F7EF77B9D553664E01C06_inline (Translate_tCD3593A12B920217B0A4E4DEC37F8D994D09B8F9 * __this, double ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Generator.Perlin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Perlin__ctor_mA8440D2FF16976DB7027C7A55AFF58DB7B01F1C4 (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, const RuntimeMethod* method);
// System.Void LibNoise.Operator.Turbulence::.ctor(LibNoise.Generator.Perlin,LibNoise.Generator.Perlin,LibNoise.Generator.Perlin,System.Double,LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Turbulence__ctor_m6AF751ED8A672855D28AA54EDD9F1DBB81B4E1B1 (Turbulence_tC8326B21F7FB734FFC340C3052A21F6205F898A1 * __this, Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * ___x0, Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * ___y1, Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * ___z2, double ___power3, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___input4, const RuntimeMethod* method);
// System.Void LibNoise.Operator.Turbulence::set_Power(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Turbulence_set_Power_m998FC81A9B3EA7561472824DF585A9B539FE9992_inline (Turbulence_tC8326B21F7FB734FFC340C3052A21F6205F898A1 * __this, double ___value0, const RuntimeMethod* method);
// System.Double LibNoise.Generator.Perlin::get_Frequency()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Perlin_get_Frequency_mEAE3E2E0985EDE739F576F750F3E4E1AAAEEE196_inline (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, const RuntimeMethod* method);
// System.Int32 LibNoise.Generator.Perlin::get_OctaveCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Perlin_get_OctaveCount_mC78AF4F84B21D3ECC0E6E0CB89C476D38B39B475_inline (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, const RuntimeMethod* method);
// System.Int32 LibNoise.Generator.Perlin::get_Seed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Perlin_get_Seed_m70376C13B6270AF177140300B0E85AEB2C7032B7_inline (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, const RuntimeMethod* method);
// System.Double LibNoise.Utils::MapQuinticSCurve(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Utils_MapQuinticSCurve_mA01F12403C6E078647FEE168C1EA0AAE471E6C40 (double ___value0, const RuntimeMethod* method);
// System.Double LibNoise.Utils::GradientNoise3D(System.Double,System.Double,System.Double,System.Int32,System.Int32,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Utils_GradientNoise3D_m2B24F2006EC3D79C07A45D5CDD9E8CE0842A3C20 (double ___fx0, double ___fy1, double ___fz2, int32_t ___ix3, int32_t ___iy4, int32_t ___iz5, int64_t ___seed6, const RuntimeMethod* method);
// System.Double System.Math::IEEERemainder(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_IEEERemainder_m2B06020D10636AC81B0DD05AE00C951A24C4186F (double ___x0, double ___y1, const RuntimeMethod* method);
// System.Int64 LibNoise.Utils::ValueNoise3DInt(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Utils_ValueNoise3DInt_mC58B69E9C5160A03AC407E379C38B6F06EF4B545 (int32_t ___x0, int32_t ___y1, int32_t ___z2, int32_t ___seed3, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void LibNoise.Generator.Voronoi::set_Frequency(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Voronoi_set_Frequency_m2FEBFFADE410B3490CECA78C0AE23C219963D38F_inline (Voronoi_t3E6BF1D9F2351DBE1E5CB1700CF85775880B690E * __this, double ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Generator.Voronoi::set_Displacement(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Voronoi_set_Displacement_m56D289F3379DCCF990FE5FF3DB9B57BC6AE51902_inline (Voronoi_t3E6BF1D9F2351DBE1E5CB1700CF85775880B690E * __this, double ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Generator.Voronoi::set_Seed(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Voronoi_set_Seed_m18DE7813CE5499931269EFD153683DF2C1FEEF2C_inline (Voronoi_t3E6BF1D9F2351DBE1E5CB1700CF85775880B690E * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Generator.Voronoi::set_UseDistance(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Voronoi_set_UseDistance_m5F34BA069B2CFE0A8249E1FD49251DB8F86230C0_inline (Voronoi_t3E6BF1D9F2351DBE1E5CB1700CF85775880B690E * __this, bool ___value0, const RuntimeMethod* method);
// System.Double LibNoise.Utils::ValueNoise3D(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Utils_ValueNoise3D_m407227E594A92D87DB7D7E726F848CB3927BBA65 (int32_t ___x0, int32_t ___y1, int32_t ___z2, int32_t ___seed3, const RuntimeMethod* method);
// System.Void LibNoise.Operator.Curve/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7EB18664A38109B007FC2E9D8769E54920818172 (U3CU3Ec_t8291FB9A9D7FC31DA0E9F94604011A923471642F * __this, const RuntimeMethod* method);
// System.Int32 System.Double::CompareTo(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Double_CompareTo_m93107F1616A67C9CDB540738E0115A5E668FBBBE (double* __this, double ___value0, const RuntimeMethod* method);
// System.Void LibNoise.Operator.Terrace/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF577D87AEF53E0B0267358CA80746C184678ACEE (U3CU3Ec_t1DF4E36F3C2F62F4817EF0F6147963476249A6C8 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Operator.Abs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Abs__ctor_m3733779DA116662E11B4E352AA43DF70E41BC742 (Abs_t3D4E90837CFF0F12E0ACF032EFA3BBC03F04A3CA * __this, const RuntimeMethod* method)
{
	{
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Abs::.ctor(LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Abs__ctor_m18F3898E8D8AB27948BCA0FCEBEAC5740A5EBBA0 (Abs_t3D4E90837CFF0F12E0ACF032EFA3BBC03F04A3CA * __this, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___input0, const RuntimeMethod* method)
{
	{
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// Modules[0] = input;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___input0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_1);
		// }
		return;
	}
}
// System.Double LibNoise.Operator.Abs::GetValue(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Abs_GetValue_m7B2558DDFCEEE99CC0DED148823F8B09119C22E1 (Abs_t3D4E90837CFF0F12E0ACF032EFA3BBC03F04A3CA * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Math.Abs(Modules[0].GetValue(x, y, z));
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		double L_3 = ___x0;
		double L_4 = ___y1;
		double L_5 = ___z2;
		NullCheck(L_2);
		double L_6;
		L_6 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_2, L_3, L_4, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_7;
		L_7 = fabs(L_6);
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Operator.Add::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Add__ctor_m5736DE0156D886C303375D0726A0C1B1ACDB28FA (Add_tAE4004967034EB58DF9A60FE766FF27516BE0C1E * __this, const RuntimeMethod* method)
{
	{
		// : base(2)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Add::.ctor(LibNoise.ModuleBase,LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Add__ctor_m4F710F868B5A42FBDCC0D444315CD8F3951A70BA (Add_tAE4004967034EB58DF9A60FE766FF27516BE0C1E * __this, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___lhs0, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___rhs1, const RuntimeMethod* method)
{
	{
		// : base(2)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 2, /*hidden argument*/NULL);
		// Modules[0] = lhs;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___lhs0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_1);
		// Modules[1] = rhs;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_2;
		L_2 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_3 = ___rhs1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_3);
		// }
		return;
	}
}
// System.Double LibNoise.Operator.Add::GetValue(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Add_GetValue_m7AD7E1C3F9D371DA2B617111005D3F6070CCA7FA (Add_tAE4004967034EB58DF9A60FE766FF27516BE0C1E * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	{
		// return Modules[0].GetValue(x, y, z) + Modules[1].GetValue(x, y, z);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		double L_3 = ___x0;
		double L_4 = ___y1;
		double L_5 = ___z2;
		NullCheck(L_2);
		double L_6;
		L_6 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_2, L_3, L_4, L_5);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_7;
		L_7 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = 1;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		double L_10 = ___x0;
		double L_11 = ___y1;
		double L_12 = ___z2;
		NullCheck(L_9);
		double L_13;
		L_13 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_9, L_10, L_11, L_12);
		return ((double)il2cpp_codegen_add((double)L_6, (double)L_13));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Generator.Billow::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Billow__ctor_mF5E186C43A571667629CA255ACF153DE54B95144 (Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924 * __this, const RuntimeMethod* method)
{
	{
		// private double _frequency = 1.0;
		__this->set__frequency_2((1.0));
		// private double _lacunarity = 2.0;
		__this->set__lacunarity_3((2.0));
		// private QualityMode _quality = QualityMode.Medium;
		__this->set__quality_4(1);
		// private int _octaveCount = 6;
		__this->set__octaveCount_5(6);
		// private double _persistence = 0.5;
		__this->set__persistence_6((0.5));
		// : base(0)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Generator.Billow::.ctor(System.Double,System.Double,System.Double,System.Int32,System.Int32,LibNoise.QualityMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Billow__ctor_mB3D2BA9BBB8DFE6C64DD7C72F5D58D69F24AF708 (Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924 * __this, double ___frequency0, double ___lacunarity1, double ___persistence2, int32_t ___octaves3, int32_t ___seed4, int32_t ___quality5, const RuntimeMethod* method)
{
	{
		// private double _frequency = 1.0;
		__this->set__frequency_2((1.0));
		// private double _lacunarity = 2.0;
		__this->set__lacunarity_3((2.0));
		// private QualityMode _quality = QualityMode.Medium;
		__this->set__quality_4(1);
		// private int _octaveCount = 6;
		__this->set__octaveCount_5(6);
		// private double _persistence = 0.5;
		__this->set__persistence_6((0.5));
		// : base(0)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 0, /*hidden argument*/NULL);
		// Frequency = frequency;
		double L_0 = ___frequency0;
		Billow_set_Frequency_m1F538C7CDFD6A2CEA561C143154F792F6C647754_inline(__this, L_0, /*hidden argument*/NULL);
		// Lacunarity = lacunarity;
		double L_1 = ___lacunarity1;
		Billow_set_Lacunarity_m709EB0AEF2C30BC9F31EB5BD34286DFA8BE79EF7_inline(__this, L_1, /*hidden argument*/NULL);
		// OctaveCount = octaves;
		int32_t L_2 = ___octaves3;
		Billow_set_OctaveCount_m99492C227D3B6D7C2A2C1AACC82FC5BBADA56727(__this, L_2, /*hidden argument*/NULL);
		// Persistence = persistence;
		double L_3 = ___persistence2;
		Billow_set_Persistence_m1507FB18AB6AD544CE2D79CFA9F306EEFEFF0B6E_inline(__this, L_3, /*hidden argument*/NULL);
		// Seed = seed;
		int32_t L_4 = ___seed4;
		Billow_set_Seed_mE5A61A0905687C7B2CB17B7372071761C406D296_inline(__this, L_4, /*hidden argument*/NULL);
		// Quality = quality;
		int32_t L_5 = ___quality5;
		Billow_set_Quality_mB20EEF88780AC3B1C2DE6F471CB453647EFD52EF_inline(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Double LibNoise.Generator.Billow::get_Frequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Billow_get_Frequency_m01B9D907E8E7BB92826840CE70FA822956F31CB1 (Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924 * __this, const RuntimeMethod* method)
{
	{
		// get { return _frequency; }
		double L_0 = __this->get__frequency_2();
		return L_0;
	}
}
// System.Void LibNoise.Generator.Billow::set_Frequency(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Billow_set_Frequency_m1F538C7CDFD6A2CEA561C143154F792F6C647754 (Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _frequency = value; }
		double L_0 = ___value0;
		__this->set__frequency_2(L_0);
		// set { _frequency = value; }
		return;
	}
}
// System.Double LibNoise.Generator.Billow::get_Lacunarity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Billow_get_Lacunarity_m4D71C1BE5B2A1B34798590A9E3D203142C77239A (Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924 * __this, const RuntimeMethod* method)
{
	{
		// get { return _lacunarity; }
		double L_0 = __this->get__lacunarity_3();
		return L_0;
	}
}
// System.Void LibNoise.Generator.Billow::set_Lacunarity(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Billow_set_Lacunarity_m709EB0AEF2C30BC9F31EB5BD34286DFA8BE79EF7 (Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _lacunarity = value; }
		double L_0 = ___value0;
		__this->set__lacunarity_3(L_0);
		// set { _lacunarity = value; }
		return;
	}
}
// LibNoise.QualityMode LibNoise.Generator.Billow::get_Quality()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Billow_get_Quality_mF08C2DE9F9C99FAD17D6B27BA5379FEED871E6CA (Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924 * __this, const RuntimeMethod* method)
{
	{
		// get { return _quality; }
		int32_t L_0 = __this->get__quality_4();
		return L_0;
	}
}
// System.Void LibNoise.Generator.Billow::set_Quality(LibNoise.QualityMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Billow_set_Quality_mB20EEF88780AC3B1C2DE6F471CB453647EFD52EF (Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { _quality = value; }
		int32_t L_0 = ___value0;
		__this->set__quality_4(L_0);
		// set { _quality = value; }
		return;
	}
}
// System.Int32 LibNoise.Generator.Billow::get_OctaveCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Billow_get_OctaveCount_mD3EFC25E0012B5BCC580749272920C668073937C (Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924 * __this, const RuntimeMethod* method)
{
	{
		// get { return _octaveCount; }
		int32_t L_0 = __this->get__octaveCount_5();
		return L_0;
	}
}
// System.Void LibNoise.Generator.Billow::set_OctaveCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Billow_set_OctaveCount_m99492C227D3B6D7C2A2C1AACC82FC5BBADA56727 (Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { _octaveCount = Mathf.Clamp(value, 1, Utils.OctavesMaximum); }
		int32_t L_0 = ___value0;
		int32_t L_1;
		L_1 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_0, 1, ((int32_t)30), /*hidden argument*/NULL);
		__this->set__octaveCount_5(L_1);
		// set { _octaveCount = Mathf.Clamp(value, 1, Utils.OctavesMaximum); }
		return;
	}
}
// System.Double LibNoise.Generator.Billow::get_Persistence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Billow_get_Persistence_m219907C9B446FFD9F21F1ADB6CE53AB950A68FF9 (Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924 * __this, const RuntimeMethod* method)
{
	{
		// get { return _persistence; }
		double L_0 = __this->get__persistence_6();
		return L_0;
	}
}
// System.Void LibNoise.Generator.Billow::set_Persistence(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Billow_set_Persistence_m1507FB18AB6AD544CE2D79CFA9F306EEFEFF0B6E (Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _persistence = value; }
		double L_0 = ___value0;
		__this->set__persistence_6(L_0);
		// set { _persistence = value; }
		return;
	}
}
// System.Int32 LibNoise.Generator.Billow::get_Seed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Billow_get_Seed_m4A6A668533B8B4BCAF923B94177C3BC20BF786D5 (Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924 * __this, const RuntimeMethod* method)
{
	{
		// get { return _seed; }
		int32_t L_0 = __this->get__seed_7();
		return L_0;
	}
}
// System.Void LibNoise.Generator.Billow::set_Seed(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Billow_set_Seed_mE5A61A0905687C7B2CB17B7372071761C406D296 (Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { _seed = value; }
		int32_t L_0 = ___value0;
		__this->set__seed_7(L_0);
		// set { _seed = value; }
		return;
	}
}
// System.Double LibNoise.Generator.Billow::GetValue(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Billow_GetValue_m80CD4A3D84D910C74469C62920C1062BB3231076 (Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924 * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	int64_t V_5 = 0;
	double V_6 = 0.0;
	{
		// var value       = 0.0;
		V_0 = (0.0);
		// var amplitude   = 1.0;
		V_1 = (1.0);
		// x *= _frequency;
		double L_0 = ___x0;
		double L_1 = __this->get__frequency_2();
		___x0 = ((double)il2cpp_codegen_multiply((double)L_0, (double)L_1));
		// y *= _frequency;
		double L_2 = ___y1;
		double L_3 = __this->get__frequency_2();
		___y1 = ((double)il2cpp_codegen_multiply((double)L_2, (double)L_3));
		// z *= _frequency;
		double L_4 = ___z2;
		double L_5 = __this->get__frequency_2();
		___z2 = ((double)il2cpp_codegen_multiply((double)L_4, (double)L_5));
		// for (var i = 0; i < _octaveCount; i++)
		V_2 = 0;
		goto IL_00bd;
	}

IL_0039:
	{
		// var nx = Utils.MakeInt32Range(x);
		double L_6 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		double L_7;
		L_7 = Utils_MakeInt32Range_m38E96B1EC6FD2C8CC3E6350486B2DA4523DEA945(L_6, /*hidden argument*/NULL);
		// var ny = Utils.MakeInt32Range(y);
		double L_8 = ___y1;
		double L_9;
		L_9 = Utils_MakeInt32Range_m38E96B1EC6FD2C8CC3E6350486B2DA4523DEA945(L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		// var nz = Utils.MakeInt32Range(z);
		double L_10 = ___z2;
		double L_11;
		L_11 = Utils_MakeInt32Range_m38E96B1EC6FD2C8CC3E6350486B2DA4523DEA945(L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		// var seed = (_seed + i) & 0xffffffff;
		int32_t L_12 = __this->get__seed_7();
		int32_t L_13 = V_2;
		V_5 = ((int64_t)((int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13))))&(int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)(-1)))))));
		// var signal = Utils.GradientCoherentNoise3D(nx, ny, nz, seed, _quality);
		double L_14 = V_3;
		double L_15 = V_4;
		int64_t L_16 = V_5;
		int32_t L_17 = __this->get__quality_4();
		double L_18;
		L_18 = Utils_GradientCoherentNoise3D_m14EC2F50807ACC5ACFDF3037ED5145768F1F6222(L_7, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		V_6 = L_18;
		// signal = 2.0 * Math.Abs(signal) - 1.0;
		double L_19 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_20;
		L_20 = fabs(L_19);
		V_6 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)(2.0), (double)L_20)), (double)(1.0)));
		// value += signal * amplitude;
		double L_21 = V_0;
		double L_22 = V_6;
		double L_23 = V_1;
		V_0 = ((double)il2cpp_codegen_add((double)L_21, (double)((double)il2cpp_codegen_multiply((double)L_22, (double)L_23))));
		// x *= _lacunarity;
		double L_24 = ___x0;
		double L_25 = __this->get__lacunarity_3();
		___x0 = ((double)il2cpp_codegen_multiply((double)L_24, (double)L_25));
		// y *= _lacunarity;
		double L_26 = ___y1;
		double L_27 = __this->get__lacunarity_3();
		___y1 = ((double)il2cpp_codegen_multiply((double)L_26, (double)L_27));
		// z *= _lacunarity;
		double L_28 = ___z2;
		double L_29 = __this->get__lacunarity_3();
		___z2 = ((double)il2cpp_codegen_multiply((double)L_28, (double)L_29));
		// amplitude *= _persistence;
		double L_30 = V_1;
		double L_31 = __this->get__persistence_6();
		V_1 = ((double)il2cpp_codegen_multiply((double)L_30, (double)L_31));
		// for (var i = 0; i < _octaveCount; i++)
		int32_t L_32 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00bd:
	{
		// for (var i = 0; i < _octaveCount; i++)
		int32_t L_33 = V_2;
		int32_t L_34 = __this->get__octaveCount_5();
		if ((((int32_t)L_33) < ((int32_t)L_34)))
		{
			goto IL_0039;
		}
	}
	{
		// return value + 0.5;
		double L_35 = V_0;
		return ((double)il2cpp_codegen_add((double)L_35, (double)(0.5)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Operator.Blend::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blend__ctor_m513D2E300A9FE2A8B2167663ABBCCB4652009977 (Blend_tA2EFFFE0486BDC378489884EC6D1A4F1A94D7745 * __this, const RuntimeMethod* method)
{
	{
		// : base(3)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Blend::.ctor(LibNoise.ModuleBase,LibNoise.ModuleBase,LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blend__ctor_m804C748CD02E31D1131D69B6FFA4BD1D09DB61A6 (Blend_tA2EFFFE0486BDC378489884EC6D1A4F1A94D7745 * __this, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___lhs0, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___rhs1, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___controller2, const RuntimeMethod* method)
{
	{
		// : base(3)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 3, /*hidden argument*/NULL);
		// Modules[0] = lhs;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___lhs0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_1);
		// Modules[1] = rhs;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_2;
		L_2 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_3 = ___rhs1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_3);
		// Modules[2] = controller;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_4;
		L_4 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_5 = ___controller2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_5);
		// }
		return;
	}
}
// LibNoise.ModuleBase LibNoise.Operator.Blend::get_Controller()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * Blend_get_Controller_m6317B543D8B46514783B6F8D376D638CA5FC35E5 (Blend_tA2EFFFE0486BDC378489884EC6D1A4F1A94D7745 * __this, const RuntimeMethod* method)
{
	{
		// get { return Modules[2]; }
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 2;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return L_2;
	}
}
// System.Void LibNoise.Operator.Blend::set_Controller(LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Blend_set_Controller_mA54AE9DCC459CFFB33C0168824F2D120129DFE4B (Blend_tA2EFFFE0486BDC378489884EC6D1A4F1A94D7745 * __this, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___value0, const RuntimeMethod* method)
{
	{
		// Modules[2] = value;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___value0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(2), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_1);
		// }
		return;
	}
}
// System.Double LibNoise.Operator.Blend::GetValue(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Blend_GetValue_m412EF321925E09AC9E95AFDA1D948AF778220EFD (Blend_tA2EFFFE0486BDC378489884EC6D1A4F1A94D7745 * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		// var a = Modules[0].GetValue(x, y, z);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		double L_3 = ___x0;
		double L_4 = ___y1;
		double L_5 = ___z2;
		NullCheck(L_2);
		double L_6;
		L_6 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_2, L_3, L_4, L_5);
		// var b = Modules[1].GetValue(x, y, z);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_7;
		L_7 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = 1;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		double L_10 = ___x0;
		double L_11 = ___y1;
		double L_12 = ___z2;
		NullCheck(L_9);
		double L_13;
		L_13 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_9, L_10, L_11, L_12);
		V_0 = L_13;
		// var c = (Modules[2].GetValue(x, y, z) + 1.0) / 2.0;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_14;
		L_14 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		int32_t L_15 = 2;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		double L_17 = ___x0;
		double L_18 = ___y1;
		double L_19 = ___z2;
		NullCheck(L_16);
		double L_20;
		L_20 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_16, L_17, L_18, L_19);
		V_1 = ((double)((double)((double)il2cpp_codegen_add((double)L_20, (double)(1.0)))/(double)(2.0)));
		// return Utils.InterpolateLinear(a, b, c);
		double L_21 = V_0;
		double L_22 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		double L_23;
		L_23 = Utils_InterpolateLinear_m67C385B25C06BA3BC751E5A962CCBCAE3C2A07AF(L_6, L_21, L_22, /*hidden argument*/NULL);
		return L_23;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Operator.Cache::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cache__ctor_mCECD5D921D83B6FF091D2C20619658D9008AC036 (Cache_tFA91265F5B3C95FE03C358711628C82BF208AEE2 * __this, const RuntimeMethod* method)
{
	{
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Cache::.ctor(LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cache__ctor_m40C66616CDDF39C93CE9DBA2D67DCC78E3E1DF3C (Cache_tFA91265F5B3C95FE03C358711628C82BF208AEE2 * __this, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___input0, const RuntimeMethod* method)
{
	{
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// Modules[0] = input;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___input0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_1);
		// }
		return;
	}
}
// LibNoise.ModuleBase LibNoise.Operator.Cache::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * Cache_get_Item_mABE8AB611C5CEEB34C82CF42778C2894EBC17048 (Cache_tFA91265F5B3C95FE03C358711628C82BF208AEE2 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// get { return base[index]; }
		int32_t L_0 = ___index0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1;
		L_1 = ModuleBase_get_Item_m44C31BA122658F8214A34CAE639CC7FD6AAFB2CF(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void LibNoise.Operator.Cache::set_Item(System.Int32,LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cache_set_Item_m8D81AE9DF4C5EE09753210A9255CD20B788048B4 (Cache_tFA91265F5B3C95FE03C358711628C82BF208AEE2 * __this, int32_t ___index0, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___value1, const RuntimeMethod* method)
{
	{
		// base[index] = value;
		int32_t L_0 = ___index0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___value1;
		ModuleBase_set_Item_m2F9A0F870E3BD30FFC971D93524FC5B2A30D3821(__this, L_0, L_1, /*hidden argument*/NULL);
		// _cached = false;
		__this->set__cached_3((bool)0);
		// }
		return;
	}
}
// System.Double LibNoise.Operator.Cache::GetValue(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Cache_GetValue_m8C42BACFB659A0104D6947F1B6F2922BC1E6C477 (Cache_tFA91265F5B3C95FE03C358711628C82BF208AEE2 * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	{
		// if (!(_cached && _x == x && _y == y && _z == z))
		bool L_0 = __this->get__cached_3();
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		double L_1 = __this->get__x_4();
		double L_2 = ___x0;
		if ((!(((double)L_1) == ((double)L_2))))
		{
			goto IL_0023;
		}
	}
	{
		double L_3 = __this->get__y_5();
		double L_4 = ___y1;
		if ((!(((double)L_3) == ((double)L_4))))
		{
			goto IL_0023;
		}
	}
	{
		double L_5 = __this->get__z_6();
		double L_6 = ___z2;
		if ((((double)L_5) == ((double)L_6)))
		{
			goto IL_004e;
		}
	}

IL_0023:
	{
		// _value = Modules[0].GetValue(x, y, z);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_7;
		L_7 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = 0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		double L_10 = ___x0;
		double L_11 = ___y1;
		double L_12 = ___z2;
		NullCheck(L_9);
		double L_13;
		L_13 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_9, L_10, L_11, L_12);
		__this->set__value_2(L_13);
		// _x = x;
		double L_14 = ___x0;
		__this->set__x_4(L_14);
		// _y = y;
		double L_15 = ___y1;
		__this->set__y_5(L_15);
		// _z = z;
		double L_16 = ___z2;
		__this->set__z_6(L_16);
	}

IL_004e:
	{
		// _cached = true;
		__this->set__cached_3((bool)1);
		// return _value;
		double L_17 = __this->get__value_2();
		return L_17;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Generator.Checker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Checker__ctor_m06E617727372445900C44442FDBA544330CF4646 (Checker_t510AA9444F294B7689FC6F04D6FEE18CA8F66E13 * __this, const RuntimeMethod* method)
{
	{
		// : base(0)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Double LibNoise.Generator.Checker::GetValue(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Checker_GetValue_mE4EFB6D9B9469BD07F97E336A9A55A0E458399D9 (Checker_t510AA9444F294B7689FC6F04D6FEE18CA8F66E13 * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// var ix = (int) (Math.Floor(Utils.MakeInt32Range(x)));
		double L_0 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = Utils_MakeInt32Range_m38E96B1EC6FD2C8CC3E6350486B2DA4523DEA945(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = floor(L_1);
		// var iy = (int) (Math.Floor(Utils.MakeInt32Range(y)));
		double L_3 = ___y1;
		double L_4;
		L_4 = Utils_MakeInt32Range_m38E96B1EC6FD2C8CC3E6350486B2DA4523DEA945(L_3, /*hidden argument*/NULL);
		double L_5;
		L_5 = floor(L_4);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_5);
		// var iz = (int) (Math.Floor(Utils.MakeInt32Range(z)));
		double L_6 = ___z2;
		double L_7;
		L_7 = Utils_MakeInt32Range_m38E96B1EC6FD2C8CC3E6350486B2DA4523DEA945(L_6, /*hidden argument*/NULL);
		double L_8;
		L_8 = floor(L_7);
		V_1 = il2cpp_codegen_cast_double_to_int<int32_t>(L_8);
		// return (ix & 1 ^ iy & 1 ^ iz & 1) != 0 ? -1.0 : 1.0;
		int32_t L_9 = V_0;
		int32_t L_10 = V_1;
		if (((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_2)&(int32_t)1))^(int32_t)((int32_t)((int32_t)L_9&(int32_t)1))))^(int32_t)((int32_t)((int32_t)L_10&(int32_t)1)))))
		{
			goto IL_003c;
		}
	}
	{
		return (1.0);
	}

IL_003c:
	{
		return (-1.0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Operator.Clamp::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clamp__ctor_m06025CBEBD4E067A431C4489056E76E70EF93451 (Clamp_tB7BB016243BB155599C7E5F651AA8A9A420F0AEB * __this, const RuntimeMethod* method)
{
	{
		// private double _min = -1.0;
		__this->set__min_2((-1.0));
		// private double _max = 1.0;
		__this->set__max_3((1.0));
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Clamp::.ctor(LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clamp__ctor_m15ACD426D6A58B812F3DF47FA5B6ED88F768836C (Clamp_tB7BB016243BB155599C7E5F651AA8A9A420F0AEB * __this, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___input0, const RuntimeMethod* method)
{
	{
		// private double _min = -1.0;
		__this->set__min_2((-1.0));
		// private double _max = 1.0;
		__this->set__max_3((1.0));
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// Modules[0] = input;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___input0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_1);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Clamp::.ctor(System.Double,System.Double,LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clamp__ctor_mEEB3E80E7C75BA243AC094D89E71172638AAD0FA (Clamp_tB7BB016243BB155599C7E5F651AA8A9A420F0AEB * __this, double ___min0, double ___max1, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___input2, const RuntimeMethod* method)
{
	{
		// private double _min = -1.0;
		__this->set__min_2((-1.0));
		// private double _max = 1.0;
		__this->set__max_3((1.0));
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// Minimum = min;
		double L_0 = ___min0;
		Clamp_set_Minimum_m62977D78ACB99137F066700ADB953ECFB17765A0_inline(__this, L_0, /*hidden argument*/NULL);
		// Maximum = max;
		double L_1 = ___max1;
		Clamp_set_Maximum_m31D04595754BC2AB91A1FA4FC1A74A13C8917D77_inline(__this, L_1, /*hidden argument*/NULL);
		// Modules[0] = input;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_2;
		L_2 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_3 = ___input2;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_3);
		// }
		return;
	}
}
// System.Double LibNoise.Operator.Clamp::get_Maximum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Clamp_get_Maximum_m253EF5A81D06E4ACFAAF3EDDD08DA61DBB97FAC4 (Clamp_tB7BB016243BB155599C7E5F651AA8A9A420F0AEB * __this, const RuntimeMethod* method)
{
	{
		// get { return _max; }
		double L_0 = __this->get__max_3();
		return L_0;
	}
}
// System.Void LibNoise.Operator.Clamp::set_Maximum(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clamp_set_Maximum_m31D04595754BC2AB91A1FA4FC1A74A13C8917D77 (Clamp_tB7BB016243BB155599C7E5F651AA8A9A420F0AEB * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _max = value; }
		double L_0 = ___value0;
		__this->set__max_3(L_0);
		// set { _max = value; }
		return;
	}
}
// System.Double LibNoise.Operator.Clamp::get_Minimum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Clamp_get_Minimum_m0DF84C80188BDA8593BE57B41E87F3AEE64457DB (Clamp_tB7BB016243BB155599C7E5F651AA8A9A420F0AEB * __this, const RuntimeMethod* method)
{
	{
		// get { return _min; }
		double L_0 = __this->get__min_2();
		return L_0;
	}
}
// System.Void LibNoise.Operator.Clamp::set_Minimum(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clamp_set_Minimum_m62977D78ACB99137F066700ADB953ECFB17765A0 (Clamp_tB7BB016243BB155599C7E5F651AA8A9A420F0AEB * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _min = value; }
		double L_0 = ___value0;
		__this->set__min_2(L_0);
		// set { _min = value; }
		return;
	}
}
// System.Void LibNoise.Operator.Clamp::SetBounds(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Clamp_SetBounds_m69A1E6C81E6CC485FD6595FE2D41F8E8992DE2F0 (Clamp_tB7BB016243BB155599C7E5F651AA8A9A420F0AEB * __this, double ___min0, double ___max1, const RuntimeMethod* method)
{
	{
		// _min = min;
		double L_0 = ___min0;
		__this->set__min_2(L_0);
		// _max = max;
		double L_1 = ___max1;
		__this->set__max_3(L_1);
		// }
		return;
	}
}
// System.Double LibNoise.Operator.Clamp::GetValue(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Clamp_GetValue_m735DAD2A8619700D945DCE8334960D37850BEA9B (Clamp_tB7BB016243BB155599C7E5F651AA8A9A420F0AEB * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	{
		// if (_min > _max)
		double L_0 = __this->get__min_2();
		double L_1 = __this->get__max_3();
		if ((!(((double)L_0) > ((double)L_1))))
		{
			goto IL_0028;
		}
	}
	{
		// var t = _min;
		double L_2 = __this->get__min_2();
		V_1 = L_2;
		// _min = _max;
		double L_3 = __this->get__max_3();
		__this->set__min_2(L_3);
		// _max = t;
		double L_4 = V_1;
		__this->set__max_3(L_4);
	}

IL_0028:
	{
		// var v = Modules[0].GetValue(x, y, z);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_5;
		L_5 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = 0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		double L_8 = ___x0;
		double L_9 = ___y1;
		double L_10 = ___z2;
		NullCheck(L_7);
		double L_11;
		L_11 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_7, L_8, L_9, L_10);
		V_0 = L_11;
		// if (v < _min)
		double L_12 = V_0;
		double L_13 = __this->get__min_2();
		if ((!(((double)L_12) < ((double)L_13))))
		{
			goto IL_0049;
		}
	}
	{
		// return _min;
		double L_14 = __this->get__min_2();
		return L_14;
	}

IL_0049:
	{
		// if (v > _max)
		double L_15 = V_0;
		double L_16 = __this->get__max_3();
		if ((!(((double)L_15) > ((double)L_16))))
		{
			goto IL_0059;
		}
	}
	{
		// return _max;
		double L_17 = __this->get__max_3();
		return L_17;
	}

IL_0059:
	{
		// return v;
		double L_18 = V_0;
		return L_18;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Generator.Const::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Const__ctor_m8B075830220444097C1688F834063F9877E86F48 (Const_tD83951719E3D1DF8F6238E59194E34DB93E331A5 * __this, const RuntimeMethod* method)
{
	{
		// : base(0)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Generator.Const::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Const__ctor_mA9E6104DEB4F06C06DEC0D024C005849CC220BE5 (Const_tD83951719E3D1DF8F6238E59194E34DB93E331A5 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// : base(0)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 0, /*hidden argument*/NULL);
		// Value = value;
		double L_0 = ___value0;
		Const_set_Value_mBA35098D085B22743D036006F7483683BF8F4E7D_inline(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Double LibNoise.Generator.Const::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Const_get_Value_m0CA8A88B4A4E180290BC8DEA103BEEA2ADDAC859 (Const_tD83951719E3D1DF8F6238E59194E34DB93E331A5 * __this, const RuntimeMethod* method)
{
	{
		// get { return _value; }
		double L_0 = __this->get__value_2();
		return L_0;
	}
}
// System.Void LibNoise.Generator.Const::set_Value(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Const_set_Value_mBA35098D085B22743D036006F7483683BF8F4E7D (Const_tD83951719E3D1DF8F6238E59194E34DB93E331A5 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _value = value; }
		double L_0 = ___value0;
		__this->set__value_2(L_0);
		// set { _value = value; }
		return;
	}
}
// System.Double LibNoise.Generator.Const::GetValue(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Const_GetValue_m5AD487628A7DA7A17EDBA9AEB1F63541526D9921 (Const_tD83951719E3D1DF8F6238E59194E34DB93E331A5 * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	{
		// return _value;
		double L_0 = __this->get__value_2();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Operator.Curve::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Curve__ctor_m0BF6F9028BC1AB4AC4355356BA83CD7E8B92037F (Curve_tE1D649966CB928283357828809B3E017198D4231 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEA809B63B96832E1ED95FFF86A400781EB3DE5E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<KeyValuePair<double, double>> _data = new List<KeyValuePair<double, double>>();
		List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * L_0 = (List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 *)il2cpp_codegen_object_new(List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003_il2cpp_TypeInfo_var);
		List_1__ctor_mEA809B63B96832E1ED95FFF86A400781EB3DE5E0(L_0, /*hidden argument*/List_1__ctor_mEA809B63B96832E1ED95FFF86A400781EB3DE5E0_RuntimeMethod_var);
		__this->set__data_2(L_0);
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Curve::.ctor(LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Curve__ctor_m746AB93F669CF6405F50297545AB3946C058F218 (Curve_tE1D649966CB928283357828809B3E017198D4231 * __this, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mEA809B63B96832E1ED95FFF86A400781EB3DE5E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<KeyValuePair<double, double>> _data = new List<KeyValuePair<double, double>>();
		List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * L_0 = (List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 *)il2cpp_codegen_object_new(List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003_il2cpp_TypeInfo_var);
		List_1__ctor_mEA809B63B96832E1ED95FFF86A400781EB3DE5E0(L_0, /*hidden argument*/List_1__ctor_mEA809B63B96832E1ED95FFF86A400781EB3DE5E0_RuntimeMethod_var);
		__this->set__data_2(L_0);
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// Modules[0] = input;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_1;
		L_1 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_2 = ___input0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_2);
		// }
		return;
	}
}
// System.Int32 LibNoise.Operator.Curve::get_ControlPointCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Curve_get_ControlPointCount_m036B2E80FA01CF1C2C04BAB193873D899A9EB1B8 (Curve_tE1D649966CB928283357828809B3E017198D4231 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m32DCE2DAC380E7E81E35C6D1459FC1B664C98D07_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _data.Count; }
		List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * L_0 = __this->get__data_2();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m32DCE2DAC380E7E81E35C6D1459FC1B664C98D07_inline(L_0, /*hidden argument*/List_1_get_Count_m32DCE2DAC380E7E81E35C6D1459FC1B664C98D07_RuntimeMethod_var);
		return L_1;
	}
}
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>> LibNoise.Operator.Curve::get_ControlPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * Curve_get_ControlPoints_mE896A874E1FAB47E6BACF2726914769F82591257 (Curve_tE1D649966CB928283357828809B3E017198D4231 * __this, const RuntimeMethod* method)
{
	{
		// get { return _data; }
		List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * L_0 = __this->get__data_2();
		return L_0;
	}
}
// System.Void LibNoise.Operator.Curve::Add(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Curve_Add_m3BBB148D4B30618DA7B35A4D6FF803528A0A90E2 (Curve_tE1D649966CB928283357828809B3E017198D4231 * __this, double ___input0, double ___output1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1__ctor_m9006EAFA7D78F849994ABB321E930BC6238C116A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t25298E45AA65D77FB819F36226B05B6DD20979C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_m4AA4554410DD3E100FFFC9EC2192ECD14E76CC9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8A25B1DF10203D9BEF53E31728C88B8E8A1E5802_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mC006E18FFE41F1D091B4CAE8BA2A6C0FAC5439A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_mFB2E395737E966A01268C06C2CFE4A8EA5DD6CD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAddU3Eb__7_0_m94C041EC95A68E835DB83FCBD8D2DCA389CC30E6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8291FB9A9D7FC31DA0E9F94604011A923471642F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Comparison_1_t25298E45AA65D77FB819F36226B05B6DD20979C6 * G_B4_0 = NULL;
	List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * G_B4_1 = NULL;
	Comparison_1_t25298E45AA65D77FB819F36226B05B6DD20979C6 * G_B3_0 = NULL;
	List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * G_B3_1 = NULL;
	{
		// var kvp = new KeyValuePair<double, double>(input, output);
		double L_0 = ___input0;
		double L_1 = ___output1;
		KeyValuePair_2__ctor_m4AA4554410DD3E100FFFC9EC2192ECD14E76CC9F((KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10 *)(&V_0), L_0, L_1, /*hidden argument*/KeyValuePair_2__ctor_m4AA4554410DD3E100FFFC9EC2192ECD14E76CC9F_RuntimeMethod_var);
		// if (!_data.Contains(kvp))
		List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * L_2 = __this->get__data_2();
		KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10  L_3 = V_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = List_1_Contains_mC006E18FFE41F1D091B4CAE8BA2A6C0FAC5439A4(L_2, L_3, /*hidden argument*/List_1_Contains_mC006E18FFE41F1D091B4CAE8BA2A6C0FAC5439A4_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0023;
		}
	}
	{
		// _data.Add(kvp);
		List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * L_5 = __this->get__data_2();
		KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10  L_6 = V_0;
		NullCheck(L_5);
		List_1_Add_m8A25B1DF10203D9BEF53E31728C88B8E8A1E5802(L_5, L_6, /*hidden argument*/List_1_Add_m8A25B1DF10203D9BEF53E31728C88B8E8A1E5802_RuntimeMethod_var);
	}

IL_0023:
	{
		// _data.Sort(
		//     delegate(KeyValuePair<double, double> lhs, KeyValuePair<double, double> rhs)
		//     {
		//         return lhs.Key.CompareTo(rhs.Key);
		//     });
		List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * L_7 = __this->get__data_2();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t8291FB9A9D7FC31DA0E9F94604011A923471642F_il2cpp_TypeInfo_var);
		Comparison_1_t25298E45AA65D77FB819F36226B05B6DD20979C6 * L_8 = ((U3CU3Ec_t8291FB9A9D7FC31DA0E9F94604011A923471642F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8291FB9A9D7FC31DA0E9F94604011A923471642F_il2cpp_TypeInfo_var))->get_U3CU3E9__7_0_1();
		Comparison_1_t25298E45AA65D77FB819F36226B05B6DD20979C6 * L_9 = L_8;
		G_B3_0 = L_9;
		G_B3_1 = L_7;
		if (L_9)
		{
			G_B4_0 = L_9;
			G_B4_1 = L_7;
			goto IL_0048;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t8291FB9A9D7FC31DA0E9F94604011A923471642F_il2cpp_TypeInfo_var);
		U3CU3Ec_t8291FB9A9D7FC31DA0E9F94604011A923471642F * L_10 = ((U3CU3Ec_t8291FB9A9D7FC31DA0E9F94604011A923471642F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8291FB9A9D7FC31DA0E9F94604011A923471642F_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Comparison_1_t25298E45AA65D77FB819F36226B05B6DD20979C6 * L_11 = (Comparison_1_t25298E45AA65D77FB819F36226B05B6DD20979C6 *)il2cpp_codegen_object_new(Comparison_1_t25298E45AA65D77FB819F36226B05B6DD20979C6_il2cpp_TypeInfo_var);
		Comparison_1__ctor_m9006EAFA7D78F849994ABB321E930BC6238C116A(L_11, L_10, (intptr_t)((intptr_t)U3CU3Ec_U3CAddU3Eb__7_0_m94C041EC95A68E835DB83FCBD8D2DCA389CC30E6_RuntimeMethod_var), /*hidden argument*/Comparison_1__ctor_m9006EAFA7D78F849994ABB321E930BC6238C116A_RuntimeMethod_var);
		Comparison_1_t25298E45AA65D77FB819F36226B05B6DD20979C6 * L_12 = L_11;
		((U3CU3Ec_t8291FB9A9D7FC31DA0E9F94604011A923471642F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8291FB9A9D7FC31DA0E9F94604011A923471642F_il2cpp_TypeInfo_var))->set_U3CU3E9__7_0_1(L_12);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_1;
	}

IL_0048:
	{
		NullCheck(G_B4_1);
		List_1_Sort_mFB2E395737E966A01268C06C2CFE4A8EA5DD6CD4(G_B4_1, G_B4_0, /*hidden argument*/List_1_Sort_mFB2E395737E966A01268C06C2CFE4A8EA5DD6CD4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Curve::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Curve_Clear_mF9135984A892D2A64CD8E355227B31930761F4FE (Curve_tE1D649966CB928283357828809B3E017198D4231 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m1398156EBC9D85513848E4D85288469D5A50B0A8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _data.Clear();
		List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * L_0 = __this->get__data_2();
		NullCheck(L_0);
		List_1_Clear_m1398156EBC9D85513848E4D85288469D5A50B0A8(L_0, /*hidden argument*/List_1_Clear_m1398156EBC9D85513848E4D85288469D5A50B0A8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Double LibNoise.Operator.Curve::GetValue(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Curve_GetValue_m4D1B95A01F2A1B45EAB361674CF8E2A4A3BCFA2C (Curve_tE1D649966CB928283357828809B3E017198D4231 * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m538BD134D8B991D52E98EDB7473C8FE1BF5FB001_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mCF6D46FD8287F430682B061EA3FA2CD6FE8CC827_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m32DCE2DAC380E7E81E35C6D1459FC1B664C98D07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m7DE788F9B3E4AB58167158D3EC8678D102CBA4C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10  V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		// var smv = Modules[0].GetValue(x, y, z);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		double L_3 = ___x0;
		double L_4 = ___y1;
		double L_5 = ___z2;
		NullCheck(L_2);
		double L_6;
		L_6 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_2, L_3, L_4, L_5);
		V_0 = L_6;
		// for (ip = 0; ip < _data.Count; ip++)
		V_1 = 0;
		goto IL_0031;
	}

IL_0015:
	{
		// if (smv < _data[ip].Key)
		double L_7 = V_0;
		List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * L_8 = __this->get__data_2();
		int32_t L_9 = V_1;
		NullCheck(L_8);
		KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10  L_10;
		L_10 = List_1_get_Item_m7DE788F9B3E4AB58167158D3EC8678D102CBA4C5_inline(L_8, L_9, /*hidden argument*/List_1_get_Item_m7DE788F9B3E4AB58167158D3EC8678D102CBA4C5_RuntimeMethod_var);
		V_9 = L_10;
		double L_11;
		L_11 = KeyValuePair_2_get_Key_m538BD134D8B991D52E98EDB7473C8FE1BF5FB001_inline((KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10 *)(&V_9), /*hidden argument*/KeyValuePair_2_get_Key_m538BD134D8B991D52E98EDB7473C8FE1BF5FB001_RuntimeMethod_var);
		if ((((double)L_7) < ((double)L_11)))
		{
			goto IL_003f;
		}
	}
	{
		// for (ip = 0; ip < _data.Count; ip++)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0031:
	{
		// for (ip = 0; ip < _data.Count; ip++)
		int32_t L_13 = V_1;
		List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * L_14 = __this->get__data_2();
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m32DCE2DAC380E7E81E35C6D1459FC1B664C98D07_inline(L_14, /*hidden argument*/List_1_get_Count_m32DCE2DAC380E7E81E35C6D1459FC1B664C98D07_RuntimeMethod_var);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0015;
		}
	}

IL_003f:
	{
		// var i0 = Mathf.Clamp(ip - 2, 0, _data.Count - 1);
		int32_t L_16 = V_1;
		List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * L_17 = __this->get__data_2();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m32DCE2DAC380E7E81E35C6D1459FC1B664C98D07_inline(L_17, /*hidden argument*/List_1_get_Count_m32DCE2DAC380E7E81E35C6D1459FC1B664C98D07_RuntimeMethod_var);
		int32_t L_19;
		L_19 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)2)), 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_19;
		// var i1 = Mathf.Clamp(ip - 1, 0, _data.Count - 1);
		int32_t L_20 = V_1;
		List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * L_21 = __this->get__data_2();
		NullCheck(L_21);
		int32_t L_22;
		L_22 = List_1_get_Count_m32DCE2DAC380E7E81E35C6D1459FC1B664C98D07_inline(L_21, /*hidden argument*/List_1_get_Count_m32DCE2DAC380E7E81E35C6D1459FC1B664C98D07_RuntimeMethod_var);
		int32_t L_23;
		L_23 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(((int32_t)il2cpp_codegen_subtract((int32_t)L_20, (int32_t)1)), 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_23;
		// var i2 = Mathf.Clamp(ip, 0, _data.Count - 1);
		int32_t L_24 = V_1;
		List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * L_25 = __this->get__data_2();
		NullCheck(L_25);
		int32_t L_26;
		L_26 = List_1_get_Count_m32DCE2DAC380E7E81E35C6D1459FC1B664C98D07_inline(L_25, /*hidden argument*/List_1_get_Count_m32DCE2DAC380E7E81E35C6D1459FC1B664C98D07_RuntimeMethod_var);
		int32_t L_27;
		L_27 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_24, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_26, (int32_t)1)), /*hidden argument*/NULL);
		V_4 = L_27;
		// var i3 = Mathf.Clamp(ip + 1, 0, _data.Count - 1);
		int32_t L_28 = V_1;
		List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * L_29 = __this->get__data_2();
		NullCheck(L_29);
		int32_t L_30;
		L_30 = List_1_get_Count_m32DCE2DAC380E7E81E35C6D1459FC1B664C98D07_inline(L_29, /*hidden argument*/List_1_get_Count_m32DCE2DAC380E7E81E35C6D1459FC1B664C98D07_RuntimeMethod_var);
		int32_t L_31;
		L_31 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)), 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)1)), /*hidden argument*/NULL);
		V_5 = L_31;
		// if (i1 == i2)
		int32_t L_32 = V_3;
		int32_t L_33 = V_4;
		if ((!(((uint32_t)L_32) == ((uint32_t)L_33))))
		{
			goto IL_00b6;
		}
	}
	{
		// return _data[i1].Value;
		List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * L_34 = __this->get__data_2();
		int32_t L_35 = V_3;
		NullCheck(L_34);
		KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10  L_36;
		L_36 = List_1_get_Item_m7DE788F9B3E4AB58167158D3EC8678D102CBA4C5_inline(L_34, L_35, /*hidden argument*/List_1_get_Item_m7DE788F9B3E4AB58167158D3EC8678D102CBA4C5_RuntimeMethod_var);
		V_9 = L_36;
		double L_37;
		L_37 = KeyValuePair_2_get_Value_mCF6D46FD8287F430682B061EA3FA2CD6FE8CC827_inline((KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10 *)(&V_9), /*hidden argument*/KeyValuePair_2_get_Value_mCF6D46FD8287F430682B061EA3FA2CD6FE8CC827_RuntimeMethod_var);
		return L_37;
	}

IL_00b6:
	{
		// var ip0 = _data[i1].Key;
		List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * L_38 = __this->get__data_2();
		int32_t L_39 = V_3;
		NullCheck(L_38);
		KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10  L_40;
		L_40 = List_1_get_Item_m7DE788F9B3E4AB58167158D3EC8678D102CBA4C5_inline(L_38, L_39, /*hidden argument*/List_1_get_Item_m7DE788F9B3E4AB58167158D3EC8678D102CBA4C5_RuntimeMethod_var);
		V_9 = L_40;
		double L_41;
		L_41 = KeyValuePair_2_get_Key_m538BD134D8B991D52E98EDB7473C8FE1BF5FB001_inline((KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10 *)(&V_9), /*hidden argument*/KeyValuePair_2_get_Key_m538BD134D8B991D52E98EDB7473C8FE1BF5FB001_RuntimeMethod_var);
		V_6 = L_41;
		// var ip1 = _data[i2].Key;
		List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * L_42 = __this->get__data_2();
		int32_t L_43 = V_4;
		NullCheck(L_42);
		KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10  L_44;
		L_44 = List_1_get_Item_m7DE788F9B3E4AB58167158D3EC8678D102CBA4C5_inline(L_42, L_43, /*hidden argument*/List_1_get_Item_m7DE788F9B3E4AB58167158D3EC8678D102CBA4C5_RuntimeMethod_var);
		V_9 = L_44;
		double L_45;
		L_45 = KeyValuePair_2_get_Key_m538BD134D8B991D52E98EDB7473C8FE1BF5FB001_inline((KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10 *)(&V_9), /*hidden argument*/KeyValuePair_2_get_Key_m538BD134D8B991D52E98EDB7473C8FE1BF5FB001_RuntimeMethod_var);
		V_7 = L_45;
		// var a = (smv - ip0) / (ip1 - ip0);
		double L_46 = V_0;
		double L_47 = V_6;
		double L_48 = V_7;
		double L_49 = V_6;
		V_8 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_46, (double)L_47))/(double)((double)il2cpp_codegen_subtract((double)L_48, (double)L_49))));
		// return Utils.InterpolateCubic(_data[i0].Value, _data[i1].Value, _data[i2].Value,
		//     _data[i3].Value, a);
		List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * L_50 = __this->get__data_2();
		int32_t L_51 = V_2;
		NullCheck(L_50);
		KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10  L_52;
		L_52 = List_1_get_Item_m7DE788F9B3E4AB58167158D3EC8678D102CBA4C5_inline(L_50, L_51, /*hidden argument*/List_1_get_Item_m7DE788F9B3E4AB58167158D3EC8678D102CBA4C5_RuntimeMethod_var);
		V_9 = L_52;
		double L_53;
		L_53 = KeyValuePair_2_get_Value_mCF6D46FD8287F430682B061EA3FA2CD6FE8CC827_inline((KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10 *)(&V_9), /*hidden argument*/KeyValuePair_2_get_Value_mCF6D46FD8287F430682B061EA3FA2CD6FE8CC827_RuntimeMethod_var);
		List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * L_54 = __this->get__data_2();
		int32_t L_55 = V_3;
		NullCheck(L_54);
		KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10  L_56;
		L_56 = List_1_get_Item_m7DE788F9B3E4AB58167158D3EC8678D102CBA4C5_inline(L_54, L_55, /*hidden argument*/List_1_get_Item_m7DE788F9B3E4AB58167158D3EC8678D102CBA4C5_RuntimeMethod_var);
		V_9 = L_56;
		double L_57;
		L_57 = KeyValuePair_2_get_Value_mCF6D46FD8287F430682B061EA3FA2CD6FE8CC827_inline((KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10 *)(&V_9), /*hidden argument*/KeyValuePair_2_get_Value_mCF6D46FD8287F430682B061EA3FA2CD6FE8CC827_RuntimeMethod_var);
		List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * L_58 = __this->get__data_2();
		int32_t L_59 = V_4;
		NullCheck(L_58);
		KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10  L_60;
		L_60 = List_1_get_Item_m7DE788F9B3E4AB58167158D3EC8678D102CBA4C5_inline(L_58, L_59, /*hidden argument*/List_1_get_Item_m7DE788F9B3E4AB58167158D3EC8678D102CBA4C5_RuntimeMethod_var);
		V_9 = L_60;
		double L_61;
		L_61 = KeyValuePair_2_get_Value_mCF6D46FD8287F430682B061EA3FA2CD6FE8CC827_inline((KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10 *)(&V_9), /*hidden argument*/KeyValuePair_2_get_Value_mCF6D46FD8287F430682B061EA3FA2CD6FE8CC827_RuntimeMethod_var);
		List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * L_62 = __this->get__data_2();
		int32_t L_63 = V_5;
		NullCheck(L_62);
		KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10  L_64;
		L_64 = List_1_get_Item_m7DE788F9B3E4AB58167158D3EC8678D102CBA4C5_inline(L_62, L_63, /*hidden argument*/List_1_get_Item_m7DE788F9B3E4AB58167158D3EC8678D102CBA4C5_RuntimeMethod_var);
		V_9 = L_64;
		double L_65;
		L_65 = KeyValuePair_2_get_Value_mCF6D46FD8287F430682B061EA3FA2CD6FE8CC827_inline((KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10 *)(&V_9), /*hidden argument*/KeyValuePair_2_get_Value_mCF6D46FD8287F430682B061EA3FA2CD6FE8CC827_RuntimeMethod_var);
		double L_66 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		double L_67;
		L_67 = Utils_InterpolateCubic_m5C3389D766F789B95ED4BC9AE111D012D9ABB505(L_53, L_57, L_61, L_65, L_66, /*hidden argument*/NULL);
		return L_67;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Generator.Cylinders::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cylinders__ctor_m369B92B7C606E7F59700AA888AF112D9D68E5C10 (Cylinders_t97A509D33FCBE86D6C38F1497D3A6E40636D53C5 * __this, const RuntimeMethod* method)
{
	{
		// private double _frequency = 1.0;
		__this->set__frequency_2((1.0));
		// : base(0)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Generator.Cylinders::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cylinders__ctor_m2AD628531FCA2F567C7846D411EC3B1A86CEBBEB (Cylinders_t97A509D33FCBE86D6C38F1497D3A6E40636D53C5 * __this, double ___frequency0, const RuntimeMethod* method)
{
	{
		// private double _frequency = 1.0;
		__this->set__frequency_2((1.0));
		// : base(0)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 0, /*hidden argument*/NULL);
		// Frequency = frequency;
		double L_0 = ___frequency0;
		Cylinders_set_Frequency_mF0BC5F07111A66682234B909EC507119F3459AAA_inline(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Double LibNoise.Generator.Cylinders::get_Frequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Cylinders_get_Frequency_m77E6ED0D09CB8FFB6BD81BE33F38F69110B506A3 (Cylinders_t97A509D33FCBE86D6C38F1497D3A6E40636D53C5 * __this, const RuntimeMethod* method)
{
	{
		// get { return _frequency; }
		double L_0 = __this->get__frequency_2();
		return L_0;
	}
}
// System.Void LibNoise.Generator.Cylinders::set_Frequency(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cylinders_set_Frequency_mF0BC5F07111A66682234B909EC507119F3459AAA (Cylinders_t97A509D33FCBE86D6C38F1497D3A6E40636D53C5 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _frequency = value; }
		double L_0 = ___value0;
		__this->set__frequency_2(L_0);
		// set { _frequency = value; }
		return;
	}
}
// System.Double LibNoise.Generator.Cylinders::GetValue(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Cylinders_GetValue_mDFDAF95FB3E4223DA637E761F40A239543E847DF (Cylinders_t97A509D33FCBE86D6C38F1497D3A6E40636D53C5 * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		// x *= _frequency;
		double L_0 = ___x0;
		double L_1 = __this->get__frequency_2();
		___x0 = ((double)il2cpp_codegen_multiply((double)L_0, (double)L_1));
		// z *= _frequency;
		double L_2 = ___z2;
		double L_3 = __this->get__frequency_2();
		___z2 = ((double)il2cpp_codegen_multiply((double)L_2, (double)L_3));
		// var dfc = Math.Sqrt(x * x + z * z);
		double L_4 = ___x0;
		double L_5 = ___x0;
		double L_6 = ___z2;
		double L_7 = ___z2;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_8;
		L_8 = sqrt(((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_4, (double)L_5)), (double)((double)il2cpp_codegen_multiply((double)L_6, (double)L_7)))));
		// var dfss = dfc - Math.Floor(dfc);
		double L_9 = L_8;
		double L_10;
		L_10 = floor(L_9);
		V_0 = ((double)il2cpp_codegen_subtract((double)L_9, (double)L_10));
		// var dfls = 1.0 - dfss;
		double L_11 = V_0;
		V_1 = ((double)il2cpp_codegen_subtract((double)(1.0), (double)L_11));
		// var nd = Math.Min(dfss, dfls);
		double L_12 = V_0;
		double L_13 = V_1;
		double L_14;
		L_14 = Math_Min_m029DC981252B020B92B6DEC21AF0D42C56FA12B9(L_12, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		// return 1.0 - (nd * 4.0);
		double L_15 = V_2;
		return ((double)il2cpp_codegen_subtract((double)(1.0), (double)((double)il2cpp_codegen_multiply((double)L_15, (double)(4.0)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Operator.Displace::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Displace__ctor_mF31D9FCC538DACFEF0C4E4D3D9E5F3A54FC0206B (Displace_t1E766D76C20CC985C213A502B793DCB3A5DCA255 * __this, const RuntimeMethod* method)
{
	{
		// : base(4)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Displace::.ctor(LibNoise.ModuleBase,LibNoise.ModuleBase,LibNoise.ModuleBase,LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Displace__ctor_m7176C6414F0218ABB6C6CCDAF8553A9CA6315B34 (Displace_t1E766D76C20CC985C213A502B793DCB3A5DCA255 * __this, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___input0, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___x1, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___y2, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___z3, const RuntimeMethod* method)
{
	{
		// : base(4)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 4, /*hidden argument*/NULL);
		// Modules[0] = input;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___input0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_1);
		// Modules[1] = x;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_2;
		L_2 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_3 = ___x1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_3);
		// Modules[2] = y;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_4;
		L_4 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_5 = ___y2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_5);
		// Modules[3] = z;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_6;
		L_6 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_7 = ___z3;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(3), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_7);
		// }
		return;
	}
}
// LibNoise.ModuleBase LibNoise.Operator.Displace::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * Displace_get_X_mD8CB527DD918D7960B3DFEEB85FDCD3972714887 (Displace_t1E766D76C20CC985C213A502B793DCB3A5DCA255 * __this, const RuntimeMethod* method)
{
	{
		// get { return Modules[1]; }
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 1;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return L_2;
	}
}
// System.Void LibNoise.Operator.Displace::set_X(LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Displace_set_X_m29D04C6B075DF07FD246A47B1169C8DE8D4851DF (Displace_t1E766D76C20CC985C213A502B793DCB3A5DCA255 * __this, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___value0, const RuntimeMethod* method)
{
	{
		// Modules[1] = value;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___value0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(1), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_1);
		// }
		return;
	}
}
// LibNoise.ModuleBase LibNoise.Operator.Displace::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * Displace_get_Y_m21A10BB685F94875DF1C9868C549281D49209D0E (Displace_t1E766D76C20CC985C213A502B793DCB3A5DCA255 * __this, const RuntimeMethod* method)
{
	{
		// get { return Modules[2]; }
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 2;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return L_2;
	}
}
// System.Void LibNoise.Operator.Displace::set_Y(LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Displace_set_Y_m5C0748A9F6ED08F2F643C326EACD4CD5847B3CD5 (Displace_t1E766D76C20CC985C213A502B793DCB3A5DCA255 * __this, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___value0, const RuntimeMethod* method)
{
	{
		// Modules[2] = value;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___value0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(2), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_1);
		// }
		return;
	}
}
// LibNoise.ModuleBase LibNoise.Operator.Displace::get_Z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * Displace_get_Z_m4E5445BA5CB705830EE7927548A82E2614DE87AA (Displace_t1E766D76C20CC985C213A502B793DCB3A5DCA255 * __this, const RuntimeMethod* method)
{
	{
		// get { return Modules[3]; }
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 3;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return L_2;
	}
}
// System.Void LibNoise.Operator.Displace::set_Z(LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Displace_set_Z_mF996F628AB3BC5FFD66A1BC32DAE3354C7865BF0 (Displace_t1E766D76C20CC985C213A502B793DCB3A5DCA255 * __this, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___value0, const RuntimeMethod* method)
{
	{
		// Modules[3] = value;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___value0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(3), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_1);
		// }
		return;
	}
}
// System.Double LibNoise.Operator.Displace::GetValue(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Displace_GetValue_m8E4F6C728AD2413DC4E412B2EFEFAFB7CBA21A86 (Displace_t1E766D76C20CC985C213A502B793DCB3A5DCA255 * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		// var dx = x + Modules[1].GetValue(x, y, z);
		double L_0 = ___x0;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_1;
		L_1 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2 = 1;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		double L_4 = ___x0;
		double L_5 = ___y1;
		double L_6 = ___z2;
		NullCheck(L_3);
		double L_7;
		L_7 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_3, L_4, L_5, L_6);
		V_0 = ((double)il2cpp_codegen_add((double)L_0, (double)L_7));
		// var dy = y + Modules[2].GetValue(x, y, z);
		double L_8 = ___y1;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_9;
		L_9 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		int32_t L_10 = 2;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		double L_12 = ___x0;
		double L_13 = ___y1;
		double L_14 = ___z2;
		NullCheck(L_11);
		double L_15;
		L_15 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_11, L_12, L_13, L_14);
		V_1 = ((double)il2cpp_codegen_add((double)L_8, (double)L_15));
		// var dz = z + Modules[3].GetValue(x, y, z);
		double L_16 = ___z2;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_17;
		L_17 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		int32_t L_18 = 3;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		double L_20 = ___x0;
		double L_21 = ___y1;
		double L_22 = ___z2;
		NullCheck(L_19);
		double L_23;
		L_23 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_19, L_20, L_21, L_22);
		V_2 = ((double)il2cpp_codegen_add((double)L_16, (double)L_23));
		// return Modules[0].GetValue(dx, dy, dz);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_24;
		L_24 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		int32_t L_25 = 0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		double L_27 = V_0;
		double L_28 = V_1;
		double L_29 = V_2;
		NullCheck(L_26);
		double L_30;
		L_30 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_26, L_27, L_28, L_29);
		return L_30;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Operator.Exponent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exponent__ctor_mD883444836EE17E128D968E80C71DDE2A74BF5F5 (Exponent_t1FFCB9A4E8B689486050BA3D74E4A8915D175B5D * __this, const RuntimeMethod* method)
{
	{
		// private double _exponent = 1.0;
		__this->set__exponent_2((1.0));
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Exponent::.ctor(LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exponent__ctor_mC9DD20F60DA83495A67683DB2B2DC9095A31970F (Exponent_t1FFCB9A4E8B689486050BA3D74E4A8915D175B5D * __this, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___input0, const RuntimeMethod* method)
{
	{
		// private double _exponent = 1.0;
		__this->set__exponent_2((1.0));
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// Modules[0] = input;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___input0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_1);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Exponent::.ctor(System.Double,LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exponent__ctor_mBAA293563025E7F8F38D8539A0435BAF46E7200D (Exponent_t1FFCB9A4E8B689486050BA3D74E4A8915D175B5D * __this, double ___exponent0, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___input1, const RuntimeMethod* method)
{
	{
		// private double _exponent = 1.0;
		__this->set__exponent_2((1.0));
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// Modules[0] = input;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___input1;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_1);
		// Value = exponent;
		double L_2 = ___exponent0;
		Exponent_set_Value_m40A3752C11DF26BD1A7C19EA3CA170F0A08AF677_inline(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Double LibNoise.Operator.Exponent::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Exponent_get_Value_mEAB1B7D6A07135247EDB377F1E741C6C8E596BED (Exponent_t1FFCB9A4E8B689486050BA3D74E4A8915D175B5D * __this, const RuntimeMethod* method)
{
	{
		// get { return _exponent; }
		double L_0 = __this->get__exponent_2();
		return L_0;
	}
}
// System.Void LibNoise.Operator.Exponent::set_Value(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exponent_set_Value_m40A3752C11DF26BD1A7C19EA3CA170F0A08AF677 (Exponent_t1FFCB9A4E8B689486050BA3D74E4A8915D175B5D * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _exponent = value; }
		double L_0 = ___value0;
		__this->set__exponent_2(L_0);
		// set { _exponent = value; }
		return;
	}
}
// System.Double LibNoise.Operator.Exponent::GetValue(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Exponent_GetValue_m12BDA28C552635008D34E62916F1F718C7BF0B8D (Exponent_t1FFCB9A4E8B689486050BA3D74E4A8915D175B5D * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var v = Modules[0].GetValue(x, y, z);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		double L_3 = ___x0;
		double L_4 = ___y1;
		double L_5 = ___z2;
		NullCheck(L_2);
		double L_6;
		L_6 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_2, L_3, L_4, L_5);
		// return (Math.Pow(Math.Abs((v + 1.0) / 2.0), _exponent) * 2.0 - 1.0);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_7;
		L_7 = fabs(((double)((double)((double)il2cpp_codegen_add((double)L_6, (double)(1.0)))/(double)(2.0))));
		double L_8 = __this->get__exponent_2();
		double L_9;
		L_9 = Math_Pow_mC2C8700DAAD1316AA457A1D271F78CDF0D61AC2F(L_7, L_8, /*hidden argument*/NULL);
		return ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_9, (double)(2.0))), (double)(1.0)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.GradientPresets::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GradientPresets__cctor_m82F05608BD8C74E91B348757B6D97D5D21F8F4EB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m99353D132512446CCBFC3CE0FF9B97ED53768256_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m1D0591B02F36239FA5D61E3E1DA6222A866D4902_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mE9F83D6E8EC942001B3B786EDA3D4ED936060B6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m6907DF8DE758893DF85369A64084A2029D8023F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCFF83FB3AC66018A978ED540289D2D25CCF67088_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t50294AA606C939B6984B296A8267A187FCE02602_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * V_0 = NULL;
	List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * V_1 = NULL;
	List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * V_2 = NULL;
	List_1_t50294AA606C939B6984B296A8267A187FCE02602 * V_3 = NULL;
	List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * V_4 = NULL;
	List_1_t50294AA606C939B6984B296A8267A187FCE02602 * V_5 = NULL;
	{
		// var grayscaleColorKeys = new List<GradientColorKey>
		// {
		//     new GradientColorKey(Color.black, 0),
		//     new GradientColorKey(Color.white, 1)
		// };
		List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * L_0 = (List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 *)il2cpp_codegen_object_new(List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4_il2cpp_TypeInfo_var);
		List_1__ctor_m6907DF8DE758893DF85369A64084A2029D8023F3(L_0, /*hidden argument*/List_1__ctor_m6907DF8DE758893DF85369A64084A2029D8023F3_RuntimeMethod_var);
		List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * L_1 = L_0;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_2;
		L_2 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		GradientColorKey__ctor_m8082D2E47E514E2708DDCD30A5063883CDD0FF20((&L_3), L_2, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E(L_1, L_3, /*hidden argument*/List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E_RuntimeMethod_var);
		List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * L_4 = L_1;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_5;
		L_5 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		GradientColorKey__ctor_m8082D2E47E514E2708DDCD30A5063883CDD0FF20((&L_6), L_5, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_4);
		List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E(L_4, L_6, /*hidden argument*/List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E_RuntimeMethod_var);
		V_0 = L_4;
		// var rgbColorKeys = new List<GradientColorKey>
		// {
		//     new GradientColorKey(Color.red, 0),
		//     new GradientColorKey(Color.green, 0.5f),
		//     new GradientColorKey(Color.blue, 1)
		// };
		List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * L_7 = (List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 *)il2cpp_codegen_object_new(List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4_il2cpp_TypeInfo_var);
		List_1__ctor_m6907DF8DE758893DF85369A64084A2029D8023F3(L_7, /*hidden argument*/List_1__ctor_m6907DF8DE758893DF85369A64084A2029D8023F3_RuntimeMethod_var);
		List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * L_8 = L_7;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9;
		L_9 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		GradientColorKey__ctor_m8082D2E47E514E2708DDCD30A5063883CDD0FF20((&L_10), L_9, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E(L_8, L_10, /*hidden argument*/List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E_RuntimeMethod_var);
		List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * L_11 = L_8;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E  L_13;
		memset((&L_13), 0, sizeof(L_13));
		GradientColorKey__ctor_m8082D2E47E514E2708DDCD30A5063883CDD0FF20((&L_13), L_12, (0.5f), /*hidden argument*/NULL);
		NullCheck(L_11);
		List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E(L_11, L_13, /*hidden argument*/List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E_RuntimeMethod_var);
		List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * L_14 = L_11;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_15;
		L_15 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E  L_16;
		memset((&L_16), 0, sizeof(L_16));
		GradientColorKey__ctor_m8082D2E47E514E2708DDCD30A5063883CDD0FF20((&L_16), L_15, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_14);
		List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E(L_14, L_16, /*hidden argument*/List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E_RuntimeMethod_var);
		V_1 = L_14;
		// var rgbaColorKeys = new List<GradientColorKey>
		// {
		//     new GradientColorKey(Color.red, 0),
		//     new GradientColorKey(Color.green, 1 / 3f),
		//     new GradientColorKey(Color.blue, 2 / 3f),
		//     new GradientColorKey(Color.black, 1)
		// };
		List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * L_17 = (List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 *)il2cpp_codegen_object_new(List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4_il2cpp_TypeInfo_var);
		List_1__ctor_m6907DF8DE758893DF85369A64084A2029D8023F3(L_17, /*hidden argument*/List_1__ctor_m6907DF8DE758893DF85369A64084A2029D8023F3_RuntimeMethod_var);
		List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * L_18 = L_17;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_19;
		L_19 = Color_get_red_m9BD55EBF7A74A515330FA5F7AC7A67C8A8913DD8(/*hidden argument*/NULL);
		GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E  L_20;
		memset((&L_20), 0, sizeof(L_20));
		GradientColorKey__ctor_m8082D2E47E514E2708DDCD30A5063883CDD0FF20((&L_20), L_19, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E(L_18, L_20, /*hidden argument*/List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E_RuntimeMethod_var);
		List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * L_21 = L_18;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_22;
		L_22 = Color_get_green_mFF9BD42534D385A0717B1EAD083ADF08712984B9(/*hidden argument*/NULL);
		GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E  L_23;
		memset((&L_23), 0, sizeof(L_23));
		GradientColorKey__ctor_m8082D2E47E514E2708DDCD30A5063883CDD0FF20((&L_23), L_22, (0.333333343f), /*hidden argument*/NULL);
		NullCheck(L_21);
		List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E(L_21, L_23, /*hidden argument*/List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E_RuntimeMethod_var);
		List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * L_24 = L_21;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_25;
		L_25 = Color_get_blue_m6D62D515CA10A6E760848E1BFB997E27B90BD07B(/*hidden argument*/NULL);
		GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E  L_26;
		memset((&L_26), 0, sizeof(L_26));
		GradientColorKey__ctor_m8082D2E47E514E2708DDCD30A5063883CDD0FF20((&L_26), L_25, (0.666666687f), /*hidden argument*/NULL);
		NullCheck(L_24);
		List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E(L_24, L_26, /*hidden argument*/List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E_RuntimeMethod_var);
		List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * L_27 = L_24;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_28;
		L_28 = Color_get_black_m67E91EB7017FC74D9AB5ADEF6B6929B7EFC9A982(/*hidden argument*/NULL);
		GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E  L_29;
		memset((&L_29), 0, sizeof(L_29));
		GradientColorKey__ctor_m8082D2E47E514E2708DDCD30A5063883CDD0FF20((&L_29), L_28, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_27);
		List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E(L_27, L_29, /*hidden argument*/List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E_RuntimeMethod_var);
		V_2 = L_27;
		// var rgbaAlphaKeys = new List<GradientAlphaKey> {new GradientAlphaKey(0, 2 / 3f), new GradientAlphaKey(1, 1)};
		List_1_t50294AA606C939B6984B296A8267A187FCE02602 * L_30 = (List_1_t50294AA606C939B6984B296A8267A187FCE02602 *)il2cpp_codegen_object_new(List_1_t50294AA606C939B6984B296A8267A187FCE02602_il2cpp_TypeInfo_var);
		List_1__ctor_mCFF83FB3AC66018A978ED540289D2D25CCF67088(L_30, /*hidden argument*/List_1__ctor_mCFF83FB3AC66018A978ED540289D2D25CCF67088_RuntimeMethod_var);
		List_1_t50294AA606C939B6984B296A8267A187FCE02602 * L_31 = L_30;
		GradientAlphaKey_t2EB9572FC9B85C468D39D2DC7A02A441F3A7E36D  L_32;
		memset((&L_32), 0, sizeof(L_32));
		GradientAlphaKey__ctor_mF4E157DB32F0177926B269D9DA4E11FC2ACF6F29((&L_32), (0.0f), (0.666666687f), /*hidden argument*/NULL);
		NullCheck(L_31);
		List_1_Add_m99353D132512446CCBFC3CE0FF9B97ED53768256(L_31, L_32, /*hidden argument*/List_1_Add_m99353D132512446CCBFC3CE0FF9B97ED53768256_RuntimeMethod_var);
		List_1_t50294AA606C939B6984B296A8267A187FCE02602 * L_33 = L_31;
		GradientAlphaKey_t2EB9572FC9B85C468D39D2DC7A02A441F3A7E36D  L_34;
		memset((&L_34), 0, sizeof(L_34));
		GradientAlphaKey__ctor_mF4E157DB32F0177926B269D9DA4E11FC2ACF6F29((&L_34), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_33);
		List_1_Add_m99353D132512446CCBFC3CE0FF9B97ED53768256(L_33, L_34, /*hidden argument*/List_1_Add_m99353D132512446CCBFC3CE0FF9B97ED53768256_RuntimeMethod_var);
		V_3 = L_33;
		// var terrainColorKeys = new List<GradientColorKey>
		// {
		//     new GradientColorKey(new Color(0, 0, 0.5f), 0),
		//     new GradientColorKey(new Color(0.125f, 0.25f, 0.5f), 0.4f),
		//     new GradientColorKey(new Color(0.25f, 0.375f, 0.75f), 0.48f),
		//     new GradientColorKey(new Color(0, 0.75f, 0), 0.5f),
		//     new GradientColorKey(new Color(0.75f, 0.75f, 0), 0.625f),
		//     new GradientColorKey(new Color(0.625f, 0.375f, 0.25f), 0.75f),
		//     new GradientColorKey(new Color(0.5f, 1, 1), 0.875f),
		//     new GradientColorKey(Color.white, 1)
		// };
		List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * L_35 = (List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 *)il2cpp_codegen_object_new(List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4_il2cpp_TypeInfo_var);
		List_1__ctor_m6907DF8DE758893DF85369A64084A2029D8023F3(L_35, /*hidden argument*/List_1__ctor_m6907DF8DE758893DF85369A64084A2029D8023F3_RuntimeMethod_var);
		List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * L_36 = L_35;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_37;
		memset((&L_37), 0, sizeof(L_37));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_37), (0.0f), (0.0f), (0.5f), /*hidden argument*/NULL);
		GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E  L_38;
		memset((&L_38), 0, sizeof(L_38));
		GradientColorKey__ctor_m8082D2E47E514E2708DDCD30A5063883CDD0FF20((&L_38), L_37, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_36);
		List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E(L_36, L_38, /*hidden argument*/List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E_RuntimeMethod_var);
		List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * L_39 = L_36;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_40;
		memset((&L_40), 0, sizeof(L_40));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_40), (0.125f), (0.25f), (0.5f), /*hidden argument*/NULL);
		GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E  L_41;
		memset((&L_41), 0, sizeof(L_41));
		GradientColorKey__ctor_m8082D2E47E514E2708DDCD30A5063883CDD0FF20((&L_41), L_40, (0.400000006f), /*hidden argument*/NULL);
		NullCheck(L_39);
		List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E(L_39, L_41, /*hidden argument*/List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E_RuntimeMethod_var);
		List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * L_42 = L_39;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_43;
		memset((&L_43), 0, sizeof(L_43));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_43), (0.25f), (0.375f), (0.75f), /*hidden argument*/NULL);
		GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E  L_44;
		memset((&L_44), 0, sizeof(L_44));
		GradientColorKey__ctor_m8082D2E47E514E2708DDCD30A5063883CDD0FF20((&L_44), L_43, (0.479999989f), /*hidden argument*/NULL);
		NullCheck(L_42);
		List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E(L_42, L_44, /*hidden argument*/List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E_RuntimeMethod_var);
		List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * L_45 = L_42;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_46;
		memset((&L_46), 0, sizeof(L_46));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_46), (0.0f), (0.75f), (0.0f), /*hidden argument*/NULL);
		GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E  L_47;
		memset((&L_47), 0, sizeof(L_47));
		GradientColorKey__ctor_m8082D2E47E514E2708DDCD30A5063883CDD0FF20((&L_47), L_46, (0.5f), /*hidden argument*/NULL);
		NullCheck(L_45);
		List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E(L_45, L_47, /*hidden argument*/List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E_RuntimeMethod_var);
		List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * L_48 = L_45;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_49;
		memset((&L_49), 0, sizeof(L_49));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_49), (0.75f), (0.75f), (0.0f), /*hidden argument*/NULL);
		GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E  L_50;
		memset((&L_50), 0, sizeof(L_50));
		GradientColorKey__ctor_m8082D2E47E514E2708DDCD30A5063883CDD0FF20((&L_50), L_49, (0.625f), /*hidden argument*/NULL);
		NullCheck(L_48);
		List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E(L_48, L_50, /*hidden argument*/List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E_RuntimeMethod_var);
		List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * L_51 = L_48;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_52;
		memset((&L_52), 0, sizeof(L_52));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_52), (0.625f), (0.375f), (0.25f), /*hidden argument*/NULL);
		GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E  L_53;
		memset((&L_53), 0, sizeof(L_53));
		GradientColorKey__ctor_m8082D2E47E514E2708DDCD30A5063883CDD0FF20((&L_53), L_52, (0.75f), /*hidden argument*/NULL);
		NullCheck(L_51);
		List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E(L_51, L_53, /*hidden argument*/List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E_RuntimeMethod_var);
		List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * L_54 = L_51;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_55;
		memset((&L_55), 0, sizeof(L_55));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_55), (0.5f), (1.0f), (1.0f), /*hidden argument*/NULL);
		GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E  L_56;
		memset((&L_56), 0, sizeof(L_56));
		GradientColorKey__ctor_m8082D2E47E514E2708DDCD30A5063883CDD0FF20((&L_56), L_55, (0.875f), /*hidden argument*/NULL);
		NullCheck(L_54);
		List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E(L_54, L_56, /*hidden argument*/List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E_RuntimeMethod_var);
		List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * L_57 = L_54;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_58;
		L_58 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		GradientColorKey_t1B691B0604BDB77B1515A6F565D928BC0EBF2F2E  L_59;
		memset((&L_59), 0, sizeof(L_59));
		GradientColorKey__ctor_m8082D2E47E514E2708DDCD30A5063883CDD0FF20((&L_59), L_58, (1.0f), /*hidden argument*/NULL);
		NullCheck(L_57);
		List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E(L_57, L_59, /*hidden argument*/List_1_Add_mAF8C3FF5C524BFA4C4513E3234C7E9BC65C78A4E_RuntimeMethod_var);
		V_4 = L_57;
		// var alphaKeys = new List<GradientAlphaKey> {new GradientAlphaKey(1, 0), new GradientAlphaKey(1, 1)};
		List_1_t50294AA606C939B6984B296A8267A187FCE02602 * L_60 = (List_1_t50294AA606C939B6984B296A8267A187FCE02602 *)il2cpp_codegen_object_new(List_1_t50294AA606C939B6984B296A8267A187FCE02602_il2cpp_TypeInfo_var);
		List_1__ctor_mCFF83FB3AC66018A978ED540289D2D25CCF67088(L_60, /*hidden argument*/List_1__ctor_mCFF83FB3AC66018A978ED540289D2D25CCF67088_RuntimeMethod_var);
		List_1_t50294AA606C939B6984B296A8267A187FCE02602 * L_61 = L_60;
		GradientAlphaKey_t2EB9572FC9B85C468D39D2DC7A02A441F3A7E36D  L_62;
		memset((&L_62), 0, sizeof(L_62));
		GradientAlphaKey__ctor_mF4E157DB32F0177926B269D9DA4E11FC2ACF6F29((&L_62), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_61);
		List_1_Add_m99353D132512446CCBFC3CE0FF9B97ED53768256(L_61, L_62, /*hidden argument*/List_1_Add_m99353D132512446CCBFC3CE0FF9B97ED53768256_RuntimeMethod_var);
		List_1_t50294AA606C939B6984B296A8267A187FCE02602 * L_63 = L_61;
		GradientAlphaKey_t2EB9572FC9B85C468D39D2DC7A02A441F3A7E36D  L_64;
		memset((&L_64), 0, sizeof(L_64));
		GradientAlphaKey__ctor_mF4E157DB32F0177926B269D9DA4E11FC2ACF6F29((&L_64), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_63);
		List_1_Add_m99353D132512446CCBFC3CE0FF9B97ED53768256(L_63, L_64, /*hidden argument*/List_1_Add_m99353D132512446CCBFC3CE0FF9B97ED53768256_RuntimeMethod_var);
		V_5 = L_63;
		// _empty = new Gradient();
		Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * L_65 = (Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 *)il2cpp_codegen_object_new(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_il2cpp_TypeInfo_var);
		Gradient__ctor_m4B95822B3C5187566CE4FA66E283600DCC916C5A(L_65, /*hidden argument*/NULL);
		((GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_StaticFields*)il2cpp_codegen_static_fields_for(GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var))->set__empty_0(L_65);
		// _rgb = new Gradient();
		Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * L_66 = (Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 *)il2cpp_codegen_object_new(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_il2cpp_TypeInfo_var);
		Gradient__ctor_m4B95822B3C5187566CE4FA66E283600DCC916C5A(L_66, /*hidden argument*/NULL);
		((GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_StaticFields*)il2cpp_codegen_static_fields_for(GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var))->set__rgb_2(L_66);
		// _rgb.SetKeys(rgbColorKeys.ToArray(), alphaKeys.ToArray());
		Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * L_67 = ((GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_StaticFields*)il2cpp_codegen_static_fields_for(GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var))->get__rgb_2();
		List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * L_68 = V_1;
		NullCheck(L_68);
		GradientColorKeyU5BU5D_t93452502F87F8D08C4E848B95CFCBDFCD482056A* L_69;
		L_69 = List_1_ToArray_m1D0591B02F36239FA5D61E3E1DA6222A866D4902(L_68, /*hidden argument*/List_1_ToArray_m1D0591B02F36239FA5D61E3E1DA6222A866D4902_RuntimeMethod_var);
		List_1_t50294AA606C939B6984B296A8267A187FCE02602 * L_70 = V_5;
		NullCheck(L_70);
		GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748* L_71;
		L_71 = List_1_ToArray_mE9F83D6E8EC942001B3B786EDA3D4ED936060B6E(L_70, /*hidden argument*/List_1_ToArray_mE9F83D6E8EC942001B3B786EDA3D4ED936060B6E_RuntimeMethod_var);
		NullCheck(L_67);
		Gradient_SetKeys_mFA90BD1B1B00C045CA5C068A1C251929A1A6720E(L_67, L_69, L_71, /*hidden argument*/NULL);
		// _rgba = new Gradient();
		Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * L_72 = (Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 *)il2cpp_codegen_object_new(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_il2cpp_TypeInfo_var);
		Gradient__ctor_m4B95822B3C5187566CE4FA66E283600DCC916C5A(L_72, /*hidden argument*/NULL);
		((GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_StaticFields*)il2cpp_codegen_static_fields_for(GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var))->set__rgba_3(L_72);
		// _rgba.SetKeys(rgbaColorKeys.ToArray(), rgbaAlphaKeys.ToArray());
		Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * L_73 = ((GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_StaticFields*)il2cpp_codegen_static_fields_for(GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var))->get__rgba_3();
		List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * L_74 = V_2;
		NullCheck(L_74);
		GradientColorKeyU5BU5D_t93452502F87F8D08C4E848B95CFCBDFCD482056A* L_75;
		L_75 = List_1_ToArray_m1D0591B02F36239FA5D61E3E1DA6222A866D4902(L_74, /*hidden argument*/List_1_ToArray_m1D0591B02F36239FA5D61E3E1DA6222A866D4902_RuntimeMethod_var);
		List_1_t50294AA606C939B6984B296A8267A187FCE02602 * L_76 = V_3;
		NullCheck(L_76);
		GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748* L_77;
		L_77 = List_1_ToArray_mE9F83D6E8EC942001B3B786EDA3D4ED936060B6E(L_76, /*hidden argument*/List_1_ToArray_mE9F83D6E8EC942001B3B786EDA3D4ED936060B6E_RuntimeMethod_var);
		NullCheck(L_73);
		Gradient_SetKeys_mFA90BD1B1B00C045CA5C068A1C251929A1A6720E(L_73, L_75, L_77, /*hidden argument*/NULL);
		// _grayscale = new Gradient();
		Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * L_78 = (Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 *)il2cpp_codegen_object_new(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_il2cpp_TypeInfo_var);
		Gradient__ctor_m4B95822B3C5187566CE4FA66E283600DCC916C5A(L_78, /*hidden argument*/NULL);
		((GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_StaticFields*)il2cpp_codegen_static_fields_for(GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var))->set__grayscale_1(L_78);
		// _grayscale.SetKeys(grayscaleColorKeys.ToArray(), alphaKeys.ToArray());
		Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * L_79 = ((GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_StaticFields*)il2cpp_codegen_static_fields_for(GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var))->get__grayscale_1();
		List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * L_80 = V_0;
		NullCheck(L_80);
		GradientColorKeyU5BU5D_t93452502F87F8D08C4E848B95CFCBDFCD482056A* L_81;
		L_81 = List_1_ToArray_m1D0591B02F36239FA5D61E3E1DA6222A866D4902(L_80, /*hidden argument*/List_1_ToArray_m1D0591B02F36239FA5D61E3E1DA6222A866D4902_RuntimeMethod_var);
		List_1_t50294AA606C939B6984B296A8267A187FCE02602 * L_82 = V_5;
		NullCheck(L_82);
		GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748* L_83;
		L_83 = List_1_ToArray_mE9F83D6E8EC942001B3B786EDA3D4ED936060B6E(L_82, /*hidden argument*/List_1_ToArray_mE9F83D6E8EC942001B3B786EDA3D4ED936060B6E_RuntimeMethod_var);
		NullCheck(L_79);
		Gradient_SetKeys_mFA90BD1B1B00C045CA5C068A1C251929A1A6720E(L_79, L_81, L_83, /*hidden argument*/NULL);
		// _terrain = new Gradient();
		Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * L_84 = (Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 *)il2cpp_codegen_object_new(Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2_il2cpp_TypeInfo_var);
		Gradient__ctor_m4B95822B3C5187566CE4FA66E283600DCC916C5A(L_84, /*hidden argument*/NULL);
		((GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_StaticFields*)il2cpp_codegen_static_fields_for(GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var))->set__terrain_4(L_84);
		// _terrain.SetKeys(terrainColorKeys.ToArray(), alphaKeys.ToArray());
		Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * L_85 = ((GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_StaticFields*)il2cpp_codegen_static_fields_for(GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var))->get__terrain_4();
		List_1_tF5CBCFA5D45927AED21AFB4F09AE2814118BEFC4 * L_86 = V_4;
		NullCheck(L_86);
		GradientColorKeyU5BU5D_t93452502F87F8D08C4E848B95CFCBDFCD482056A* L_87;
		L_87 = List_1_ToArray_m1D0591B02F36239FA5D61E3E1DA6222A866D4902(L_86, /*hidden argument*/List_1_ToArray_m1D0591B02F36239FA5D61E3E1DA6222A866D4902_RuntimeMethod_var);
		List_1_t50294AA606C939B6984B296A8267A187FCE02602 * L_88 = V_5;
		NullCheck(L_88);
		GradientAlphaKeyU5BU5D_t4B07B8959D70A589B53B18B15512C74AEBD03748* L_89;
		L_89 = List_1_ToArray_mE9F83D6E8EC942001B3B786EDA3D4ED936060B6E(L_88, /*hidden argument*/List_1_ToArray_mE9F83D6E8EC942001B3B786EDA3D4ED936060B6E_RuntimeMethod_var);
		NullCheck(L_85);
		Gradient_SetKeys_mFA90BD1B1B00C045CA5C068A1C251929A1A6720E(L_85, L_87, L_89, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Gradient LibNoise.GradientPresets::get_Empty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * GradientPresets_get_Empty_m4F62118D771D3CDFB8EA5FBB5E337374E617C3F0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _empty; }
		IL2CPP_RUNTIME_CLASS_INIT(GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var);
		Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * L_0 = ((GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_StaticFields*)il2cpp_codegen_static_fields_for(GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var))->get__empty_0();
		return L_0;
	}
}
// UnityEngine.Gradient LibNoise.GradientPresets::get_Grayscale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * GradientPresets_get_Grayscale_m32ED2651CD017DA8BFA22301110834F3BED7DCBB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _grayscale; }
		IL2CPP_RUNTIME_CLASS_INIT(GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var);
		Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * L_0 = ((GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_StaticFields*)il2cpp_codegen_static_fields_for(GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var))->get__grayscale_1();
		return L_0;
	}
}
// UnityEngine.Gradient LibNoise.GradientPresets::get_RGB()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * GradientPresets_get_RGB_mEC5665DD7294B75EFEA2E9609532F39402B08CF7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _rgb; }
		IL2CPP_RUNTIME_CLASS_INIT(GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var);
		Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * L_0 = ((GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_StaticFields*)il2cpp_codegen_static_fields_for(GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var))->get__rgb_2();
		return L_0;
	}
}
// UnityEngine.Gradient LibNoise.GradientPresets::get_RGBA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * GradientPresets_get_RGBA_mA69921358ECD45DE554A67275DBA67DF393A1AB2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _rgba; }
		IL2CPP_RUNTIME_CLASS_INIT(GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var);
		Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * L_0 = ((GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_StaticFields*)il2cpp_codegen_static_fields_for(GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var))->get__rgba_3();
		return L_0;
	}
}
// UnityEngine.Gradient LibNoise.GradientPresets::get_Terrain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * GradientPresets_get_Terrain_m15ED30BF16CB49B6C87B90C46B92D4FB715F8B8E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _terrain; }
		IL2CPP_RUNTIME_CLASS_INIT(GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var);
		Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * L_0 = ((GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_StaticFields*)il2cpp_codegen_static_fields_for(GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var))->get__terrain_4();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Operator.Invert::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Invert__ctor_mC28744C6A1F545579A10F857933427A2886C6848 (Invert_t9B33D6DFB284DB1EDBC8288DEAD0FAA68D787E24 * __this, const RuntimeMethod* method)
{
	{
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Invert::.ctor(LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Invert__ctor_m1DEDB0CB703EBE56F14CCF45262BB8F5BE090A46 (Invert_t9B33D6DFB284DB1EDBC8288DEAD0FAA68D787E24 * __this, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___input0, const RuntimeMethod* method)
{
	{
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// Modules[0] = input;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___input0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_1);
		// }
		return;
	}
}
// System.Double LibNoise.Operator.Invert::GetValue(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Invert_GetValue_mB1736F7E7803E29BFED054CA83885DE2B14DBD4D (Invert_t9B33D6DFB284DB1EDBC8288DEAD0FAA68D787E24 * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	{
		// return -Modules[0].GetValue(x, y, z);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		double L_3 = ___x0;
		double L_4 = ___y1;
		double L_5 = ___z2;
		NullCheck(L_2);
		double L_6;
		L_6 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_2, L_3, L_4, L_5);
		return ((-L_6));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Operator.Max::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Max__ctor_m4DC3250FB825562B3D2466DD6F53F64B25D2FDA9 (Max_t17E53796374910CD1EEA7E9D931B2E2EF2B1976C * __this, const RuntimeMethod* method)
{
	{
		// : base(2)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Max::.ctor(LibNoise.ModuleBase,LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Max__ctor_m6C466AEC3D1CD72F86D8A1F0F942BFFF48BAA353 (Max_t17E53796374910CD1EEA7E9D931B2E2EF2B1976C * __this, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___lhs0, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___rhs1, const RuntimeMethod* method)
{
	{
		// : base(2)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 2, /*hidden argument*/NULL);
		// Modules[0] = lhs;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___lhs0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_1);
		// Modules[1] = rhs;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_2;
		L_2 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_3 = ___rhs1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_3);
		// }
		return;
	}
}
// System.Double LibNoise.Operator.Max::GetValue(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Max_GetValue_m7698B02E38FB2EB293DAEB16A793B55B5FD5F0C8 (Max_t17E53796374910CD1EEA7E9D931B2E2EF2B1976C * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// var a = Modules[0].GetValue(x, y, z);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		double L_3 = ___x0;
		double L_4 = ___y1;
		double L_5 = ___z2;
		NullCheck(L_2);
		double L_6;
		L_6 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_2, L_3, L_4, L_5);
		// var b = Modules[1].GetValue(x, y, z);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_7;
		L_7 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = 1;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		double L_10 = ___x0;
		double L_11 = ___y1;
		double L_12 = ___z2;
		NullCheck(L_9);
		double L_13;
		L_13 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_9, L_10, L_11, L_12);
		V_0 = L_13;
		// return Math.Max(a, b);
		double L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_15;
		L_15 = Math_Max_mA7AFB223891668427745BC854ACBC24849AEDCB6(L_6, L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Operator.Min::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Min__ctor_mEC47AB83933FF37683186F1BE86DD8972A3A505E (Min_t0E9514465F128E7CA8049CFA02363B2602F97E7C * __this, const RuntimeMethod* method)
{
	{
		// : base(2)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Min::.ctor(LibNoise.ModuleBase,LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Min__ctor_m1A690A2578D40068FAE7DCEFB5AA2B66065355F0 (Min_t0E9514465F128E7CA8049CFA02363B2602F97E7C * __this, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___lhs0, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___rhs1, const RuntimeMethod* method)
{
	{
		// : base(2)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 2, /*hidden argument*/NULL);
		// Modules[0] = lhs;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___lhs0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_1);
		// Modules[1] = rhs;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_2;
		L_2 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_3 = ___rhs1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_3);
		// }
		return;
	}
}
// System.Double LibNoise.Operator.Min::GetValue(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Min_GetValue_m81BF5A720ED40DA8DCDE38B06C618422120D758D (Min_t0E9514465F128E7CA8049CFA02363B2602F97E7C * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// var a = Modules[0].GetValue(x, y, z);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		double L_3 = ___x0;
		double L_4 = ___y1;
		double L_5 = ___z2;
		NullCheck(L_2);
		double L_6;
		L_6 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_2, L_3, L_4, L_5);
		// var b = Modules[1].GetValue(x, y, z);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_7;
		L_7 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = 1;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		double L_10 = ___x0;
		double L_11 = ___y1;
		double L_12 = ___z2;
		NullCheck(L_9);
		double L_13;
		L_13 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_9, L_10, L_11, L_12);
		V_0 = L_13;
		// return Math.Min(a, b);
		double L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_15;
		L_15 = Math_Min_m029DC981252B020B92B6DEC21AF0D42C56FA12B9(L_6, L_14, /*hidden argument*/NULL);
		return L_15;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.ModuleBase::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29 (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * __this, int32_t ___count0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected ModuleBase(int count)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// if (count > 0)
		int32_t L_0 = ___count0;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0016;
		}
	}
	{
		// _modules = new ModuleBase[count];
		int32_t L_1 = ___count0;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_2 = (ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774*)(ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774*)SZArrayNew(ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->set__modules_0(L_2);
	}

IL_0016:
	{
		// }
		return;
	}
}
// LibNoise.ModuleBase LibNoise.ModuleBase::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ModuleBase_get_Item_m44C31BA122658F8214A34CAE639CC7FD6AAFB2CF (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		// if (index < 0 || index >= _modules.Length)
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___index0;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_2 = __this->get__modules_0();
		NullCheck(L_2);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001a;
		}
	}

IL_000f:
	{
		// throw new ArgumentOutOfRangeException("Index out of valid module range");
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_3 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBE50A66C284A9927279CC7D210D6BCEC70181A1A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ModuleBase_get_Item_m44C31BA122658F8214A34CAE639CC7FD6AAFB2CF_RuntimeMethod_var)));
	}

IL_001a:
	{
		// if (_modules[index] == null)
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_4 = __this->get__modules_0();
		int32_t L_5 = ___index0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if (L_7)
		{
			goto IL_002f;
		}
	}
	{
		// throw new ArgumentNullException("Desired element is null");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_8 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCB405B14E02FB77760FC67C6E6AC1878004DF2A7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ModuleBase_get_Item_m44C31BA122658F8214A34CAE639CC7FD6AAFB2CF_RuntimeMethod_var)));
	}

IL_002f:
	{
		// return _modules[index];
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_9 = __this->get__modules_0();
		int32_t L_10 = ___index0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		return L_12;
	}
}
// System.Void LibNoise.ModuleBase::set_Item(System.Int32,LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleBase_set_Item_m2F9A0F870E3BD30FFC971D93524FC5B2A30D3821 (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * __this, int32_t ___index0, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___value1, const RuntimeMethod* method)
{
	{
		// if (index < 0 || index >= _modules.Length)
		int32_t L_0 = ___index0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___index0;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_2 = __this->get__modules_0();
		NullCheck(L_2);
		if ((((int32_t)L_1) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))))))
		{
			goto IL_001a;
		}
	}

IL_000f:
	{
		// throw new ArgumentOutOfRangeException("Index out of valid module range");
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_3 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBE50A66C284A9927279CC7D210D6BCEC70181A1A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ModuleBase_set_Item_m2F9A0F870E3BD30FFC971D93524FC5B2A30D3821_RuntimeMethod_var)));
	}

IL_001a:
	{
		// if (value == null)
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_4 = ___value1;
		if (L_4)
		{
			goto IL_0028;
		}
	}
	{
		// throw new ArgumentNullException("Value should not be null");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_5 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3473F008258A06F62B6DE5F99354A1C651D0EB88)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ModuleBase_set_Item_m2F9A0F870E3BD30FFC971D93524FC5B2A30D3821_RuntimeMethod_var)));
	}

IL_0028:
	{
		// _modules[index] = value;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_6 = __this->get__modules_0();
		int32_t L_7 = ___index0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_8 = ___value1;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_8);
		// }
		return;
	}
}
// LibNoise.ModuleBase[] LibNoise.ModuleBase::get_Modules()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00 (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * __this, const RuntimeMethod* method)
{
	{
		// get { return _modules; }
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0 = __this->get__modules_0();
		return L_0;
	}
}
// System.Int32 LibNoise.ModuleBase::get_SourceModuleCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleBase_get_SourceModuleCount_mFED30B77143500BD837C8A38863736EFB390990B (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * __this, const RuntimeMethod* method)
{
	{
		// get { return (_modules == null) ? 0 : _modules.Length; }
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0 = __this->get__modules_0();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_1 = __this->get__modules_0();
		NullCheck(L_1);
		return ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)));
	}

IL_0011:
	{
		return 0;
	}
}
// System.Double LibNoise.ModuleBase::GetValue(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ModuleBase_GetValue_mD35630B1F4340541AEB57DBEA2FA956DCE4A769F (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___coordinate0, const RuntimeMethod* method)
{
	{
		// return GetValue(coordinate.x, coordinate.y, coordinate.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___coordinate0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___coordinate0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___coordinate0;
		float L_5 = L_4.get_z_4();
		double L_6;
		L_6 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, __this, ((double)((double)L_1)), ((double)((double)L_3)), ((double)((double)L_5)));
		return L_6;
	}
}
// System.Double LibNoise.ModuleBase::GetValue(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ModuleBase_GetValue_m1A8494C4A5FE55EBE2A592D8F665E3E51B10349A (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___coordinate0, const RuntimeMethod* method)
{
	{
		// return GetValue(coordinate.x, coordinate.y, coordinate.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = ___coordinate0;
		float L_1 = L_0->get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_2 = ___coordinate0;
		float L_3 = L_2->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_4 = ___coordinate0;
		float L_5 = L_4->get_z_4();
		double L_6;
		L_6 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, __this, ((double)((double)L_1)), ((double)((double)L_3)), ((double)((double)L_5)));
		return L_6;
	}
}
// System.Boolean LibNoise.ModuleBase::get_IsDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ModuleBase_get_IsDisposed_m66F3E08186427EA947D04061229DC8E133516A64 (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * __this, const RuntimeMethod* method)
{
	{
		// get { return _disposed; }
		bool L_0 = __this->get__disposed_1();
		return L_0;
	}
}
// System.Void LibNoise.ModuleBase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleBase_Dispose_m62D627135A4F6DA5B8EA09DBC5ABD923CAFEBA76 (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_disposed)
		bool L_0 = __this->get__disposed_1();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// _disposed = Disposing();
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean LibNoise.ModuleBase::Disposing() */, __this);
		__this->set__disposed_1(L_1);
	}

IL_0014:
	{
		// GC.SuppressFinalize(this);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean LibNoise.ModuleBase::Disposing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ModuleBase_Disposing_m1AA2EB9AE8DEC6520B0311F4A3F68626153678EF (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// if (_modules != null)
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0 = __this->get__modules_0();
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// for (var i = 0; i < _modules.Length; i++)
		V_0 = 0;
		goto IL_0026;
	}

IL_000c:
	{
		// _modules[i].Dispose();
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_1 = __this->get__modules_0();
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_4);
		ModuleBase_Dispose_m62D627135A4F6DA5B8EA09DBC5ABD923CAFEBA76(L_4, /*hidden argument*/NULL);
		// _modules[i] = null;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_5 = __this->get__modules_0();
		int32_t L_6 = V_0;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, NULL);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)NULL);
		// for (var i = 0; i < _modules.Length; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0026:
	{
		// for (var i = 0; i < _modules.Length; i++)
		int32_t L_8 = V_0;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_9 = __this->get__modules_0();
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_000c;
		}
	}
	{
		// _modules = null;
		__this->set__modules_0((ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774*)NULL);
	}

IL_0038:
	{
		// return true;
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Operator.Multiply::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Multiply__ctor_mD6E3D78C28ED39613D8BEB7904EE237E35051F26 (Multiply_t9CC1B780838A3AC2A0990824496F1F86BE9A973A * __this, const RuntimeMethod* method)
{
	{
		// : base(2)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Multiply::.ctor(LibNoise.ModuleBase,LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Multiply__ctor_m0BC00459D206DD9333910135DE0ECDE9EB808C46 (Multiply_t9CC1B780838A3AC2A0990824496F1F86BE9A973A * __this, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___lhs0, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___rhs1, const RuntimeMethod* method)
{
	{
		// : base(2)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 2, /*hidden argument*/NULL);
		// Modules[0] = lhs;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___lhs0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_1);
		// Modules[1] = rhs;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_2;
		L_2 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_3 = ___rhs1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_3);
		// }
		return;
	}
}
// System.Double LibNoise.Operator.Multiply::GetValue(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Multiply_GetValue_m6AC529840E2FE80D518160580F1A567FFF5E47FF (Multiply_t9CC1B780838A3AC2A0990824496F1F86BE9A973A * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	{
		// return Modules[0].GetValue(x, y, z) * Modules[1].GetValue(x, y, z);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		double L_3 = ___x0;
		double L_4 = ___y1;
		double L_5 = ___z2;
		NullCheck(L_2);
		double L_6;
		L_6 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_2, L_3, L_4, L_5);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_7;
		L_7 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = 1;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		double L_10 = ___x0;
		double L_11 = ___y1;
		double L_12 = ___z2;
		NullCheck(L_9);
		double L_13;
		L_13 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_9, L_10, L_11, L_12);
		return ((double)il2cpp_codegen_multiply((double)L_6, (double)L_13));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Noise2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Noise2D__ctor_m018825E6D2702F16AE30C2299EAEE16DF6BD47E5 (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, const RuntimeMethod* method)
{
	{
		// private int _ucBorder = 1; // Border size of extra noise for uncropped data.
		__this->set__ucBorder_15(1);
		// private float _borderValue = float.NaN;
		__this->set__borderValue_17((std::numeric_limits<float>::quiet_NaN()));
		// protected Noise2D()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Noise2D::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Noise2D__ctor_m663FA9B9F357719F1072D74A984CD4C1D67321D2 (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	{
		// : this(size, size, null)
		int32_t L_0 = ___size0;
		int32_t L_1 = ___size0;
		Noise2D__ctor_m983FD3DDC24734DE8D37E8EE6089AC14E056FD43(__this, L_0, L_1, (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)NULL, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Noise2D::.ctor(System.Int32,LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Noise2D__ctor_m529C463B14C0973638515F153C1D35307C6560B7 (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, int32_t ___size0, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___generator1, const RuntimeMethod* method)
{
	{
		// : this(size, size, generator)
		int32_t L_0 = ___size0;
		int32_t L_1 = ___size0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_2 = ___generator1;
		Noise2D__ctor_m983FD3DDC24734DE8D37E8EE6089AC14E056FD43(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Noise2D::.ctor(System.Int32,System.Int32,LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Noise2D__ctor_m983FD3DDC24734DE8D37E8EE6089AC14E056FD43 (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, int32_t ___width0, int32_t ___height1, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___generator2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int _ucBorder = 1; // Border size of extra noise for uncropped data.
		__this->set__ucBorder_15(1);
		// private float _borderValue = float.NaN;
		__this->set__borderValue_17((std::numeric_limits<float>::quiet_NaN()));
		// public Noise2D(int width, int height, ModuleBase generator = null)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// _generator = generator;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_0 = ___generator2;
		__this->set__generator_18(L_0);
		// _width = width;
		int32_t L_1 = ___width0;
		__this->set__width_10(L_1);
		// _height = height;
		int32_t L_2 = ___height1;
		__this->set__height_11(L_2);
		// _data = new float[width, height];
		int32_t L_3 = ___width0;
		int32_t L_4 = ___height1;
		il2cpp_array_size_t L_6[] = { (il2cpp_array_size_t)L_3, (il2cpp_array_size_t)L_4 };
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_5 = (SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43*)GenArrayNew(SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43_il2cpp_TypeInfo_var, L_6);
		__this->set__data_12(L_5);
		// _ucWidth = width + _ucBorder * 2;
		int32_t L_7 = ___width0;
		int32_t L_8 = __this->get__ucBorder_15();
		__this->set__ucWidth_13(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_8, (int32_t)2)))));
		// _ucHeight = height + _ucBorder * 2;
		int32_t L_9 = ___height1;
		int32_t L_10 = __this->get__ucBorder_15();
		__this->set__ucHeight_14(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)2)))));
		// _ucData = new float[width + _ucBorder * 2, height + _ucBorder * 2];
		int32_t L_11 = ___width0;
		int32_t L_12 = __this->get__ucBorder_15();
		int32_t L_13 = ___height1;
		int32_t L_14 = __this->get__ucBorder_15();
		il2cpp_array_size_t L_16[] = { (il2cpp_array_size_t)((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)2)))), (il2cpp_array_size_t)((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)2)))) };
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_15 = (SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43*)GenArrayNew(SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43_il2cpp_TypeInfo_var, L_16);
		__this->set__ucData_16(L_15);
		// }
		return;
	}
}
// System.Single LibNoise.Noise2D::get_Item(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Noise2D_get_Item_m51A52F9839C00C9975DE25EB93CD910B0C7A45CF (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, int32_t ___x0, int32_t ___y1, bool ___isCropped2, const RuntimeMethod* method)
{
	{
		// if (isCropped)
		bool L_0 = ___isCropped2;
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		// if (x < 0 && x >= _width)
		int32_t L_1 = ___x0;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = ___x0;
		int32_t L_3 = __this->get__width_10();
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("Invalid x position");
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_4 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC65FCAEF3FADD6F9E9F856D075A3FA056555DF87)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Noise2D_get_Item_m51A52F9839C00C9975DE25EB93CD910B0C7A45CF_RuntimeMethod_var)));
	}

IL_001b:
	{
		// if (y < 0 && y >= _height)
		int32_t L_5 = ___y1;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_6 = ___y1;
		int32_t L_7 = __this->get__height_11();
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0033;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("Invalid y position");
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD77331D45245217995283572F704CB58A25D4540)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Noise2D_get_Item_m51A52F9839C00C9975DE25EB93CD910B0C7A45CF_RuntimeMethod_var)));
	}

IL_0033:
	{
		// return _data[x, y];
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_9 = __this->get__data_12();
		int32_t L_10 = ___x0;
		int32_t L_11 = ___y1;
		NullCheck(L_9);
		float L_12;
		L_12 = (L_9)->GetAt(L_10, L_11);
		return L_12;
	}

IL_0041:
	{
		// if (x < 0 && x >= _ucWidth)
		int32_t L_13 = ___x0;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_14 = ___x0;
		int32_t L_15 = __this->get__ucWidth_13();
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_0059;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("Invalid x position");
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_16 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC65FCAEF3FADD6F9E9F856D075A3FA056555DF87)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Noise2D_get_Item_m51A52F9839C00C9975DE25EB93CD910B0C7A45CF_RuntimeMethod_var)));
	}

IL_0059:
	{
		// if (y < 0 && y >= _ucHeight)
		int32_t L_17 = ___y1;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_0071;
		}
	}
	{
		int32_t L_18 = ___y1;
		int32_t L_19 = __this->get__ucHeight_14();
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0071;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("Invalid y position");
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_20 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD77331D45245217995283572F704CB58A25D4540)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Noise2D_get_Item_m51A52F9839C00C9975DE25EB93CD910B0C7A45CF_RuntimeMethod_var)));
	}

IL_0071:
	{
		// return _ucData[x, y];
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_21 = __this->get__ucData_16();
		int32_t L_22 = ___x0;
		int32_t L_23 = ___y1;
		NullCheck(L_21);
		float L_24;
		L_24 = (L_21)->GetAt(L_22, L_23);
		return L_24;
	}
}
// System.Void LibNoise.Noise2D::set_Item(System.Int32,System.Int32,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Noise2D_set_Item_m12A5E85903CE03CDEFC79CDF63ED7763853D574C (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, int32_t ___x0, int32_t ___y1, bool ___isCropped2, float ___value3, const RuntimeMethod* method)
{
	{
		// if (isCropped)
		bool L_0 = ___isCropped2;
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		// if (x < 0 && x >= _width)
		int32_t L_1 = ___x0;
		if ((((int32_t)L_1) >= ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_2 = ___x0;
		int32_t L_3 = __this->get__width_10();
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_001b;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("Invalid x position");
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_4 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC65FCAEF3FADD6F9E9F856D075A3FA056555DF87)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Noise2D_set_Item_m12A5E85903CE03CDEFC79CDF63ED7763853D574C_RuntimeMethod_var)));
	}

IL_001b:
	{
		// if (y < 0 && y >= _height)
		int32_t L_5 = ___y1;
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_6 = ___y1;
		int32_t L_7 = __this->get__height_11();
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_0033;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("Invalid y position");
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD77331D45245217995283572F704CB58A25D4540)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Noise2D_set_Item_m12A5E85903CE03CDEFC79CDF63ED7763853D574C_RuntimeMethod_var)));
	}

IL_0033:
	{
		// _data[x, y] = value;
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_9 = __this->get__data_12();
		int32_t L_10 = ___x0;
		int32_t L_11 = ___y1;
		float L_12 = ___value3;
		NullCheck(L_9);
		(L_9)->SetAt(L_10, L_11, L_12);
		// }
		return;
	}

IL_0043:
	{
		// if (x < 0 && x >= _ucWidth)
		int32_t L_13 = ___x0;
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_005b;
		}
	}
	{
		int32_t L_14 = ___x0;
		int32_t L_15 = __this->get__ucWidth_13();
		if ((((int32_t)L_14) < ((int32_t)L_15)))
		{
			goto IL_005b;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("Invalid x position");
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_16 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC65FCAEF3FADD6F9E9F856D075A3FA056555DF87)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Noise2D_set_Item_m12A5E85903CE03CDEFC79CDF63ED7763853D574C_RuntimeMethod_var)));
	}

IL_005b:
	{
		// if (y < 0 && y >= _ucHeight)
		int32_t L_17 = ___y1;
		if ((((int32_t)L_17) >= ((int32_t)0)))
		{
			goto IL_0073;
		}
	}
	{
		int32_t L_18 = ___y1;
		int32_t L_19 = __this->get__ucHeight_14();
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0073;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("Invalid y position");
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_20 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_20, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD77331D45245217995283572F704CB58A25D4540)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Noise2D_set_Item_m12A5E85903CE03CDEFC79CDF63ED7763853D574C_RuntimeMethod_var)));
	}

IL_0073:
	{
		// _ucData[x, y] = value;
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_21 = __this->get__ucData_16();
		int32_t L_22 = ___x0;
		int32_t L_23 = ___y1;
		float L_24 = ___value3;
		NullCheck(L_21);
		(L_21)->SetAt(L_22, L_23, L_24);
		// }
		return;
	}
}
// System.Single LibNoise.Noise2D::get_Border()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Noise2D_get_Border_mA6E00A3FBB705E7E71EE099800CF2EB38EB04FF5 (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, const RuntimeMethod* method)
{
	{
		// get { return _borderValue; }
		float L_0 = __this->get__borderValue_17();
		return L_0;
	}
}
// System.Void LibNoise.Noise2D::set_Border(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Noise2D_set_Border_m3D0BE11805584160BC36E60AD47E156D780B3834 (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// set { _borderValue = value; }
		float L_0 = ___value0;
		__this->set__borderValue_17(L_0);
		// set { _borderValue = value; }
		return;
	}
}
// LibNoise.ModuleBase LibNoise.Noise2D::get_Generator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * Noise2D_get_Generator_m388C78960AC1814FDAB9228C37CCB8621C23DCAE (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, const RuntimeMethod* method)
{
	{
		// get { return _generator; }
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_0 = __this->get__generator_18();
		return L_0;
	}
}
// System.Void LibNoise.Noise2D::set_Generator(LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Noise2D_set_Generator_m40951513CEB57285D2B102F8A1D79131E41F3E9A (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___value0, const RuntimeMethod* method)
{
	{
		// set { _generator = value; }
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_0 = ___value0;
		__this->set__generator_18(L_0);
		// set { _generator = value; }
		return;
	}
}
// System.Int32 LibNoise.Noise2D::get_Height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Noise2D_get_Height_mCD44742AAD4233D827D97CC7C4250BB2E63C6D47 (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, const RuntimeMethod* method)
{
	{
		// get { return _height; }
		int32_t L_0 = __this->get__height_11();
		return L_0;
	}
}
// System.Int32 LibNoise.Noise2D::get_Width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Noise2D_get_Width_m26B734C767330532A8BFDF00A317DFB47E705EDA (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, const RuntimeMethod* method)
{
	{
		// get { return _width; }
		int32_t L_0 = __this->get__width_10();
		return L_0;
	}
}
// System.Single[0...,0...] LibNoise.Noise2D::GetNormalizedData(System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* Noise2D_GetNormalizedData_m6CB1A3F306AEDD6A61DA8E5DB4833847080E8DA2 (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, bool ___isCropped0, int32_t ___xCrop1, int32_t ___yCrop2, const RuntimeMethod* method)
{
	{
		// return GetData(isCropped, xCrop, yCrop, true);
		bool L_0 = ___isCropped0;
		int32_t L_1 = ___xCrop1;
		int32_t L_2 = ___yCrop2;
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_3;
		L_3 = Noise2D_GetData_m98DEC17127ECCDAEEB4396CC634FD7B91BB215EC(__this, L_0, L_1, L_2, (bool)1, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Single[0...,0...] LibNoise.Noise2D::GetData(System.Boolean,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* Noise2D_GetData_m98DEC17127ECCDAEEB4396CC634FD7B91BB215EC (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, bool ___isCropped0, int32_t ___xCrop1, int32_t ___yCrop2, bool ___isNormalized3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* V_2 = NULL;
	SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	{
		// if (isCropped)
		bool L_0 = ___isCropped0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		// width = _width;
		int32_t L_1 = __this->get__width_10();
		V_0 = L_1;
		// height = _height;
		int32_t L_2 = __this->get__height_11();
		V_1 = L_2;
		// data = _data;
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_3 = __this->get__data_12();
		V_2 = L_3;
		// }
		goto IL_002f;
	}

IL_001a:
	{
		// width = _ucWidth;
		int32_t L_4 = __this->get__ucWidth_13();
		V_0 = L_4;
		// height = _ucHeight;
		int32_t L_5 = __this->get__ucHeight_14();
		V_1 = L_5;
		// data = _ucData;
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_6 = __this->get__ucData_16();
		V_2 = L_6;
	}

IL_002f:
	{
		// width -= xCrop;
		int32_t L_7 = V_0;
		int32_t L_8 = ___xCrop1;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8));
		// height -= yCrop;
		int32_t L_9 = V_1;
		int32_t L_10 = ___yCrop2;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (int32_t)L_10));
		// var result = new float[width, height];
		int32_t L_11 = V_0;
		int32_t L_12 = V_1;
		il2cpp_array_size_t L_14[] = { (il2cpp_array_size_t)L_11, (il2cpp_array_size_t)L_12 };
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_13 = (SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43*)GenArrayNew(SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43_il2cpp_TypeInfo_var, L_14);
		V_3 = L_13;
		// for (var x = 0; x < width; x++)
		V_4 = 0;
		goto IL_0090;
	}

IL_0044:
	{
		// for (var y = 0; y < height; y++)
		V_5 = 0;
		goto IL_0085;
	}

IL_0049:
	{
		// if (isNormalized)
		bool L_15 = ___isNormalized3;
		if (!L_15)
		{
			goto IL_0067;
		}
	}
	{
		// sample = (data[x, y] + 1) / 2;
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_16 = V_2;
		int32_t L_17 = V_4;
		int32_t L_18 = V_5;
		NullCheck(L_16);
		float L_19;
		L_19 = (L_16)->GetAt(L_17, L_18);
		V_6 = ((float)((float)((float)il2cpp_codegen_add((float)L_19, (float)(1.0f)))/(float)(2.0f)));
		// }
		goto IL_0073;
	}

IL_0067:
	{
		// sample = data[x, y];
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_20 = V_2;
		int32_t L_21 = V_4;
		int32_t L_22 = V_5;
		NullCheck(L_20);
		float L_23;
		L_23 = (L_20)->GetAt(L_21, L_22);
		V_6 = L_23;
	}

IL_0073:
	{
		// result[x, y] = sample;
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_24 = V_3;
		int32_t L_25 = V_4;
		int32_t L_26 = V_5;
		float L_27 = V_6;
		NullCheck(L_24);
		(L_24)->SetAt(L_25, L_26, L_27);
		// for (var y = 0; y < height; y++)
		int32_t L_28 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_0085:
	{
		// for (var y = 0; y < height; y++)
		int32_t L_29 = V_5;
		int32_t L_30 = V_1;
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0049;
		}
	}
	{
		// for (var x = 0; x < width; x++)
		int32_t L_31 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_0090:
	{
		// for (var x = 0; x < width; x++)
		int32_t L_32 = V_4;
		int32_t L_33 = V_0;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_0044;
		}
	}
	{
		// return result;
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_34 = V_3;
		return L_34;
	}
}
// System.Void LibNoise.Noise2D::Clear(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Noise2D_Clear_m975D477F7D51A4F717038EB833C7013FA84B3BD1 (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, float ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (var x = 0; x < _width; x++)
		V_0 = 0;
		goto IL_0027;
	}

IL_0004:
	{
		// for (var y = 0; y < _height; y++)
		V_1 = 0;
		goto IL_001a;
	}

IL_0008:
	{
		// _data[x, y] = value;
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_0 = __this->get__data_12();
		int32_t L_1 = V_0;
		int32_t L_2 = V_1;
		float L_3 = ___value0;
		NullCheck(L_0);
		(L_0)->SetAt(L_1, L_2, L_3);
		// for (var y = 0; y < _height; y++)
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_001a:
	{
		// for (var y = 0; y < _height; y++)
		int32_t L_5 = V_1;
		int32_t L_6 = __this->get__height_11();
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0008;
		}
	}
	{
		// for (var x = 0; x < _width; x++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0027:
	{
		// for (var x = 0; x < _width; x++)
		int32_t L_8 = V_0;
		int32_t L_9 = __this->get__width_10();
		if ((((int32_t)L_8) < ((int32_t)L_9)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Double LibNoise.Noise2D::GeneratePlanar(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Noise2D_GeneratePlanar_m2710FA7ECFC07D2124C5E4D695F0E7036DE23E74 (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, double ___x0, double ___y1, const RuntimeMethod* method)
{
	{
		// return _generator.GetValue(x, 0.0, y);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_0 = __this->get__generator_18();
		double L_1 = ___x0;
		double L_2 = ___y1;
		NullCheck(L_0);
		double L_3;
		L_3 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_0, L_1, (0.0), L_2);
		return L_3;
	}
}
// System.Void LibNoise.Noise2D::GeneratePlanar(System.Double,System.Double,System.Double,System.Double,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Noise2D_GeneratePlanar_mC1170ED189AF21E18822132544CA67A67713A987 (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, double ___left0, double ___right1, double ___top2, double ___bottom3, bool ___isSeamless4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	int32_t V_5 = 0;
	double V_6 = 0.0;
	int32_t V_7 = 0;
	float V_8 = 0.0f;
	double V_9 = 0.0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	double V_14 = 0.0;
	{
		// if (right <= left || bottom <= top)
		double L_0 = ___right1;
		double L_1 = ___left0;
		if ((((double)L_0) <= ((double)L_1)))
		{
			goto IL_0009;
		}
	}
	{
		double L_2 = ___bottom3;
		double L_3 = ___top2;
		if ((!(((double)L_2) <= ((double)L_3))))
		{
			goto IL_0014;
		}
	}

IL_0009:
	{
		// throw new ArgumentException("Invalid right/left or bottom/top combination");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1659F11829F65A3C8EC878118EB90BB1DCC65F07)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Noise2D_GeneratePlanar_mC1170ED189AF21E18822132544CA67A67713A987_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if (_generator == null)
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_5 = __this->get__generator_18();
		if (L_5)
		{
			goto IL_0027;
		}
	}
	{
		// throw new ArgumentNullException("Generator is null");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_6 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDF1866D1A8E51F214D5C7176A5D1013A56ACB3CE)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Noise2D_GeneratePlanar_mC1170ED189AF21E18822132544CA67A67713A987_RuntimeMethod_var)));
	}

IL_0027:
	{
		// var xe = right - left;
		double L_7 = ___right1;
		double L_8 = ___left0;
		V_0 = ((double)il2cpp_codegen_subtract((double)L_7, (double)L_8));
		// var ze = bottom - top;
		double L_9 = ___bottom3;
		double L_10 = ___top2;
		V_1 = ((double)il2cpp_codegen_subtract((double)L_9, (double)L_10));
		// var xd = xe / ((double) _width - _ucBorder);
		double L_11 = V_0;
		int32_t L_12 = __this->get__width_10();
		int32_t L_13 = __this->get__ucBorder_15();
		V_2 = ((double)((double)L_11/(double)((double)il2cpp_codegen_subtract((double)((double)((double)L_12)), (double)((double)((double)L_13))))));
		// var zd = ze / ((double) _height - _ucBorder);
		double L_14 = V_1;
		int32_t L_15 = __this->get__height_11();
		int32_t L_16 = __this->get__ucBorder_15();
		V_3 = ((double)((double)L_14/(double)((double)il2cpp_codegen_subtract((double)((double)((double)L_15)), (double)((double)((double)L_16))))));
		// var xc = left;
		double L_17 = ___left0;
		V_4 = L_17;
		// for (var x = 0; x < _ucWidth; x++)
		V_5 = 0;
		goto IL_0184;
	}

IL_005f:
	{
		// var zc = top;
		double L_18 = ___top2;
		V_6 = L_18;
		// for (var y = 0; y < _ucHeight; y++)
		V_7 = 0;
		goto IL_016b;
	}

IL_006a:
	{
		// if (isSeamless)
		bool L_19 = ___isSeamless4;
		if (!L_19)
		{
			goto IL_007d;
		}
	}
	{
		// fv = (float) GeneratePlanar(xc, zc);
		double L_20 = V_4;
		double L_21 = V_6;
		double L_22;
		L_22 = Noise2D_GeneratePlanar_m2710FA7ECFC07D2124C5E4D695F0E7036DE23E74(__this, L_20, L_21, /*hidden argument*/NULL);
		V_8 = ((float)((float)L_22));
		// }
		goto IL_00f9;
	}

IL_007d:
	{
		// var swv = GeneratePlanar(xc, zc);
		double L_23 = V_4;
		double L_24 = V_6;
		double L_25;
		L_25 = Noise2D_GeneratePlanar_m2710FA7ECFC07D2124C5E4D695F0E7036DE23E74(__this, L_23, L_24, /*hidden argument*/NULL);
		// var sev = GeneratePlanar(xc + xe, zc);
		double L_26 = V_4;
		double L_27 = V_0;
		double L_28 = V_6;
		double L_29;
		L_29 = Noise2D_GeneratePlanar_m2710FA7ECFC07D2124C5E4D695F0E7036DE23E74(__this, ((double)il2cpp_codegen_add((double)L_26, (double)L_27)), L_28, /*hidden argument*/NULL);
		V_9 = L_29;
		// var nwv = GeneratePlanar(xc, zc + ze);
		double L_30 = V_4;
		double L_31 = V_6;
		double L_32 = V_1;
		double L_33;
		L_33 = Noise2D_GeneratePlanar_m2710FA7ECFC07D2124C5E4D695F0E7036DE23E74(__this, L_30, ((double)il2cpp_codegen_add((double)L_31, (double)L_32)), /*hidden argument*/NULL);
		V_10 = L_33;
		// var nev = GeneratePlanar(xc + xe, zc + ze);
		double L_34 = V_4;
		double L_35 = V_0;
		double L_36 = V_6;
		double L_37 = V_1;
		double L_38;
		L_38 = Noise2D_GeneratePlanar_m2710FA7ECFC07D2124C5E4D695F0E7036DE23E74(__this, ((double)il2cpp_codegen_add((double)L_34, (double)L_35)), ((double)il2cpp_codegen_add((double)L_36, (double)L_37)), /*hidden argument*/NULL);
		V_11 = L_38;
		// var xb = 1.0 - ((xc - left) / xe);
		double L_39 = V_4;
		double L_40 = ___left0;
		double L_41 = V_0;
		V_12 = ((double)il2cpp_codegen_subtract((double)(1.0), (double)((double)((double)((double)il2cpp_codegen_subtract((double)L_39, (double)L_40))/(double)L_41))));
		// var zb = 1.0 - ((zc - top) / ze);
		double L_42 = V_6;
		double L_43 = ___top2;
		double L_44 = V_1;
		V_13 = ((double)il2cpp_codegen_subtract((double)(1.0), (double)((double)((double)((double)il2cpp_codegen_subtract((double)L_42, (double)L_43))/(double)L_44))));
		// var z0 = Utils.InterpolateLinear(swv, sev, xb);
		double L_45 = V_9;
		double L_46 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		double L_47;
		L_47 = Utils_InterpolateLinear_m67C385B25C06BA3BC751E5A962CCBCAE3C2A07AF(L_25, L_45, L_46, /*hidden argument*/NULL);
		// var z1 = Utils.InterpolateLinear(nwv, nev, xb);
		double L_48 = V_10;
		double L_49 = V_11;
		double L_50 = V_12;
		double L_51;
		L_51 = Utils_InterpolateLinear_m67C385B25C06BA3BC751E5A962CCBCAE3C2A07AF(L_48, L_49, L_50, /*hidden argument*/NULL);
		V_14 = L_51;
		// fv = (float) Utils.InterpolateLinear(z0, z1, zb);
		double L_52 = V_14;
		double L_53 = V_13;
		double L_54;
		L_54 = Utils_InterpolateLinear_m67C385B25C06BA3BC751E5A962CCBCAE3C2A07AF(L_47, L_52, L_53, /*hidden argument*/NULL);
		V_8 = ((float)((float)L_54));
	}

IL_00f9:
	{
		// _ucData[x, y] = fv;
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_55 = __this->get__ucData_16();
		int32_t L_56 = V_5;
		int32_t L_57 = V_7;
		float L_58 = V_8;
		NullCheck(L_55);
		(L_55)->SetAt(L_56, L_57, L_58);
		// if (x >= _ucBorder && y >= _ucBorder && x < _width + _ucBorder &&
		//     y < _height + _ucBorder)
		int32_t L_59 = V_5;
		int32_t L_60 = __this->get__ucBorder_15();
		if ((((int32_t)L_59) < ((int32_t)L_60)))
		{
			goto IL_015f;
		}
	}
	{
		int32_t L_61 = V_7;
		int32_t L_62 = __this->get__ucBorder_15();
		if ((((int32_t)L_61) < ((int32_t)L_62)))
		{
			goto IL_015f;
		}
	}
	{
		int32_t L_63 = V_5;
		int32_t L_64 = __this->get__width_10();
		int32_t L_65 = __this->get__ucBorder_15();
		if ((((int32_t)L_63) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_64, (int32_t)L_65)))))
		{
			goto IL_015f;
		}
	}
	{
		int32_t L_66 = V_7;
		int32_t L_67 = __this->get__height_11();
		int32_t L_68 = __this->get__ucBorder_15();
		if ((((int32_t)L_66) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)L_68)))))
		{
			goto IL_015f;
		}
	}
	{
		// _data[x - _ucBorder, y - _ucBorder] = fv; // Cropped data
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_69 = __this->get__data_12();
		int32_t L_70 = V_5;
		int32_t L_71 = __this->get__ucBorder_15();
		int32_t L_72 = V_7;
		int32_t L_73 = __this->get__ucBorder_15();
		float L_74 = V_8;
		NullCheck(L_69);
		(L_69)->SetAt(((int32_t)il2cpp_codegen_subtract((int32_t)L_70, (int32_t)L_71)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_72, (int32_t)L_73)), L_74);
	}

IL_015f:
	{
		// zc += zd;
		double L_75 = V_6;
		double L_76 = V_3;
		V_6 = ((double)il2cpp_codegen_add((double)L_75, (double)L_76));
		// for (var y = 0; y < _ucHeight; y++)
		int32_t L_77 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1));
	}

IL_016b:
	{
		// for (var y = 0; y < _ucHeight; y++)
		int32_t L_78 = V_7;
		int32_t L_79 = __this->get__ucHeight_14();
		if ((((int32_t)L_78) < ((int32_t)L_79)))
		{
			goto IL_006a;
		}
	}
	{
		// xc += xd;
		double L_80 = V_4;
		double L_81 = V_2;
		V_4 = ((double)il2cpp_codegen_add((double)L_80, (double)L_81));
		// for (var x = 0; x < _ucWidth; x++)
		int32_t L_82 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_82, (int32_t)1));
	}

IL_0184:
	{
		// for (var x = 0; x < _ucWidth; x++)
		int32_t L_83 = V_5;
		int32_t L_84 = __this->get__ucWidth_13();
		if ((((int32_t)L_83) < ((int32_t)L_84)))
		{
			goto IL_005f;
		}
	}
	{
		// }
		return;
	}
}
// System.Double LibNoise.Noise2D::GenerateCylindrical(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Noise2D_GenerateCylindrical_m4FFD8E13FD137F51FCB8B8BF5CB0A2C46579111F (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, double ___angle0, double ___height1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		// var x = Math.Cos(angle * Mathf.Deg2Rad);
		double L_0 = ___angle0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = cos(((double)il2cpp_codegen_multiply((double)L_0, (double)(0.01745329238474369))));
		V_0 = L_1;
		// var y = height;
		double L_2 = ___height1;
		V_1 = L_2;
		// var z = Math.Sin(angle * Mathf.Deg2Rad);
		double L_3 = ___angle0;
		double L_4;
		L_4 = sin(((double)il2cpp_codegen_multiply((double)L_3, (double)(0.01745329238474369))));
		V_2 = L_4;
		// return _generator.GetValue(x, y, z);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_5 = __this->get__generator_18();
		double L_6 = V_0;
		double L_7 = V_1;
		double L_8 = V_2;
		NullCheck(L_5);
		double L_9;
		L_9 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_5, L_6, L_7, L_8);
		return L_9;
	}
}
// System.Void LibNoise.Noise2D::GenerateCylindrical(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Noise2D_GenerateCylindrical_m93AF9FB04A15C92A24B7AD6298D8ED323300F89A (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, double ___angleMin0, double ___angleMax1, double ___heightMin2, double ___heightMax3, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	double V_5 = 0.0;
	int32_t V_6 = 0;
	{
		// if (angleMax <= angleMin || heightMax <= heightMin)
		double L_0 = ___angleMax1;
		double L_1 = ___angleMin0;
		if ((((double)L_0) <= ((double)L_1)))
		{
			goto IL_0009;
		}
	}
	{
		double L_2 = ___heightMax3;
		double L_3 = ___heightMin2;
		if ((!(((double)L_2) <= ((double)L_3))))
		{
			goto IL_0014;
		}
	}

IL_0009:
	{
		// throw new ArgumentException("Invalid angle or height parameters");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A449875E15B9B1B47416D884EB6E9D6952472F8)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Noise2D_GenerateCylindrical_m93AF9FB04A15C92A24B7AD6298D8ED323300F89A_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if (_generator == null)
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_5 = __this->get__generator_18();
		if (L_5)
		{
			goto IL_0027;
		}
	}
	{
		// throw new ArgumentNullException("Generator is null");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_6 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDF1866D1A8E51F214D5C7176A5D1013A56ACB3CE)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Noise2D_GenerateCylindrical_m93AF9FB04A15C92A24B7AD6298D8ED323300F89A_RuntimeMethod_var)));
	}

IL_0027:
	{
		// var ae = angleMax - angleMin;
		double L_7 = ___angleMax1;
		double L_8 = ___angleMin0;
		// var he = heightMax - heightMin;
		double L_9 = ___heightMax3;
		double L_10 = ___heightMin2;
		V_0 = ((double)il2cpp_codegen_subtract((double)L_9, (double)L_10));
		// var xd = ae / ((double) _width - _ucBorder);
		int32_t L_11 = __this->get__width_10();
		int32_t L_12 = __this->get__ucBorder_15();
		V_1 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_7, (double)L_8))/(double)((double)il2cpp_codegen_subtract((double)((double)((double)L_11)), (double)((double)((double)L_12))))));
		// var yd = he / ((double) _height - _ucBorder);
		double L_13 = V_0;
		int32_t L_14 = __this->get__height_11();
		int32_t L_15 = __this->get__ucBorder_15();
		V_2 = ((double)((double)L_13/(double)((double)il2cpp_codegen_subtract((double)((double)((double)L_14)), (double)((double)((double)L_15))))));
		// var ca = angleMin;
		double L_16 = ___angleMin0;
		V_3 = L_16;
		// for (var x = 0; x < _ucWidth; x++)
		V_4 = 0;
		goto IL_0100;
	}

IL_005c:
	{
		// var ch = heightMin;
		double L_17 = ___heightMin2;
		V_5 = L_17;
		// for (var y = 0; y < _ucHeight; y++)
		V_6 = 0;
		goto IL_00e9;
	}

IL_0067:
	{
		// _ucData[x, y] = (float) GenerateCylindrical(ca, ch);
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_18 = __this->get__ucData_16();
		int32_t L_19 = V_4;
		int32_t L_20 = V_6;
		double L_21 = V_3;
		double L_22 = V_5;
		double L_23;
		L_23 = Noise2D_GenerateCylindrical_m4FFD8E13FD137F51FCB8B8BF5CB0A2C46579111F(__this, L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_18);
		(L_18)->SetAt(L_19, L_20, ((float)((float)L_23)));
		// if (x >= _ucBorder && y >= _ucBorder && x < _width + _ucBorder &&
		//     y < _height + _ucBorder)
		int32_t L_24 = V_4;
		int32_t L_25 = __this->get__ucBorder_15();
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_00dd;
		}
	}
	{
		int32_t L_26 = V_6;
		int32_t L_27 = __this->get__ucBorder_15();
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_00dd;
		}
	}
	{
		int32_t L_28 = V_4;
		int32_t L_29 = __this->get__width_10();
		int32_t L_30 = __this->get__ucBorder_15();
		if ((((int32_t)L_28) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_30)))))
		{
			goto IL_00dd;
		}
	}
	{
		int32_t L_31 = V_6;
		int32_t L_32 = __this->get__height_11();
		int32_t L_33 = __this->get__ucBorder_15();
		if ((((int32_t)L_31) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)L_33)))))
		{
			goto IL_00dd;
		}
	}
	{
		// _data[x - _ucBorder, y - _ucBorder] = (float) GenerateCylindrical(ca, ch);
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_34 = __this->get__data_12();
		int32_t L_35 = V_4;
		int32_t L_36 = __this->get__ucBorder_15();
		int32_t L_37 = V_6;
		int32_t L_38 = __this->get__ucBorder_15();
		double L_39 = V_3;
		double L_40 = V_5;
		double L_41;
		L_41 = Noise2D_GenerateCylindrical_m4FFD8E13FD137F51FCB8B8BF5CB0A2C46579111F(__this, L_39, L_40, /*hidden argument*/NULL);
		NullCheck(L_34);
		(L_34)->SetAt(((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)L_36)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)L_38)), ((float)((float)L_41)));
	}

IL_00dd:
	{
		// ch += yd;
		double L_42 = V_5;
		double L_43 = V_2;
		V_5 = ((double)il2cpp_codegen_add((double)L_42, (double)L_43));
		// for (var y = 0; y < _ucHeight; y++)
		int32_t L_44 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_00e9:
	{
		// for (var y = 0; y < _ucHeight; y++)
		int32_t L_45 = V_6;
		int32_t L_46 = __this->get__ucHeight_14();
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_0067;
		}
	}
	{
		// ca += xd;
		double L_47 = V_3;
		double L_48 = V_1;
		V_3 = ((double)il2cpp_codegen_add((double)L_47, (double)L_48));
		// for (var x = 0; x < _ucWidth; x++)
		int32_t L_49 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_0100:
	{
		// for (var x = 0; x < _ucWidth; x++)
		int32_t L_50 = V_4;
		int32_t L_51 = __this->get__ucWidth_13();
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_005c;
		}
	}
	{
		// }
		return;
	}
}
// System.Double LibNoise.Noise2D::GenerateSpherical(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Noise2D_GenerateSpherical_m2DF71C573F5F60640402CEEE79C9F3E4B907E99C (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, double ___lat0, double ___lon1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// var r = Math.Cos(Mathf.Deg2Rad * lat);
		double L_0 = ___lat0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = cos(((double)il2cpp_codegen_multiply((double)(0.01745329238474369), (double)L_0)));
		V_0 = L_1;
		// return _generator.GetValue(r * Math.Cos(Mathf.Deg2Rad * lon), Math.Sin(Mathf.Deg2Rad * lat),
		//     r * Math.Sin(Mathf.Deg2Rad * lon));
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_2 = __this->get__generator_18();
		double L_3 = V_0;
		double L_4 = ___lon1;
		double L_5;
		L_5 = cos(((double)il2cpp_codegen_multiply((double)(0.01745329238474369), (double)L_4)));
		double L_6 = ___lat0;
		double L_7;
		L_7 = sin(((double)il2cpp_codegen_multiply((double)(0.01745329238474369), (double)L_6)));
		double L_8 = V_0;
		double L_9 = ___lon1;
		double L_10;
		L_10 = sin(((double)il2cpp_codegen_multiply((double)(0.01745329238474369), (double)L_9)));
		NullCheck(L_2);
		double L_11;
		L_11 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_2, ((double)il2cpp_codegen_multiply((double)L_3, (double)L_5)), L_7, ((double)il2cpp_codegen_multiply((double)L_8, (double)L_10)));
		return L_11;
	}
}
// System.Void LibNoise.Noise2D::GenerateSpherical(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Noise2D_GenerateSpherical_m5A7E5A9608723DEA6E083BB095B413F16A41BAF8 (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, double ___south0, double ___north1, double ___west2, double ___east3, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	int32_t V_4 = 0;
	double V_5 = 0.0;
	int32_t V_6 = 0;
	{
		// if (east <= west || south <= north)
		double L_0 = ___east3;
		double L_1 = ___west2;
		if ((((double)L_0) <= ((double)L_1)))
		{
			goto IL_0009;
		}
	}
	{
		double L_2 = ___south0;
		double L_3 = ___north1;
		if ((!(((double)L_2) <= ((double)L_3))))
		{
			goto IL_0014;
		}
	}

IL_0009:
	{
		// throw new ArgumentException("Invalid east/west or north/south combination");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD2561016BE3142BD57B7AF7ED7B085A492AE4C65)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Noise2D_GenerateSpherical_m5A7E5A9608723DEA6E083BB095B413F16A41BAF8_RuntimeMethod_var)));
	}

IL_0014:
	{
		// if (_generator == null)
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_5 = __this->get__generator_18();
		if (L_5)
		{
			goto IL_0027;
		}
	}
	{
		// throw new ArgumentNullException("Generator is null");
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_6 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDF1866D1A8E51F214D5C7176A5D1013A56ACB3CE)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Noise2D_GenerateSpherical_m5A7E5A9608723DEA6E083BB095B413F16A41BAF8_RuntimeMethod_var)));
	}

IL_0027:
	{
		// var loe = east - west;
		double L_7 = ___east3;
		double L_8 = ___west2;
		// var lae = north - south;
		double L_9 = ___north1;
		double L_10 = ___south0;
		V_0 = ((double)il2cpp_codegen_subtract((double)L_9, (double)L_10));
		// var xd = loe / ((double) _width - _ucBorder);
		int32_t L_11 = __this->get__width_10();
		int32_t L_12 = __this->get__ucBorder_15();
		V_1 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_7, (double)L_8))/(double)((double)il2cpp_codegen_subtract((double)((double)((double)L_11)), (double)((double)((double)L_12))))));
		// var yd = lae / ((double) _height - _ucBorder);
		double L_13 = V_0;
		int32_t L_14 = __this->get__height_11();
		int32_t L_15 = __this->get__ucBorder_15();
		V_2 = ((double)((double)L_13/(double)((double)il2cpp_codegen_subtract((double)((double)((double)L_14)), (double)((double)((double)L_15))))));
		// var clo = west;
		double L_16 = ___west2;
		V_3 = L_16;
		// for (var x = 0; x < _ucWidth; x++)
		V_4 = 0;
		goto IL_0100;
	}

IL_005c:
	{
		// var cla = south;
		double L_17 = ___south0;
		V_5 = L_17;
		// for (var y = 0; y < _ucHeight; y++)
		V_6 = 0;
		goto IL_00e9;
	}

IL_0067:
	{
		// _ucData[x, y] = (float) GenerateSpherical(cla, clo);
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_18 = __this->get__ucData_16();
		int32_t L_19 = V_4;
		int32_t L_20 = V_6;
		double L_21 = V_5;
		double L_22 = V_3;
		double L_23;
		L_23 = Noise2D_GenerateSpherical_m2DF71C573F5F60640402CEEE79C9F3E4B907E99C(__this, L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_18);
		(L_18)->SetAt(L_19, L_20, ((float)((float)L_23)));
		// if (x >= _ucBorder && y >= _ucBorder && x < _width + _ucBorder &&
		//     y < _height + _ucBorder)
		int32_t L_24 = V_4;
		int32_t L_25 = __this->get__ucBorder_15();
		if ((((int32_t)L_24) < ((int32_t)L_25)))
		{
			goto IL_00dd;
		}
	}
	{
		int32_t L_26 = V_6;
		int32_t L_27 = __this->get__ucBorder_15();
		if ((((int32_t)L_26) < ((int32_t)L_27)))
		{
			goto IL_00dd;
		}
	}
	{
		int32_t L_28 = V_4;
		int32_t L_29 = __this->get__width_10();
		int32_t L_30 = __this->get__ucBorder_15();
		if ((((int32_t)L_28) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)L_30)))))
		{
			goto IL_00dd;
		}
	}
	{
		int32_t L_31 = V_6;
		int32_t L_32 = __this->get__height_11();
		int32_t L_33 = __this->get__ucBorder_15();
		if ((((int32_t)L_31) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)L_33)))))
		{
			goto IL_00dd;
		}
	}
	{
		// _data[x - _ucBorder, y - _ucBorder] = (float) GenerateSpherical(cla, clo);
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_34 = __this->get__data_12();
		int32_t L_35 = V_4;
		int32_t L_36 = __this->get__ucBorder_15();
		int32_t L_37 = V_6;
		int32_t L_38 = __this->get__ucBorder_15();
		double L_39 = V_5;
		double L_40 = V_3;
		double L_41;
		L_41 = Noise2D_GenerateSpherical_m2DF71C573F5F60640402CEEE79C9F3E4B907E99C(__this, L_39, L_40, /*hidden argument*/NULL);
		NullCheck(L_34);
		(L_34)->SetAt(((int32_t)il2cpp_codegen_subtract((int32_t)L_35, (int32_t)L_36)), ((int32_t)il2cpp_codegen_subtract((int32_t)L_37, (int32_t)L_38)), ((float)((float)L_41)));
	}

IL_00dd:
	{
		// cla += yd;
		double L_42 = V_5;
		double L_43 = V_2;
		V_5 = ((double)il2cpp_codegen_add((double)L_42, (double)L_43));
		// for (var y = 0; y < _ucHeight; y++)
		int32_t L_44 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_44, (int32_t)1));
	}

IL_00e9:
	{
		// for (var y = 0; y < _ucHeight; y++)
		int32_t L_45 = V_6;
		int32_t L_46 = __this->get__ucHeight_14();
		if ((((int32_t)L_45) < ((int32_t)L_46)))
		{
			goto IL_0067;
		}
	}
	{
		// clo += xd;
		double L_47 = V_3;
		double L_48 = V_1;
		V_3 = ((double)il2cpp_codegen_add((double)L_47, (double)L_48));
		// for (var x = 0; x < _ucWidth; x++)
		int32_t L_49 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1));
	}

IL_0100:
	{
		// for (var x = 0; x < _ucWidth; x++)
		int32_t L_50 = V_4;
		int32_t L_51 = __this->get__ucWidth_13();
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_005c;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Texture2D LibNoise.Noise2D::GetTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * Noise2D_GetTexture_m489DB78CEF9D504D339519168E764BB212350855 (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetTexture(GradientPresets.Grayscale);
		IL2CPP_RUNTIME_CLASS_INIT(GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var);
		Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * L_0;
		L_0 = GradientPresets_get_Grayscale_m32ED2651CD017DA8BFA22301110834F3BED7DCBB_inline(/*hidden argument*/NULL);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_1;
		L_1 = Noise2D_GetTexture_m3FE5327997772C943E3DDCA036245C037B7951E6(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// UnityEngine.Texture2D LibNoise.Noise2D::GetTexture(UnityEngine.Gradient)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * Noise2D_GetTexture_m3FE5327997772C943E3DDCA036245C037B7951E6 (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * ___gradient0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_0 = NULL;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	{
		// var texture = new Texture2D(_width, _height);
		int32_t L_0 = __this->get__width_10();
		int32_t L_1 = __this->get__height_11();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// var pixels = new Color[_width * _height];
		int32_t L_3 = __this->get__width_10();
		int32_t L_4 = __this->get__height_11();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_5 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)L_4)));
		V_1 = L_5;
		// for (var x = 0; x < _width; x++)
		V_2 = 0;
		goto IL_00b1;
	}

IL_002c:
	{
		// for (var y = 0; y < _height; y++)
		V_3 = 0;
		goto IL_00a4;
	}

IL_0030:
	{
		// if (!float.IsNaN(_borderValue) &&
		//     (x == 0 || x == _width - _ucBorder || y == 0 || y == _height - _ucBorder))
		float L_6 = __this->get__borderValue_17();
		bool L_7;
		L_7 = Single_IsNaN_m458FF076EF1944D4D888A585F7C6C49DA4730599(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_8 = V_2;
		if (!L_8)
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_9 = V_2;
		int32_t L_10 = __this->get__width_10();
		int32_t L_11 = __this->get__ucBorder_15();
		if ((((int32_t)L_9) == ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)L_11)))))
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_12 = V_3;
		if (!L_12)
		{
			goto IL_0063;
		}
	}
	{
		int32_t L_13 = V_3;
		int32_t L_14 = __this->get__height_11();
		int32_t L_15 = __this->get__ucBorder_15();
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_14, (int32_t)L_15))))))
		{
			goto IL_006d;
		}
	}

IL_0063:
	{
		// sample = _borderValue;
		float L_16 = __this->get__borderValue_17();
		V_4 = L_16;
		// }
		goto IL_007c;
	}

IL_006d:
	{
		// sample = _data[x, y];
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_17 = __this->get__data_12();
		int32_t L_18 = V_2;
		int32_t L_19 = V_3;
		NullCheck(L_17);
		float L_20;
		L_20 = (L_17)->GetAt(L_18, L_19);
		V_4 = L_20;
	}

IL_007c:
	{
		// pixels[x + y * _width] = gradient.Evaluate((sample + 1) / 2);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_21 = V_1;
		int32_t L_22 = V_2;
		int32_t L_23 = V_3;
		int32_t L_24 = __this->get__width_10();
		Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * L_25 = ___gradient0;
		float L_26 = V_4;
		NullCheck(L_25);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_27;
		L_27 = Gradient_Evaluate_m02EA0BFD41864C8673A29333EBC4569C9DAA3E37(L_25, ((float)((float)((float)il2cpp_codegen_add((float)L_26, (float)(1.0f)))/(float)(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_21);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_23, (int32_t)L_24))))), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_27);
		// for (var y = 0; y < _height; y++)
		int32_t L_28 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1));
	}

IL_00a4:
	{
		// for (var y = 0; y < _height; y++)
		int32_t L_29 = V_3;
		int32_t L_30 = __this->get__height_11();
		if ((((int32_t)L_29) < ((int32_t)L_30)))
		{
			goto IL_0030;
		}
	}
	{
		// for (var x = 0; x < _width; x++)
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1));
	}

IL_00b1:
	{
		// for (var x = 0; x < _width; x++)
		int32_t L_32 = V_2;
		int32_t L_33 = __this->get__width_10();
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_002c;
		}
	}
	{
		// texture.SetPixels(pixels);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_34 = V_0;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_35 = V_1;
		NullCheck(L_34);
		Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F(L_34, L_35, /*hidden argument*/NULL);
		// texture.wrapMode = TextureWrapMode.Clamp;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_36 = V_0;
		NullCheck(L_36);
		Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D(L_36, 1, /*hidden argument*/NULL);
		// texture.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_37 = V_0;
		NullCheck(L_37);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_37, /*hidden argument*/NULL);
		// return texture;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_38 = V_0;
		return L_38;
	}
}
// UnityEngine.Texture2D LibNoise.Noise2D::GetNormalMap(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * Noise2D_GetNormalMap_m7C3BA24E3BB1F3451C219521EEAD19A65995BD0E (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, float ___intensity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_0 = NULL;
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_8;
	memset((&V_8), 0, sizeof(V_8));
	{
		// var texture = new Texture2D(_width, _height);
		int32_t L_0 = __this->get__width_10();
		int32_t L_1 = __this->get__height_11();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_2 = (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)il2cpp_codegen_object_new(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF_il2cpp_TypeInfo_var);
		Texture2D__ctor_m7D64AB4C55A01F2EE57483FD9EF826607DF9E4B4(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// var pixels = new Color[_width * _height];
		int32_t L_3 = __this->get__width_10();
		int32_t L_4 = __this->get__height_11();
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_5 = (ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834*)SZArrayNew(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_3, (int32_t)L_4)));
		V_1 = L_5;
		// for (var x = 0; x < _ucWidth; x++)
		V_2 = 0;
		goto IL_01d0;
	}

IL_002c:
	{
		// for (var y = 0; y < _ucHeight; y++)
		V_3 = 0;
		goto IL_01c0;
	}

IL_0033:
	{
		// var xPos = (_ucData[Mathf.Max(0, x - _ucBorder), y] -
		//             _ucData[Mathf.Min(x + _ucBorder, _width + _ucBorder), y]) / 2;
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_6 = __this->get__ucData_16();
		int32_t L_7 = V_2;
		int32_t L_8 = __this->get__ucBorder_15();
		int32_t L_9;
		L_9 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8)), /*hidden argument*/NULL);
		int32_t L_10 = V_3;
		NullCheck(L_6);
		float L_11;
		L_11 = (L_6)->GetAt(L_9, L_10);
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_12 = __this->get__ucData_16();
		int32_t L_13 = V_2;
		int32_t L_14 = __this->get__ucBorder_15();
		int32_t L_15 = __this->get__width_10();
		int32_t L_16 = __this->get__ucBorder_15();
		int32_t L_17;
		L_17 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14)), ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16)), /*hidden argument*/NULL);
		int32_t L_18 = V_3;
		NullCheck(L_12);
		float L_19;
		L_19 = (L_12)->GetAt(L_17, L_18);
		V_4 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_11, (float)L_19))/(float)(2.0f)));
		// var yPos = (_ucData[x, Mathf.Max(0, y - _ucBorder)] -
		//             _ucData[x, Mathf.Min(y + _ucBorder, _height + _ucBorder)]) / 2;
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_20 = __this->get__ucData_16();
		int32_t L_21 = V_2;
		int32_t L_22 = V_3;
		int32_t L_23 = __this->get__ucBorder_15();
		int32_t L_24;
		L_24 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)L_23)), /*hidden argument*/NULL);
		NullCheck(L_20);
		float L_25;
		L_25 = (L_20)->GetAt(L_21, L_24);
		SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43* L_26 = __this->get__ucData_16();
		int32_t L_27 = V_2;
		int32_t L_28 = V_3;
		int32_t L_29 = __this->get__ucBorder_15();
		int32_t L_30 = __this->get__height_11();
		int32_t L_31 = __this->get__ucBorder_15();
		int32_t L_32;
		L_32 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)L_29)), ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)L_31)), /*hidden argument*/NULL);
		NullCheck(L_26);
		float L_33;
		L_33 = (L_26)->GetAt(L_27, L_32);
		V_5 = ((float)((float)((float)il2cpp_codegen_subtract((float)L_25, (float)L_33))/(float)(2.0f)));
		// var normalX = new Vector3(xPos * intensity, 0, 1);
		float L_34 = V_4;
		float L_35 = ___intensity0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_36), ((float)il2cpp_codegen_multiply((float)L_34, (float)L_35)), (0.0f), (1.0f), /*hidden argument*/NULL);
		// var normalY = new Vector3(0, yPos * intensity, 1);
		float L_37 = V_5;
		float L_38 = ___intensity0;
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_6), (0.0f), ((float)il2cpp_codegen_multiply((float)L_37, (float)L_38)), (1.0f), /*hidden argument*/NULL);
		// var normalVector = normalX + normalY;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40;
		L_40 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_36, L_39, /*hidden argument*/NULL);
		V_7 = L_40;
		// normalVector.Normalize();
		Vector3_Normalize_m2258C159121FC81954C301DEE631BC24FCEDE780((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_7), /*hidden argument*/NULL);
		// var colorVector = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_41;
		L_41 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_8 = L_41;
		// colorVector.x = (normalVector.x + 1) / 2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_42 = V_7;
		float L_43 = L_42.get_x_2();
		(&V_8)->set_x_2(((float)((float)((float)il2cpp_codegen_add((float)L_43, (float)(1.0f)))/(float)(2.0f))));
		// colorVector.y = (normalVector.y + 1) / 2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_44 = V_7;
		float L_45 = L_44.get_y_3();
		(&V_8)->set_y_3(((float)((float)((float)il2cpp_codegen_add((float)L_45, (float)(1.0f)))/(float)(2.0f))));
		// colorVector.z = (normalVector.z + 1) / 2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = V_7;
		float L_47 = L_46.get_z_4();
		(&V_8)->set_z_4(((float)((float)((float)il2cpp_codegen_add((float)L_47, (float)(1.0f)))/(float)(2.0f))));
		// if (x >= _ucBorder && y >= _ucBorder && x < _width + _ucBorder &&
		//     y < _height + _ucBorder)
		int32_t L_48 = V_2;
		int32_t L_49 = __this->get__ucBorder_15();
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_01bc;
		}
	}
	{
		int32_t L_50 = V_3;
		int32_t L_51 = __this->get__ucBorder_15();
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_01bc;
		}
	}
	{
		int32_t L_52 = V_2;
		int32_t L_53 = __this->get__width_10();
		int32_t L_54 = __this->get__ucBorder_15();
		if ((((int32_t)L_52) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)L_54)))))
		{
			goto IL_01bc;
		}
	}
	{
		int32_t L_55 = V_3;
		int32_t L_56 = __this->get__height_11();
		int32_t L_57 = __this->get__ucBorder_15();
		if ((((int32_t)L_55) >= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)L_57)))))
		{
			goto IL_01bc;
		}
	}
	{
		// pixels[(x - _ucBorder) + (y - _ucBorder) * _width] = new Color(colorVector.x,
		//     colorVector.y, colorVector.z);
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_58 = V_1;
		int32_t L_59 = V_2;
		int32_t L_60 = __this->get__ucBorder_15();
		int32_t L_61 = V_3;
		int32_t L_62 = __this->get__ucBorder_15();
		int32_t L_63 = __this->get__width_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_64 = V_8;
		float L_65 = L_64.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66 = V_8;
		float L_67 = L_66.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_68 = V_8;
		float L_69 = L_68.get_z_4();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_70;
		memset((&L_70), 0, sizeof(L_70));
		Color__ctor_m9FEDC8486B9D40C01BF10FDC821F5E76C8705494((&L_70), L_65, L_67, L_69, /*hidden argument*/NULL);
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_59, (int32_t)L_60)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_61, (int32_t)L_62)), (int32_t)L_63))))), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_70);
	}

IL_01bc:
	{
		// for (var y = 0; y < _ucHeight; y++)
		int32_t L_71 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)1));
	}

IL_01c0:
	{
		// for (var y = 0; y < _ucHeight; y++)
		int32_t L_72 = V_3;
		int32_t L_73 = __this->get__ucHeight_14();
		if ((((int32_t)L_72) < ((int32_t)L_73)))
		{
			goto IL_0033;
		}
	}
	{
		// for (var x = 0; x < _ucWidth; x++)
		int32_t L_74 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_74, (int32_t)1));
	}

IL_01d0:
	{
		// for (var x = 0; x < _ucWidth; x++)
		int32_t L_75 = V_2;
		int32_t L_76 = __this->get__ucWidth_13();
		if ((((int32_t)L_75) < ((int32_t)L_76)))
		{
			goto IL_002c;
		}
	}
	{
		// texture.SetPixels(pixels);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_77 = V_0;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_78 = V_1;
		NullCheck(L_77);
		Texture2D_SetPixels_m5FBA81041D65F8641C3107195D390EE65467FB4F(L_77, L_78, /*hidden argument*/NULL);
		// texture.wrapMode = TextureWrapMode.Clamp;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_79 = V_0;
		NullCheck(L_79);
		Texture_set_wrapMode_m1233D2DF48DC20996F8EE26E866D4BDD2AC8050D(L_79, 1, /*hidden argument*/NULL);
		// texture.Apply();
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_80 = V_0;
		NullCheck(L_80);
		Texture2D_Apply_m3BB3975288119BA62ED9BE4243F7767EC2F88CA0(L_80, /*hidden argument*/NULL);
		// return texture;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_81 = V_0;
		return L_81;
	}
}
// System.Boolean LibNoise.Noise2D::get_IsDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Noise2D_get_IsDisposed_m852C4CCEF8B59A1262238CDBADA05B2F15EF6DAE (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, const RuntimeMethod* method)
{
	{
		// get { return _disposed; }
		bool L_0 = __this->get__disposed_19();
		return L_0;
	}
}
// System.Void LibNoise.Noise2D::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Noise2D_Dispose_m0725E2C453CF79A421793577AFD5C88E68DD1835 (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_disposed)
		bool L_0 = __this->get__disposed_19();
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		// _disposed = Disposing();
		bool L_1;
		L_1 = VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean LibNoise.Noise2D::Disposing() */, __this);
		__this->set__disposed_19(L_1);
	}

IL_0014:
	{
		// GC.SuppressFinalize(this);
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean LibNoise.Noise2D::Disposing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Noise2D_Disposing_mB1C977F93BF6D66881C23EE4D555746123C3A672 (Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6 * __this, const RuntimeMethod* method)
{
	{
		// _data = null;
		__this->set__data_12((SingleU5BU2CU5D_tC8145CABE3D285E5B2969DB657D4DE43A135BB43*)NULL);
		// _width = 0;
		__this->set__width_10(0);
		// _height = 0;
		__this->set__height_11(0);
		// return true;
		return (bool)1;
	}
}
// System.Void LibNoise.Noise2D::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Noise2D__cctor_m348CB58D7E683E01DDA207ED0E9E470AEF9A6E51 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly double South = -90.0;
		((Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_StaticFields*)il2cpp_codegen_static_fields_for(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_il2cpp_TypeInfo_var))->set_South_0((-90.0));
		// public static readonly double North = 90.0;
		((Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_StaticFields*)il2cpp_codegen_static_fields_for(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_il2cpp_TypeInfo_var))->set_North_1((90.0));
		// public static readonly double West = -180.0;
		((Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_StaticFields*)il2cpp_codegen_static_fields_for(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_il2cpp_TypeInfo_var))->set_West_2((-180.0));
		// public static readonly double East = 180.0;
		((Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_StaticFields*)il2cpp_codegen_static_fields_for(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_il2cpp_TypeInfo_var))->set_East_3((180.0));
		// public static readonly double AngleMin = -180.0;
		((Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_StaticFields*)il2cpp_codegen_static_fields_for(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_il2cpp_TypeInfo_var))->set_AngleMin_4((-180.0));
		// public static readonly double AngleMax = 180.0;
		((Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_StaticFields*)il2cpp_codegen_static_fields_for(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_il2cpp_TypeInfo_var))->set_AngleMax_5((180.0));
		// public static readonly double Left = -1.0;
		((Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_StaticFields*)il2cpp_codegen_static_fields_for(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_il2cpp_TypeInfo_var))->set_Left_6((-1.0));
		// public static readonly double Right = 1.0;
		((Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_StaticFields*)il2cpp_codegen_static_fields_for(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_il2cpp_TypeInfo_var))->set_Right_7((1.0));
		// public static readonly double Top = -1.0;
		((Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_StaticFields*)il2cpp_codegen_static_fields_for(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_il2cpp_TypeInfo_var))->set_Top_8((-1.0));
		// public static readonly double Bottom = 1.0;
		((Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_StaticFields*)il2cpp_codegen_static_fields_for(Noise2D_t0C6687358CF52C45DE527B2F91142137B27AFFC6_il2cpp_TypeInfo_var))->set_Bottom_9((1.0));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Generator.Perlin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Perlin__ctor_mA8440D2FF16976DB7027C7A55AFF58DB7B01F1C4 (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, const RuntimeMethod* method)
{
	{
		// private double _frequency = 1.0;
		__this->set__frequency_2((1.0));
		// private double _lacunarity = 2.0;
		__this->set__lacunarity_3((2.0));
		// private QualityMode _quality = QualityMode.Medium;
		__this->set__quality_4(1);
		// private int _octaveCount = 6;
		__this->set__octaveCount_5(6);
		// private double _persistence = 0.5;
		__this->set__persistence_6((0.5));
		// : base(0)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Generator.Perlin::.ctor(System.Double,System.Double,System.Double,System.Int32,System.Int32,LibNoise.QualityMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Perlin__ctor_m2CEE68C8B505D3DC66AF5BDABA0F0E822F9C2808 (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, double ___frequency0, double ___lacunarity1, double ___persistence2, int32_t ___octaves3, int32_t ___seed4, int32_t ___quality5, const RuntimeMethod* method)
{
	{
		// private double _frequency = 1.0;
		__this->set__frequency_2((1.0));
		// private double _lacunarity = 2.0;
		__this->set__lacunarity_3((2.0));
		// private QualityMode _quality = QualityMode.Medium;
		__this->set__quality_4(1);
		// private int _octaveCount = 6;
		__this->set__octaveCount_5(6);
		// private double _persistence = 0.5;
		__this->set__persistence_6((0.5));
		// : base(0)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 0, /*hidden argument*/NULL);
		// Frequency = frequency;
		double L_0 = ___frequency0;
		Perlin_set_Frequency_m094C85FD638DD0C24CBB608E0FA36971242BA271_inline(__this, L_0, /*hidden argument*/NULL);
		// Lacunarity = lacunarity;
		double L_1 = ___lacunarity1;
		Perlin_set_Lacunarity_mA18A66C6FFD01EAB967DDF0932C494EF6CA06FF9_inline(__this, L_1, /*hidden argument*/NULL);
		// OctaveCount = octaves;
		int32_t L_2 = ___octaves3;
		Perlin_set_OctaveCount_mE516F4E18DAD9F9E527E13809A86463A47017FC9(__this, L_2, /*hidden argument*/NULL);
		// Persistence = persistence;
		double L_3 = ___persistence2;
		Perlin_set_Persistence_m2CA1B1D372AAD4199212DAD250D1EF6C2CF3D793_inline(__this, L_3, /*hidden argument*/NULL);
		// Seed = seed;
		int32_t L_4 = ___seed4;
		Perlin_set_Seed_m106B83E8805A46A44CB68874E86D9E430EB45DF2_inline(__this, L_4, /*hidden argument*/NULL);
		// Quality = quality;
		int32_t L_5 = ___quality5;
		Perlin_set_Quality_m47AF66301CAE1E7354C6368983B297179B6F57CD_inline(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Double LibNoise.Generator.Perlin::get_Frequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Perlin_get_Frequency_mEAE3E2E0985EDE739F576F750F3E4E1AAAEEE196 (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, const RuntimeMethod* method)
{
	{
		// get { return _frequency; }
		double L_0 = __this->get__frequency_2();
		return L_0;
	}
}
// System.Void LibNoise.Generator.Perlin::set_Frequency(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Perlin_set_Frequency_m094C85FD638DD0C24CBB608E0FA36971242BA271 (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _frequency = value; }
		double L_0 = ___value0;
		__this->set__frequency_2(L_0);
		// set { _frequency = value; }
		return;
	}
}
// System.Double LibNoise.Generator.Perlin::get_Lacunarity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Perlin_get_Lacunarity_m30A9800BFEE6673A34893CD847895BDA7E556F5D (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, const RuntimeMethod* method)
{
	{
		// get { return _lacunarity; }
		double L_0 = __this->get__lacunarity_3();
		return L_0;
	}
}
// System.Void LibNoise.Generator.Perlin::set_Lacunarity(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Perlin_set_Lacunarity_mA18A66C6FFD01EAB967DDF0932C494EF6CA06FF9 (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _lacunarity = value; }
		double L_0 = ___value0;
		__this->set__lacunarity_3(L_0);
		// set { _lacunarity = value; }
		return;
	}
}
// LibNoise.QualityMode LibNoise.Generator.Perlin::get_Quality()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Perlin_get_Quality_m4A3018E835F46BDC91400E8BE7090C52D92D9A2E (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, const RuntimeMethod* method)
{
	{
		// get { return _quality; }
		int32_t L_0 = __this->get__quality_4();
		return L_0;
	}
}
// System.Void LibNoise.Generator.Perlin::set_Quality(LibNoise.QualityMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Perlin_set_Quality_m47AF66301CAE1E7354C6368983B297179B6F57CD (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { _quality = value; }
		int32_t L_0 = ___value0;
		__this->set__quality_4(L_0);
		// set { _quality = value; }
		return;
	}
}
// System.Int32 LibNoise.Generator.Perlin::get_OctaveCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Perlin_get_OctaveCount_mC78AF4F84B21D3ECC0E6E0CB89C476D38B39B475 (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, const RuntimeMethod* method)
{
	{
		// get { return _octaveCount; }
		int32_t L_0 = __this->get__octaveCount_5();
		return L_0;
	}
}
// System.Void LibNoise.Generator.Perlin::set_OctaveCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Perlin_set_OctaveCount_mE516F4E18DAD9F9E527E13809A86463A47017FC9 (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { _octaveCount = Mathf.Clamp(value, 1, Utils.OctavesMaximum); }
		int32_t L_0 = ___value0;
		int32_t L_1;
		L_1 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_0, 1, ((int32_t)30), /*hidden argument*/NULL);
		__this->set__octaveCount_5(L_1);
		// set { _octaveCount = Mathf.Clamp(value, 1, Utils.OctavesMaximum); }
		return;
	}
}
// System.Double LibNoise.Generator.Perlin::get_Persistence()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Perlin_get_Persistence_m189A75E391C88E258082FCB361A182A4CC0B38EB (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, const RuntimeMethod* method)
{
	{
		// get { return _persistence; }
		double L_0 = __this->get__persistence_6();
		return L_0;
	}
}
// System.Void LibNoise.Generator.Perlin::set_Persistence(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Perlin_set_Persistence_m2CA1B1D372AAD4199212DAD250D1EF6C2CF3D793 (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _persistence = value; }
		double L_0 = ___value0;
		__this->set__persistence_6(L_0);
		// set { _persistence = value; }
		return;
	}
}
// System.Int32 LibNoise.Generator.Perlin::get_Seed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Perlin_get_Seed_m70376C13B6270AF177140300B0E85AEB2C7032B7 (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, const RuntimeMethod* method)
{
	{
		// get { return _seed; }
		int32_t L_0 = __this->get__seed_7();
		return L_0;
	}
}
// System.Void LibNoise.Generator.Perlin::set_Seed(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Perlin_set_Seed_m106B83E8805A46A44CB68874E86D9E430EB45DF2 (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { _seed = value; }
		int32_t L_0 = ___value0;
		__this->set__seed_7(L_0);
		// set { _seed = value; }
		return;
	}
}
// System.Double LibNoise.Generator.Perlin::GetValue(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Perlin_GetValue_m41BF28D9244B5A793693C416041D8DBEC1F69709 (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	int64_t V_5 = 0;
	double V_6 = 0.0;
	{
		// var value       = 0.0;
		V_0 = (0.0);
		// var amplitude   = 1.0;
		V_1 = (1.0);
		// x *= _frequency;
		double L_0 = ___x0;
		double L_1 = __this->get__frequency_2();
		___x0 = ((double)il2cpp_codegen_multiply((double)L_0, (double)L_1));
		// y *= _frequency;
		double L_2 = ___y1;
		double L_3 = __this->get__frequency_2();
		___y1 = ((double)il2cpp_codegen_multiply((double)L_2, (double)L_3));
		// z *= _frequency;
		double L_4 = ___z2;
		double L_5 = __this->get__frequency_2();
		___z2 = ((double)il2cpp_codegen_multiply((double)L_4, (double)L_5));
		// for (var i = 0; i < _octaveCount; i++)
		V_2 = 0;
		goto IL_009d;
	}

IL_0036:
	{
		// var nx = Utils.MakeInt32Range(x);
		double L_6 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		double L_7;
		L_7 = Utils_MakeInt32Range_m38E96B1EC6FD2C8CC3E6350486B2DA4523DEA945(L_6, /*hidden argument*/NULL);
		// var ny = Utils.MakeInt32Range(y);
		double L_8 = ___y1;
		double L_9;
		L_9 = Utils_MakeInt32Range_m38E96B1EC6FD2C8CC3E6350486B2DA4523DEA945(L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		// var nz = Utils.MakeInt32Range(z);
		double L_10 = ___z2;
		double L_11;
		L_11 = Utils_MakeInt32Range_m38E96B1EC6FD2C8CC3E6350486B2DA4523DEA945(L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		// var seed = (_seed + i) & 0xffffffff;
		int32_t L_12 = __this->get__seed_7();
		int32_t L_13 = V_2;
		V_5 = ((int64_t)((int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13))))&(int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)(-1)))))));
		// var signal = Utils.GradientCoherentNoise3D(nx, ny, nz, seed, _quality);
		double L_14 = V_3;
		double L_15 = V_4;
		int64_t L_16 = V_5;
		int32_t L_17 = __this->get__quality_4();
		double L_18;
		L_18 = Utils_GradientCoherentNoise3D_m14EC2F50807ACC5ACFDF3037ED5145768F1F6222(L_7, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		V_6 = L_18;
		// value += signal * amplitude;
		double L_19 = V_0;
		double L_20 = V_6;
		double L_21 = V_1;
		V_0 = ((double)il2cpp_codegen_add((double)L_19, (double)((double)il2cpp_codegen_multiply((double)L_20, (double)L_21))));
		// x *= _lacunarity;
		double L_22 = ___x0;
		double L_23 = __this->get__lacunarity_3();
		___x0 = ((double)il2cpp_codegen_multiply((double)L_22, (double)L_23));
		// y *= _lacunarity;
		double L_24 = ___y1;
		double L_25 = __this->get__lacunarity_3();
		___y1 = ((double)il2cpp_codegen_multiply((double)L_24, (double)L_25));
		// z *= _lacunarity;
		double L_26 = ___z2;
		double L_27 = __this->get__lacunarity_3();
		___z2 = ((double)il2cpp_codegen_multiply((double)L_26, (double)L_27));
		// amplitude *= _persistence;
		double L_28 = V_1;
		double L_29 = __this->get__persistence_6();
		V_1 = ((double)il2cpp_codegen_multiply((double)L_28, (double)L_29));
		// for (var i = 0; i < _octaveCount; i++)
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1));
	}

IL_009d:
	{
		// for (var i = 0; i < _octaveCount; i++)
		int32_t L_31 = V_2;
		int32_t L_32 = __this->get__octaveCount_5();
		if ((((int32_t)L_31) < ((int32_t)L_32)))
		{
			goto IL_0036;
		}
	}
	{
		// return value;
		double L_33 = V_0;
		return L_33;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Operator.Power::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Power__ctor_m325349F88B808558C9B517F86CCF450D16382F8A (Power_tCDBE7D5ADEDE8730D9B958823060C25BC396AB3A * __this, const RuntimeMethod* method)
{
	{
		// : base(2)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Power::.ctor(LibNoise.ModuleBase,LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Power__ctor_mE328B6A2DF549B91373014237E6C4210CB4B21F3 (Power_tCDBE7D5ADEDE8730D9B958823060C25BC396AB3A * __this, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___lhs0, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___rhs1, const RuntimeMethod* method)
{
	{
		// : base(2)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 2, /*hidden argument*/NULL);
		// Modules[0] = lhs;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___lhs0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_1);
		// Modules[1] = rhs;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_2;
		L_2 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_3 = ___rhs1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_3);
		// }
		return;
	}
}
// System.Double LibNoise.Operator.Power::GetValue(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Power_GetValue_mABDFF7FE459E2E94E9FAF700571551B5FA9ED9C5 (Power_tCDBE7D5ADEDE8730D9B958823060C25BC396AB3A * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Math.Pow(Modules[0].GetValue(x, y, z), Modules[1].GetValue(x, y, z));
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		double L_3 = ___x0;
		double L_4 = ___y1;
		double L_5 = ___z2;
		NullCheck(L_2);
		double L_6;
		L_6 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_2, L_3, L_4, L_5);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_7;
		L_7 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = 1;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		double L_10 = ___x0;
		double L_11 = ___y1;
		double L_12 = ___z2;
		NullCheck(L_9);
		double L_13;
		L_13 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_9, L_10, L_11, L_12);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_14;
		L_14 = Math_Pow_mC2C8700DAAD1316AA457A1D271F78CDF0D61AC2F(L_6, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Generator.RidgedMultifractal::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RidgedMultifractal__ctor_mFDF6EBD154A8CA593E911C490D29F55F29B85BCE (RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private double _frequency = 1.0;
		__this->set__frequency_2((1.0));
		// private double _lacunarity = 2.0;
		__this->set__lacunarity_3((2.0));
		// private QualityMode _quality = QualityMode.Medium;
		__this->set__quality_4(1);
		// private int _octaveCount = 6;
		__this->set__octaveCount_5(6);
		// private double _exponent = 1.0;
		__this->set__exponent_6((1.0));
		// private double _gain = 2.0;
		__this->set__gain_7((2.0));
		// private double _offset = 1.0;
		__this->set__offset_8((1.0));
		// private readonly double[] _weights = new double[Utils.OctavesMaximum];
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		__this->set__weights_10(L_0);
		// : base(0)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 0, /*hidden argument*/NULL);
		// UpdateWeights();
		RidgedMultifractal_UpdateWeights_m08469ACBA257F937E5FB0CD9F5F673E8C86DEA9A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Generator.RidgedMultifractal::.ctor(System.Double,System.Double,System.Int32,System.Int32,LibNoise.QualityMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RidgedMultifractal__ctor_m5342D24217815D0FBC5D28803192D8BB898EF800 (RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E * __this, double ___frequency0, double ___lacunarity1, int32_t ___octaves2, int32_t ___seed3, int32_t ___quality4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private double _frequency = 1.0;
		__this->set__frequency_2((1.0));
		// private double _lacunarity = 2.0;
		__this->set__lacunarity_3((2.0));
		// private QualityMode _quality = QualityMode.Medium;
		__this->set__quality_4(1);
		// private int _octaveCount = 6;
		__this->set__octaveCount_5(6);
		// private double _exponent = 1.0;
		__this->set__exponent_6((1.0));
		// private double _gain = 2.0;
		__this->set__gain_7((2.0));
		// private double _offset = 1.0;
		__this->set__offset_8((1.0));
		// private readonly double[] _weights = new double[Utils.OctavesMaximum];
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		__this->set__weights_10(L_0);
		// : base(0)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 0, /*hidden argument*/NULL);
		// Frequency = frequency;
		double L_1 = ___frequency0;
		RidgedMultifractal_set_Frequency_m506DD1C43FBB5453359735A0B630DCBB93032D62_inline(__this, L_1, /*hidden argument*/NULL);
		// Lacunarity = lacunarity;
		double L_2 = ___lacunarity1;
		RidgedMultifractal_set_Lacunarity_m7AE852ADAC2712D03F3ACB516CBC3E048D877C29(__this, L_2, /*hidden argument*/NULL);
		// OctaveCount = octaves;
		int32_t L_3 = ___octaves2;
		RidgedMultifractal_set_OctaveCount_m34D2ED563BDCD90CF8CB832D8A99023C48AB23DD(__this, L_3, /*hidden argument*/NULL);
		// Seed = seed;
		int32_t L_4 = ___seed3;
		RidgedMultifractal_set_Seed_mB4867646D315FFA64F036F3576AEF6E04D05FF13_inline(__this, L_4, /*hidden argument*/NULL);
		// Quality = quality;
		int32_t L_5 = ___quality4;
		RidgedMultifractal_set_Quality_m7430A86CF54C65D392F2CDC56740C488094C5D23_inline(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Double LibNoise.Generator.RidgedMultifractal::get_Frequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double RidgedMultifractal_get_Frequency_m00347FE516F6ED62AFD4B88EF3EA2DB56E260833 (RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E * __this, const RuntimeMethod* method)
{
	{
		// get { return _frequency; }
		double L_0 = __this->get__frequency_2();
		return L_0;
	}
}
// System.Void LibNoise.Generator.RidgedMultifractal::set_Frequency(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RidgedMultifractal_set_Frequency_m506DD1C43FBB5453359735A0B630DCBB93032D62 (RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _frequency = value; }
		double L_0 = ___value0;
		__this->set__frequency_2(L_0);
		// set { _frequency = value; }
		return;
	}
}
// System.Double LibNoise.Generator.RidgedMultifractal::get_Lacunarity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double RidgedMultifractal_get_Lacunarity_m5729BDD593F02887C8CA474645C5EF10C64EDBBE (RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E * __this, const RuntimeMethod* method)
{
	{
		// get { return _lacunarity; }
		double L_0 = __this->get__lacunarity_3();
		return L_0;
	}
}
// System.Void LibNoise.Generator.RidgedMultifractal::set_Lacunarity(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RidgedMultifractal_set_Lacunarity_m7AE852ADAC2712D03F3ACB516CBC3E048D877C29 (RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// _lacunarity = value;
		double L_0 = ___value0;
		__this->set__lacunarity_3(L_0);
		// UpdateWeights();
		RidgedMultifractal_UpdateWeights_m08469ACBA257F937E5FB0CD9F5F673E8C86DEA9A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// LibNoise.QualityMode LibNoise.Generator.RidgedMultifractal::get_Quality()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RidgedMultifractal_get_Quality_mED3850F0698F7125080C16525D93AA7E8D6A0D68 (RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E * __this, const RuntimeMethod* method)
{
	{
		// get { return _quality; }
		int32_t L_0 = __this->get__quality_4();
		return L_0;
	}
}
// System.Void LibNoise.Generator.RidgedMultifractal::set_Quality(LibNoise.QualityMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RidgedMultifractal_set_Quality_m7430A86CF54C65D392F2CDC56740C488094C5D23 (RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { _quality = value; }
		int32_t L_0 = ___value0;
		__this->set__quality_4(L_0);
		// set { _quality = value; }
		return;
	}
}
// System.Int32 LibNoise.Generator.RidgedMultifractal::get_OctaveCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RidgedMultifractal_get_OctaveCount_m8B975131075510D163204355FF3BC48F3D6C047A (RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E * __this, const RuntimeMethod* method)
{
	{
		// get { return _octaveCount; }
		int32_t L_0 = __this->get__octaveCount_5();
		return L_0;
	}
}
// System.Void LibNoise.Generator.RidgedMultifractal::set_OctaveCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RidgedMultifractal_set_OctaveCount_m34D2ED563BDCD90CF8CB832D8A99023C48AB23DD (RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { _octaveCount = Mathf.Clamp(value, 1, Utils.OctavesMaximum); }
		int32_t L_0 = ___value0;
		int32_t L_1;
		L_1 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_0, 1, ((int32_t)30), /*hidden argument*/NULL);
		__this->set__octaveCount_5(L_1);
		// set { _octaveCount = Mathf.Clamp(value, 1, Utils.OctavesMaximum); }
		return;
	}
}
// System.Double LibNoise.Generator.RidgedMultifractal::get_SpectralWeightsExponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double RidgedMultifractal_get_SpectralWeightsExponent_m8E1B4429B636F56F867D89810D6C8A979C61BA60 (RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E * __this, const RuntimeMethod* method)
{
	{
		// get { return _exponent; }
		double L_0 = __this->get__exponent_6();
		return L_0;
	}
}
// System.Void LibNoise.Generator.RidgedMultifractal::set_SpectralWeightsExponent(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RidgedMultifractal_set_SpectralWeightsExponent_m5C74F4CBAEDE8B46229E147F33683FB9451335EB (RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _exponent = value; }
		double L_0 = ___value0;
		__this->set__exponent_6(L_0);
		// set { _exponent = value; }
		return;
	}
}
// System.Double LibNoise.Generator.RidgedMultifractal::get_Gain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double RidgedMultifractal_get_Gain_m33135156B61DCE10C28A423CA6A5DDE56BCE76A9 (RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E * __this, const RuntimeMethod* method)
{
	{
		// get { return _gain; }
		double L_0 = __this->get__gain_7();
		return L_0;
	}
}
// System.Void LibNoise.Generator.RidgedMultifractal::set_Gain(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RidgedMultifractal_set_Gain_mD582A1CAF32676E05D113D311688EE2BCB879D6E (RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _gain = value; }
		double L_0 = ___value0;
		__this->set__gain_7(L_0);
		// set { _gain = value; }
		return;
	}
}
// System.Double LibNoise.Generator.RidgedMultifractal::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double RidgedMultifractal_get_Offset_m6D560D993F41342A97270D921545519B3BA74BA7 (RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E * __this, const RuntimeMethod* method)
{
	{
		// get { return _offset; }
		double L_0 = __this->get__offset_8();
		return L_0;
	}
}
// System.Void LibNoise.Generator.RidgedMultifractal::set_Offset(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RidgedMultifractal_set_Offset_m1F1015B29C86A66662EE2C6869288D9F52C89304 (RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _offset = value; }
		double L_0 = ___value0;
		__this->set__offset_8(L_0);
		// set { _offset = value; }
		return;
	}
}
// System.Int32 LibNoise.Generator.RidgedMultifractal::get_Seed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RidgedMultifractal_get_Seed_mE0E71C93DE04924AAFA6A58A4B0FA5172AD38425 (RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E * __this, const RuntimeMethod* method)
{
	{
		// get { return _seed; }
		int32_t L_0 = __this->get__seed_9();
		return L_0;
	}
}
// System.Void LibNoise.Generator.RidgedMultifractal::set_Seed(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RidgedMultifractal_set_Seed_mB4867646D315FFA64F036F3576AEF6E04D05FF13 (RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { _seed = value; }
		int32_t L_0 = ___value0;
		__this->set__seed_9(L_0);
		// set { _seed = value; }
		return;
	}
}
// System.Void LibNoise.Generator.RidgedMultifractal::UpdateWeights()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RidgedMultifractal_UpdateWeights_m08469ACBA257F937E5FB0CD9F5F673E8C86DEA9A (RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	int32_t V_1 = 0;
	{
		// var f = 1.0;
		V_0 = (1.0);
		// for (var i = 0; i < Utils.OctavesMaximum; i++)
		V_1 = 0;
		goto IL_0030;
	}

IL_000e:
	{
		// _weights[i] = Math.Pow(f, -_exponent);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = __this->get__weights_10();
		int32_t L_1 = V_1;
		double L_2 = V_0;
		double L_3 = __this->get__exponent_6();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = Math_Pow_mC2C8700DAAD1316AA457A1D271F78CDF0D61AC2F(L_2, ((-L_3)), /*hidden argument*/NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (double)L_4);
		// f *= _lacunarity;
		double L_5 = V_0;
		double L_6 = __this->get__lacunarity_3();
		V_0 = ((double)il2cpp_codegen_multiply((double)L_5, (double)L_6));
		// for (var i = 0; i < Utils.OctavesMaximum; i++)
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0030:
	{
		// for (var i = 0; i < Utils.OctavesMaximum; i++)
		int32_t L_8 = V_1;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)30))))
		{
			goto IL_000e;
		}
	}
	{
		// }
		return;
	}
}
// System.Double LibNoise.Generator.RidgedMultifractal::GetValue(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double RidgedMultifractal_GetValue_mC3B73B761CF40456EF7DAAB6A285A1289CD477F3 (RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	int64_t V_5 = 0;
	double V_6 = 0.0;
	{
		// var value   = 0.0;
		V_0 = (0.0);
		// var weight  = 1.0;
		V_1 = (1.0);
		// x *= _frequency;
		double L_0 = ___x0;
		double L_1 = __this->get__frequency_2();
		___x0 = ((double)il2cpp_codegen_multiply((double)L_0, (double)L_1));
		// y *= _frequency;
		double L_2 = ___y1;
		double L_3 = __this->get__frequency_2();
		___y1 = ((double)il2cpp_codegen_multiply((double)L_2, (double)L_3));
		// z *= _frequency;
		double L_4 = ___z2;
		double L_5 = __this->get__frequency_2();
		___z2 = ((double)il2cpp_codegen_multiply((double)L_4, (double)L_5));
		// for (var i = 0; i < _octaveCount; i++)
		V_2 = 0;
		goto IL_00d5;
	}

IL_0039:
	{
		// var nx = Utils.MakeInt32Range(x);
		double L_6 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		double L_7;
		L_7 = Utils_MakeInt32Range_m38E96B1EC6FD2C8CC3E6350486B2DA4523DEA945(L_6, /*hidden argument*/NULL);
		// var ny = Utils.MakeInt32Range(y);
		double L_8 = ___y1;
		double L_9;
		L_9 = Utils_MakeInt32Range_m38E96B1EC6FD2C8CC3E6350486B2DA4523DEA945(L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		// var nz = Utils.MakeInt32Range(z);
		double L_10 = ___z2;
		double L_11;
		L_11 = Utils_MakeInt32Range_m38E96B1EC6FD2C8CC3E6350486B2DA4523DEA945(L_10, /*hidden argument*/NULL);
		V_4 = L_11;
		// long seed   = (_seed + i) & 0x7fffffff;
		int32_t L_12 = __this->get__seed_9();
		int32_t L_13 = V_2;
		V_5 = ((int64_t)((int64_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13))&(int32_t)((int32_t)2147483647LL)))));
		// var signal  = Utils.GradientCoherentNoise3D(nx, ny, nz, seed, _quality);
		double L_14 = V_3;
		double L_15 = V_4;
		int64_t L_16 = V_5;
		int32_t L_17 = __this->get__quality_4();
		double L_18;
		L_18 = Utils_GradientCoherentNoise3D_m14EC2F50807ACC5ACFDF3037ED5145768F1F6222(L_7, L_14, L_15, L_16, L_17, /*hidden argument*/NULL);
		V_6 = L_18;
		// signal = Math.Abs(signal);
		double L_19 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_20;
		L_20 = fabs(L_19);
		V_6 = L_20;
		// signal = _offset - signal;
		double L_21 = __this->get__offset_8();
		double L_22 = V_6;
		V_6 = ((double)il2cpp_codegen_subtract((double)L_21, (double)L_22));
		// signal *= signal;
		double L_23 = V_6;
		double L_24 = V_6;
		V_6 = ((double)il2cpp_codegen_multiply((double)L_23, (double)L_24));
		// signal *= weight;
		double L_25 = V_6;
		double L_26 = V_1;
		V_6 = ((double)il2cpp_codegen_multiply((double)L_25, (double)L_26));
		// weight = signal * _gain;
		double L_27 = V_6;
		double L_28 = __this->get__gain_7();
		V_1 = ((double)il2cpp_codegen_multiply((double)L_27, (double)L_28));
		// weight = Mathf.Clamp01((float) weight);
		double L_29 = V_1;
		float L_30;
		L_30 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)((float)L_29)), /*hidden argument*/NULL);
		V_1 = ((double)((double)L_30));
		// value += (signal * _weights[i]);
		double L_31 = V_0;
		double L_32 = V_6;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_33 = __this->get__weights_10();
		int32_t L_34 = V_2;
		NullCheck(L_33);
		int32_t L_35 = L_34;
		double L_36 = (L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		V_0 = ((double)il2cpp_codegen_add((double)L_31, (double)((double)il2cpp_codegen_multiply((double)L_32, (double)L_36))));
		// x *= _lacunarity;
		double L_37 = ___x0;
		double L_38 = __this->get__lacunarity_3();
		___x0 = ((double)il2cpp_codegen_multiply((double)L_37, (double)L_38));
		// y *= _lacunarity;
		double L_39 = ___y1;
		double L_40 = __this->get__lacunarity_3();
		___y1 = ((double)il2cpp_codegen_multiply((double)L_39, (double)L_40));
		// z *= _lacunarity;
		double L_41 = ___z2;
		double L_42 = __this->get__lacunarity_3();
		___z2 = ((double)il2cpp_codegen_multiply((double)L_41, (double)L_42));
		// for (var i = 0; i < _octaveCount; i++)
		int32_t L_43 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1));
	}

IL_00d5:
	{
		// for (var i = 0; i < _octaveCount; i++)
		int32_t L_44 = V_2;
		int32_t L_45 = __this->get__octaveCount_5();
		if ((((int32_t)L_44) < ((int32_t)L_45)))
		{
			goto IL_0039;
		}
	}
	{
		// return (value * 1.25) - 1.0;
		double L_46 = V_0;
		return ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_46, (double)(1.25))), (double)(1.0)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Operator.Rotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate__ctor_mACF4B5B5819E6DCFDA6C52A2BF7D3C0DA7073FD6 (Rotate_t4E7066470DB840FD8213C092E9104F7273681906 * __this, const RuntimeMethod* method)
{
	{
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// SetAngles(0.0, 0.0, 0.0);
		Rotate_SetAngles_mC02DE74B763918A5C52BC6933EE0FE105EE9CCA2(__this, (0.0), (0.0), (0.0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Rotate::.ctor(LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate__ctor_m1CDA6CF9FF052D782B2F569180B232FA8345CBFC (Rotate_t4E7066470DB840FD8213C092E9104F7273681906 * __this, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___input0, const RuntimeMethod* method)
{
	{
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// Modules[0] = input;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___input0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_1);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Rotate::.ctor(System.Double,System.Double,System.Double,LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate__ctor_m6B5CD6AFCBB4B528328FBF044760FB8BF05A232B (Rotate_t4E7066470DB840FD8213C092E9104F7273681906 * __this, double ___x0, double ___y1, double ___z2, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___input3, const RuntimeMethod* method)
{
	{
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// Modules[0] = input;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___input3;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_1);
		// SetAngles(x, y, z);
		double L_2 = ___x0;
		double L_3 = ___y1;
		double L_4 = ___z2;
		Rotate_SetAngles_mC02DE74B763918A5C52BC6933EE0FE105EE9CCA2(__this, L_2, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Double LibNoise.Operator.Rotate::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rotate_get_X_m2BFB1F4DD35CC10761457D91F89FFDBCA301FD33 (Rotate_t4E7066470DB840FD8213C092E9104F7273681906 * __this, const RuntimeMethod* method)
{
	{
		// get { return _x; }
		double L_0 = __this->get__x_2();
		return L_0;
	}
}
// System.Void LibNoise.Operator.Rotate::set_X(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_set_X_m327F50A2F6A6CE5409FE5D9133E399DD202CF36C (Rotate_t4E7066470DB840FD8213C092E9104F7273681906 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { SetAngles(value, _y, _z); }
		double L_0 = ___value0;
		double L_1 = __this->get__y_6();
		double L_2 = __this->get__z_10();
		Rotate_SetAngles_mC02DE74B763918A5C52BC6933EE0FE105EE9CCA2(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// set { SetAngles(value, _y, _z); }
		return;
	}
}
// System.Double LibNoise.Operator.Rotate::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rotate_get_Y_mD9C39911F1CB01EF094CD4E9C89F8B1ECD42AA93 (Rotate_t4E7066470DB840FD8213C092E9104F7273681906 * __this, const RuntimeMethod* method)
{
	{
		// get { return _y; }
		double L_0 = __this->get__y_6();
		return L_0;
	}
}
// System.Void LibNoise.Operator.Rotate::set_Y(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_set_Y_m466BCFE74E79C4FD22F4B11EE682561B931053FE (Rotate_t4E7066470DB840FD8213C092E9104F7273681906 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { SetAngles(_x, value, _z); }
		double L_0 = __this->get__x_2();
		double L_1 = ___value0;
		double L_2 = __this->get__z_10();
		Rotate_SetAngles_mC02DE74B763918A5C52BC6933EE0FE105EE9CCA2(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// set { SetAngles(_x, value, _z); }
		return;
	}
}
// System.Double LibNoise.Operator.Rotate::get_Z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rotate_get_Z_mC9D7A913CBB4CAA38BE39D001618D6D55E6DC001 (Rotate_t4E7066470DB840FD8213C092E9104F7273681906 * __this, const RuntimeMethod* method)
{
	{
		// get { return _x; }
		double L_0 = __this->get__x_2();
		return L_0;
	}
}
// System.Void LibNoise.Operator.Rotate::set_Z(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_set_Z_m4D1420285B984A32401AE096F7C92ED7A7B0C879 (Rotate_t4E7066470DB840FD8213C092E9104F7273681906 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { SetAngles(_x, _y, value); }
		double L_0 = __this->get__x_2();
		double L_1 = __this->get__y_6();
		double L_2 = ___value0;
		Rotate_SetAngles_mC02DE74B763918A5C52BC6933EE0FE105EE9CCA2(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// set { SetAngles(_x, _y, value); }
		return;
	}
}
// System.Void LibNoise.Operator.Rotate::SetAngles(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotate_SetAngles_mC02DE74B763918A5C52BC6933EE0FE105EE9CCA2 (Rotate_t4E7066470DB840FD8213C092E9104F7273681906 * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	{
		// var xc = Math.Cos(x * Mathf.Deg2Rad);
		double L_0 = ___x0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = cos(((double)il2cpp_codegen_multiply((double)L_0, (double)(0.01745329238474369))));
		V_0 = L_1;
		// var yc = Math.Cos(y * Mathf.Deg2Rad);
		double L_2 = ___y1;
		double L_3;
		L_3 = cos(((double)il2cpp_codegen_multiply((double)L_2, (double)(0.01745329238474369))));
		V_1 = L_3;
		// var zc = Math.Cos(z * Mathf.Deg2Rad);
		double L_4 = ___z2;
		double L_5;
		L_5 = cos(((double)il2cpp_codegen_multiply((double)L_4, (double)(0.01745329238474369))));
		V_2 = L_5;
		// var xs = Math.Sin(x * Mathf.Deg2Rad);
		double L_6 = ___x0;
		double L_7;
		L_7 = sin(((double)il2cpp_codegen_multiply((double)L_6, (double)(0.01745329238474369))));
		V_3 = L_7;
		// var ys = Math.Sin(y * Mathf.Deg2Rad);
		double L_8 = ___y1;
		double L_9;
		L_9 = sin(((double)il2cpp_codegen_multiply((double)L_8, (double)(0.01745329238474369))));
		V_4 = L_9;
		// var zs = Math.Sin(z * Mathf.Deg2Rad);
		double L_10 = ___z2;
		double L_11;
		L_11 = sin(((double)il2cpp_codegen_multiply((double)L_10, (double)(0.01745329238474369))));
		V_5 = L_11;
		// _x1Matrix = ys * xs * zs + yc * zc;
		double L_12 = V_4;
		double L_13 = V_3;
		double L_14 = V_5;
		double L_15 = V_1;
		double L_16 = V_2;
		__this->set__x1Matrix_3(((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_12, (double)L_13)), (double)L_14)), (double)((double)il2cpp_codegen_multiply((double)L_15, (double)L_16)))));
		// _y1Matrix = xc * zs;
		double L_17 = V_0;
		double L_18 = V_5;
		__this->set__y1Matrix_7(((double)il2cpp_codegen_multiply((double)L_17, (double)L_18)));
		// _z1Matrix = ys * zc - yc * xs * zs;
		double L_19 = V_4;
		double L_20 = V_2;
		double L_21 = V_1;
		double L_22 = V_3;
		double L_23 = V_5;
		__this->set__z1Matrix_11(((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_19, (double)L_20)), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_21, (double)L_22)), (double)L_23)))));
		// _x2Matrix = ys * xs * zc - yc * zs;
		double L_24 = V_4;
		double L_25 = V_3;
		double L_26 = V_2;
		double L_27 = V_1;
		double L_28 = V_5;
		__this->set__x2Matrix_4(((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_24, (double)L_25)), (double)L_26)), (double)((double)il2cpp_codegen_multiply((double)L_27, (double)L_28)))));
		// _y2Matrix = xc * zc;
		double L_29 = V_0;
		double L_30 = V_2;
		__this->set__y2Matrix_8(((double)il2cpp_codegen_multiply((double)L_29, (double)L_30)));
		// _z2Matrix = -yc * xs * zc - ys * zs;
		double L_31 = V_1;
		double L_32 = V_3;
		double L_33 = V_2;
		double L_34 = V_4;
		double L_35 = V_5;
		__this->set__z2Matrix_12(((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)((-L_31)), (double)L_32)), (double)L_33)), (double)((double)il2cpp_codegen_multiply((double)L_34, (double)L_35)))));
		// _x3Matrix = -ys * xc;
		double L_36 = V_4;
		double L_37 = V_0;
		__this->set__x3Matrix_5(((double)il2cpp_codegen_multiply((double)((-L_36)), (double)L_37)));
		// _y3Matrix = xs;
		double L_38 = V_3;
		__this->set__y3Matrix_9(L_38);
		// _z3Matrix = yc * xc;
		double L_39 = V_1;
		double L_40 = V_0;
		__this->set__z3Matrix_13(((double)il2cpp_codegen_multiply((double)L_39, (double)L_40)));
		// _x = x;
		double L_41 = ___x0;
		__this->set__x_2(L_41);
		// _y = y;
		double L_42 = ___y1;
		__this->set__y_6(L_42);
		// _z = z;
		double L_43 = ___z2;
		__this->set__z_10(L_43);
		// }
		return;
	}
}
// System.Double LibNoise.Operator.Rotate::GetValue(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Rotate_GetValue_mC961B058061BE1C1B2A0E031B5E79C9C179AD8D8 (Rotate_t4E7066470DB840FD8213C092E9104F7273681906 * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		// var nx = (_x1Matrix * x) + (_y1Matrix * y) + (_z1Matrix * z);
		double L_0 = __this->get__x1Matrix_3();
		double L_1 = ___x0;
		double L_2 = __this->get__y1Matrix_7();
		double L_3 = ___y1;
		double L_4 = __this->get__z1Matrix_11();
		double L_5 = ___z2;
		V_0 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_0, (double)L_1)), (double)((double)il2cpp_codegen_multiply((double)L_2, (double)L_3)))), (double)((double)il2cpp_codegen_multiply((double)L_4, (double)L_5))));
		// var ny = (_x2Matrix * x) + (_y2Matrix * y) + (_z2Matrix * z);
		double L_6 = __this->get__x2Matrix_4();
		double L_7 = ___x0;
		double L_8 = __this->get__y2Matrix_8();
		double L_9 = ___y1;
		double L_10 = __this->get__z2Matrix_12();
		double L_11 = ___z2;
		V_1 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_6, (double)L_7)), (double)((double)il2cpp_codegen_multiply((double)L_8, (double)L_9)))), (double)((double)il2cpp_codegen_multiply((double)L_10, (double)L_11))));
		// var nz = (_x3Matrix * x) + (_y3Matrix * y) + (_z3Matrix * z);
		double L_12 = __this->get__x3Matrix_5();
		double L_13 = ___x0;
		double L_14 = __this->get__y3Matrix_9();
		double L_15 = ___y1;
		double L_16 = __this->get__z3Matrix_13();
		double L_17 = ___z2;
		V_2 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_12, (double)L_13)), (double)((double)il2cpp_codegen_multiply((double)L_14, (double)L_15)))), (double)((double)il2cpp_codegen_multiply((double)L_16, (double)L_17))));
		// return Modules[0].GetValue(nx, ny, nz);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_18;
		L_18 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19 = 0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		double L_21 = V_0;
		double L_22 = V_1;
		double L_23 = V_2;
		NullCheck(L_20);
		double L_24;
		L_24 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_20, L_21, L_22, L_23);
		return L_24;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Operator.Scale::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scale__ctor_mE647DD1416BA1EBC4CD71AD5F6F81C18CCBFD7AA (Scale_tA76AEF14F2E1C8A26EB8340B97357BF99A81516B * __this, const RuntimeMethod* method)
{
	{
		// private double _x = 1.0;
		__this->set__x_2((1.0));
		// private double _y = 1.0;
		__this->set__y_3((1.0));
		// private double _z = 1.0;
		__this->set__z_4((1.0));
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Scale::.ctor(LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scale__ctor_m64E1B51F88BF67585D3EF4C51C69966C21384E73 (Scale_tA76AEF14F2E1C8A26EB8340B97357BF99A81516B * __this, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___input0, const RuntimeMethod* method)
{
	{
		// private double _x = 1.0;
		__this->set__x_2((1.0));
		// private double _y = 1.0;
		__this->set__y_3((1.0));
		// private double _z = 1.0;
		__this->set__z_4((1.0));
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// Modules[0] = input;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___input0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_1);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Scale::.ctor(System.Double,System.Double,System.Double,LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scale__ctor_mB6D0F5DBA20DB57DC8B3A56D0D4C91CD6551CA28 (Scale_tA76AEF14F2E1C8A26EB8340B97357BF99A81516B * __this, double ___x0, double ___y1, double ___z2, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___input3, const RuntimeMethod* method)
{
	{
		// private double _x = 1.0;
		__this->set__x_2((1.0));
		// private double _y = 1.0;
		__this->set__y_3((1.0));
		// private double _z = 1.0;
		__this->set__z_4((1.0));
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// Modules[0] = input;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___input3;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_1);
		// X = x;
		double L_2 = ___x0;
		Scale_set_X_mFF6E23D36CD6F8EC5AA4694BAD2B6A8C342C2331_inline(__this, L_2, /*hidden argument*/NULL);
		// Y = y;
		double L_3 = ___y1;
		Scale_set_Y_m04C271A440BEBBAB4103FCF027F7972DD1C11F67_inline(__this, L_3, /*hidden argument*/NULL);
		// Z = z;
		double L_4 = ___z2;
		Scale_set_Z_m6D611E7E48894BAB79CF9D5A9198483150DD250E_inline(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Double LibNoise.Operator.Scale::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Scale_get_X_mE66B11FB982EE6C33744AD4DA1D5EA2E8321C23B (Scale_tA76AEF14F2E1C8A26EB8340B97357BF99A81516B * __this, const RuntimeMethod* method)
{
	{
		// get { return _x; }
		double L_0 = __this->get__x_2();
		return L_0;
	}
}
// System.Void LibNoise.Operator.Scale::set_X(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scale_set_X_mFF6E23D36CD6F8EC5AA4694BAD2B6A8C342C2331 (Scale_tA76AEF14F2E1C8A26EB8340B97357BF99A81516B * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _x = value; }
		double L_0 = ___value0;
		__this->set__x_2(L_0);
		// set { _x = value; }
		return;
	}
}
// System.Double LibNoise.Operator.Scale::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Scale_get_Y_mDF7801A0DF6DD844BD158F667B879101E6BC1265 (Scale_tA76AEF14F2E1C8A26EB8340B97357BF99A81516B * __this, const RuntimeMethod* method)
{
	{
		// get { return _y; }
		double L_0 = __this->get__y_3();
		return L_0;
	}
}
// System.Void LibNoise.Operator.Scale::set_Y(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scale_set_Y_m04C271A440BEBBAB4103FCF027F7972DD1C11F67 (Scale_tA76AEF14F2E1C8A26EB8340B97357BF99A81516B * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _y = value; }
		double L_0 = ___value0;
		__this->set__y_3(L_0);
		// set { _y = value; }
		return;
	}
}
// System.Double LibNoise.Operator.Scale::get_Z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Scale_get_Z_m46C0CF012B44062BF2FE5764558883F517997915 (Scale_tA76AEF14F2E1C8A26EB8340B97357BF99A81516B * __this, const RuntimeMethod* method)
{
	{
		// get { return _z; }
		double L_0 = __this->get__z_4();
		return L_0;
	}
}
// System.Void LibNoise.Operator.Scale::set_Z(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scale_set_Z_m6D611E7E48894BAB79CF9D5A9198483150DD250E (Scale_tA76AEF14F2E1C8A26EB8340B97357BF99A81516B * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _z = value; }
		double L_0 = ___value0;
		__this->set__z_4(L_0);
		// set { _z = value; }
		return;
	}
}
// System.Double LibNoise.Operator.Scale::GetValue(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Scale_GetValue_m05B1FEBD5E1AA912DAFE6CD37319547FAB9E2553 (Scale_tA76AEF14F2E1C8A26EB8340B97357BF99A81516B * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	{
		// return Modules[0].GetValue(x * _x, y * _y, z * _z);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		double L_3 = ___x0;
		double L_4 = __this->get__x_2();
		double L_5 = ___y1;
		double L_6 = __this->get__y_3();
		double L_7 = ___z2;
		double L_8 = __this->get__z_4();
		NullCheck(L_2);
		double L_9;
		L_9 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_2, ((double)il2cpp_codegen_multiply((double)L_3, (double)L_4)), ((double)il2cpp_codegen_multiply((double)L_5, (double)L_6)), ((double)il2cpp_codegen_multiply((double)L_7, (double)L_8)));
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Operator.ScaleBias::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleBias__ctor_m90F2891745E709625E5EF2D2F9BDF95053474062 (ScaleBias_t0E79E66C15E96900C32A2E9080C75588E942F649 * __this, const RuntimeMethod* method)
{
	{
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// Scale = 1;
		ScaleBias_set_Scale_m8EBFEE9B01E430A622ED0AE4CC406D61E944D09B_inline(__this, (1.0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.ScaleBias::.ctor(LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleBias__ctor_mB5F2C9497608A830133B9433D591E6FC29F3332D (ScaleBias_t0E79E66C15E96900C32A2E9080C75588E942F649 * __this, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___input0, const RuntimeMethod* method)
{
	{
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// Modules[0] = input;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___input0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_1);
		// Scale = 1;
		ScaleBias_set_Scale_m8EBFEE9B01E430A622ED0AE4CC406D61E944D09B_inline(__this, (1.0), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.ScaleBias::.ctor(System.Double,System.Double,LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleBias__ctor_mB6F5C4B525A4306A4D2E48A2C3DC55C2304D26D7 (ScaleBias_t0E79E66C15E96900C32A2E9080C75588E942F649 * __this, double ___scale0, double ___bias1, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___input2, const RuntimeMethod* method)
{
	{
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// Modules[0] = input;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___input2;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_1);
		// Bias = bias;
		double L_2 = ___bias1;
		ScaleBias_set_Bias_mB55C01E47759FA23CC2163227F8CDDAA2E1E63A6_inline(__this, L_2, /*hidden argument*/NULL);
		// Scale = scale;
		double L_3 = ___scale0;
		ScaleBias_set_Scale_m8EBFEE9B01E430A622ED0AE4CC406D61E944D09B_inline(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Double LibNoise.Operator.ScaleBias::get_Bias()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ScaleBias_get_Bias_m4FA0528DE1D5184893E074D70CECEE94637193E5 (ScaleBias_t0E79E66C15E96900C32A2E9080C75588E942F649 * __this, const RuntimeMethod* method)
{
	{
		// public double Bias { get; set; }
		double L_0 = __this->get_U3CBiasU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void LibNoise.Operator.ScaleBias::set_Bias(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleBias_set_Bias_mB55C01E47759FA23CC2163227F8CDDAA2E1E63A6 (ScaleBias_t0E79E66C15E96900C32A2E9080C75588E942F649 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// public double Bias { get; set; }
		double L_0 = ___value0;
		__this->set_U3CBiasU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Double LibNoise.Operator.ScaleBias::get_Scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ScaleBias_get_Scale_m9DCAF05504ECA5726257ED94325FD4B14F4C1878 (ScaleBias_t0E79E66C15E96900C32A2E9080C75588E942F649 * __this, const RuntimeMethod* method)
{
	{
		// public double Scale { get; set; }
		double L_0 = __this->get_U3CScaleU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void LibNoise.Operator.ScaleBias::set_Scale(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScaleBias_set_Scale_m8EBFEE9B01E430A622ED0AE4CC406D61E944D09B (ScaleBias_t0E79E66C15E96900C32A2E9080C75588E942F649 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// public double Scale { get; set; }
		double L_0 = ___value0;
		__this->set_U3CScaleU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Double LibNoise.Operator.ScaleBias::GetValue(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double ScaleBias_GetValue_m7C829AB8ACF877346F4C0D215B08542BF4712984 (ScaleBias_t0E79E66C15E96900C32A2E9080C75588E942F649 * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	{
		// return Modules[0].GetValue(x, y, z) * Scale + Bias;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		double L_3 = ___x0;
		double L_4 = ___y1;
		double L_5 = ___z2;
		NullCheck(L_2);
		double L_6;
		L_6 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_2, L_3, L_4, L_5);
		double L_7;
		L_7 = ScaleBias_get_Scale_m9DCAF05504ECA5726257ED94325FD4B14F4C1878_inline(__this, /*hidden argument*/NULL);
		double L_8;
		L_8 = ScaleBias_get_Bias_m4FA0528DE1D5184893E074D70CECEE94637193E5_inline(__this, /*hidden argument*/NULL);
		return ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_6, (double)L_7)), (double)L_8));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Operator.Select::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Select__ctor_m2E7E393BEEBD92BE95876FC54FE24A878F1E0705 (Select_tE6E071398C0C3DC23EC6CDA27FCDDF69A7ED65ED * __this, const RuntimeMethod* method)
{
	{
		// private double _min = -1.0;
		__this->set__min_4((-1.0));
		// private double _max = 1.0;
		__this->set__max_5((1.0));
		// : base(3)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Select::.ctor(LibNoise.ModuleBase,LibNoise.ModuleBase,LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Select__ctor_m116A6047881813358DE209B8BE0E39E25C1D6154 (Select_tE6E071398C0C3DC23EC6CDA27FCDDF69A7ED65ED * __this, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___inputA0, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___inputB1, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___controller2, const RuntimeMethod* method)
{
	{
		// private double _min = -1.0;
		__this->set__min_4((-1.0));
		// private double _max = 1.0;
		__this->set__max_5((1.0));
		// : base(3)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 3, /*hidden argument*/NULL);
		// Modules[0] = inputA;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___inputA0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_1);
		// Modules[1] = inputB;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_2;
		L_2 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_3 = ___inputB1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_3);
		// Modules[2] = controller;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_4;
		L_4 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_5 = ___controller2;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_5);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Select::.ctor(System.Double,System.Double,System.Double,LibNoise.ModuleBase,LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Select__ctor_m33F5294C840752EFE1FC534BBB68363153F7832B (Select_tE6E071398C0C3DC23EC6CDA27FCDDF69A7ED65ED * __this, double ___min0, double ___max1, double ___fallOff2, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___inputA3, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___inputB4, const RuntimeMethod* method)
{
	{
		// : this(inputA, inputB, null)
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_0 = ___inputA3;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___inputB4;
		Select__ctor_m116A6047881813358DE209B8BE0E39E25C1D6154(__this, L_0, L_1, (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)NULL, /*hidden argument*/NULL);
		// _min = min;
		double L_2 = ___min0;
		__this->set__min_4(L_2);
		// _max = max;
		double L_3 = ___max1;
		__this->set__max_5(L_3);
		// FallOff = fallOff;
		double L_4 = ___fallOff2;
		Select_set_FallOff_mF33729E92DEDD37B673A77737326CD6DA99CFC49(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// LibNoise.ModuleBase LibNoise.Operator.Select::get_Controller()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * Select_get_Controller_mA77E842C943A9E1B9E70EAD27050CAAAB1AF0177 (Select_tE6E071398C0C3DC23EC6CDA27FCDDF69A7ED65ED * __this, const RuntimeMethod* method)
{
	{
		// get { return Modules[2]; }
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 2;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		return L_2;
	}
}
// System.Void LibNoise.Operator.Select::set_Controller(LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Select_set_Controller_m41ED978E84F6B17AA9764BFE56CF8A56DF6C8AA6 (Select_tE6E071398C0C3DC23EC6CDA27FCDDF69A7ED65ED * __this, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___value0, const RuntimeMethod* method)
{
	{
		// Modules[2] = value;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___value0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(2), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_1);
		// }
		return;
	}
}
// System.Double LibNoise.Operator.Select::get_FallOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Select_get_FallOff_mA7A12C4275935744F8CC17CBE47B271D7DE85E08 (Select_tE6E071398C0C3DC23EC6CDA27FCDDF69A7ED65ED * __this, const RuntimeMethod* method)
{
	{
		// get { return _fallOff; }
		double L_0 = __this->get__fallOff_2();
		return L_0;
	}
}
// System.Void LibNoise.Operator.Select::set_FallOff(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Select_set_FallOff_mF33729E92DEDD37B673A77737326CD6DA99CFC49 (Select_tE6E071398C0C3DC23EC6CDA27FCDDF69A7ED65ED * __this, double ___value0, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	Select_tE6E071398C0C3DC23EC6CDA27FCDDF69A7ED65ED * G_B2_0 = NULL;
	Select_tE6E071398C0C3DC23EC6CDA27FCDDF69A7ED65ED * G_B1_0 = NULL;
	double G_B3_0 = 0.0;
	Select_tE6E071398C0C3DC23EC6CDA27FCDDF69A7ED65ED * G_B3_1 = NULL;
	{
		// var bs = _max - _min;
		double L_0 = __this->get__max_5();
		double L_1 = __this->get__min_4();
		V_0 = ((double)il2cpp_codegen_subtract((double)L_0, (double)L_1));
		// _raw = value;
		double L_2 = ___value0;
		__this->set__raw_3(L_2);
		// _fallOff = (value > bs / 2) ? bs / 2 : value;
		double L_3 = ___value0;
		double L_4 = V_0;
		G_B1_0 = __this;
		if ((((double)L_3) > ((double)((double)((double)L_4/(double)(2.0))))))
		{
			G_B2_0 = __this;
			goto IL_0027;
		}
	}
	{
		double L_5 = ___value0;
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0032;
	}

IL_0027:
	{
		double L_6 = V_0;
		G_B3_0 = ((double)((double)L_6/(double)(2.0)));
		G_B3_1 = G_B2_0;
	}

IL_0032:
	{
		NullCheck(G_B3_1);
		G_B3_1->set__fallOff_2(G_B3_0);
		// }
		return;
	}
}
// System.Double LibNoise.Operator.Select::get_Maximum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Select_get_Maximum_m544647F01A7ABC9D1A5D254C35818778B835507C (Select_tE6E071398C0C3DC23EC6CDA27FCDDF69A7ED65ED * __this, const RuntimeMethod* method)
{
	{
		// get { return _max; }
		double L_0 = __this->get__max_5();
		return L_0;
	}
}
// System.Void LibNoise.Operator.Select::set_Maximum(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Select_set_Maximum_m81B8FDFC2CC178FF0F1B65062B80CA535D887C8E (Select_tE6E071398C0C3DC23EC6CDA27FCDDF69A7ED65ED * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// _max = value;
		double L_0 = ___value0;
		__this->set__max_5(L_0);
		// FallOff = _raw;
		double L_1 = __this->get__raw_3();
		Select_set_FallOff_mF33729E92DEDD37B673A77737326CD6DA99CFC49(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Double LibNoise.Operator.Select::get_Minimum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Select_get_Minimum_m7280238665FBED4231A9E64B4751DD92CFA0C3B9 (Select_tE6E071398C0C3DC23EC6CDA27FCDDF69A7ED65ED * __this, const RuntimeMethod* method)
{
	{
		// get { return _min; }
		double L_0 = __this->get__min_4();
		return L_0;
	}
}
// System.Void LibNoise.Operator.Select::set_Minimum(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Select_set_Minimum_mD6C2FA1FDCF937B12822C1974D715FC6884C2AE1 (Select_tE6E071398C0C3DC23EC6CDA27FCDDF69A7ED65ED * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// _min = value;
		double L_0 = ___value0;
		__this->set__min_4(L_0);
		// FallOff = _raw;
		double L_1 = __this->get__raw_3();
		Select_set_FallOff_mF33729E92DEDD37B673A77737326CD6DA99CFC49(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Select::SetBounds(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Select_SetBounds_mF097D4131F98D49E08BBD2E323215FCF9F6FA06A (Select_tE6E071398C0C3DC23EC6CDA27FCDDF69A7ED65ED * __this, double ___min0, double ___max1, const RuntimeMethod* method)
{
	{
		// _min = min;
		double L_0 = ___min0;
		__this->set__min_4(L_0);
		// _max = max;
		double L_1 = ___max1;
		__this->set__max_5(L_1);
		// FallOff = _fallOff;
		double L_2 = __this->get__fallOff_2();
		Select_set_FallOff_mF33729E92DEDD37B673A77737326CD6DA99CFC49(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Double LibNoise.Operator.Select::GetValue(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Select_GetValue_m688CEF9FE81063C944D6778F93BBB565749995A7 (Select_tE6E071398C0C3DC23EC6CDA27FCDDF69A7ED65ED * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	{
		// var cv = Modules[2].GetValue(x, y, z);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 2;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		double L_3 = ___x0;
		double L_4 = ___y1;
		double L_5 = ___z2;
		NullCheck(L_2);
		double L_6;
		L_6 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_2, L_3, L_4, L_5);
		V_0 = L_6;
		// if (_fallOff > 0.0)
		double L_7 = __this->get__fallOff_2();
		if ((!(((double)L_7) > ((double)(0.0)))))
		{
			goto IL_013d;
		}
	}
	{
		// if (cv < (_min - _fallOff))
		double L_8 = V_0;
		double L_9 = __this->get__min_4();
		double L_10 = __this->get__fallOff_2();
		if ((!(((double)L_8) < ((double)((double)il2cpp_codegen_subtract((double)L_9, (double)L_10))))))
		{
			goto IL_0046;
		}
	}
	{
		// return Modules[0].GetValue(x, y, z);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_11;
		L_11 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		int32_t L_12 = 0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		double L_14 = ___x0;
		double L_15 = ___y1;
		double L_16 = ___z2;
		NullCheck(L_13);
		double L_17;
		L_17 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_13, L_14, L_15, L_16);
		return L_17;
	}

IL_0046:
	{
		// if (cv < (_min + _fallOff))
		double L_18 = V_0;
		double L_19 = __this->get__min_4();
		double L_20 = __this->get__fallOff_2();
		if ((!(((double)L_18) < ((double)((double)il2cpp_codegen_add((double)L_19, (double)L_20))))))
		{
			goto IL_00a6;
		}
	}
	{
		// var lc = (_min - _fallOff);
		double L_21 = __this->get__min_4();
		double L_22 = __this->get__fallOff_2();
		V_2 = ((double)il2cpp_codegen_subtract((double)L_21, (double)L_22));
		// var uc = (_min + _fallOff);
		double L_23 = __this->get__min_4();
		double L_24 = __this->get__fallOff_2();
		V_3 = ((double)il2cpp_codegen_add((double)L_23, (double)L_24));
		// a = Utils.MapCubicSCurve((cv - lc) / (uc - lc));
		double L_25 = V_0;
		double L_26 = V_2;
		double L_27 = V_3;
		double L_28 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		double L_29;
		L_29 = Utils_MapCubicSCurve_mAF58D6A668F431FA198625EAB3EDF1C1E1E796EA(((double)((double)((double)il2cpp_codegen_subtract((double)L_25, (double)L_26))/(double)((double)il2cpp_codegen_subtract((double)L_27, (double)L_28)))), /*hidden argument*/NULL);
		V_1 = L_29;
		// return Utils.InterpolateLinear(Modules[0].GetValue(x, y, z),
		//     Modules[1].GetValue(x, y, z), a);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_30;
		L_30 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		int32_t L_31 = 0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		double L_33 = ___x0;
		double L_34 = ___y1;
		double L_35 = ___z2;
		NullCheck(L_32);
		double L_36;
		L_36 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_32, L_33, L_34, L_35);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_37;
		L_37 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_37);
		int32_t L_38 = 1;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		double L_40 = ___x0;
		double L_41 = ___y1;
		double L_42 = ___z2;
		NullCheck(L_39);
		double L_43;
		L_43 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_39, L_40, L_41, L_42);
		double L_44 = V_1;
		double L_45;
		L_45 = Utils_InterpolateLinear_m67C385B25C06BA3BC751E5A962CCBCAE3C2A07AF(L_36, L_43, L_44, /*hidden argument*/NULL);
		return L_45;
	}

IL_00a6:
	{
		// if (cv < (_max - _fallOff))
		double L_46 = V_0;
		double L_47 = __this->get__max_5();
		double L_48 = __this->get__fallOff_2();
		if ((!(((double)L_46) < ((double)((double)il2cpp_codegen_subtract((double)L_47, (double)L_48))))))
		{
			goto IL_00c7;
		}
	}
	{
		// return Modules[1].GetValue(x, y, z);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_49;
		L_49 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_49);
		int32_t L_50 = 1;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		double L_52 = ___x0;
		double L_53 = ___y1;
		double L_54 = ___z2;
		NullCheck(L_51);
		double L_55;
		L_55 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_51, L_52, L_53, L_54);
		return L_55;
	}

IL_00c7:
	{
		// if (cv < (_max + _fallOff))
		double L_56 = V_0;
		double L_57 = __this->get__max_5();
		double L_58 = __this->get__fallOff_2();
		if ((!(((double)L_56) < ((double)((double)il2cpp_codegen_add((double)L_57, (double)L_58))))))
		{
			goto IL_012c;
		}
	}
	{
		// var lc = (_max - _fallOff);
		double L_59 = __this->get__max_5();
		double L_60 = __this->get__fallOff_2();
		V_4 = ((double)il2cpp_codegen_subtract((double)L_59, (double)L_60));
		// var uc = (_max + _fallOff);
		double L_61 = __this->get__max_5();
		double L_62 = __this->get__fallOff_2();
		V_5 = ((double)il2cpp_codegen_add((double)L_61, (double)L_62));
		// a = Utils.MapCubicSCurve((cv - lc) / (uc - lc));
		double L_63 = V_0;
		double L_64 = V_4;
		double L_65 = V_5;
		double L_66 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		double L_67;
		L_67 = Utils_MapCubicSCurve_mAF58D6A668F431FA198625EAB3EDF1C1E1E796EA(((double)((double)((double)il2cpp_codegen_subtract((double)L_63, (double)L_64))/(double)((double)il2cpp_codegen_subtract((double)L_65, (double)L_66)))), /*hidden argument*/NULL);
		V_1 = L_67;
		// return Utils.InterpolateLinear(Modules[1].GetValue(x, y, z),
		//     Modules[0].GetValue(x, y, z), a);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_68;
		L_68 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_68);
		int32_t L_69 = 1;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_70 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		double L_71 = ___x0;
		double L_72 = ___y1;
		double L_73 = ___z2;
		NullCheck(L_70);
		double L_74;
		L_74 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_70, L_71, L_72, L_73);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_75;
		L_75 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_75);
		int32_t L_76 = 0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_77 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		double L_78 = ___x0;
		double L_79 = ___y1;
		double L_80 = ___z2;
		NullCheck(L_77);
		double L_81;
		L_81 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_77, L_78, L_79, L_80);
		double L_82 = V_1;
		double L_83;
		L_83 = Utils_InterpolateLinear_m67C385B25C06BA3BC751E5A962CCBCAE3C2A07AF(L_74, L_81, L_82, /*hidden argument*/NULL);
		return L_83;
	}

IL_012c:
	{
		// return Modules[0].GetValue(x, y, z);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_84;
		L_84 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_84);
		int32_t L_85 = 0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_86 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		double L_87 = ___x0;
		double L_88 = ___y1;
		double L_89 = ___z2;
		NullCheck(L_86);
		double L_90;
		L_90 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_86, L_87, L_88, L_89);
		return L_90;
	}

IL_013d:
	{
		// if (cv < _min || cv > _max)
		double L_91 = V_0;
		double L_92 = __this->get__min_4();
		if ((((double)L_91) < ((double)L_92)))
		{
			goto IL_014f;
		}
	}
	{
		double L_93 = V_0;
		double L_94 = __this->get__max_5();
		if ((!(((double)L_93) > ((double)L_94))))
		{
			goto IL_0160;
		}
	}

IL_014f:
	{
		// return Modules[0].GetValue(x, y, z);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_95;
		L_95 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_95);
		int32_t L_96 = 0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		double L_98 = ___x0;
		double L_99 = ___y1;
		double L_100 = ___z2;
		NullCheck(L_97);
		double L_101;
		L_101 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_97, L_98, L_99, L_100);
		return L_101;
	}

IL_0160:
	{
		// return Modules[1].GetValue(x, y, z);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_102;
		L_102 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_102);
		int32_t L_103 = 1;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_104 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		double L_105 = ___x0;
		double L_106 = ___y1;
		double L_107 = ___z2;
		NullCheck(L_104);
		double L_108;
		L_108 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_104, L_105, L_106, L_107);
		return L_108;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Generator.Spheres::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spheres__ctor_mAF02455D54D05876F7105937EE5F9C65B4A83AD5 (Spheres_t5141EACFECDE72E6F0ADB1AC3621A1E3104731D3 * __this, const RuntimeMethod* method)
{
	{
		// private double _frequency = 1.0;
		__this->set__frequency_2((1.0));
		// : base(0)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Generator.Spheres::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spheres__ctor_mB83F7047E15F04DB8FB3E88C6C6361FCDF679BD2 (Spheres_t5141EACFECDE72E6F0ADB1AC3621A1E3104731D3 * __this, double ___frequency0, const RuntimeMethod* method)
{
	{
		// private double _frequency = 1.0;
		__this->set__frequency_2((1.0));
		// : base(0)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 0, /*hidden argument*/NULL);
		// Frequency = frequency;
		double L_0 = ___frequency0;
		Spheres_set_Frequency_m30FDB3D279164D7DCC634750D9C3CA649EF564CA_inline(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Double LibNoise.Generator.Spheres::get_Frequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Spheres_get_Frequency_m02D0DE1000F75BBD32CDC728918D7A032AD3911F (Spheres_t5141EACFECDE72E6F0ADB1AC3621A1E3104731D3 * __this, const RuntimeMethod* method)
{
	{
		// get { return _frequency; }
		double L_0 = __this->get__frequency_2();
		return L_0;
	}
}
// System.Void LibNoise.Generator.Spheres::set_Frequency(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spheres_set_Frequency_m30FDB3D279164D7DCC634750D9C3CA649EF564CA (Spheres_t5141EACFECDE72E6F0ADB1AC3621A1E3104731D3 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _frequency = value; }
		double L_0 = ___value0;
		__this->set__frequency_2(L_0);
		// set { _frequency = value; }
		return;
	}
}
// System.Double LibNoise.Generator.Spheres::GetValue(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Spheres_GetValue_m93295A2FF9A74245EC265E0B037FF34969B2E0CB (Spheres_t5141EACFECDE72E6F0ADB1AC3621A1E3104731D3 * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		// x *= _frequency;
		double L_0 = ___x0;
		double L_1 = __this->get__frequency_2();
		___x0 = ((double)il2cpp_codegen_multiply((double)L_0, (double)L_1));
		// y *= _frequency;
		double L_2 = ___y1;
		double L_3 = __this->get__frequency_2();
		___y1 = ((double)il2cpp_codegen_multiply((double)L_2, (double)L_3));
		// z *= _frequency;
		double L_4 = ___z2;
		double L_5 = __this->get__frequency_2();
		___z2 = ((double)il2cpp_codegen_multiply((double)L_4, (double)L_5));
		// var dfc = Math.Sqrt(x * x + y * y + z * z);
		double L_6 = ___x0;
		double L_7 = ___x0;
		double L_8 = ___y1;
		double L_9 = ___y1;
		double L_10 = ___z2;
		double L_11 = ___z2;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_6, (double)L_7)), (double)((double)il2cpp_codegen_multiply((double)L_8, (double)L_9)))), (double)((double)il2cpp_codegen_multiply((double)L_10, (double)L_11)))));
		// var dfss = dfc - Math.Floor(dfc);
		double L_13 = L_12;
		double L_14;
		L_14 = floor(L_13);
		V_0 = ((double)il2cpp_codegen_subtract((double)L_13, (double)L_14));
		// var dfls = 1.0 - dfss;
		double L_15 = V_0;
		V_1 = ((double)il2cpp_codegen_subtract((double)(1.0), (double)L_15));
		// var nd = Math.Min(dfss, dfls);
		double L_16 = V_0;
		double L_17 = V_1;
		double L_18;
		L_18 = Math_Min_m029DC981252B020B92B6DEC21AF0D42C56FA12B9(L_16, L_17, /*hidden argument*/NULL);
		V_2 = L_18;
		// return 1.0 - (nd * 4.0);
		double L_19 = V_2;
		return ((double)il2cpp_codegen_subtract((double)(1.0), (double)((double)il2cpp_codegen_multiply((double)L_19, (double)(4.0)))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Operator.Subtract::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subtract__ctor_mE0DC3B5E7191585004701FD7ABCF14471A5204EC (Subtract_t78AA38A2C6DD8A9928655EA7B68919774D901FCA * __this, const RuntimeMethod* method)
{
	{
		// : base(2)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Subtract::.ctor(LibNoise.ModuleBase,LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Subtract__ctor_m4F4851D6B7E0FCB0CBB1D8FB42E972D0DA36A35D (Subtract_t78AA38A2C6DD8A9928655EA7B68919774D901FCA * __this, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___lhs0, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___rhs1, const RuntimeMethod* method)
{
	{
		// : base(2)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 2, /*hidden argument*/NULL);
		// Modules[0] = lhs;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___lhs0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_1);
		// Modules[1] = rhs;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_2;
		L_2 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_3 = ___rhs1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_3);
		// }
		return;
	}
}
// System.Double LibNoise.Operator.Subtract::GetValue(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Subtract_GetValue_mBE6961023E49566E63623838FA1B9B0D187B9266 (Subtract_t78AA38A2C6DD8A9928655EA7B68919774D901FCA * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	{
		// return Modules[0].GetValue(x, y, z) - Modules[1].GetValue(x, y, z);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		double L_3 = ___x0;
		double L_4 = ___y1;
		double L_5 = ___z2;
		NullCheck(L_2);
		double L_6;
		L_6 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_2, L_3, L_4, L_5);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_7;
		L_7 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = 1;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		double L_10 = ___x0;
		double L_11 = ___y1;
		double L_12 = ___z2;
		NullCheck(L_9);
		double L_13;
		L_13 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_9, L_10, L_11, L_12);
		return ((double)il2cpp_codegen_subtract((double)L_6, (double)L_13));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Operator.Terrace::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrace__ctor_m702C9EE4D69A84A469E0BB21B08B52578508B928 (Terrace_t441233268BCC329AC1DCD704A5891A0CD56EFB6B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA0CE4C11D163EF853E9E6A0FD3C75486EF3A0F31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<double> _data = new List<double>();
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_0 = (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *)il2cpp_codegen_object_new(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC_il2cpp_TypeInfo_var);
		List_1__ctor_mA0CE4C11D163EF853E9E6A0FD3C75486EF3A0F31(L_0, /*hidden argument*/List_1__ctor_mA0CE4C11D163EF853E9E6A0FD3C75486EF3A0F31_RuntimeMethod_var);
		__this->set__data_2(L_0);
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Terrace::.ctor(LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrace__ctor_mC8847D6F43277DB3E57A5EE4618900B6A4553A61 (Terrace_t441233268BCC329AC1DCD704A5891A0CD56EFB6B * __this, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA0CE4C11D163EF853E9E6A0FD3C75486EF3A0F31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<double> _data = new List<double>();
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_0 = (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *)il2cpp_codegen_object_new(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC_il2cpp_TypeInfo_var);
		List_1__ctor_mA0CE4C11D163EF853E9E6A0FD3C75486EF3A0F31(L_0, /*hidden argument*/List_1__ctor_mA0CE4C11D163EF853E9E6A0FD3C75486EF3A0F31_RuntimeMethod_var);
		__this->set__data_2(L_0);
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// Modules[0] = input;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_1;
		L_1 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_2 = ___input0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_2);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Terrace::.ctor(System.Boolean,LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrace__ctor_mAD7B805200FD464014765B73DFD1926DA80B9E6C (Terrace_t441233268BCC329AC1DCD704A5891A0CD56EFB6B * __this, bool ___inverted0, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___input1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mA0CE4C11D163EF853E9E6A0FD3C75486EF3A0F31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly List<double> _data = new List<double>();
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_0 = (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC *)il2cpp_codegen_object_new(List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC_il2cpp_TypeInfo_var);
		List_1__ctor_mA0CE4C11D163EF853E9E6A0FD3C75486EF3A0F31(L_0, /*hidden argument*/List_1__ctor_mA0CE4C11D163EF853E9E6A0FD3C75486EF3A0F31_RuntimeMethod_var);
		__this->set__data_2(L_0);
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// Modules[0] = input;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_1;
		L_1 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_2 = ___input1;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_2);
		// IsInverted = inverted;
		bool L_3 = ___inverted0;
		Terrace_set_IsInverted_m4E8927A180BCC33D35B81DAE215FB20D4D7B3C12_inline(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 LibNoise.Operator.Terrace::get_ControlPointCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Terrace_get_ControlPointCount_mFC844F37F7125D2DCA7079E7D1984094FC2BDB1E (Terrace_t441233268BCC329AC1DCD704A5891A0CD56EFB6B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC1A91036A8488F4B39DA566C71D9631B796DCBE2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _data.Count; }
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_0 = __this->get__data_2();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mC1A91036A8488F4B39DA566C71D9631B796DCBE2_inline(L_0, /*hidden argument*/List_1_get_Count_mC1A91036A8488F4B39DA566C71D9631B796DCBE2_RuntimeMethod_var);
		return L_1;
	}
}
// System.Collections.Generic.List`1<System.Double> LibNoise.Operator.Terrace::get_ControlPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * Terrace_get_ControlPoints_m0335EBC5847D7900681E85DB2F03095D0CDE2A6C (Terrace_t441233268BCC329AC1DCD704A5891A0CD56EFB6B * __this, const RuntimeMethod* method)
{
	{
		// get { return _data; }
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_0 = __this->get__data_2();
		return L_0;
	}
}
// System.Boolean LibNoise.Operator.Terrace::get_IsInverted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Terrace_get_IsInverted_m635D7CAB84A43960D7D6713D31F0B221A469B7D1 (Terrace_t441233268BCC329AC1DCD704A5891A0CD56EFB6B * __this, const RuntimeMethod* method)
{
	{
		// get { return _inverted; }
		bool L_0 = __this->get__inverted_3();
		return L_0;
	}
}
// System.Void LibNoise.Operator.Terrace::set_IsInverted(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrace_set_IsInverted_m4E8927A180BCC33D35B81DAE215FB20D4D7B3C12 (Terrace_t441233268BCC329AC1DCD704A5891A0CD56EFB6B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { _inverted = value; }
		bool L_0 = ___value0;
		__this->set__inverted_3(L_0);
		// set { _inverted = value; }
		return;
	}
}
// System.Void LibNoise.Operator.Terrace::Add(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrace_Add_m9837BB2EE40B152EFABC3FF0C44F4231D5006A93 (Terrace_t441233268BCC329AC1DCD704A5891A0CD56EFB6B * __this, double ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1__ctor_m331BF6165A41C6570EC02FA8FCAC0BADECA88E22_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_t08C078C3FDDD0746272F4DC7A982874AB477F342_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_mD87D363D3B6C004CE8030608165F3387B76DB6B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m44310CC5BD6029CA7490C6DBDF3962606BB28148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAddU3Eb__12_0_m5F3AA2D89832EBEF312B142B5D07D3E0060DB61C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1DF4E36F3C2F62F4817EF0F6147963476249A6C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Comparison_1_t08C078C3FDDD0746272F4DC7A982874AB477F342 * G_B4_0 = NULL;
	List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * G_B4_1 = NULL;
	Comparison_1_t08C078C3FDDD0746272F4DC7A982874AB477F342 * G_B3_0 = NULL;
	List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * G_B3_1 = NULL;
	{
		// if (!_data.Contains(input))
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_0 = __this->get__data_2();
		double L_1 = ___input0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Contains_mD87D363D3B6C004CE8030608165F3387B76DB6B2(L_0, L_1, /*hidden argument*/List_1_Contains_mD87D363D3B6C004CE8030608165F3387B76DB6B2_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_001a;
		}
	}
	{
		// _data.Add(input);
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_3 = __this->get__data_2();
		double L_4 = ___input0;
		NullCheck(L_3);
		List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929(L_3, L_4, /*hidden argument*/List_1_Add_m56E93B74F5254C198272F09C8E4B09483184B929_RuntimeMethod_var);
	}

IL_001a:
	{
		// _data.Sort(delegate(double lhs, double rhs) { return lhs.CompareTo(rhs); });
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_5 = __this->get__data_2();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t1DF4E36F3C2F62F4817EF0F6147963476249A6C8_il2cpp_TypeInfo_var);
		Comparison_1_t08C078C3FDDD0746272F4DC7A982874AB477F342 * L_6 = ((U3CU3Ec_t1DF4E36F3C2F62F4817EF0F6147963476249A6C8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1DF4E36F3C2F62F4817EF0F6147963476249A6C8_il2cpp_TypeInfo_var))->get_U3CU3E9__12_0_1();
		Comparison_1_t08C078C3FDDD0746272F4DC7A982874AB477F342 * L_7 = L_6;
		G_B3_0 = L_7;
		G_B3_1 = L_5;
		if (L_7)
		{
			G_B4_0 = L_7;
			G_B4_1 = L_5;
			goto IL_003f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t1DF4E36F3C2F62F4817EF0F6147963476249A6C8_il2cpp_TypeInfo_var);
		U3CU3Ec_t1DF4E36F3C2F62F4817EF0F6147963476249A6C8 * L_8 = ((U3CU3Ec_t1DF4E36F3C2F62F4817EF0F6147963476249A6C8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1DF4E36F3C2F62F4817EF0F6147963476249A6C8_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Comparison_1_t08C078C3FDDD0746272F4DC7A982874AB477F342 * L_9 = (Comparison_1_t08C078C3FDDD0746272F4DC7A982874AB477F342 *)il2cpp_codegen_object_new(Comparison_1_t08C078C3FDDD0746272F4DC7A982874AB477F342_il2cpp_TypeInfo_var);
		Comparison_1__ctor_m331BF6165A41C6570EC02FA8FCAC0BADECA88E22(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec_U3CAddU3Eb__12_0_m5F3AA2D89832EBEF312B142B5D07D3E0060DB61C_RuntimeMethod_var), /*hidden argument*/Comparison_1__ctor_m331BF6165A41C6570EC02FA8FCAC0BADECA88E22_RuntimeMethod_var);
		Comparison_1_t08C078C3FDDD0746272F4DC7A982874AB477F342 * L_10 = L_9;
		((U3CU3Ec_t1DF4E36F3C2F62F4817EF0F6147963476249A6C8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1DF4E36F3C2F62F4817EF0F6147963476249A6C8_il2cpp_TypeInfo_var))->set_U3CU3E9__12_0_1(L_10);
		G_B4_0 = L_10;
		G_B4_1 = G_B3_1;
	}

IL_003f:
	{
		NullCheck(G_B4_1);
		List_1_Sort_m44310CC5BD6029CA7490C6DBDF3962606BB28148(G_B4_1, G_B4_0, /*hidden argument*/List_1_Sort_m44310CC5BD6029CA7490C6DBDF3962606BB28148_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Terrace::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrace_Clear_mCF7F40739EF800C4E998191354AA930FE136FE7A (Terrace_t441233268BCC329AC1DCD704A5891A0CD56EFB6B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mF271DBB69BEA5517448FE5A837FA429618F2F66F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _data.Clear();
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_0 = __this->get__data_2();
		NullCheck(L_0);
		List_1_Clear_mF271DBB69BEA5517448FE5A837FA429618F2F66F(L_0, /*hidden argument*/List_1_Clear_mF271DBB69BEA5517448FE5A837FA429618F2F66F_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Terrace::Generate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Terrace_Generate_m79896A98ED3861A460D2DE855B71143B9920013C (Terrace_t441233268BCC329AC1DCD704A5891A0CD56EFB6B * __this, int32_t ___steps0, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	{
		// if (steps < 2)
		int32_t L_0 = ___steps0;
		if ((((int32_t)L_0) >= ((int32_t)2)))
		{
			goto IL_000f;
		}
	}
	{
		// throw new ArgumentException("Need at least two steps");
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_1 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEB098135D5C5BB4E46D3681AD3C5E45E1341C358)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Terrace_Generate_m79896A98ED3861A460D2DE855B71143B9920013C_RuntimeMethod_var)));
	}

IL_000f:
	{
		// Clear();
		Terrace_Clear_mCF7F40739EF800C4E998191354AA930FE136FE7A(__this, /*hidden argument*/NULL);
		// var ts = 2.0 / (steps - 1.0);
		int32_t L_2 = ___steps0;
		V_0 = ((double)((double)(2.0)/(double)((double)il2cpp_codegen_subtract((double)((double)((double)L_2)), (double)(1.0)))));
		// var cv = -1.0;
		V_1 = (-1.0);
		// for (var i = 0; i < steps; i++)
		V_2 = 0;
		goto IL_0049;
	}

IL_003a:
	{
		// Add(cv);
		double L_3 = V_1;
		Terrace_Add_m9837BB2EE40B152EFABC3FF0C44F4231D5006A93(__this, L_3, /*hidden argument*/NULL);
		// cv += ts;
		double L_4 = V_1;
		double L_5 = V_0;
		V_1 = ((double)il2cpp_codegen_add((double)L_4, (double)L_5));
		// for (var i = 0; i < steps; i++)
		int32_t L_6 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0049:
	{
		// for (var i = 0; i < steps; i++)
		int32_t L_7 = V_2;
		int32_t L_8 = ___steps0;
		if ((((int32_t)L_7) < ((int32_t)L_8)))
		{
			goto IL_003a;
		}
	}
	{
		// }
		return;
	}
}
// System.Double LibNoise.Operator.Terrace::GetValue(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Terrace_GetValue_m584E73DE7E22751EC273C257E03C381961097B1C (Terrace_t441233268BCC329AC1DCD704A5891A0CD56EFB6B * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mC1A91036A8488F4B39DA566C71D9631B796DCBE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	{
		// var smv = Modules[0].GetValue(x, y, z);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		double L_3 = ___x0;
		double L_4 = ___y1;
		double L_5 = ___z2;
		NullCheck(L_2);
		double L_6;
		L_6 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_2, L_3, L_4, L_5);
		V_0 = L_6;
		// for (ip = 0; ip < _data.Count; ip++)
		V_1 = 0;
		goto IL_0028;
	}

IL_0015:
	{
		// if (smv < _data[ip])
		double L_7 = V_0;
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_8 = __this->get__data_2();
		int32_t L_9 = V_1;
		NullCheck(L_8);
		double L_10;
		L_10 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_8, L_9, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		if ((((double)L_7) < ((double)L_10)))
		{
			goto IL_0036;
		}
	}
	{
		// for (ip = 0; ip < _data.Count; ip++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0028:
	{
		// for (ip = 0; ip < _data.Count; ip++)
		int32_t L_12 = V_1;
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_13 = __this->get__data_2();
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_mC1A91036A8488F4B39DA566C71D9631B796DCBE2_inline(L_13, /*hidden argument*/List_1_get_Count_mC1A91036A8488F4B39DA566C71D9631B796DCBE2_RuntimeMethod_var);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_0015;
		}
	}

IL_0036:
	{
		// var i0 = Mathf.Clamp(ip - 1, 0, _data.Count - 1);
		int32_t L_15 = V_1;
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_16 = __this->get__data_2();
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_mC1A91036A8488F4B39DA566C71D9631B796DCBE2_inline(L_16, /*hidden argument*/List_1_get_Count_mC1A91036A8488F4B39DA566C71D9631B796DCBE2_RuntimeMethod_var);
		int32_t L_18;
		L_18 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)1)), 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_18;
		// var i1 = Mathf.Clamp(ip, 0, _data.Count - 1);
		int32_t L_19 = V_1;
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_20 = __this->get__data_2();
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_mC1A91036A8488F4B39DA566C71D9631B796DCBE2_inline(L_20, /*hidden argument*/List_1_get_Count_mC1A91036A8488F4B39DA566C71D9631B796DCBE2_RuntimeMethod_var);
		int32_t L_22;
		L_22 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(L_19, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_21, (int32_t)1)), /*hidden argument*/NULL);
		V_3 = L_22;
		// if (i0 == i1)
		int32_t L_23 = V_2;
		int32_t L_24 = V_3;
		if ((!(((uint32_t)L_23) == ((uint32_t)L_24))))
		{
			goto IL_0073;
		}
	}
	{
		// return _data[i1];
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_25 = __this->get__data_2();
		int32_t L_26 = V_3;
		NullCheck(L_25);
		double L_27;
		L_27 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_25, L_26, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		return L_27;
	}

IL_0073:
	{
		// var v0 = _data[i0];
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_28 = __this->get__data_2();
		int32_t L_29 = V_2;
		NullCheck(L_28);
		double L_30;
		L_30 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_28, L_29, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		V_4 = L_30;
		// var v1 = _data[i1];
		List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * L_31 = __this->get__data_2();
		int32_t L_32 = V_3;
		NullCheck(L_31);
		double L_33;
		L_33 = List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_inline(L_31, L_32, /*hidden argument*/List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_RuntimeMethod_var);
		V_5 = L_33;
		// var a = (smv - v0) / (v1 - v0);
		double L_34 = V_0;
		double L_35 = V_4;
		double L_36 = V_5;
		double L_37 = V_4;
		V_6 = ((double)((double)((double)il2cpp_codegen_subtract((double)L_34, (double)L_35))/(double)((double)il2cpp_codegen_subtract((double)L_36, (double)L_37))));
		// if (_inverted)
		bool L_38 = __this->get__inverted_3();
		if (!L_38)
		{
			goto IL_00b9;
		}
	}
	{
		// a = 1.0 - a;
		double L_39 = V_6;
		V_6 = ((double)il2cpp_codegen_subtract((double)(1.0), (double)L_39));
		// var t = v0;
		double L_40 = V_4;
		// v0 = v1;
		double L_41 = V_5;
		V_4 = L_41;
		// v1 = t;
		V_5 = L_40;
	}

IL_00b9:
	{
		// a *= a;
		double L_42 = V_6;
		double L_43 = V_6;
		V_6 = ((double)il2cpp_codegen_multiply((double)L_42, (double)L_43));
		// return Utils.InterpolateLinear(v0, v1, a);
		double L_44 = V_4;
		double L_45 = V_5;
		double L_46 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		double L_47;
		L_47 = Utils_InterpolateLinear_m67C385B25C06BA3BC751E5A962CCBCAE3C2A07AF(L_44, L_45, L_46, /*hidden argument*/NULL);
		return L_47;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Operator.Translate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Translate__ctor_mCD2D87BEAF9A6C8948100DE4F4B05CEDE864077C (Translate_tCD3593A12B920217B0A4E4DEC37F8D994D09B8F9 * __this, const RuntimeMethod* method)
{
	{
		// private double _x = 1.0;
		__this->set__x_2((1.0));
		// private double _y = 1.0;
		__this->set__y_3((1.0));
		// private double _z = 1.0;
		__this->set__z_4((1.0));
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Translate::.ctor(LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Translate__ctor_mD11A174AF1A7659CA2961EC50812D0E266B6E46E (Translate_tCD3593A12B920217B0A4E4DEC37F8D994D09B8F9 * __this, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___input0, const RuntimeMethod* method)
{
	{
		// private double _x = 1.0;
		__this->set__x_2((1.0));
		// private double _y = 1.0;
		__this->set__y_3((1.0));
		// private double _z = 1.0;
		__this->set__z_4((1.0));
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// Modules[0] = input;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___input0;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_1);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Translate::.ctor(System.Double,System.Double,System.Double,LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Translate__ctor_m8C06F859E773896DE818B40A0048D897B898C670 (Translate_tCD3593A12B920217B0A4E4DEC37F8D994D09B8F9 * __this, double ___x0, double ___y1, double ___z2, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___input3, const RuntimeMethod* method)
{
	{
		// private double _x = 1.0;
		__this->set__x_2((1.0));
		// private double _y = 1.0;
		__this->set__y_3((1.0));
		// private double _z = 1.0;
		__this->set__z_4((1.0));
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// Modules[0] = input;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_1 = ___input3;
		NullCheck(L_0);
		ArrayElementTypeCheck (L_0, L_1);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_1);
		// X = x;
		double L_2 = ___x0;
		Translate_set_X_mB7C01EFCB736591C5EC65169814825C8E5FF5570_inline(__this, L_2, /*hidden argument*/NULL);
		// Y = y;
		double L_3 = ___y1;
		Translate_set_Y_mA21B95B32CD1F57EE3CB0FD2B798BDB9F256F6A0_inline(__this, L_3, /*hidden argument*/NULL);
		// Z = z;
		double L_4 = ___z2;
		Translate_set_Z_mCAA830F8F3B42F11095F7EF77B9D553664E01C06_inline(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Double LibNoise.Operator.Translate::get_X()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Translate_get_X_mD3432B5991BE238CBCFF36EB4503EA335B717697 (Translate_tCD3593A12B920217B0A4E4DEC37F8D994D09B8F9 * __this, const RuntimeMethod* method)
{
	{
		// get { return _x; }
		double L_0 = __this->get__x_2();
		return L_0;
	}
}
// System.Void LibNoise.Operator.Translate::set_X(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Translate_set_X_mB7C01EFCB736591C5EC65169814825C8E5FF5570 (Translate_tCD3593A12B920217B0A4E4DEC37F8D994D09B8F9 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _x = value; }
		double L_0 = ___value0;
		__this->set__x_2(L_0);
		// set { _x = value; }
		return;
	}
}
// System.Double LibNoise.Operator.Translate::get_Y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Translate_get_Y_m44EAFB237096B8EFA24644518D3E48800AD3D822 (Translate_tCD3593A12B920217B0A4E4DEC37F8D994D09B8F9 * __this, const RuntimeMethod* method)
{
	{
		// get { return _y; }
		double L_0 = __this->get__y_3();
		return L_0;
	}
}
// System.Void LibNoise.Operator.Translate::set_Y(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Translate_set_Y_mA21B95B32CD1F57EE3CB0FD2B798BDB9F256F6A0 (Translate_tCD3593A12B920217B0A4E4DEC37F8D994D09B8F9 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _y = value; }
		double L_0 = ___value0;
		__this->set__y_3(L_0);
		// set { _y = value; }
		return;
	}
}
// System.Double LibNoise.Operator.Translate::get_Z()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Translate_get_Z_mBEE1AE0F5F4C10859125CAFB0EF202B56A1955BD (Translate_tCD3593A12B920217B0A4E4DEC37F8D994D09B8F9 * __this, const RuntimeMethod* method)
{
	{
		// get { return _z; }
		double L_0 = __this->get__z_4();
		return L_0;
	}
}
// System.Void LibNoise.Operator.Translate::set_Z(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Translate_set_Z_mCAA830F8F3B42F11095F7EF77B9D553664E01C06 (Translate_tCD3593A12B920217B0A4E4DEC37F8D994D09B8F9 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _z = value; }
		double L_0 = ___value0;
		__this->set__z_4(L_0);
		// set { _z = value; }
		return;
	}
}
// System.Double LibNoise.Operator.Translate::GetValue(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Translate_GetValue_m2C491AAE3ACD7BEC35917C32D10D7D6539833A13 (Translate_tCD3593A12B920217B0A4E4DEC37F8D994D09B8F9 * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	{
		// return Modules[0].GetValue(x + _x, y + _y, z + _z);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0;
		L_0 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		double L_3 = ___x0;
		double L_4 = __this->get__x_2();
		double L_5 = ___y1;
		double L_6 = __this->get__y_3();
		double L_7 = ___z2;
		double L_8 = __this->get__z_4();
		NullCheck(L_2);
		double L_9;
		L_9 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_2, ((double)il2cpp_codegen_add((double)L_3, (double)L_4)), ((double)il2cpp_codegen_add((double)L_5, (double)L_6)), ((double)il2cpp_codegen_add((double)L_7, (double)L_8)));
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Operator.Turbulence::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Turbulence__ctor_mAC8CE15B5BB3185C589A284C2C6E8D1413B3E815 (Turbulence_tC8326B21F7FB734FFC340C3052A21F6205F898A1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private double _power = 1.0;
		__this->set__power_11((1.0));
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// _xDistort = new Perlin();
		Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * L_0 = (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 *)il2cpp_codegen_object_new(Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283_il2cpp_TypeInfo_var);
		Perlin__ctor_mA8440D2FF16976DB7027C7A55AFF58DB7B01F1C4(L_0, /*hidden argument*/NULL);
		__this->set__xDistort_12(L_0);
		// _yDistort = new Perlin();
		Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * L_1 = (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 *)il2cpp_codegen_object_new(Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283_il2cpp_TypeInfo_var);
		Perlin__ctor_mA8440D2FF16976DB7027C7A55AFF58DB7B01F1C4(L_1, /*hidden argument*/NULL);
		__this->set__yDistort_13(L_1);
		// _zDistort = new Perlin();
		Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * L_2 = (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 *)il2cpp_codegen_object_new(Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283_il2cpp_TypeInfo_var);
		Perlin__ctor_mA8440D2FF16976DB7027C7A55AFF58DB7B01F1C4(L_2, /*hidden argument*/NULL);
		__this->set__zDistort_14(L_2);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Turbulence::.ctor(LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Turbulence__ctor_mEC5580CB91992EE5CA0D9210C73BED35B1CBF5A2 (Turbulence_tC8326B21F7FB734FFC340C3052A21F6205F898A1 * __this, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private double _power = 1.0;
		__this->set__power_11((1.0));
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// _xDistort = new Perlin();
		Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * L_0 = (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 *)il2cpp_codegen_object_new(Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283_il2cpp_TypeInfo_var);
		Perlin__ctor_mA8440D2FF16976DB7027C7A55AFF58DB7B01F1C4(L_0, /*hidden argument*/NULL);
		__this->set__xDistort_12(L_0);
		// _yDistort = new Perlin();
		Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * L_1 = (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 *)il2cpp_codegen_object_new(Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283_il2cpp_TypeInfo_var);
		Perlin__ctor_mA8440D2FF16976DB7027C7A55AFF58DB7B01F1C4(L_1, /*hidden argument*/NULL);
		__this->set__yDistort_13(L_1);
		// _zDistort = new Perlin();
		Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * L_2 = (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 *)il2cpp_codegen_object_new(Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283_il2cpp_TypeInfo_var);
		Perlin__ctor_mA8440D2FF16976DB7027C7A55AFF58DB7B01F1C4(L_2, /*hidden argument*/NULL);
		__this->set__zDistort_14(L_2);
		// Modules[0] = input;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_3;
		L_3 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_4 = ___input0;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_4);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Turbulence::.ctor(System.Double,LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Turbulence__ctor_m9EFFA3E0EB601829F7E0E31387034657BD723319 (Turbulence_tC8326B21F7FB734FFC340C3052A21F6205F898A1 * __this, double ___power0, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___input1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(new Perlin(), new Perlin(), new Perlin(), power, input)
		Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * L_0 = (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 *)il2cpp_codegen_object_new(Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283_il2cpp_TypeInfo_var);
		Perlin__ctor_mA8440D2FF16976DB7027C7A55AFF58DB7B01F1C4(L_0, /*hidden argument*/NULL);
		Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * L_1 = (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 *)il2cpp_codegen_object_new(Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283_il2cpp_TypeInfo_var);
		Perlin__ctor_mA8440D2FF16976DB7027C7A55AFF58DB7B01F1C4(L_1, /*hidden argument*/NULL);
		Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * L_2 = (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 *)il2cpp_codegen_object_new(Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283_il2cpp_TypeInfo_var);
		Perlin__ctor_mA8440D2FF16976DB7027C7A55AFF58DB7B01F1C4(L_2, /*hidden argument*/NULL);
		double L_3 = ___power0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_4 = ___input1;
		Turbulence__ctor_m6AF751ED8A672855D28AA54EDD9F1DBB81B4E1B1(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Operator.Turbulence::.ctor(LibNoise.Generator.Perlin,LibNoise.Generator.Perlin,LibNoise.Generator.Perlin,System.Double,LibNoise.ModuleBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Turbulence__ctor_m6AF751ED8A672855D28AA54EDD9F1DBB81B4E1B1 (Turbulence_tC8326B21F7FB734FFC340C3052A21F6205F898A1 * __this, Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * ___x0, Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * ___y1, Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * ___z2, double ___power3, ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * ___input4, const RuntimeMethod* method)
{
	{
		// private double _power = 1.0;
		__this->set__power_11((1.0));
		// : base(1)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 1, /*hidden argument*/NULL);
		// _xDistort = x;
		Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * L_0 = ___x0;
		__this->set__xDistort_12(L_0);
		// _yDistort = y;
		Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * L_1 = ___y1;
		__this->set__yDistort_13(L_1);
		// _zDistort = z;
		Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * L_2 = ___z2;
		__this->set__zDistort_14(L_2);
		// Modules[0] = input;
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_3;
		L_3 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_4 = ___input4;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D *)L_4);
		// Power = power;
		double L_5 = ___power3;
		Turbulence_set_Power_m998FC81A9B3EA7561472824DF585A9B539FE9992_inline(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Double LibNoise.Operator.Turbulence::get_Frequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Turbulence_get_Frequency_m0F2813325874B49E0F5F2E69F2A3C268616D60EC (Turbulence_tC8326B21F7FB734FFC340C3052A21F6205F898A1 * __this, const RuntimeMethod* method)
{
	{
		// get { return _xDistort.Frequency; }
		Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * L_0 = __this->get__xDistort_12();
		NullCheck(L_0);
		double L_1;
		L_1 = Perlin_get_Frequency_mEAE3E2E0985EDE739F576F750F3E4E1AAAEEE196_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void LibNoise.Operator.Turbulence::set_Frequency(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Turbulence_set_Frequency_m63A0059035336D50E1AEF9BA66EBF3408D58235F (Turbulence_tC8326B21F7FB734FFC340C3052A21F6205F898A1 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// _xDistort.Frequency = value;
		Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * L_0 = __this->get__xDistort_12();
		double L_1 = ___value0;
		NullCheck(L_0);
		Perlin_set_Frequency_m094C85FD638DD0C24CBB608E0FA36971242BA271_inline(L_0, L_1, /*hidden argument*/NULL);
		// _yDistort.Frequency = value;
		Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * L_2 = __this->get__yDistort_13();
		double L_3 = ___value0;
		NullCheck(L_2);
		Perlin_set_Frequency_m094C85FD638DD0C24CBB608E0FA36971242BA271_inline(L_2, L_3, /*hidden argument*/NULL);
		// _zDistort.Frequency = value;
		Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * L_4 = __this->get__zDistort_14();
		double L_5 = ___value0;
		NullCheck(L_4);
		Perlin_set_Frequency_m094C85FD638DD0C24CBB608E0FA36971242BA271_inline(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Double LibNoise.Operator.Turbulence::get_Power()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Turbulence_get_Power_m4EEC7D91C55762A41101ACCAF85B5EC97F5402FA (Turbulence_tC8326B21F7FB734FFC340C3052A21F6205F898A1 * __this, const RuntimeMethod* method)
{
	{
		// get { return _power; }
		double L_0 = __this->get__power_11();
		return L_0;
	}
}
// System.Void LibNoise.Operator.Turbulence::set_Power(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Turbulence_set_Power_m998FC81A9B3EA7561472824DF585A9B539FE9992 (Turbulence_tC8326B21F7FB734FFC340C3052A21F6205F898A1 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _power = value; }
		double L_0 = ___value0;
		__this->set__power_11(L_0);
		// set { _power = value; }
		return;
	}
}
// System.Int32 LibNoise.Operator.Turbulence::get_Roughness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Turbulence_get_Roughness_m452665AC605E6B1099134D00C8AF1ABE82329864 (Turbulence_tC8326B21F7FB734FFC340C3052A21F6205F898A1 * __this, const RuntimeMethod* method)
{
	{
		// get { return _xDistort.OctaveCount; }
		Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * L_0 = __this->get__xDistort_12();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Perlin_get_OctaveCount_mC78AF4F84B21D3ECC0E6E0CB89C476D38B39B475_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void LibNoise.Operator.Turbulence::set_Roughness(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Turbulence_set_Roughness_m57E095B1ED8F2C717848C28D6482399858AE6ABD (Turbulence_tC8326B21F7FB734FFC340C3052A21F6205F898A1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// _xDistort.OctaveCount = value;
		Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * L_0 = __this->get__xDistort_12();
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		Perlin_set_OctaveCount_mE516F4E18DAD9F9E527E13809A86463A47017FC9(L_0, L_1, /*hidden argument*/NULL);
		// _yDistort.OctaveCount = value;
		Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * L_2 = __this->get__yDistort_13();
		int32_t L_3 = ___value0;
		NullCheck(L_2);
		Perlin_set_OctaveCount_mE516F4E18DAD9F9E527E13809A86463A47017FC9(L_2, L_3, /*hidden argument*/NULL);
		// _zDistort.OctaveCount = value;
		Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * L_4 = __this->get__zDistort_14();
		int32_t L_5 = ___value0;
		NullCheck(L_4);
		Perlin_set_OctaveCount_mE516F4E18DAD9F9E527E13809A86463A47017FC9(L_4, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 LibNoise.Operator.Turbulence::get_Seed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Turbulence_get_Seed_m300DD428317B44DC6467656391951204D5200CED (Turbulence_tC8326B21F7FB734FFC340C3052A21F6205F898A1 * __this, const RuntimeMethod* method)
{
	{
		// get { return _xDistort.Seed; }
		Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * L_0 = __this->get__xDistort_12();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Perlin_get_Seed_m70376C13B6270AF177140300B0E85AEB2C7032B7_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void LibNoise.Operator.Turbulence::set_Seed(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Turbulence_set_Seed_m7B850924961C5585C0D0FB3EA26CED2ACB11802A (Turbulence_tC8326B21F7FB734FFC340C3052A21F6205F898A1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// _xDistort.Seed = value;
		Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * L_0 = __this->get__xDistort_12();
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		Perlin_set_Seed_m106B83E8805A46A44CB68874E86D9E430EB45DF2_inline(L_0, L_1, /*hidden argument*/NULL);
		// _yDistort.Seed = value + 1;
		Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * L_2 = __this->get__yDistort_13();
		int32_t L_3 = ___value0;
		NullCheck(L_2);
		Perlin_set_Seed_m106B83E8805A46A44CB68874E86D9E430EB45DF2_inline(L_2, ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)), /*hidden argument*/NULL);
		// _zDistort.Seed = value + 2;
		Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * L_4 = __this->get__zDistort_14();
		int32_t L_5 = ___value0;
		NullCheck(L_4);
		Perlin_set_Seed_m106B83E8805A46A44CB68874E86D9E430EB45DF2_inline(L_4, ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)2)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Double LibNoise.Operator.Turbulence::GetValue(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Turbulence_GetValue_mDE5F7FE53584B08506CB86ECC9B7553E3E7741C5 (Turbulence_tC8326B21F7FB734FFC340C3052A21F6205F898A1 * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		// var xd = x + (_xDistort.GetValue(x + X0, y + Y0, z + Z0) * _power);
		double L_0 = ___x0;
		Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * L_1 = __this->get__xDistort_12();
		double L_2 = ___x0;
		double L_3 = ___y1;
		double L_4 = ___z2;
		NullCheck(L_1);
		double L_5;
		L_5 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_1, ((double)il2cpp_codegen_add((double)L_2, (double)(0.189422607421875))), ((double)il2cpp_codegen_add((double)L_3, (double)(0.99371337890625))), ((double)il2cpp_codegen_add((double)L_4, (double)(0.4781646728515625))));
		double L_6 = __this->get__power_11();
		V_0 = ((double)il2cpp_codegen_add((double)L_0, (double)((double)il2cpp_codegen_multiply((double)L_5, (double)L_6))));
		// var yd = y + (_yDistort.GetValue(x + X1, y + Y1, z + Z1) * _power);
		double L_7 = ___y1;
		Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * L_8 = __this->get__yDistort_13();
		double L_9 = ___x0;
		double L_10 = ___y1;
		double L_11 = ___z2;
		NullCheck(L_8);
		double L_12;
		L_12 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_8, ((double)il2cpp_codegen_add((double)L_9, (double)(0.4046478271484375))), ((double)il2cpp_codegen_add((double)L_10, (double)(0.276611328125))), ((double)il2cpp_codegen_add((double)L_11, (double)(0.9230499267578125))));
		double L_13 = __this->get__power_11();
		V_1 = ((double)il2cpp_codegen_add((double)L_7, (double)((double)il2cpp_codegen_multiply((double)L_12, (double)L_13))));
		// var zd = z + (_zDistort.GetValue(x + X2, y + Y2, z + Z2) * _power);
		double L_14 = ___z2;
		Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * L_15 = __this->get__zDistort_14();
		double L_16 = ___x0;
		double L_17 = ___y1;
		double L_18 = ___z2;
		NullCheck(L_15);
		double L_19;
		L_19 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_15, ((double)il2cpp_codegen_add((double)L_16, (double)(0.82122802734375))), ((double)il2cpp_codegen_add((double)L_17, (double)(0.1710968017578125))), ((double)il2cpp_codegen_add((double)L_18, (double)(0.6842803955078125))));
		double L_20 = __this->get__power_11();
		V_2 = ((double)il2cpp_codegen_add((double)L_14, (double)((double)il2cpp_codegen_multiply((double)L_19, (double)L_20))));
		// return Modules[0].GetValue(xd, yd, zd);
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_21;
		L_21 = ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		int32_t L_22 = 0;
		ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		double L_24 = V_0;
		double L_25 = V_1;
		double L_26 = V_2;
		NullCheck(L_23);
		double L_27;
		L_27 = VirtFuncInvoker3< double, double, double, double >::Invoke(7 /* System.Double LibNoise.ModuleBase::GetValue(System.Double,System.Double,System.Double) */, L_23, L_24, L_25, L_26);
		return L_27;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Double LibNoise.Utils::GradientCoherentNoise3D(System.Double,System.Double,System.Double,System.Int64,LibNoise.QualityMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Utils_GradientCoherentNoise3D_m14EC2F50807ACC5ACFDF3037ED5145768F1F6222 (double ___x0, double ___y1, double ___z2, int64_t ___seed3, int32_t ___quality4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	double V_8 = 0.0;
	double V_9 = 0.0;
	double V_10 = 0.0;
	double V_11 = 0.0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	{
		// var x0 = x > 0.0 ? (int) x : (int) x - 1;
		double L_0 = ___x0;
		if ((((double)L_0) > ((double)(0.0))))
		{
			goto IL_0012;
		}
	}
	{
		double L_1 = ___x0;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_1), (int32_t)1));
		goto IL_0014;
	}

IL_0012:
	{
		double L_2 = ___x0;
		G_B3_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_2);
	}

IL_0014:
	{
		V_0 = G_B3_0;
		// var x1 = x0 + 1;
		int32_t L_3 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
		// var y0 = y > 0.0 ? (int) y : (int) y - 1;
		double L_4 = ___y1;
		if ((((double)L_4) > ((double)(0.0))))
		{
			goto IL_002b;
		}
	}
	{
		double L_5 = ___y1;
		G_B6_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_5), (int32_t)1));
		goto IL_002d;
	}

IL_002b:
	{
		double L_6 = ___y1;
		G_B6_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_6);
	}

IL_002d:
	{
		V_2 = G_B6_0;
		// var y1 = y0 + 1;
		int32_t L_7 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		// var z0 = z > 0.0 ? (int) z : (int) z - 1;
		double L_8 = ___z2;
		if ((((double)L_8) > ((double)(0.0))))
		{
			goto IL_0044;
		}
	}
	{
		double L_9 = ___z2;
		G_B9_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_9), (int32_t)1));
		goto IL_0046;
	}

IL_0044:
	{
		double L_10 = ___z2;
		G_B9_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_10);
	}

IL_0046:
	{
		V_4 = G_B9_0;
		// var z1 = z0 + 1;
		int32_t L_11 = V_4;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
		// double xs = 0, ys = 0, zs = 0;
		V_6 = (0.0);
		// double xs = 0, ys = 0, zs = 0;
		V_7 = (0.0);
		// double xs = 0, ys = 0, zs = 0;
		V_8 = (0.0);
		int32_t L_12 = ___quality4;
		switch (L_12)
		{
			case 0:
			{
				goto IL_0084;
			}
			case 1:
			{
				goto IL_0099;
			}
			case 2:
			{
				goto IL_00bd;
			}
		}
	}
	{
		goto IL_00df;
	}

IL_0084:
	{
		// xs = (x - x0);
		double L_13 = ___x0;
		int32_t L_14 = V_0;
		V_6 = ((double)il2cpp_codegen_subtract((double)L_13, (double)((double)((double)L_14))));
		// ys = (y - y0);
		double L_15 = ___y1;
		int32_t L_16 = V_2;
		V_7 = ((double)il2cpp_codegen_subtract((double)L_15, (double)((double)((double)L_16))));
		// zs = (z - z0);
		double L_17 = ___z2;
		int32_t L_18 = V_4;
		V_8 = ((double)il2cpp_codegen_subtract((double)L_17, (double)((double)((double)L_18))));
		// break;
		goto IL_00df;
	}

IL_0099:
	{
		// xs = MapCubicSCurve(x - x0);
		double L_19 = ___x0;
		int32_t L_20 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		double L_21;
		L_21 = Utils_MapCubicSCurve_mAF58D6A668F431FA198625EAB3EDF1C1E1E796EA(((double)il2cpp_codegen_subtract((double)L_19, (double)((double)((double)L_20)))), /*hidden argument*/NULL);
		V_6 = L_21;
		// ys = MapCubicSCurve(y - y0);
		double L_22 = ___y1;
		int32_t L_23 = V_2;
		double L_24;
		L_24 = Utils_MapCubicSCurve_mAF58D6A668F431FA198625EAB3EDF1C1E1E796EA(((double)il2cpp_codegen_subtract((double)L_22, (double)((double)((double)L_23)))), /*hidden argument*/NULL);
		V_7 = L_24;
		// zs = MapCubicSCurve(z - z0);
		double L_25 = ___z2;
		int32_t L_26 = V_4;
		double L_27;
		L_27 = Utils_MapCubicSCurve_mAF58D6A668F431FA198625EAB3EDF1C1E1E796EA(((double)il2cpp_codegen_subtract((double)L_25, (double)((double)((double)L_26)))), /*hidden argument*/NULL);
		V_8 = L_27;
		// break;
		goto IL_00df;
	}

IL_00bd:
	{
		// xs = MapQuinticSCurve(x - x0);
		double L_28 = ___x0;
		int32_t L_29 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		double L_30;
		L_30 = Utils_MapQuinticSCurve_mA01F12403C6E078647FEE168C1EA0AAE471E6C40(((double)il2cpp_codegen_subtract((double)L_28, (double)((double)((double)L_29)))), /*hidden argument*/NULL);
		V_6 = L_30;
		// ys = MapQuinticSCurve(y - y0);
		double L_31 = ___y1;
		int32_t L_32 = V_2;
		double L_33;
		L_33 = Utils_MapQuinticSCurve_mA01F12403C6E078647FEE168C1EA0AAE471E6C40(((double)il2cpp_codegen_subtract((double)L_31, (double)((double)((double)L_32)))), /*hidden argument*/NULL);
		V_7 = L_33;
		// zs = MapQuinticSCurve(z - z0);
		double L_34 = ___z2;
		int32_t L_35 = V_4;
		double L_36;
		L_36 = Utils_MapQuinticSCurve_mA01F12403C6E078647FEE168C1EA0AAE471E6C40(((double)il2cpp_codegen_subtract((double)L_34, (double)((double)((double)L_35)))), /*hidden argument*/NULL);
		V_8 = L_36;
	}

IL_00df:
	{
		// var n0 = GradientNoise3D(x, y, z, x0, y0, z0, seed);
		double L_37 = ___x0;
		double L_38 = ___y1;
		double L_39 = ___z2;
		int32_t L_40 = V_0;
		int32_t L_41 = V_2;
		int32_t L_42 = V_4;
		int64_t L_43 = ___seed3;
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		double L_44;
		L_44 = Utils_GradientNoise3D_m2B24F2006EC3D79C07A45D5CDD9E8CE0842A3C20(L_37, L_38, L_39, L_40, L_41, L_42, L_43, /*hidden argument*/NULL);
		// var n1 = GradientNoise3D(x, y, z, x1, y0, z0, seed);
		double L_45 = ___x0;
		double L_46 = ___y1;
		double L_47 = ___z2;
		int32_t L_48 = V_1;
		int32_t L_49 = V_2;
		int32_t L_50 = V_4;
		int64_t L_51 = ___seed3;
		double L_52;
		L_52 = Utils_GradientNoise3D_m2B24F2006EC3D79C07A45D5CDD9E8CE0842A3C20(L_45, L_46, L_47, L_48, L_49, L_50, L_51, /*hidden argument*/NULL);
		V_9 = L_52;
		// var ix0 = InterpolateLinear(n0, n1, xs);
		double L_53 = V_9;
		double L_54 = V_6;
		double L_55;
		L_55 = Utils_InterpolateLinear_m67C385B25C06BA3BC751E5A962CCBCAE3C2A07AF(L_44, L_53, L_54, /*hidden argument*/NULL);
		// n0 = GradientNoise3D(x, y, z, x0, y1, z0, seed);
		double L_56 = ___x0;
		double L_57 = ___y1;
		double L_58 = ___z2;
		int32_t L_59 = V_0;
		int32_t L_60 = V_3;
		int32_t L_61 = V_4;
		int64_t L_62 = ___seed3;
		double L_63;
		L_63 = Utils_GradientNoise3D_m2B24F2006EC3D79C07A45D5CDD9E8CE0842A3C20(L_56, L_57, L_58, L_59, L_60, L_61, L_62, /*hidden argument*/NULL);
		// n1 = GradientNoise3D(x, y, z, x1, y1, z0, seed);
		double L_64 = ___x0;
		double L_65 = ___y1;
		double L_66 = ___z2;
		int32_t L_67 = V_1;
		int32_t L_68 = V_3;
		int32_t L_69 = V_4;
		int64_t L_70 = ___seed3;
		double L_71;
		L_71 = Utils_GradientNoise3D_m2B24F2006EC3D79C07A45D5CDD9E8CE0842A3C20(L_64, L_65, L_66, L_67, L_68, L_69, L_70, /*hidden argument*/NULL);
		V_9 = L_71;
		// var ix1 = InterpolateLinear(n0, n1, xs);
		double L_72 = V_9;
		double L_73 = V_6;
		double L_74;
		L_74 = Utils_InterpolateLinear_m67C385B25C06BA3BC751E5A962CCBCAE3C2A07AF(L_63, L_72, L_73, /*hidden argument*/NULL);
		V_10 = L_74;
		// var iy0 = InterpolateLinear(ix0, ix1, ys);
		double L_75 = V_10;
		double L_76 = V_7;
		double L_77;
		L_77 = Utils_InterpolateLinear_m67C385B25C06BA3BC751E5A962CCBCAE3C2A07AF(L_55, L_75, L_76, /*hidden argument*/NULL);
		// n0 = GradientNoise3D(x, y, z, x0, y0, z1, seed);
		double L_78 = ___x0;
		double L_79 = ___y1;
		double L_80 = ___z2;
		int32_t L_81 = V_0;
		int32_t L_82 = V_2;
		int32_t L_83 = V_5;
		int64_t L_84 = ___seed3;
		double L_85;
		L_85 = Utils_GradientNoise3D_m2B24F2006EC3D79C07A45D5CDD9E8CE0842A3C20(L_78, L_79, L_80, L_81, L_82, L_83, L_84, /*hidden argument*/NULL);
		// n1 = GradientNoise3D(x, y, z, x1, y0, z1, seed);
		double L_86 = ___x0;
		double L_87 = ___y1;
		double L_88 = ___z2;
		int32_t L_89 = V_1;
		int32_t L_90 = V_2;
		int32_t L_91 = V_5;
		int64_t L_92 = ___seed3;
		double L_93;
		L_93 = Utils_GradientNoise3D_m2B24F2006EC3D79C07A45D5CDD9E8CE0842A3C20(L_86, L_87, L_88, L_89, L_90, L_91, L_92, /*hidden argument*/NULL);
		V_9 = L_93;
		// ix0 = InterpolateLinear(n0, n1, xs);
		double L_94 = V_9;
		double L_95 = V_6;
		double L_96;
		L_96 = Utils_InterpolateLinear_m67C385B25C06BA3BC751E5A962CCBCAE3C2A07AF(L_85, L_94, L_95, /*hidden argument*/NULL);
		// n0 = GradientNoise3D(x, y, z, x0, y1, z1, seed);
		double L_97 = ___x0;
		double L_98 = ___y1;
		double L_99 = ___z2;
		int32_t L_100 = V_0;
		int32_t L_101 = V_3;
		int32_t L_102 = V_5;
		int64_t L_103 = ___seed3;
		double L_104;
		L_104 = Utils_GradientNoise3D_m2B24F2006EC3D79C07A45D5CDD9E8CE0842A3C20(L_97, L_98, L_99, L_100, L_101, L_102, L_103, /*hidden argument*/NULL);
		// n1 = GradientNoise3D(x, y, z, x1, y1, z1, seed);
		double L_105 = ___x0;
		double L_106 = ___y1;
		double L_107 = ___z2;
		int32_t L_108 = V_1;
		int32_t L_109 = V_3;
		int32_t L_110 = V_5;
		int64_t L_111 = ___seed3;
		double L_112;
		L_112 = Utils_GradientNoise3D_m2B24F2006EC3D79C07A45D5CDD9E8CE0842A3C20(L_105, L_106, L_107, L_108, L_109, L_110, L_111, /*hidden argument*/NULL);
		V_9 = L_112;
		// ix1 = InterpolateLinear(n0, n1, xs);
		double L_113 = V_9;
		double L_114 = V_6;
		double L_115;
		L_115 = Utils_InterpolateLinear_m67C385B25C06BA3BC751E5A962CCBCAE3C2A07AF(L_104, L_113, L_114, /*hidden argument*/NULL);
		V_10 = L_115;
		// var iy1 = InterpolateLinear(ix0, ix1, ys);
		double L_116 = V_10;
		double L_117 = V_7;
		double L_118;
		L_118 = Utils_InterpolateLinear_m67C385B25C06BA3BC751E5A962CCBCAE3C2A07AF(L_96, L_116, L_117, /*hidden argument*/NULL);
		V_11 = L_118;
		// return InterpolateLinear(iy0, iy1, zs);
		double L_119 = V_11;
		double L_120 = V_8;
		double L_121;
		L_121 = Utils_InterpolateLinear_m67C385B25C06BA3BC751E5A962CCBCAE3C2A07AF(L_77, L_119, L_120, /*hidden argument*/NULL);
		return L_121;
	}
}
// System.Double LibNoise.Utils::GradientNoise3D(System.Double,System.Double,System.Double,System.Int32,System.Int32,System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Utils_GradientNoise3D_m2B24F2006EC3D79C07A45D5CDD9E8CE0842A3C20 (double ___fx0, double ___fy1, double ___fz2, int32_t ___ix3, int32_t ___iy4, int32_t ___iz5, int64_t ___seed6, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_GradientNoise3D_m2B24F2006EC3D79C07A45D5CDD9E8CE0842A3C20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	{
		// var i = (GeneratorNoiseX * ix + GeneratorNoiseY * iy + GeneratorNoiseZ * iz +
		//          GeneratorSeed * seed) & 0xffffffff;
		int32_t L_0 = ___ix3;
		int32_t L_1 = ___iy4;
		int32_t L_2 = ___iz5;
		int64_t L_3 = ___seed6;
		V_0 = ((int64_t)((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)1619), (int32_t)L_0)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)31337), (int32_t)L_1)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)6971), (int32_t)L_2)))))), (int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)((int32_t)1013))), (int64_t)L_3))))&(int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)(-1)))))));
		// i ^= (i >> GeneratorShift);
		int64_t L_4 = V_0;
		int64_t L_5 = V_0;
		V_0 = ((int64_t)((int64_t)L_4^(int64_t)((int64_t)((int64_t)L_5>>(int32_t)8))));
		// i &= 0xff;
		int64_t L_6 = V_0;
		V_0 = ((int64_t)((int64_t)L_6&(int64_t)((int64_t)((int64_t)((int32_t)255)))));
		// var xvg = Randoms[(i << 2)];
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_7 = ((Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var))->get_Randoms_7();
		int64_t L_8 = V_0;
		if ((int64_t)(((int64_t)((int64_t)L_8<<(int32_t)2))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Utils_GradientNoise3D_m2B24F2006EC3D79C07A45D5CDD9E8CE0842A3C20_RuntimeMethod_var);
		NullCheck(L_7);
		intptr_t L_9 = ((intptr_t)((int64_t)((int64_t)L_8<<(int32_t)2)));
		double L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		// var yvg = Randoms[(i << 2) + 1];
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_11 = ((Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var))->get_Randoms_7();
		int64_t L_12 = V_0;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_12<<(int32_t)2)), (int64_t)((int64_t)((int64_t)1))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Utils_GradientNoise3D_m2B24F2006EC3D79C07A45D5CDD9E8CE0842A3C20_RuntimeMethod_var);
		NullCheck(L_11);
		intptr_t L_13 = ((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_12<<(int32_t)2)), (int64_t)((int64_t)((int64_t)1)))));
		double L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_1 = L_14;
		// var zvg = Randoms[(i << 2) + 2];
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_15 = ((Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var))->get_Randoms_7();
		int64_t L_16 = V_0;
		if ((int64_t)(((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_16<<(int32_t)2)), (int64_t)((int64_t)((int64_t)2))))) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), Utils_GradientNoise3D_m2B24F2006EC3D79C07A45D5CDD9E8CE0842A3C20_RuntimeMethod_var);
		NullCheck(L_15);
		intptr_t L_17 = ((intptr_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)((int64_t)L_16<<(int32_t)2)), (int64_t)((int64_t)((int64_t)2)))));
		double L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_2 = L_18;
		// var xvp = (fx - ix);
		double L_19 = ___fx0;
		int32_t L_20 = ___ix3;
		V_3 = ((double)il2cpp_codegen_subtract((double)L_19, (double)((double)((double)L_20))));
		// var yvp = (fy - iy);
		double L_21 = ___fy1;
		int32_t L_22 = ___iy4;
		V_4 = ((double)il2cpp_codegen_subtract((double)L_21, (double)((double)((double)L_22))));
		// var zvp = (fz - iz);
		double L_23 = ___fz2;
		int32_t L_24 = ___iz5;
		V_5 = ((double)il2cpp_codegen_subtract((double)L_23, (double)((double)((double)L_24))));
		// return ((xvg * xvp) + (yvg * yvp) + (zvg * zvp)) * 2.12;
		double L_25 = V_3;
		double L_26 = V_1;
		double L_27 = V_4;
		double L_28 = V_2;
		double L_29 = V_5;
		return ((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_10, (double)L_25)), (double)((double)il2cpp_codegen_multiply((double)L_26, (double)L_27)))), (double)((double)il2cpp_codegen_multiply((double)L_28, (double)L_29)))), (double)(2.1200000000000001)));
	}
}
// System.Double LibNoise.Utils::InterpolateCubic(System.Double,System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Utils_InterpolateCubic_m5C3389D766F789B95ED4BC9AE111D012D9ABB505 (double ___a0, double ___b1, double ___c2, double ___d3, double ___position4, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	double V_3 = 0.0;
	{
		// var p = (d - c) - (a - b);
		double L_0 = ___d3;
		double L_1 = ___c2;
		double L_2 = ___a0;
		double L_3 = ___b1;
		V_0 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_subtract((double)L_0, (double)L_1)), (double)((double)il2cpp_codegen_subtract((double)L_2, (double)L_3))));
		// var q = (a - b) - p;
		double L_4 = ___a0;
		double L_5 = ___b1;
		double L_6 = V_0;
		V_1 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_subtract((double)L_4, (double)L_5)), (double)L_6));
		// var r = c - a;
		double L_7 = ___c2;
		double L_8 = ___a0;
		V_2 = ((double)il2cpp_codegen_subtract((double)L_7, (double)L_8));
		// var s = b;
		double L_9 = ___b1;
		V_3 = L_9;
		// return p * position * position * position + q * position * position + r * position + s;
		double L_10 = V_0;
		double L_11 = ___position4;
		double L_12 = ___position4;
		double L_13 = ___position4;
		double L_14 = V_1;
		double L_15 = ___position4;
		double L_16 = ___position4;
		double L_17 = V_2;
		double L_18 = ___position4;
		double L_19 = V_3;
		return ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_10, (double)L_11)), (double)L_12)), (double)L_13)), (double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_14, (double)L_15)), (double)L_16)))), (double)((double)il2cpp_codegen_multiply((double)L_17, (double)L_18)))), (double)L_19));
	}
}
// System.Double LibNoise.Utils::InterpolateLinear(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Utils_InterpolateLinear_m67C385B25C06BA3BC751E5A962CCBCAE3C2A07AF (double ___a0, double ___b1, double ___position2, const RuntimeMethod* method)
{
	{
		// return ((1.0 - position) * a) + (position * b);
		double L_0 = ___position2;
		double L_1 = ___a0;
		double L_2 = ___position2;
		double L_3 = ___b1;
		return ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_subtract((double)(1.0), (double)L_0)), (double)L_1)), (double)((double)il2cpp_codegen_multiply((double)L_2, (double)L_3))));
	}
}
// System.Double LibNoise.Utils::MakeInt32Range(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Utils_MakeInt32Range_m38E96B1EC6FD2C8CC3E6350486B2DA4523DEA945 (double ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (value >= 1073741824.0)
		double L_0 = ___value0;
		if ((!(((double)L_0) >= ((double)(1073741824.0)))))
		{
			goto IL_0030;
		}
	}
	{
		// return (2.0 * Math.IEEERemainder(value, 1073741824.0)) - 1073741824.0;
		double L_1 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_IEEERemainder_m2B06020D10636AC81B0DD05AE00C951A24C4186F(L_1, (1073741824.0), /*hidden argument*/NULL);
		return ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)(2.0), (double)L_2)), (double)(1073741824.0)));
	}

IL_0030:
	{
		// if (value <= -1073741824.0)
		double L_3 = ___value0;
		if ((!(((double)L_3) <= ((double)(-1073741824.0)))))
		{
			goto IL_0060;
		}
	}
	{
		// return (2.0 * Math.IEEERemainder(value, 1073741824.0)) + 1073741824.0;
		double L_4 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_5;
		L_5 = Math_IEEERemainder_m2B06020D10636AC81B0DD05AE00C951A24C4186F(L_4, (1073741824.0), /*hidden argument*/NULL);
		return ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)(2.0), (double)L_5)), (double)(1073741824.0)));
	}

IL_0060:
	{
		// return value;
		double L_6 = ___value0;
		return L_6;
	}
}
// System.Double LibNoise.Utils::MapCubicSCurve(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Utils_MapCubicSCurve_mAF58D6A668F431FA198625EAB3EDF1C1E1E796EA (double ___value0, const RuntimeMethod* method)
{
	{
		// return (value * value * (3.0 - 2.0 * value));
		double L_0 = ___value0;
		double L_1 = ___value0;
		double L_2 = ___value0;
		return ((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_0, (double)L_1)), (double)((double)il2cpp_codegen_subtract((double)(3.0), (double)((double)il2cpp_codegen_multiply((double)(2.0), (double)L_2))))));
	}
}
// System.Double LibNoise.Utils::MapQuinticSCurve(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Utils_MapQuinticSCurve_mA01F12403C6E078647FEE168C1EA0AAE471E6C40 (double ___value0, const RuntimeMethod* method)
{
	double V_0 = 0.0;
	double V_1 = 0.0;
	double V_2 = 0.0;
	{
		// var a3 = value * value * value;
		double L_0 = ___value0;
		double L_1 = ___value0;
		double L_2 = ___value0;
		V_0 = ((double)il2cpp_codegen_multiply((double)((double)il2cpp_codegen_multiply((double)L_0, (double)L_1)), (double)L_2));
		// var a4 = a3 * value;
		double L_3 = V_0;
		double L_4 = ___value0;
		V_1 = ((double)il2cpp_codegen_multiply((double)L_3, (double)L_4));
		// var a5 = a4 * value;
		double L_5 = V_1;
		double L_6 = ___value0;
		V_2 = ((double)il2cpp_codegen_multiply((double)L_5, (double)L_6));
		// return (6.0 * a5) - (15.0 * a4) + (10.0 * a3);
		double L_7 = V_2;
		double L_8 = V_1;
		double L_9 = V_0;
		return ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)(6.0), (double)L_7)), (double)((double)il2cpp_codegen_multiply((double)(15.0), (double)L_8)))), (double)((double)il2cpp_codegen_multiply((double)(10.0), (double)L_9))));
	}
}
// System.Double LibNoise.Utils::ValueNoise3D(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Utils_ValueNoise3D_m407227E594A92D87DB7D7E726F848CB3927BBA65 (int32_t ___x0, int32_t ___y1, int32_t ___z2, int32_t ___seed3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return 1.0 - (ValueNoise3DInt(x, y, z, seed) / 1073741824.0);
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		int32_t L_2 = ___z2;
		int32_t L_3 = ___seed3;
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		int64_t L_4;
		L_4 = Utils_ValueNoise3DInt_mC58B69E9C5160A03AC407E379C38B6F06EF4B545(L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return ((double)il2cpp_codegen_subtract((double)(1.0), (double)((double)((double)((double)((double)L_4))/(double)(1073741824.0)))));
	}
}
// System.Int64 LibNoise.Utils::ValueNoise3DInt(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Utils_ValueNoise3DInt_mC58B69E9C5160A03AC407E379C38B6F06EF4B545 (int32_t ___x0, int32_t ___y1, int32_t ___z2, int32_t ___seed3, const RuntimeMethod* method)
{
	int64_t V_0 = 0;
	{
		// long n = (GeneratorNoiseX * x + GeneratorNoiseY * y + GeneratorNoiseZ * z +
		//           GeneratorSeed * seed) & 0x7fffffff;
		int32_t L_0 = ___x0;
		int32_t L_1 = ___y1;
		int32_t L_2 = ___z2;
		int32_t L_3 = ___seed3;
		V_0 = ((int64_t)((int64_t)((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)1619), (int32_t)L_0)), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)31337), (int32_t)L_1)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)6971), (int32_t)L_2)))), (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)1013), (int32_t)L_3))))&(int32_t)((int32_t)2147483647LL)))));
		// n = (n >> 13) ^ n;
		int64_t L_4 = V_0;
		int64_t L_5 = V_0;
		V_0 = ((int64_t)((int64_t)((int64_t)((int64_t)L_4>>(int32_t)((int32_t)13)))^(int64_t)L_5));
		// return (n * (n * n * 60493 + 19990303) + 1376312589) & 0x7fffffff;
		int64_t L_6 = V_0;
		int64_t L_7 = V_0;
		int64_t L_8 = V_0;
		return ((int64_t)((int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_6, (int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_7, (int64_t)L_8)), (int64_t)((int64_t)((int64_t)((int32_t)60493))))), (int64_t)((int64_t)((int64_t)((int32_t)19990303))))))), (int64_t)((int64_t)((int64_t)((int32_t)1376312589)))))&(int64_t)((int64_t)((int64_t)((int32_t)2147483647LL)))));
	}
}
// System.Void LibNoise.Utils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils__cctor_mFDCFBD1E48DE90B907700072F65B568E2BBCDAC5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t542D62BCE92B129CE3F76621A9BF5D987CFDFC58____783B86DB486276222DEFDC756C4542DAE60CAA36FBDAD4316D523055459E7BA0_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static readonly double[] Randoms =
		// {
		//     -0.763874, -0.596439, -0.246489, 0.0, 0.396055, 0.904518, -0.158073, 0.0,
		//     -0.499004, -0.8665, -0.0131631, 0.0, 0.468724, -0.824756, 0.316346, 0.0,
		//     0.829598, 0.43195, 0.353816, 0.0, -0.454473, 0.629497, -0.630228, 0.0,
		//     -0.162349, -0.869962, -0.465628, 0.0, 0.932805, 0.253451, 0.256198, 0.0,
		//     -0.345419, 0.927299, -0.144227, 0.0, -0.715026, -0.293698, -0.634413, 0.0,
		//     -0.245997, 0.717467, -0.651711, 0.0, -0.967409, -0.250435, -0.037451, 0.0,
		//     0.901729, 0.397108, -0.170852, 0.0, 0.892657, -0.0720622, -0.444938, 0.0,
		//     0.0260084, -0.0361701, 0.999007, 0.0, 0.949107, -0.19486, 0.247439, 0.0,
		//     0.471803, -0.807064, -0.355036, 0.0, 0.879737, 0.141845, 0.453809, 0.0,
		//     0.570747, 0.696415, 0.435033, 0.0, -0.141751, -0.988233, -0.0574584, 0.0,
		//     -0.58219, -0.0303005, 0.812488, 0.0, -0.60922, 0.239482, -0.755975, 0.0,
		//     0.299394, -0.197066, -0.933557, 0.0, -0.851615, -0.220702, -0.47544, 0.0,
		//     0.848886, 0.341829, -0.403169, 0.0, -0.156129, -0.687241, 0.709453, 0.0,
		//     -0.665651, 0.626724, 0.405124, 0.0, 0.595914, -0.674582, 0.43569, 0.0,
		//     0.171025, -0.509292, 0.843428, 0.0, 0.78605, 0.536414, -0.307222, 0.0,
		//     0.18905, -0.791613, 0.581042, 0.0, -0.294916, 0.844994, 0.446105, 0.0,
		//     0.342031, -0.58736, -0.7335, 0.0, 0.57155, 0.7869, 0.232635, 0.0,
		//     0.885026, -0.408223, 0.223791, 0.0, -0.789518, 0.571645, 0.223347, 0.0,
		//     0.774571, 0.31566, 0.548087, 0.0, -0.79695, -0.0433603, -0.602487, 0.0,
		//     -0.142425, -0.473249, -0.869339, 0.0, -0.0698838, 0.170442, 0.982886, 0.0,
		//     0.687815, -0.484748, 0.540306, 0.0, 0.543703, -0.534446, -0.647112, 0.0,
		//     0.97186, 0.184391, -0.146588, 0.0, 0.707084, 0.485713, -0.513921, 0.0,
		//     0.942302, 0.331945, 0.043348, 0.0, 0.499084, 0.599922, 0.625307, 0.0,
		//     -0.289203, 0.211107, 0.9337, 0.0, 0.412433, -0.71667, -0.56239, 0.0,
		//     0.87721, -0.082816, 0.47291, 0.0, -0.420685, -0.214278, 0.881538, 0.0,
		//     0.752558, -0.0391579, 0.657361, 0.0, 0.0765725, -0.996789, 0.0234082, 0.0,
		//     -0.544312, -0.309435, -0.779727, 0.0, -0.455358, -0.415572, 0.787368, 0.0,
		//     -0.874586, 0.483746, 0.0330131, 0.0, 0.245172, -0.0838623, 0.965846, 0.0,
		//     0.382293, -0.432813, 0.81641, 0.0, -0.287735, -0.905514, 0.311853, 0.0,
		//     -0.667704, 0.704955, -0.239186, 0.0, 0.717885, -0.464002, -0.518983, 0.0,
		//     0.976342, -0.214895, 0.0240053, 0.0, -0.0733096, -0.921136, 0.382276, 0.0,
		//     -0.986284, 0.151224, -0.0661379, 0.0, -0.899319, -0.429671, 0.0812908, 0.0,
		//     0.652102, -0.724625, 0.222893, 0.0, 0.203761, 0.458023, -0.865272, 0.0,
		//     -0.030396, 0.698724, -0.714745, 0.0, -0.460232, 0.839138, 0.289887, 0.0,
		//     -0.0898602, 0.837894, 0.538386, 0.0, -0.731595, 0.0793784, 0.677102, 0.0,
		//     -0.447236, -0.788397, 0.422386, 0.0, 0.186481, 0.645855, -0.740335, 0.0,
		//     -0.259006, 0.935463, 0.240467, 0.0, 0.445839, 0.819655, -0.359712, 0.0,
		//     0.349962, 0.755022, -0.554499, 0.0, -0.997078, -0.0359577, 0.0673977, 0.0,
		//     -0.431163, -0.147516, -0.890133, 0.0, 0.299648, -0.63914, 0.708316, 0.0,
		//     0.397043, 0.566526, -0.722084, 0.0, -0.502489, 0.438308, -0.745246, 0.0,
		//     0.0687235, 0.354097, 0.93268, 0.0, -0.0476651, -0.462597, 0.885286, 0.0,
		//     -0.221934, 0.900739, -0.373383, 0.0, -0.956107, -0.225676, 0.186893, 0.0,
		//     -0.187627, 0.391487, -0.900852, 0.0, -0.224209, -0.315405, 0.92209, 0.0,
		//     -0.730807, -0.537068, 0.421283, 0.0, -0.0353135, -0.816748, 0.575913, 0.0,
		//     -0.941391, 0.176991, -0.287153, 0.0, -0.154174, 0.390458, 0.90762, 0.0,
		//     -0.283847, 0.533842, 0.796519, 0.0, -0.482737, -0.850448, 0.209052, 0.0,
		//     -0.649175, 0.477748, 0.591886, 0.0, 0.885373, -0.405387, -0.227543, 0.0,
		//     -0.147261, 0.181623, -0.972279, 0.0, 0.0959236, -0.115847, -0.988624, 0.0,
		//     -0.89724, -0.191348, 0.397928, 0.0, 0.903553, -0.428461, -0.00350461, 0.0,
		//     0.849072, -0.295807, -0.437693, 0.0, 0.65551, 0.741754, -0.141804, 0.0,
		//     0.61598, -0.178669, 0.767232, 0.0, 0.0112967, 0.932256, -0.361623, 0.0,
		//     -0.793031, 0.258012, 0.551845, 0.0, 0.421933, 0.454311, 0.784585, 0.0,
		//     -0.319993, 0.0401618, -0.946568, 0.0, -0.81571, 0.551307, -0.175151, 0.0,
		//     -0.377644, 0.00322313, 0.925945, 0.0, 0.129759, -0.666581, -0.734052, 0.0,
		//     0.601901, -0.654237, -0.457919, 0.0, -0.927463, -0.0343576, -0.372334, 0.0,
		//     -0.438663, -0.868301, -0.231578, 0.0, -0.648845, -0.749138, -0.133387, 0.0,
		//     0.507393, -0.588294, 0.629653, 0.0, 0.726958, 0.623665, 0.287358, 0.0,
		//     0.411159, 0.367614, -0.834151, 0.0, 0.806333, 0.585117, -0.0864016, 0.0,
		//     0.263935, -0.880876, 0.392932, 0.0, 0.421546, -0.201336, 0.884174, 0.0,
		//     -0.683198, -0.569557, -0.456996, 0.0, -0.117116, -0.0406654, -0.992285, 0.0,
		//     -0.643679, -0.109196, -0.757465, 0.0, -0.561559, -0.62989, 0.536554, 0.0,
		//     0.0628422, 0.104677, -0.992519, 0.0, 0.480759, -0.2867, -0.828658, 0.0,
		//     -0.228559, -0.228965, -0.946222, 0.0, -0.10194, -0.65706, -0.746914, 0.0,
		//     0.0689193, -0.678236, 0.731605, 0.0, 0.401019, -0.754026, 0.52022, 0.0,
		//     -0.742141, 0.547083, -0.387203, 0.0, -0.00210603, -0.796417, -0.604745, 0.0,
		//     0.296725, -0.409909, -0.862513, 0.0, -0.260932, -0.798201, 0.542945, 0.0,
		//     -0.641628, 0.742379, 0.192838, 0.0, -0.186009, -0.101514, 0.97729, 0.0,
		//     0.106711, -0.962067, 0.251079, 0.0, -0.743499, 0.30988, -0.592607, 0.0,
		//     -0.795853, -0.605066, -0.0226607, 0.0, -0.828661, -0.419471, -0.370628, 0.0,
		//     0.0847218, -0.489815, -0.8677, 0.0, -0.381405, 0.788019, -0.483276, 0.0,
		//     0.282042, -0.953394, 0.107205, 0.0, 0.530774, 0.847413, 0.0130696, 0.0,
		//     0.0515397, 0.922524, 0.382484, 0.0, -0.631467, -0.709046, 0.313852, 0.0,
		//     0.688248, 0.517273, 0.508668, 0.0, 0.646689, -0.333782, -0.685845, 0.0,
		//     -0.932528, -0.247532, -0.262906, 0.0, 0.630609, 0.68757, -0.359973, 0.0,
		//     0.577805, -0.394189, 0.714673, 0.0, -0.887833, -0.437301, -0.14325, 0.0,
		//     0.690982, 0.174003, 0.701617, 0.0, -0.866701, 0.0118182, 0.498689, 0.0,
		//     -0.482876, 0.727143, 0.487949, 0.0, -0.577567, 0.682593, -0.447752, 0.0,
		//     0.373768, 0.0982991, 0.922299, 0.0, 0.170744, 0.964243, -0.202687, 0.0,
		//     0.993654, -0.035791, -0.106632, 0.0, 0.587065, 0.4143, -0.695493, 0.0,
		//     -0.396509, 0.26509, -0.878924, 0.0, -0.0866853, 0.83553, -0.542563, 0.0,
		//     0.923193, 0.133398, -0.360443, 0.0, 0.00379108, -0.258618, 0.965972, 0.0,
		//     0.239144, 0.245154, -0.939526, 0.0, 0.758731, -0.555871, 0.33961, 0.0,
		//     0.295355, 0.309513, 0.903862, 0.0, 0.0531222, -0.91003, -0.411124, 0.0,
		//     0.270452, 0.0229439, -0.96246, 0.0, 0.563634, 0.0324352, 0.825387, 0.0,
		//     0.156326, 0.147392, 0.976646, 0.0, -0.0410141, 0.981824, 0.185309, 0.0,
		//     -0.385562, -0.576343, -0.720535, 0.0, 0.388281, 0.904441, 0.176702, 0.0,
		//     0.945561, -0.192859, -0.262146, 0.0, 0.844504, 0.520193, 0.127325, 0.0,
		//     0.0330893, 0.999121, -0.0257505, 0.0, -0.592616, -0.482475, -0.644999, 0.0,
		//     0.539471, 0.631024, -0.557476, 0.0, 0.655851, -0.027319, -0.754396, 0.0,
		//     0.274465, 0.887659, 0.369772, 0.0, -0.123419, 0.975177, -0.183842, 0.0,
		//     -0.223429, 0.708045, 0.66989, 0.0, -0.908654, 0.196302, 0.368528, 0.0,
		//     -0.95759, -0.00863708, 0.288005, 0.0, 0.960535, 0.030592, 0.276472, 0.0,
		//     -0.413146, 0.907537, 0.0754161, 0.0, -0.847992, 0.350849, -0.397259, 0.0,
		//     0.614736, 0.395841, 0.68221, 0.0, -0.503504, -0.666128, -0.550234, 0.0,
		//     -0.268833, -0.738524, -0.618314, 0.0, 0.792737, -0.60001, -0.107502, 0.0,
		//     -0.637582, 0.508144, -0.579032, 0.0, 0.750105, 0.282165, -0.598101, 0.0,
		//     -0.351199, -0.392294, -0.850155, 0.0, 0.250126, -0.960993, -0.118025, 0.0,
		//     -0.732341, 0.680909, -0.0063274, 0.0, -0.760674, -0.141009, 0.633634, 0.0,
		//     0.222823, -0.304012, 0.926243, 0.0, 0.209178, 0.505671, 0.836984, 0.0,
		//     0.757914, -0.56629, -0.323857, 0.0, -0.782926, -0.339196, 0.52151, 0.0,
		//     -0.462952, 0.585565, 0.665424, 0.0, 0.61879, 0.194119, -0.761194, 0.0,
		//     0.741388, -0.276743, 0.611357, 0.0, 0.707571, 0.702621, 0.0752872, 0.0,
		//     0.156562, 0.819977, 0.550569, 0.0, -0.793606, 0.440216, 0.42, 0.0,
		//     0.234547, 0.885309, -0.401517, 0.0, 0.132598, 0.80115, -0.58359, 0.0,
		//     -0.377899, -0.639179, 0.669808, 0.0, -0.865993, -0.396465, 0.304748, 0.0,
		//     -0.624815, -0.44283, 0.643046, 0.0, -0.485705, 0.825614, -0.287146, 0.0,
		//     -0.971788, 0.175535, 0.157529, 0.0, -0.456027, 0.392629, 0.798675, 0.0,
		//     -0.0104443, 0.521623, -0.853112, 0.0, -0.660575, -0.74519, 0.091282, 0.0,
		//     -0.0157698, -0.307475, -0.951425, 0.0, -0.603467, -0.250192, 0.757121, 0.0,
		//     0.506876, 0.25006, 0.824952, 0.0, 0.255404, 0.966794, 0.00884498, 0.0,
		//     0.466764, -0.874228, -0.133625, 0.0, 0.475077, -0.0682351, -0.877295, 0.0,
		//     -0.224967, -0.938972, -0.260233, 0.0, -0.377929, -0.814757, -0.439705, 0.0,
		//     -0.305847, 0.542333, -0.782517, 0.0, 0.26658, -0.902905, -0.337191, 0.0,
		//     0.0275773, 0.322158, -0.946284, 0.0, 0.0185422, 0.716349, 0.697496, 0.0,
		//     -0.20483, 0.978416, 0.0273371, 0.0, -0.898276, 0.373969, 0.230752, 0.0,
		//     -0.00909378, 0.546594, 0.837349, 0.0, 0.6602, -0.751089, 0.000959236, 0.0,
		//     0.855301, -0.303056, 0.420259, 0.0, 0.797138, 0.0623013, -0.600574, 0.0,
		//     0.48947, -0.866813, 0.0951509, 0.0, 0.251142, 0.674531, 0.694216, 0.0,
		//     -0.578422, -0.737373, -0.348867, 0.0, -0.254689, -0.514807, 0.818601, 0.0,
		//     0.374972, 0.761612, 0.528529, 0.0, 0.640303, -0.734271, -0.225517, 0.0,
		//     -0.638076, 0.285527, 0.715075, 0.0, 0.772956, -0.15984, -0.613995, 0.0,
		//     0.798217, -0.590628, 0.118356, 0.0, -0.986276, -0.0578337, -0.154644, 0.0,
		//     -0.312988, -0.94549, 0.0899272, 0.0, -0.497338, 0.178325, 0.849032, 0.0,
		//     -0.101136, -0.981014, 0.165477, 0.0, -0.521688, 0.0553434, -0.851339, 0.0,
		//     -0.786182, -0.583814, 0.202678, 0.0, -0.565191, 0.821858, -0.0714658, 0.0,
		//     0.437895, 0.152598, -0.885981, 0.0, -0.92394, 0.353436, -0.14635, 0.0,
		//     0.212189, -0.815162, -0.538969, 0.0, -0.859262, 0.143405, -0.491024, 0.0,
		//     0.991353, 0.112814, 0.0670273, 0.0, 0.0337884, -0.979891, -0.196654, 0.0
		// };
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_0 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)SZArrayNew(DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_1 = L_0;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t542D62BCE92B129CE3F76621A9BF5D987CFDFC58____783B86DB486276222DEFDC756C4542DAE60CAA36FBDAD4316D523055459E7BA0_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_1, L_2, /*hidden argument*/NULL);
		((Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_StaticFields*)il2cpp_codegen_static_fields_for(Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var))->set_Randoms_7(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Generator.Voronoi::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voronoi__ctor_m7B37DF7EEAE40AD99867C6BABB61DC46A77C73CB (Voronoi_t3E6BF1D9F2351DBE1E5CB1700CF85775880B690E * __this, const RuntimeMethod* method)
{
	{
		// private double _displacement = 1.0;
		__this->set__displacement_2((1.0));
		// private double _frequency = 1.0;
		__this->set__frequency_3((1.0));
		// : base(0)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LibNoise.Generator.Voronoi::.ctor(System.Double,System.Double,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voronoi__ctor_mA73DD38CC3B281BF0166ED598B86EAE96F26682C (Voronoi_t3E6BF1D9F2351DBE1E5CB1700CF85775880B690E * __this, double ___frequency0, double ___displacement1, int32_t ___seed2, bool ___distance3, const RuntimeMethod* method)
{
	{
		// private double _displacement = 1.0;
		__this->set__displacement_2((1.0));
		// private double _frequency = 1.0;
		__this->set__frequency_3((1.0));
		// : base(0)
		ModuleBase__ctor_m961DE2785F30B6B61407981DB6288110E9AAAF29(__this, 0, /*hidden argument*/NULL);
		// Frequency = frequency;
		double L_0 = ___frequency0;
		Voronoi_set_Frequency_m2FEBFFADE410B3490CECA78C0AE23C219963D38F_inline(__this, L_0, /*hidden argument*/NULL);
		// Displacement = displacement;
		double L_1 = ___displacement1;
		Voronoi_set_Displacement_m56D289F3379DCCF990FE5FF3DB9B57BC6AE51902_inline(__this, L_1, /*hidden argument*/NULL);
		// Seed = seed;
		int32_t L_2 = ___seed2;
		Voronoi_set_Seed_m18DE7813CE5499931269EFD153683DF2C1FEEF2C_inline(__this, L_2, /*hidden argument*/NULL);
		// UseDistance = distance;
		bool L_3 = ___distance3;
		Voronoi_set_UseDistance_m5F34BA069B2CFE0A8249E1FD49251DB8F86230C0_inline(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Double LibNoise.Generator.Voronoi::get_Displacement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Voronoi_get_Displacement_m046BD164EF0F4B2395D3E11F3341EAA2160E36FA (Voronoi_t3E6BF1D9F2351DBE1E5CB1700CF85775880B690E * __this, const RuntimeMethod* method)
{
	{
		// get { return _displacement; }
		double L_0 = __this->get__displacement_2();
		return L_0;
	}
}
// System.Void LibNoise.Generator.Voronoi::set_Displacement(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voronoi_set_Displacement_m56D289F3379DCCF990FE5FF3DB9B57BC6AE51902 (Voronoi_t3E6BF1D9F2351DBE1E5CB1700CF85775880B690E * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _displacement = value; }
		double L_0 = ___value0;
		__this->set__displacement_2(L_0);
		// set { _displacement = value; }
		return;
	}
}
// System.Double LibNoise.Generator.Voronoi::get_Frequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Voronoi_get_Frequency_mCE83BD4F8152F3450A413B4F0C90A73DB371E559 (Voronoi_t3E6BF1D9F2351DBE1E5CB1700CF85775880B690E * __this, const RuntimeMethod* method)
{
	{
		// get { return _frequency; }
		double L_0 = __this->get__frequency_3();
		return L_0;
	}
}
// System.Void LibNoise.Generator.Voronoi::set_Frequency(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voronoi_set_Frequency_m2FEBFFADE410B3490CECA78C0AE23C219963D38F (Voronoi_t3E6BF1D9F2351DBE1E5CB1700CF85775880B690E * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _frequency = value; }
		double L_0 = ___value0;
		__this->set__frequency_3(L_0);
		// set { _frequency = value; }
		return;
	}
}
// System.Int32 LibNoise.Generator.Voronoi::get_Seed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Voronoi_get_Seed_m2EE51AA409D14059473E13BF6B37F6B6BEE5FB82 (Voronoi_t3E6BF1D9F2351DBE1E5CB1700CF85775880B690E * __this, const RuntimeMethod* method)
{
	{
		// get { return _seed; }
		int32_t L_0 = __this->get__seed_4();
		return L_0;
	}
}
// System.Void LibNoise.Generator.Voronoi::set_Seed(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voronoi_set_Seed_m18DE7813CE5499931269EFD153683DF2C1FEEF2C (Voronoi_t3E6BF1D9F2351DBE1E5CB1700CF85775880B690E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { _seed = value; }
		int32_t L_0 = ___value0;
		__this->set__seed_4(L_0);
		// set { _seed = value; }
		return;
	}
}
// System.Boolean LibNoise.Generator.Voronoi::get_UseDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Voronoi_get_UseDistance_m7CAFA2A1C4C954C9B9A1BC621791BC7A57336A97 (Voronoi_t3E6BF1D9F2351DBE1E5CB1700CF85775880B690E * __this, const RuntimeMethod* method)
{
	{
		// get { return _distance; }
		bool L_0 = __this->get__distance_5();
		return L_0;
	}
}
// System.Void LibNoise.Generator.Voronoi::set_UseDistance(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Voronoi_set_UseDistance_m5F34BA069B2CFE0A8249E1FD49251DB8F86230C0 (Voronoi_t3E6BF1D9F2351DBE1E5CB1700CF85775880B690E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { _distance = value; }
		bool L_0 = ___value0;
		__this->set__distance_5(L_0);
		// set { _distance = value; }
		return;
	}
}
// System.Double LibNoise.Generator.Voronoi::GetValue(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Voronoi_GetValue_m939187773A3DE46CCCCCEF3982A4303081C159FD (Voronoi_t3E6BF1D9F2351DBE1E5CB1700CF85775880B690E * __this, double ___x0, double ___y1, double ___z2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	double V_11 = 0.0;
	double V_12 = 0.0;
	double V_13 = 0.0;
	double V_14 = 0.0;
	double V_15 = 0.0;
	double V_16 = 0.0;
	double V_17 = 0.0;
	double V_18 = 0.0;
	double V_19 = 0.0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B9_0 = 0;
	{
		// x *= _frequency;
		double L_0 = ___x0;
		double L_1 = __this->get__frequency_3();
		___x0 = ((double)il2cpp_codegen_multiply((double)L_0, (double)L_1));
		// y *= _frequency;
		double L_2 = ___y1;
		double L_3 = __this->get__frequency_3();
		___y1 = ((double)il2cpp_codegen_multiply((double)L_2, (double)L_3));
		// z *= _frequency;
		double L_4 = ___z2;
		double L_5 = __this->get__frequency_3();
		___z2 = ((double)il2cpp_codegen_multiply((double)L_4, (double)L_5));
		// var xi = (x > 0.0 ? (int) x : (int) x - 1);
		double L_6 = ___x0;
		if ((((double)L_6) > ((double)(0.0))))
		{
			goto IL_0030;
		}
	}
	{
		double L_7 = ___x0;
		G_B3_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_7), (int32_t)1));
		goto IL_0032;
	}

IL_0030:
	{
		double L_8 = ___x0;
		G_B3_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_8);
	}

IL_0032:
	{
		V_0 = G_B3_0;
		// var iy = (y > 0.0 ? (int) y : (int) y - 1);
		double L_9 = ___y1;
		if ((((double)L_9) > ((double)(0.0))))
		{
			goto IL_0045;
		}
	}
	{
		double L_10 = ___y1;
		G_B6_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_10), (int32_t)1));
		goto IL_0047;
	}

IL_0045:
	{
		double L_11 = ___y1;
		G_B6_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_11);
	}

IL_0047:
	{
		V_1 = G_B6_0;
		// var iz = (z > 0.0 ? (int) z : (int) z - 1);
		double L_12 = ___z2;
		if ((((double)L_12) > ((double)(0.0))))
		{
			goto IL_005a;
		}
	}
	{
		double L_13 = ___z2;
		G_B9_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)il2cpp_codegen_cast_double_to_int<int32_t>(L_13), (int32_t)1));
		goto IL_005c;
	}

IL_005a:
	{
		double L_14 = ___z2;
		G_B9_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_14);
	}

IL_005c:
	{
		V_2 = G_B9_0;
		// var md = 2147483647.0;
		V_3 = (2147483647.0);
		// double xc = 0;
		V_4 = (0.0);
		// double yc = 0;
		V_5 = (0.0);
		// double zc = 0;
		V_6 = (0.0);
		// for (var zcu = iz - 2; zcu <= iz + 2; zcu++)
		int32_t L_15 = V_2;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)2));
		goto IL_014e;
	}

IL_0092:
	{
		// for (var ycu = iy - 2; ycu <= iy + 2; ycu++)
		int32_t L_16 = V_1;
		V_9 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)2));
		goto IL_013e;
	}

IL_009c:
	{
		// for (var xcu = xi - 2; xcu <= xi + 2; xcu++)
		int32_t L_17 = V_0;
		V_10 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)2));
		goto IL_012e;
	}

IL_00a6:
	{
		// var xp = xcu + Utils.ValueNoise3D(xcu, ycu, zcu, _seed);
		int32_t L_18 = V_10;
		int32_t L_19 = V_10;
		int32_t L_20 = V_9;
		int32_t L_21 = V_8;
		int32_t L_22 = __this->get__seed_4();
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		double L_23;
		L_23 = Utils_ValueNoise3D_m407227E594A92D87DB7D7E726F848CB3927BBA65(L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
		V_11 = ((double)il2cpp_codegen_add((double)((double)((double)L_18)), (double)L_23));
		// var yp = ycu + Utils.ValueNoise3D(xcu, ycu, zcu, _seed + 1);
		int32_t L_24 = V_9;
		int32_t L_25 = V_10;
		int32_t L_26 = V_9;
		int32_t L_27 = V_8;
		int32_t L_28 = __this->get__seed_4();
		double L_29;
		L_29 = Utils_ValueNoise3D_m407227E594A92D87DB7D7E726F848CB3927BBA65(L_25, L_26, L_27, ((int32_t)il2cpp_codegen_add((int32_t)L_28, (int32_t)1)), /*hidden argument*/NULL);
		V_12 = ((double)il2cpp_codegen_add((double)((double)((double)L_24)), (double)L_29));
		// var zp = zcu + Utils.ValueNoise3D(xcu, ycu, zcu, _seed + 2);
		int32_t L_30 = V_8;
		int32_t L_31 = V_10;
		int32_t L_32 = V_9;
		int32_t L_33 = V_8;
		int32_t L_34 = __this->get__seed_4();
		double L_35;
		L_35 = Utils_ValueNoise3D_m407227E594A92D87DB7D7E726F848CB3927BBA65(L_31, L_32, L_33, ((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)2)), /*hidden argument*/NULL);
		V_13 = ((double)il2cpp_codegen_add((double)((double)((double)L_30)), (double)L_35));
		// var xd = xp - x;
		double L_36 = V_11;
		double L_37 = ___x0;
		V_14 = ((double)il2cpp_codegen_subtract((double)L_36, (double)L_37));
		// var yd = yp - y;
		double L_38 = V_12;
		double L_39 = ___y1;
		V_15 = ((double)il2cpp_codegen_subtract((double)L_38, (double)L_39));
		// var zd = zp - z;
		double L_40 = V_13;
		double L_41 = ___z2;
		V_16 = ((double)il2cpp_codegen_subtract((double)L_40, (double)L_41));
		// var d = xd * xd + yd * yd + zd * zd;
		double L_42 = V_14;
		double L_43 = V_14;
		double L_44 = V_15;
		double L_45 = V_15;
		double L_46 = V_16;
		double L_47 = V_16;
		V_17 = ((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_42, (double)L_43)), (double)((double)il2cpp_codegen_multiply((double)L_44, (double)L_45)))), (double)((double)il2cpp_codegen_multiply((double)L_46, (double)L_47))));
		// if (d < md)
		double L_48 = V_17;
		double L_49 = V_3;
		if ((!(((double)L_48) < ((double)L_49))))
		{
			goto IL_0128;
		}
	}
	{
		// md = d;
		double L_50 = V_17;
		V_3 = L_50;
		// xc = xp;
		double L_51 = V_11;
		V_4 = L_51;
		// yc = yp;
		double L_52 = V_12;
		V_5 = L_52;
		// zc = zp;
		double L_53 = V_13;
		V_6 = L_53;
	}

IL_0128:
	{
		// for (var xcu = xi - 2; xcu <= xi + 2; xcu++)
		int32_t L_54 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_54, (int32_t)1));
	}

IL_012e:
	{
		// for (var xcu = xi - 2; xcu <= xi + 2; xcu++)
		int32_t L_55 = V_10;
		int32_t L_56 = V_0;
		if ((((int32_t)L_55) <= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)2)))))
		{
			goto IL_00a6;
		}
	}
	{
		// for (var ycu = iy - 2; ycu <= iy + 2; ycu++)
		int32_t L_57 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
	}

IL_013e:
	{
		// for (var ycu = iy - 2; ycu <= iy + 2; ycu++)
		int32_t L_58 = V_9;
		int32_t L_59 = V_1;
		if ((((int32_t)L_58) <= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_59, (int32_t)2)))))
		{
			goto IL_009c;
		}
	}
	{
		// for (var zcu = iz - 2; zcu <= iz + 2; zcu++)
		int32_t L_60 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1));
	}

IL_014e:
	{
		// for (var zcu = iz - 2; zcu <= iz + 2; zcu++)
		int32_t L_61 = V_8;
		int32_t L_62 = V_2;
		if ((((int32_t)L_61) <= ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_62, (int32_t)2)))))
		{
			goto IL_0092;
		}
	}
	{
		// if (_distance)
		bool L_63 = __this->get__distance_5();
		if (!L_63)
		{
			goto IL_019b;
		}
	}
	{
		// var xd = xc - x;
		double L_64 = V_4;
		double L_65 = ___x0;
		// var yd = yc - y;
		double L_66 = V_5;
		double L_67 = ___y1;
		V_18 = ((double)il2cpp_codegen_subtract((double)L_66, (double)L_67));
		// var zd = zc - z;
		double L_68 = V_6;
		double L_69 = ___z2;
		V_19 = ((double)il2cpp_codegen_subtract((double)L_68, (double)L_69));
		// v = (Math.Sqrt(xd * xd + yd * yd + zd * zd)) * Utils.Sqrt3 - 1.0;
		double L_70 = ((double)il2cpp_codegen_subtract((double)L_64, (double)L_65));
		double L_71 = V_18;
		double L_72 = V_18;
		double L_73 = V_19;
		double L_74 = V_19;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_75;
		L_75 = sqrt(((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_add((double)((double)il2cpp_codegen_multiply((double)L_70, (double)L_70)), (double)((double)il2cpp_codegen_multiply((double)L_71, (double)L_72)))), (double)((double)il2cpp_codegen_multiply((double)L_73, (double)L_74)))));
		V_7 = ((double)il2cpp_codegen_subtract((double)((double)il2cpp_codegen_multiply((double)L_75, (double)(1.7320508075688772))), (double)(1.0)));
		// }
		goto IL_01a6;
	}

IL_019b:
	{
		// v = 0.0;
		V_7 = (0.0);
	}

IL_01a6:
	{
		// return v + (_displacement * Utils.ValueNoise3D((int) (Math.Floor(xc)), (int) (Math.Floor(yc)),
		//     (int) (Math.Floor(zc)), 0));
		double L_76 = V_7;
		double L_77 = __this->get__displacement_2();
		double L_78 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		double L_79;
		L_79 = floor(L_78);
		double L_80 = V_5;
		double L_81;
		L_81 = floor(L_80);
		double L_82 = V_6;
		double L_83;
		L_83 = floor(L_82);
		IL2CPP_RUNTIME_CLASS_INIT(Utils_t6F59F1CAD0F64E95AEA7804BC754D080B21E9A8A_il2cpp_TypeInfo_var);
		double L_84;
		L_84 = Utils_ValueNoise3D_m407227E594A92D87DB7D7E726F848CB3927BBA65(il2cpp_codegen_cast_double_to_int<int32_t>(L_79), il2cpp_codegen_cast_double_to_int<int32_t>(L_81), il2cpp_codegen_cast_double_to_int<int32_t>(L_83), 0, /*hidden argument*/NULL);
		return ((double)il2cpp_codegen_add((double)L_76, (double)((double)il2cpp_codegen_multiply((double)L_77, (double)L_84))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Operator.Curve/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mBA1E879E814B9FDFFB94991A5DE8A73C6AEAB4FC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8291FB9A9D7FC31DA0E9F94604011A923471642F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8291FB9A9D7FC31DA0E9F94604011A923471642F * L_0 = (U3CU3Ec_t8291FB9A9D7FC31DA0E9F94604011A923471642F *)il2cpp_codegen_object_new(U3CU3Ec_t8291FB9A9D7FC31DA0E9F94604011A923471642F_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m7EB18664A38109B007FC2E9D8769E54920818172(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t8291FB9A9D7FC31DA0E9F94604011A923471642F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8291FB9A9D7FC31DA0E9F94604011A923471642F_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void LibNoise.Operator.Curve/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m7EB18664A38109B007FC2E9D8769E54920818172 (U3CU3Ec_t8291FB9A9D7FC31DA0E9F94604011A923471642F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 LibNoise.Operator.Curve/<>c::<Add>b__7_0(System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>,System.Collections.Generic.KeyValuePair`2<System.Double,System.Double>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CAddU3Eb__7_0_m94C041EC95A68E835DB83FCBD8D2DCA389CC30E6 (U3CU3Ec_t8291FB9A9D7FC31DA0E9F94604011A923471642F * __this, KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10  ___lhs0, KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10  ___rhs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m538BD134D8B991D52E98EDB7473C8FE1BF5FB001_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	{
		// return lhs.Key.CompareTo(rhs.Key);
		double L_0;
		L_0 = KeyValuePair_2_get_Key_m538BD134D8B991D52E98EDB7473C8FE1BF5FB001_inline((KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10 *)(&___lhs0), /*hidden argument*/KeyValuePair_2_get_Key_m538BD134D8B991D52E98EDB7473C8FE1BF5FB001_RuntimeMethod_var);
		V_0 = L_0;
		double L_1;
		L_1 = KeyValuePair_2_get_Key_m538BD134D8B991D52E98EDB7473C8FE1BF5FB001_inline((KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10 *)(&___rhs1), /*hidden argument*/KeyValuePair_2_get_Key_m538BD134D8B991D52E98EDB7473C8FE1BF5FB001_RuntimeMethod_var);
		int32_t L_2;
		L_2 = Double_CompareTo_m93107F1616A67C9CDB540738E0115A5E668FBBBE((double*)(&V_0), L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LibNoise.Operator.Terrace/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mDDE7F49A5FC55FCDCC893E11537D4FE3B9EB5DE2 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t1DF4E36F3C2F62F4817EF0F6147963476249A6C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t1DF4E36F3C2F62F4817EF0F6147963476249A6C8 * L_0 = (U3CU3Ec_t1DF4E36F3C2F62F4817EF0F6147963476249A6C8 *)il2cpp_codegen_object_new(U3CU3Ec_t1DF4E36F3C2F62F4817EF0F6147963476249A6C8_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF577D87AEF53E0B0267358CA80746C184678ACEE(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t1DF4E36F3C2F62F4817EF0F6147963476249A6C8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t1DF4E36F3C2F62F4817EF0F6147963476249A6C8_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void LibNoise.Operator.Terrace/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF577D87AEF53E0B0267358CA80746C184678ACEE (U3CU3Ec_t1DF4E36F3C2F62F4817EF0F6147963476249A6C8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 LibNoise.Operator.Terrace/<>c::<Add>b__12_0(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CAddU3Eb__12_0_m5F3AA2D89832EBEF312B142B5D07D3E0060DB61C (U3CU3Ec_t1DF4E36F3C2F62F4817EF0F6147963476249A6C8 * __this, double ___lhs0, double ___rhs1, const RuntimeMethod* method)
{
	{
		// _data.Sort(delegate(double lhs, double rhs) { return lhs.CompareTo(rhs); });
		double L_0 = ___rhs1;
		int32_t L_1;
		L_1 = Double_CompareTo_m93107F1616A67C9CDB540738E0115A5E668FBBBE((double*)(&___lhs0), L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* ModuleBase_get_Modules_mBDF1F3D27F044E238A3BBA5E30D22F99181BFC00_inline (ModuleBase_tE42F5F2DD7B55F1D5BA929BEEFC36D2B5F0B117D * __this, const RuntimeMethod* method)
{
	{
		// get { return _modules; }
		ModuleBaseU5BU5D_t740CBFC03DDA53EF5C12136D49B1E984B022C774* L_0 = __this->get__modules_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Billow_set_Frequency_m1F538C7CDFD6A2CEA561C143154F792F6C647754_inline (Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _frequency = value; }
		double L_0 = ___value0;
		__this->set__frequency_2(L_0);
		// set { _frequency = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Billow_set_Lacunarity_m709EB0AEF2C30BC9F31EB5BD34286DFA8BE79EF7_inline (Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _lacunarity = value; }
		double L_0 = ___value0;
		__this->set__lacunarity_3(L_0);
		// set { _lacunarity = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Billow_set_Persistence_m1507FB18AB6AD544CE2D79CFA9F306EEFEFF0B6E_inline (Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _persistence = value; }
		double L_0 = ___value0;
		__this->set__persistence_6(L_0);
		// set { _persistence = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Billow_set_Seed_mE5A61A0905687C7B2CB17B7372071761C406D296_inline (Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { _seed = value; }
		int32_t L_0 = ___value0;
		__this->set__seed_7(L_0);
		// set { _seed = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Billow_set_Quality_mB20EEF88780AC3B1C2DE6F471CB453647EFD52EF_inline (Billow_tFED70514A4C8AD7D8054594990B8FA1612F40924 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { _quality = value; }
		int32_t L_0 = ___value0;
		__this->set__quality_4(L_0);
		// set { _quality = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Clamp_set_Minimum_m62977D78ACB99137F066700ADB953ECFB17765A0_inline (Clamp_tB7BB016243BB155599C7E5F651AA8A9A420F0AEB * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _min = value; }
		double L_0 = ___value0;
		__this->set__min_2(L_0);
		// set { _min = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Clamp_set_Maximum_m31D04595754BC2AB91A1FA4FC1A74A13C8917D77_inline (Clamp_tB7BB016243BB155599C7E5F651AA8A9A420F0AEB * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _max = value; }
		double L_0 = ___value0;
		__this->set__max_3(L_0);
		// set { _max = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Const_set_Value_mBA35098D085B22743D036006F7483683BF8F4E7D_inline (Const_tD83951719E3D1DF8F6238E59194E34DB93E331A5 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _value = value; }
		double L_0 = ___value0;
		__this->set__value_2(L_0);
		// set { _value = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Cylinders_set_Frequency_mF0BC5F07111A66682234B909EC507119F3459AAA_inline (Cylinders_t97A509D33FCBE86D6C38F1497D3A6E40636D53C5 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _frequency = value; }
		double L_0 = ___value0;
		__this->set__frequency_2(L_0);
		// set { _frequency = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Exponent_set_Value_m40A3752C11DF26BD1A7C19EA3CA170F0A08AF677_inline (Exponent_t1FFCB9A4E8B689486050BA3D74E4A8915D175B5D * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _exponent = value; }
		double L_0 = ___value0;
		__this->set__exponent_2(L_0);
		// set { _exponent = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * GradientPresets_get_Grayscale_m32ED2651CD017DA8BFA22301110834F3BED7DCBB_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get { return _grayscale; }
		IL2CPP_RUNTIME_CLASS_INIT(GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var);
		Gradient_t297BAC6722F67728862AE2FBE760A400DA8902F2 * L_0 = ((GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_StaticFields*)il2cpp_codegen_static_fields_for(GradientPresets_t9B607A45B31CDD9E2E5A4C67C98F013ED18F5AF1_il2cpp_TypeInfo_var))->get__grayscale_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Perlin_set_Frequency_m094C85FD638DD0C24CBB608E0FA36971242BA271_inline (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _frequency = value; }
		double L_0 = ___value0;
		__this->set__frequency_2(L_0);
		// set { _frequency = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Perlin_set_Lacunarity_mA18A66C6FFD01EAB967DDF0932C494EF6CA06FF9_inline (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _lacunarity = value; }
		double L_0 = ___value0;
		__this->set__lacunarity_3(L_0);
		// set { _lacunarity = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Perlin_set_Persistence_m2CA1B1D372AAD4199212DAD250D1EF6C2CF3D793_inline (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _persistence = value; }
		double L_0 = ___value0;
		__this->set__persistence_6(L_0);
		// set { _persistence = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Perlin_set_Seed_m106B83E8805A46A44CB68874E86D9E430EB45DF2_inline (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { _seed = value; }
		int32_t L_0 = ___value0;
		__this->set__seed_7(L_0);
		// set { _seed = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Perlin_set_Quality_m47AF66301CAE1E7354C6368983B297179B6F57CD_inline (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { _quality = value; }
		int32_t L_0 = ___value0;
		__this->set__quality_4(L_0);
		// set { _quality = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RidgedMultifractal_set_Frequency_m506DD1C43FBB5453359735A0B630DCBB93032D62_inline (RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _frequency = value; }
		double L_0 = ___value0;
		__this->set__frequency_2(L_0);
		// set { _frequency = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RidgedMultifractal_set_Seed_mB4867646D315FFA64F036F3576AEF6E04D05FF13_inline (RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { _seed = value; }
		int32_t L_0 = ___value0;
		__this->set__seed_9(L_0);
		// set { _seed = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RidgedMultifractal_set_Quality_m7430A86CF54C65D392F2CDC56740C488094C5D23_inline (RidgedMultifractal_t797AB8B679B743E7F9C98B15DA52BAF12181727E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { _quality = value; }
		int32_t L_0 = ___value0;
		__this->set__quality_4(L_0);
		// set { _quality = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Scale_set_X_mFF6E23D36CD6F8EC5AA4694BAD2B6A8C342C2331_inline (Scale_tA76AEF14F2E1C8A26EB8340B97357BF99A81516B * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _x = value; }
		double L_0 = ___value0;
		__this->set__x_2(L_0);
		// set { _x = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Scale_set_Y_m04C271A440BEBBAB4103FCF027F7972DD1C11F67_inline (Scale_tA76AEF14F2E1C8A26EB8340B97357BF99A81516B * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _y = value; }
		double L_0 = ___value0;
		__this->set__y_3(L_0);
		// set { _y = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Scale_set_Z_m6D611E7E48894BAB79CF9D5A9198483150DD250E_inline (Scale_tA76AEF14F2E1C8A26EB8340B97357BF99A81516B * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _z = value; }
		double L_0 = ___value0;
		__this->set__z_4(L_0);
		// set { _z = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScaleBias_set_Scale_m8EBFEE9B01E430A622ED0AE4CC406D61E944D09B_inline (ScaleBias_t0E79E66C15E96900C32A2E9080C75588E942F649 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// public double Scale { get; set; }
		double L_0 = ___value0;
		__this->set_U3CScaleU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ScaleBias_set_Bias_mB55C01E47759FA23CC2163227F8CDDAA2E1E63A6_inline (ScaleBias_t0E79E66C15E96900C32A2E9080C75588E942F649 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// public double Bias { get; set; }
		double L_0 = ___value0;
		__this->set_U3CBiasU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ScaleBias_get_Scale_m9DCAF05504ECA5726257ED94325FD4B14F4C1878_inline (ScaleBias_t0E79E66C15E96900C32A2E9080C75588E942F649 * __this, const RuntimeMethod* method)
{
	{
		// public double Scale { get; set; }
		double L_0 = __this->get_U3CScaleU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ScaleBias_get_Bias_m4FA0528DE1D5184893E074D70CECEE94637193E5_inline (ScaleBias_t0E79E66C15E96900C32A2E9080C75588E942F649 * __this, const RuntimeMethod* method)
{
	{
		// public double Bias { get; set; }
		double L_0 = __this->get_U3CBiasU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Spheres_set_Frequency_m30FDB3D279164D7DCC634750D9C3CA649EF564CA_inline (Spheres_t5141EACFECDE72E6F0ADB1AC3621A1E3104731D3 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _frequency = value; }
		double L_0 = ___value0;
		__this->set__frequency_2(L_0);
		// set { _frequency = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Terrace_set_IsInverted_m4E8927A180BCC33D35B81DAE215FB20D4D7B3C12_inline (Terrace_t441233268BCC329AC1DCD704A5891A0CD56EFB6B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { _inverted = value; }
		bool L_0 = ___value0;
		__this->set__inverted_3(L_0);
		// set { _inverted = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Translate_set_X_mB7C01EFCB736591C5EC65169814825C8E5FF5570_inline (Translate_tCD3593A12B920217B0A4E4DEC37F8D994D09B8F9 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _x = value; }
		double L_0 = ___value0;
		__this->set__x_2(L_0);
		// set { _x = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Translate_set_Y_mA21B95B32CD1F57EE3CB0FD2B798BDB9F256F6A0_inline (Translate_tCD3593A12B920217B0A4E4DEC37F8D994D09B8F9 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _y = value; }
		double L_0 = ___value0;
		__this->set__y_3(L_0);
		// set { _y = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Translate_set_Z_mCAA830F8F3B42F11095F7EF77B9D553664E01C06_inline (Translate_tCD3593A12B920217B0A4E4DEC37F8D994D09B8F9 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _z = value; }
		double L_0 = ___value0;
		__this->set__z_4(L_0);
		// set { _z = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Turbulence_set_Power_m998FC81A9B3EA7561472824DF585A9B539FE9992_inline (Turbulence_tC8326B21F7FB734FFC340C3052A21F6205F898A1 * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _power = value; }
		double L_0 = ___value0;
		__this->set__power_11(L_0);
		// set { _power = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double Perlin_get_Frequency_mEAE3E2E0985EDE739F576F750F3E4E1AAAEEE196_inline (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, const RuntimeMethod* method)
{
	{
		// get { return _frequency; }
		double L_0 = __this->get__frequency_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Perlin_get_OctaveCount_mC78AF4F84B21D3ECC0E6E0CB89C476D38B39B475_inline (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, const RuntimeMethod* method)
{
	{
		// get { return _octaveCount; }
		int32_t L_0 = __this->get__octaveCount_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Perlin_get_Seed_m70376C13B6270AF177140300B0E85AEB2C7032B7_inline (Perlin_tC3855AA00E24EBFC128336BC40683E878F5C1283 * __this, const RuntimeMethod* method)
{
	{
		// get { return _seed; }
		int32_t L_0 = __this->get__seed_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Voronoi_set_Frequency_m2FEBFFADE410B3490CECA78C0AE23C219963D38F_inline (Voronoi_t3E6BF1D9F2351DBE1E5CB1700CF85775880B690E * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _frequency = value; }
		double L_0 = ___value0;
		__this->set__frequency_3(L_0);
		// set { _frequency = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Voronoi_set_Displacement_m56D289F3379DCCF990FE5FF3DB9B57BC6AE51902_inline (Voronoi_t3E6BF1D9F2351DBE1E5CB1700CF85775880B690E * __this, double ___value0, const RuntimeMethod* method)
{
	{
		// set { _displacement = value; }
		double L_0 = ___value0;
		__this->set__displacement_2(L_0);
		// set { _displacement = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Voronoi_set_Seed_m18DE7813CE5499931269EFD153683DF2C1FEEF2C_inline (Voronoi_t3E6BF1D9F2351DBE1E5CB1700CF85775880B690E * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// set { _seed = value; }
		int32_t L_0 = ___value0;
		__this->set__seed_4(L_0);
		// set { _seed = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Voronoi_set_UseDistance_m5F34BA069B2CFE0A8249E1FD49251DB8F86230C0_inline (Voronoi_t3E6BF1D9F2351DBE1E5CB1700CF85775880B690E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { _distance = value; }
		bool L_0 = ___value0;
		__this->set__distance_5(L_0);
		// set { _distance = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m32DCE2DAC380E7E81E35C6D1459FC1B664C98D07_gshared_inline (List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10  List_1_get_Item_m7DE788F9B3E4AB58167158D3EC8678D102CBA4C5_gshared_inline (List_1_t0C5460131D2046A60CEF15DA4F3386D602C08003 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		KeyValuePair_2U5BU5D_t788816ABE0E3287BD454F19104852EC72D7A0CB3* L_2 = (KeyValuePair_2U5BU5D_t788816ABE0E3287BD454F19104852EC72D7A0CB3*)__this->get__items_1();
		int32_t L_3 = ___index0;
		KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((KeyValuePair_2U5BU5D_t788816ABE0E3287BD454F19104852EC72D7A0CB3*)L_2, (int32_t)L_3);
		return (KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10 )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KeyValuePair_2_get_Key_m538BD134D8B991D52E98EDB7473C8FE1BF5FB001_gshared_inline (KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10 * __this, const RuntimeMethod* method)
{
	{
		double L_0 = (double)__this->get_key_0();
		return (double)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double KeyValuePair_2_get_Value_mCF6D46FD8287F430682B061EA3FA2CD6FE8CC827_gshared_inline (KeyValuePair_2_tB7F4352EA08A145A1BCCC3877D4C73C89B2ADD10 * __this, const RuntimeMethod* method)
{
	{
		double L_0 = (double)__this->get_value_1();
		return (double)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mC1A91036A8488F4B39DA566C71D9631B796DCBE2_gshared_inline (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double List_1_get_Item_m31A9E37299AA6C7637D3CB1E55556B22883D2A06_gshared_inline (List_1_t760D7EED86247E3493CD5F22F0E822BF6AE1C2BC * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_2 = (DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)__this->get__items_1();
		int32_t L_3 = ___index0;
		double L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB*)L_2, (int32_t)L_3);
		return (double)L_4;
	}
}
