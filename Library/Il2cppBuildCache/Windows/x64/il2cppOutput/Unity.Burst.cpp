#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int64,System.Object>
struct Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26;
// System.Collections.Generic.Dictionary`2<System.Int64,System.Type>
struct Dictionary_2_t9FC6861E09F23C7035FD1CE506D4404DCE331C9D;
// System.Func`2<System.Attribute,System.Boolean>
struct Func_2_tC8249329D9436908CCFC615B65B1169FA16DB8E2;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Collections.Generic.IEnumerable`1<System.Attribute>
struct IEnumerable_1_t95FA6F2545E4B529565364A2F48515FE4B80AD31;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IEqualityComparer`1<System.Int64>
struct IEqualityComparer_1_tBD7EB381E8B25356EF3AED6C41B65AECA6B91A19;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int64,System.Type>
struct KeyCollection_t3F56F6EEC94E86F1DF2C49F41FBDEE053550D90A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int64,System.Type>
struct ValueCollection_t6AA94407EBA83DBB24A4BB8E756BFCECBC80A70C;
// System.Collections.Generic.Dictionary`2/Entry<System.Int64,System.Type>[]
struct EntryU5BU5D_t09835765F8D6593FB6AEFA6582E0E23F2B6C871E;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// Unity.Burst.CompilerServices.AssumeRangeAttribute
struct AssumeRangeAttribute_t9CB4051727958D8EC81907FC2D1E8A4672DBA1B1;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Unity.Burst.BurstCompileAttribute
struct BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1;
// Unity.Burst.BurstCompilerOptions
struct BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tCE6C6AFD78D5FE8E29956D0A3F136830E7F1ACF3;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t793010A707224DF83D1377EDAD701903E34A38AD;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NullReferenceException
struct NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724;
// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Unity.Burst.BurstCompiler/<>c
struct U3CU3Ec_t8736AFE52E7CAC14A352C931FBA1411A8CC6CE41;
// Unity.Burst.BurstCompiler/FakeDelegate
struct FakeDelegate_t5C32095DECA16B795748EAE137988C071A80C62C;
// Unity.Burst.BurstCompiler/StaticTypeReinitAttribute
struct StaticTypeReinitAttribute_t44EBC424CAE299F7DA16C5FAA87819AB80848CD2;
// Unity.Burst.BurstRuntime/PreserveAttribute
struct PreserveAttribute_t5582719532581A928FFB965E9E6F529B1162FF42;
// Unity.Burst.SharedStatic/PreserveAttribute
struct PreserveAttribute_tA3F52D116432709CC1E83ABC792A0FEB8B08580C;
// Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate
struct IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9FC6861E09F23C7035FD1CE506D4404DCE331C9D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FakeDelegate_t5C32095DECA16B795748EAE137988C071A80C62C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tC8249329D9436908CCFC615B65B1169FA16DB8E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t95FA6F2545E4B529565364A2F48515FE4B80AD31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD213EBCE7B3BCD6C10AD4828845AF17048A1D1B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MethodInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SharedStatic_t4A478B3109091C26ED6F772B9BEC1EA0802B2FFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t8736AFE52E7CAC14A352C931FBA1411A8CC6CE41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral052A90A585030A2D7669CC7D2884B0D78760C742;
IL2CPP_EXTERN_C String_t* _stringLiteral095255162964C376C50DCE630D972167CA5AE0D8;
IL2CPP_EXTERN_C String_t* _stringLiteral16764301FDE0B2444923BB6CE0B9B7F315E4DB64;
IL2CPP_EXTERN_C String_t* _stringLiteral17490A99BE5820911E7C397A415006E24720C376;
IL2CPP_EXTERN_C String_t* _stringLiteral26A59A679F5CBAD26A0CB62B57E491F8D4F6823D;
IL2CPP_EXTERN_C String_t* _stringLiteral3BDA11ACB4A5DE34152226FE00D113C15333848A;
IL2CPP_EXTERN_C String_t* _stringLiteral402003B86DB2ADAB276C8ADBD26264B6C126B492;
IL2CPP_EXTERN_C String_t* _stringLiteral4784CA4E159D86F8767CCC55143536AF34801074;
IL2CPP_EXTERN_C String_t* _stringLiteral4BCE0A6A775CEDDE2F72825B7D364029086B76D3;
IL2CPP_EXTERN_C String_t* _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C;
IL2CPP_EXTERN_C String_t* _stringLiteral5259D7ED6EC0401E934F7EBB0E22B9C3DA388D16;
IL2CPP_EXTERN_C String_t* _stringLiteral592EA6352B1DC6F257CCDA7C5C1A064EFE696C16;
IL2CPP_EXTERN_C String_t* _stringLiteral59E5F752398B542B254DD58302DEB9067AA9FC1D;
IL2CPP_EXTERN_C String_t* _stringLiteral79DA35A084D67D3A4C946D97765E49E456B15354;
IL2CPP_EXTERN_C String_t* _stringLiteral7AD6BA121E4A8420E000A0297BE2958650057EEB;
IL2CPP_EXTERN_C String_t* _stringLiteral85F734AB4B70F85FBE3AD2752128D17420A8753B;
IL2CPP_EXTERN_C String_t* _stringLiteral8AC6E2C9E3B0B89CE7829E6FE9748CF10C25C407;
IL2CPP_EXTERN_C String_t* _stringLiteral9471CB5EE8443E0C9C2FD0C1DF0F52C2F5CD9927;
IL2CPP_EXTERN_C String_t* _stringLiteralBEE03BDA1448C10795E764222E36CC6226EECA1A;
IL2CPP_EXTERN_C String_t* _stringLiteralC13C026731BF574915EF781C5CC709D179D7F4C7;
IL2CPP_EXTERN_C String_t* _stringLiteralD60EE3ABB89D0E9B73BC076558F7AB2B1B1D5F05;
IL2CPP_EXTERN_C String_t* _stringLiteralD7A66F857F6E3FCCC482964755DB79017BF35DD2;
IL2CPP_EXTERN_C String_t* _stringLiteralFFE3A1B73CD7FC81540FBBE737435B0A887629D5;
IL2CPP_EXTERN_C const RuntimeMethod* BurstCompilerHelper_IsBurstEnabled_mC1B24958FFA3F3D5360E1F933CE0900E586B2A5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BurstCompilerOptions_HasBurstCompileAttribute_m4EF62614BD8EAAF2015D0B19230E79523213FC9D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BurstCompiler_CompileUnsafeStaticMethod_m01C0A30458F77CC44F563C60B3EF404810BED751_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BurstCompiler_Compile_m299CF526298E2A693F510F036D3604C8E8BF7CB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BurstCompiler_Compile_mECFF990384A362035C9B5833D0F621CE4D9147ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CustomAttributeExtensions_GetCustomAttribute_TisBurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1_m9B8B3869855183A66586F91FE26BFB947E0A919F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mEDDD9C0EDBF84B20D8EEC0295487B7446286353C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_All_TisAttribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71_m3E2C346102F90F2D173E0C2D3192B4821E7E9648_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m4D123D75E9CD917285F99983FCA192BC11962ED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CCompileU3Eb__14_0_mEE4C1F4096F86162688058F7DCC5765EB351F31F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E;
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tCD5BF6D3AAB147F28F15DED35776F8117AE07F16 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Int64,System.Type>
struct Dictionary_2_t9FC6861E09F23C7035FD1CE506D4404DCE331C9D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t09835765F8D6593FB6AEFA6582E0E23F2B6C871E* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t3F56F6EEC94E86F1DF2C49F41FBDEE053550D90A * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t6AA94407EBA83DBB24A4BB8E756BFCECBC80A70C * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9FC6861E09F23C7035FD1CE506D4404DCE331C9D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9FC6861E09F23C7035FD1CE506D4404DCE331C9D, ___entries_1)); }
	inline EntryU5BU5D_t09835765F8D6593FB6AEFA6582E0E23F2B6C871E* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t09835765F8D6593FB6AEFA6582E0E23F2B6C871E** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t09835765F8D6593FB6AEFA6582E0E23F2B6C871E* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9FC6861E09F23C7035FD1CE506D4404DCE331C9D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9FC6861E09F23C7035FD1CE506D4404DCE331C9D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9FC6861E09F23C7035FD1CE506D4404DCE331C9D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9FC6861E09F23C7035FD1CE506D4404DCE331C9D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9FC6861E09F23C7035FD1CE506D4404DCE331C9D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9FC6861E09F23C7035FD1CE506D4404DCE331C9D, ___keys_7)); }
	inline KeyCollection_t3F56F6EEC94E86F1DF2C49F41FBDEE053550D90A * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t3F56F6EEC94E86F1DF2C49F41FBDEE053550D90A ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t3F56F6EEC94E86F1DF2C49F41FBDEE053550D90A * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9FC6861E09F23C7035FD1CE506D4404DCE331C9D, ___values_8)); }
	inline ValueCollection_t6AA94407EBA83DBB24A4BB8E756BFCECBC80A70C * get_values_8() const { return ___values_8; }
	inline ValueCollection_t6AA94407EBA83DBB24A4BB8E756BFCECBC80A70C ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t6AA94407EBA83DBB24A4BB8E756BFCECBC80A70C * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9FC6861E09F23C7035FD1CE506D4404DCE331C9D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// Unity.Burst.BurstCompiler
struct BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2  : public RuntimeObject
{
public:

public:
};

struct BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_StaticFields
{
public:
	// System.Boolean Unity.Burst.BurstCompiler::_IsEnabled
	bool ____IsEnabled_0;
	// Unity.Burst.BurstCompilerOptions Unity.Burst.BurstCompiler::Options
	BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * ___Options_1;
	// System.Reflection.MethodInfo Unity.Burst.BurstCompiler::DummyMethodInfo
	MethodInfo_t * ___DummyMethodInfo_2;

public:
	inline static int32_t get_offset_of__IsEnabled_0() { return static_cast<int32_t>(offsetof(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_StaticFields, ____IsEnabled_0)); }
	inline bool get__IsEnabled_0() const { return ____IsEnabled_0; }
	inline bool* get_address_of__IsEnabled_0() { return &____IsEnabled_0; }
	inline void set__IsEnabled_0(bool value)
	{
		____IsEnabled_0 = value;
	}

	inline static int32_t get_offset_of_Options_1() { return static_cast<int32_t>(offsetof(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_StaticFields, ___Options_1)); }
	inline BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * get_Options_1() const { return ___Options_1; }
	inline BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 ** get_address_of_Options_1() { return &___Options_1; }
	inline void set_Options_1(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * value)
	{
		___Options_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Options_1), (void*)value);
	}

	inline static int32_t get_offset_of_DummyMethodInfo_2() { return static_cast<int32_t>(offsetof(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_StaticFields, ___DummyMethodInfo_2)); }
	inline MethodInfo_t * get_DummyMethodInfo_2() const { return ___DummyMethodInfo_2; }
	inline MethodInfo_t ** get_address_of_DummyMethodInfo_2() { return &___DummyMethodInfo_2; }
	inline void set_DummyMethodInfo_2(MethodInfo_t * value)
	{
		___DummyMethodInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DummyMethodInfo_2), (void*)value);
	}
};


// Unity.Burst.BurstCompilerOptions
struct BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34  : public RuntimeObject
{
public:
	// System.Boolean Unity.Burst.BurstCompilerOptions::_enableBurstCompilation
	bool ____enableBurstCompilation_3;
	// System.Boolean Unity.Burst.BurstCompilerOptions::_enableBurstSafetyChecks
	bool ____enableBurstSafetyChecks_4;
	// System.Boolean Unity.Burst.BurstCompilerOptions::<IsGlobal>k__BackingField
	bool ___U3CIsGlobalU3Ek__BackingField_5;
	// System.Action Unity.Burst.BurstCompilerOptions::<OptionsChanged>k__BackingField
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___U3COptionsChangedU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of__enableBurstCompilation_3() { return static_cast<int32_t>(offsetof(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34, ____enableBurstCompilation_3)); }
	inline bool get__enableBurstCompilation_3() const { return ____enableBurstCompilation_3; }
	inline bool* get_address_of__enableBurstCompilation_3() { return &____enableBurstCompilation_3; }
	inline void set__enableBurstCompilation_3(bool value)
	{
		____enableBurstCompilation_3 = value;
	}

	inline static int32_t get_offset_of__enableBurstSafetyChecks_4() { return static_cast<int32_t>(offsetof(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34, ____enableBurstSafetyChecks_4)); }
	inline bool get__enableBurstSafetyChecks_4() const { return ____enableBurstSafetyChecks_4; }
	inline bool* get_address_of__enableBurstSafetyChecks_4() { return &____enableBurstSafetyChecks_4; }
	inline void set__enableBurstSafetyChecks_4(bool value)
	{
		____enableBurstSafetyChecks_4 = value;
	}

	inline static int32_t get_offset_of_U3CIsGlobalU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34, ___U3CIsGlobalU3Ek__BackingField_5)); }
	inline bool get_U3CIsGlobalU3Ek__BackingField_5() const { return ___U3CIsGlobalU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CIsGlobalU3Ek__BackingField_5() { return &___U3CIsGlobalU3Ek__BackingField_5; }
	inline void set_U3CIsGlobalU3Ek__BackingField_5(bool value)
	{
		___U3CIsGlobalU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3COptionsChangedU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34, ___U3COptionsChangedU3Ek__BackingField_6)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_U3COptionsChangedU3Ek__BackingField_6() const { return ___U3COptionsChangedU3Ek__BackingField_6; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_U3COptionsChangedU3Ek__BackingField_6() { return &___U3COptionsChangedU3Ek__BackingField_6; }
	inline void set_U3COptionsChangedU3Ek__BackingField_6(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___U3COptionsChangedU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COptionsChangedU3Ek__BackingField_6), (void*)value);
	}
};

struct BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_StaticFields
{
public:
	// System.Boolean Unity.Burst.BurstCompilerOptions::ForceDisableBurstCompilation
	bool ___ForceDisableBurstCompilation_0;
	// System.Boolean Unity.Burst.BurstCompilerOptions::ForceBurstCompilationSynchronously
	bool ___ForceBurstCompilationSynchronously_1;
	// System.Boolean Unity.Burst.BurstCompilerOptions::IsSecondaryUnityProcess
	bool ___IsSecondaryUnityProcess_2;

public:
	inline static int32_t get_offset_of_ForceDisableBurstCompilation_0() { return static_cast<int32_t>(offsetof(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_StaticFields, ___ForceDisableBurstCompilation_0)); }
	inline bool get_ForceDisableBurstCompilation_0() const { return ___ForceDisableBurstCompilation_0; }
	inline bool* get_address_of_ForceDisableBurstCompilation_0() { return &___ForceDisableBurstCompilation_0; }
	inline void set_ForceDisableBurstCompilation_0(bool value)
	{
		___ForceDisableBurstCompilation_0 = value;
	}

	inline static int32_t get_offset_of_ForceBurstCompilationSynchronously_1() { return static_cast<int32_t>(offsetof(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_StaticFields, ___ForceBurstCompilationSynchronously_1)); }
	inline bool get_ForceBurstCompilationSynchronously_1() const { return ___ForceBurstCompilationSynchronously_1; }
	inline bool* get_address_of_ForceBurstCompilationSynchronously_1() { return &___ForceBurstCompilationSynchronously_1; }
	inline void set_ForceBurstCompilationSynchronously_1(bool value)
	{
		___ForceBurstCompilationSynchronously_1 = value;
	}

	inline static int32_t get_offset_of_IsSecondaryUnityProcess_2() { return static_cast<int32_t>(offsetof(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_StaticFields, ___IsSecondaryUnityProcess_2)); }
	inline bool get_IsSecondaryUnityProcess_2() const { return ___IsSecondaryUnityProcess_2; }
	inline bool* get_address_of_IsSecondaryUnityProcess_2() { return &___IsSecondaryUnityProcess_2; }
	inline void set_IsSecondaryUnityProcess_2(bool value)
	{
		___IsSecondaryUnityProcess_2 = value;
	}
};


// Unity.Burst.BurstRuntime
struct BurstRuntime_t725AE7FF2003494CEB5F987F3365BA847C762735  : public RuntimeObject
{
public:

public:
};


// Unity.Burst.Intrinsics.Common
struct Common_t63FFC77D96ADB26F82D5C53366819409F0A58483  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Unity.Burst.SharedStatic
struct SharedStatic_t4A478B3109091C26ED6F772B9BEC1EA0802B2FFC  : public RuntimeObject
{
public:

public:
};

struct SharedStatic_t4A478B3109091C26ED6F772B9BEC1EA0802B2FFC_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int64,System.Type> Unity.Burst.SharedStatic::HashToType
	Dictionary_2_t9FC6861E09F23C7035FD1CE506D4404DCE331C9D * ___HashToType_0;

public:
	inline static int32_t get_offset_of_HashToType_0() { return static_cast<int32_t>(offsetof(SharedStatic_t4A478B3109091C26ED6F772B9BEC1EA0802B2FFC_StaticFields, ___HashToType_0)); }
	inline Dictionary_2_t9FC6861E09F23C7035FD1CE506D4404DCE331C9D * get_HashToType_0() const { return ___HashToType_0; }
	inline Dictionary_2_t9FC6861E09F23C7035FD1CE506D4404DCE331C9D ** get_address_of_HashToType_0() { return &___HashToType_0; }
	inline void set_HashToType_0(Dictionary_2_t9FC6861E09F23C7035FD1CE506D4404DCE331C9D * value)
	{
		___HashToType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HashToType_0), (void*)value);
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


// Unity.Burst.Intrinsics.V128DebugView
struct V128DebugView_tA2ACBAC212A3800A9ACD7F1E421A3934EC104083  : public RuntimeObject
{
public:

public:
};


// Unity.Burst.Intrinsics.V256DebugView
struct V256DebugView_t7AE6ED6B641A2C8DCD516FE257BF952E779239B9  : public RuntimeObject
{
public:

public:
};


// Unity.Burst.Intrinsics.V64DebugView
struct V64DebugView_tFF36AA8BC776D6BB19533B6066EF988F8648ABD4  : public RuntimeObject
{
public:

public:
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

// Unity.Burst.Intrinsics.X86
struct X86_tA7FFD8DCEAD39BAABEFCAD3CDBE60062FD12C554  : public RuntimeObject
{
public:

public:
};


// Unity.Burst.BurstCompiler/<>c
struct U3CU3Ec_t8736AFE52E7CAC14A352C931FBA1411A8CC6CE41  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t8736AFE52E7CAC14A352C931FBA1411A8CC6CE41_StaticFields
{
public:
	// Unity.Burst.BurstCompiler/<>c Unity.Burst.BurstCompiler/<>c::<>9
	U3CU3Ec_t8736AFE52E7CAC14A352C931FBA1411A8CC6CE41 * ___U3CU3E9_0;
	// System.Func`2<System.Attribute,System.Boolean> Unity.Burst.BurstCompiler/<>c::<>9__14_0
	Func_2_tC8249329D9436908CCFC615B65B1169FA16DB8E2 * ___U3CU3E9__14_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8736AFE52E7CAC14A352C931FBA1411A8CC6CE41_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t8736AFE52E7CAC14A352C931FBA1411A8CC6CE41 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t8736AFE52E7CAC14A352C931FBA1411A8CC6CE41 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t8736AFE52E7CAC14A352C931FBA1411A8CC6CE41 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__14_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t8736AFE52E7CAC14A352C931FBA1411A8CC6CE41_StaticFields, ___U3CU3E9__14_0_1)); }
	inline Func_2_tC8249329D9436908CCFC615B65B1169FA16DB8E2 * get_U3CU3E9__14_0_1() const { return ___U3CU3E9__14_0_1; }
	inline Func_2_tC8249329D9436908CCFC615B65B1169FA16DB8E2 ** get_address_of_U3CU3E9__14_0_1() { return &___U3CU3E9__14_0_1; }
	inline void set_U3CU3E9__14_0_1(Func_2_tC8249329D9436908CCFC615B65B1169FA16DB8E2 * value)
	{
		___U3CU3E9__14_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__14_0_1), (void*)value);
	}
};


// Unity.Burst.BurstCompiler/BurstCompilerHelper
struct BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA  : public RuntimeObject
{
public:

public:
};

struct BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_StaticFields
{
public:
	// Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate Unity.Burst.BurstCompiler/BurstCompilerHelper::IsBurstEnabledImpl
	IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5 * ___IsBurstEnabledImpl_0;
	// System.Boolean Unity.Burst.BurstCompiler/BurstCompilerHelper::IsBurstGenerated
	bool ___IsBurstGenerated_1;

public:
	inline static int32_t get_offset_of_IsBurstEnabledImpl_0() { return static_cast<int32_t>(offsetof(BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_StaticFields, ___IsBurstEnabledImpl_0)); }
	inline IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5 * get_IsBurstEnabledImpl_0() const { return ___IsBurstEnabledImpl_0; }
	inline IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5 ** get_address_of_IsBurstEnabledImpl_0() { return &___IsBurstEnabledImpl_0; }
	inline void set_IsBurstEnabledImpl_0(IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5 * value)
	{
		___IsBurstEnabledImpl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IsBurstEnabledImpl_0), (void*)value);
	}

	inline static int32_t get_offset_of_IsBurstGenerated_1() { return static_cast<int32_t>(offsetof(BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_StaticFields, ___IsBurstGenerated_1)); }
	inline bool get_IsBurstGenerated_1() const { return ___IsBurstGenerated_1; }
	inline bool* get_address_of_IsBurstGenerated_1() { return &___IsBurstGenerated_1; }
	inline void set_IsBurstGenerated_1(bool value)
	{
		___IsBurstGenerated_1 = value;
	}
};


// Unity.Burst.BurstCompiler/FakeDelegate
struct FakeDelegate_t5C32095DECA16B795748EAE137988C071A80C62C  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo Unity.Burst.BurstCompiler/FakeDelegate::<Method>k__BackingField
	MethodInfo_t * ___U3CMethodU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CMethodU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(FakeDelegate_t5C32095DECA16B795748EAE137988C071A80C62C, ___U3CMethodU3Ek__BackingField_0)); }
	inline MethodInfo_t * get_U3CMethodU3Ek__BackingField_0() const { return ___U3CMethodU3Ek__BackingField_0; }
	inline MethodInfo_t ** get_address_of_U3CMethodU3Ek__BackingField_0() { return &___U3CMethodU3Ek__BackingField_0; }
	inline void set_U3CMethodU3Ek__BackingField_0(MethodInfo_t * value)
	{
		___U3CMethodU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMethodU3Ek__BackingField_0), (void*)value);
	}
};


// Unity.Burst.Intrinsics.X86/Avx
struct Avx_t0091C8BB83C58835BFA165A0D24A8AEA7BB7A97A  : public RuntimeObject
{
public:

public:
};


// Unity.Burst.Intrinsics.X86/Avx2
struct Avx2_t20DC667889849AB9422D9F53A85F027F70997C16  : public RuntimeObject
{
public:

public:
};


// Unity.Burst.Intrinsics.X86/Sse
struct Sse_tBD2680F68ED3A71CB52B44B7C54AE06F585E9397  : public RuntimeObject
{
public:

public:
};


// Unity.Burst.Intrinsics.X86/Sse2
struct Sse2_tF900BA4BD06CC22D04D9BD80D9802030C8AF668D  : public RuntimeObject
{
public:

public:
};


// Unity.Burst.CompilerServices.AssumeRangeAttribute
struct AssumeRangeAttribute_t9CB4051727958D8EC81907FC2D1E8A4672DBA1B1  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
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


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// Microsoft.CodeAnalysis.EmbeddedAttribute
struct EmbeddedAttribute_tCE6C6AFD78D5FE8E29956D0A3F136830E7F1ACF3  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// UnityEngine.Hash128
struct Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A 
{
public:
	// System.UInt32 UnityEngine.Hash128::m_u32_0
	uint32_t ___m_u32_0_0;
	// System.UInt32 UnityEngine.Hash128::m_u32_1
	uint32_t ___m_u32_1_1;
	// System.UInt32 UnityEngine.Hash128::m_u32_2
	uint32_t ___m_u32_2_2;
	// System.UInt32 UnityEngine.Hash128::m_u32_3
	uint32_t ___m_u32_3_3;

public:
	inline static int32_t get_offset_of_m_u32_0_0() { return static_cast<int32_t>(offsetof(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A, ___m_u32_0_0)); }
	inline uint32_t get_m_u32_0_0() const { return ___m_u32_0_0; }
	inline uint32_t* get_address_of_m_u32_0_0() { return &___m_u32_0_0; }
	inline void set_m_u32_0_0(uint32_t value)
	{
		___m_u32_0_0 = value;
	}

	inline static int32_t get_offset_of_m_u32_1_1() { return static_cast<int32_t>(offsetof(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A, ___m_u32_1_1)); }
	inline uint32_t get_m_u32_1_1() const { return ___m_u32_1_1; }
	inline uint32_t* get_address_of_m_u32_1_1() { return &___m_u32_1_1; }
	inline void set_m_u32_1_1(uint32_t value)
	{
		___m_u32_1_1 = value;
	}

	inline static int32_t get_offset_of_m_u32_2_2() { return static_cast<int32_t>(offsetof(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A, ___m_u32_2_2)); }
	inline uint32_t get_m_u32_2_2() const { return ___m_u32_2_2; }
	inline uint32_t* get_address_of_m_u32_2_2() { return &___m_u32_2_2; }
	inline void set_m_u32_2_2(uint32_t value)
	{
		___m_u32_2_2 = value;
	}

	inline static int32_t get_offset_of_m_u32_3_3() { return static_cast<int32_t>(offsetof(Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A, ___m_u32_3_3)); }
	inline uint32_t get_m_u32_3_3() const { return ___m_u32_3_3; }
	inline uint32_t* get_address_of_m_u32_3_3() { return &___m_u32_3_3; }
	inline void set_m_u32_3_3(uint32_t value)
	{
		___m_u32_3_3 = value;
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


// System.Runtime.CompilerServices.IsReadOnlyAttribute
struct IsReadOnlyAttribute_t793010A707224DF83D1377EDAD701903E34A38AD  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.UInt32
struct UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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


// Unity.Burst.Intrinsics.v64
struct v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Burst.Intrinsics.v64::Byte0
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte1
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte2
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte3
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_4_OffsetPadding[4];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte4
			uint8_t ___Byte4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_5_OffsetPadding[5];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte5
			uint8_t ___Byte5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_6_OffsetPadding[6];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte6
			uint8_t ___Byte6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_7_OffsetPadding[7];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte7
			uint8_t ___Byte7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte Unity.Burst.Intrinsics.v64::SByte0
			int8_t ___SByte0_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_9_OffsetPadding[1];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte1
			int8_t ___SByte1_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_9_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_10_OffsetPadding[2];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte2
			int8_t ___SByte2_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_10_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_11_OffsetPadding[3];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte3
			int8_t ___SByte3_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_11_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_12_OffsetPadding[4];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte4
			int8_t ___SByte4_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_12_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_13_OffsetPadding[5];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte5
			int8_t ___SByte5_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_13_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_14_OffsetPadding[6];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte6
			int8_t ___SByte6_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_14_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_15_OffsetPadding[7];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte7
			int8_t ___SByte7_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_15_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort0
			uint16_t ___UShort0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_17_OffsetPadding[2];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort1
			uint16_t ___UShort1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_17_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_18_OffsetPadding[4];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort2
			uint16_t ___UShort2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_18_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_19_OffsetPadding[6];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort3
			uint16_t ___UShort3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_19_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort0
			int16_t ___SShort0_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_21_OffsetPadding[2];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort1
			int16_t ___SShort1_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_21_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_22_OffsetPadding[4];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort2
			int16_t ___SShort2_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_22_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_23_OffsetPadding[6];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort3
			int16_t ___SShort3_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_23_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Unity.Burst.Intrinsics.v64::UInt0
			uint32_t ___UInt0_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_25_OffsetPadding[4];
			// System.UInt32 Unity.Burst.Intrinsics.v64::UInt1
			uint32_t ___UInt1_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_25_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Unity.Burst.Intrinsics.v64::SInt0
			int32_t ___SInt0_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_27_OffsetPadding[4];
			// System.Int32 Unity.Burst.Intrinsics.v64::SInt1
			int32_t ___SInt1_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_27_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Unity.Burst.Intrinsics.v64::ULong0
			uint64_t ___ULong0_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Unity.Burst.Intrinsics.v64::SLong0
			int64_t ___SLong0_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Unity.Burst.Intrinsics.v64::Float0
			float ___Float0_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_31_OffsetPadding[4];
			// System.Single Unity.Burst.Intrinsics.v64::Float1
			float ___Float1_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_31_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Unity.Burst.Intrinsics.v64::Double0
			double ___Double0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_32_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_Byte0_0() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___Byte0_0)); }
	inline uint8_t get_Byte0_0() const { return ___Byte0_0; }
	inline uint8_t* get_address_of_Byte0_0() { return &___Byte0_0; }
	inline void set_Byte0_0(uint8_t value)
	{
		___Byte0_0 = value;
	}

	inline static int32_t get_offset_of_Byte1_1() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___Byte1_1)); }
	inline uint8_t get_Byte1_1() const { return ___Byte1_1; }
	inline uint8_t* get_address_of_Byte1_1() { return &___Byte1_1; }
	inline void set_Byte1_1(uint8_t value)
	{
		___Byte1_1 = value;
	}

	inline static int32_t get_offset_of_Byte2_2() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___Byte2_2)); }
	inline uint8_t get_Byte2_2() const { return ___Byte2_2; }
	inline uint8_t* get_address_of_Byte2_2() { return &___Byte2_2; }
	inline void set_Byte2_2(uint8_t value)
	{
		___Byte2_2 = value;
	}

	inline static int32_t get_offset_of_Byte3_3() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___Byte3_3)); }
	inline uint8_t get_Byte3_3() const { return ___Byte3_3; }
	inline uint8_t* get_address_of_Byte3_3() { return &___Byte3_3; }
	inline void set_Byte3_3(uint8_t value)
	{
		___Byte3_3 = value;
	}

	inline static int32_t get_offset_of_Byte4_4() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___Byte4_4)); }
	inline uint8_t get_Byte4_4() const { return ___Byte4_4; }
	inline uint8_t* get_address_of_Byte4_4() { return &___Byte4_4; }
	inline void set_Byte4_4(uint8_t value)
	{
		___Byte4_4 = value;
	}

	inline static int32_t get_offset_of_Byte5_5() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___Byte5_5)); }
	inline uint8_t get_Byte5_5() const { return ___Byte5_5; }
	inline uint8_t* get_address_of_Byte5_5() { return &___Byte5_5; }
	inline void set_Byte5_5(uint8_t value)
	{
		___Byte5_5 = value;
	}

	inline static int32_t get_offset_of_Byte6_6() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___Byte6_6)); }
	inline uint8_t get_Byte6_6() const { return ___Byte6_6; }
	inline uint8_t* get_address_of_Byte6_6() { return &___Byte6_6; }
	inline void set_Byte6_6(uint8_t value)
	{
		___Byte6_6 = value;
	}

	inline static int32_t get_offset_of_Byte7_7() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___Byte7_7)); }
	inline uint8_t get_Byte7_7() const { return ___Byte7_7; }
	inline uint8_t* get_address_of_Byte7_7() { return &___Byte7_7; }
	inline void set_Byte7_7(uint8_t value)
	{
		___Byte7_7 = value;
	}

	inline static int32_t get_offset_of_SByte0_8() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___SByte0_8)); }
	inline int8_t get_SByte0_8() const { return ___SByte0_8; }
	inline int8_t* get_address_of_SByte0_8() { return &___SByte0_8; }
	inline void set_SByte0_8(int8_t value)
	{
		___SByte0_8 = value;
	}

	inline static int32_t get_offset_of_SByte1_9() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___SByte1_9)); }
	inline int8_t get_SByte1_9() const { return ___SByte1_9; }
	inline int8_t* get_address_of_SByte1_9() { return &___SByte1_9; }
	inline void set_SByte1_9(int8_t value)
	{
		___SByte1_9 = value;
	}

	inline static int32_t get_offset_of_SByte2_10() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___SByte2_10)); }
	inline int8_t get_SByte2_10() const { return ___SByte2_10; }
	inline int8_t* get_address_of_SByte2_10() { return &___SByte2_10; }
	inline void set_SByte2_10(int8_t value)
	{
		___SByte2_10 = value;
	}

	inline static int32_t get_offset_of_SByte3_11() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___SByte3_11)); }
	inline int8_t get_SByte3_11() const { return ___SByte3_11; }
	inline int8_t* get_address_of_SByte3_11() { return &___SByte3_11; }
	inline void set_SByte3_11(int8_t value)
	{
		___SByte3_11 = value;
	}

	inline static int32_t get_offset_of_SByte4_12() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___SByte4_12)); }
	inline int8_t get_SByte4_12() const { return ___SByte4_12; }
	inline int8_t* get_address_of_SByte4_12() { return &___SByte4_12; }
	inline void set_SByte4_12(int8_t value)
	{
		___SByte4_12 = value;
	}

	inline static int32_t get_offset_of_SByte5_13() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___SByte5_13)); }
	inline int8_t get_SByte5_13() const { return ___SByte5_13; }
	inline int8_t* get_address_of_SByte5_13() { return &___SByte5_13; }
	inline void set_SByte5_13(int8_t value)
	{
		___SByte5_13 = value;
	}

	inline static int32_t get_offset_of_SByte6_14() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___SByte6_14)); }
	inline int8_t get_SByte6_14() const { return ___SByte6_14; }
	inline int8_t* get_address_of_SByte6_14() { return &___SByte6_14; }
	inline void set_SByte6_14(int8_t value)
	{
		___SByte6_14 = value;
	}

	inline static int32_t get_offset_of_SByte7_15() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___SByte7_15)); }
	inline int8_t get_SByte7_15() const { return ___SByte7_15; }
	inline int8_t* get_address_of_SByte7_15() { return &___SByte7_15; }
	inline void set_SByte7_15(int8_t value)
	{
		___SByte7_15 = value;
	}

	inline static int32_t get_offset_of_UShort0_16() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___UShort0_16)); }
	inline uint16_t get_UShort0_16() const { return ___UShort0_16; }
	inline uint16_t* get_address_of_UShort0_16() { return &___UShort0_16; }
	inline void set_UShort0_16(uint16_t value)
	{
		___UShort0_16 = value;
	}

	inline static int32_t get_offset_of_UShort1_17() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___UShort1_17)); }
	inline uint16_t get_UShort1_17() const { return ___UShort1_17; }
	inline uint16_t* get_address_of_UShort1_17() { return &___UShort1_17; }
	inline void set_UShort1_17(uint16_t value)
	{
		___UShort1_17 = value;
	}

	inline static int32_t get_offset_of_UShort2_18() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___UShort2_18)); }
	inline uint16_t get_UShort2_18() const { return ___UShort2_18; }
	inline uint16_t* get_address_of_UShort2_18() { return &___UShort2_18; }
	inline void set_UShort2_18(uint16_t value)
	{
		___UShort2_18 = value;
	}

	inline static int32_t get_offset_of_UShort3_19() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___UShort3_19)); }
	inline uint16_t get_UShort3_19() const { return ___UShort3_19; }
	inline uint16_t* get_address_of_UShort3_19() { return &___UShort3_19; }
	inline void set_UShort3_19(uint16_t value)
	{
		___UShort3_19 = value;
	}

	inline static int32_t get_offset_of_SShort0_20() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___SShort0_20)); }
	inline int16_t get_SShort0_20() const { return ___SShort0_20; }
	inline int16_t* get_address_of_SShort0_20() { return &___SShort0_20; }
	inline void set_SShort0_20(int16_t value)
	{
		___SShort0_20 = value;
	}

	inline static int32_t get_offset_of_SShort1_21() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___SShort1_21)); }
	inline int16_t get_SShort1_21() const { return ___SShort1_21; }
	inline int16_t* get_address_of_SShort1_21() { return &___SShort1_21; }
	inline void set_SShort1_21(int16_t value)
	{
		___SShort1_21 = value;
	}

	inline static int32_t get_offset_of_SShort2_22() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___SShort2_22)); }
	inline int16_t get_SShort2_22() const { return ___SShort2_22; }
	inline int16_t* get_address_of_SShort2_22() { return &___SShort2_22; }
	inline void set_SShort2_22(int16_t value)
	{
		___SShort2_22 = value;
	}

	inline static int32_t get_offset_of_SShort3_23() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___SShort3_23)); }
	inline int16_t get_SShort3_23() const { return ___SShort3_23; }
	inline int16_t* get_address_of_SShort3_23() { return &___SShort3_23; }
	inline void set_SShort3_23(int16_t value)
	{
		___SShort3_23 = value;
	}

	inline static int32_t get_offset_of_UInt0_24() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___UInt0_24)); }
	inline uint32_t get_UInt0_24() const { return ___UInt0_24; }
	inline uint32_t* get_address_of_UInt0_24() { return &___UInt0_24; }
	inline void set_UInt0_24(uint32_t value)
	{
		___UInt0_24 = value;
	}

	inline static int32_t get_offset_of_UInt1_25() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___UInt1_25)); }
	inline uint32_t get_UInt1_25() const { return ___UInt1_25; }
	inline uint32_t* get_address_of_UInt1_25() { return &___UInt1_25; }
	inline void set_UInt1_25(uint32_t value)
	{
		___UInt1_25 = value;
	}

	inline static int32_t get_offset_of_SInt0_26() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___SInt0_26)); }
	inline int32_t get_SInt0_26() const { return ___SInt0_26; }
	inline int32_t* get_address_of_SInt0_26() { return &___SInt0_26; }
	inline void set_SInt0_26(int32_t value)
	{
		___SInt0_26 = value;
	}

	inline static int32_t get_offset_of_SInt1_27() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___SInt1_27)); }
	inline int32_t get_SInt1_27() const { return ___SInt1_27; }
	inline int32_t* get_address_of_SInt1_27() { return &___SInt1_27; }
	inline void set_SInt1_27(int32_t value)
	{
		___SInt1_27 = value;
	}

	inline static int32_t get_offset_of_ULong0_28() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___ULong0_28)); }
	inline uint64_t get_ULong0_28() const { return ___ULong0_28; }
	inline uint64_t* get_address_of_ULong0_28() { return &___ULong0_28; }
	inline void set_ULong0_28(uint64_t value)
	{
		___ULong0_28 = value;
	}

	inline static int32_t get_offset_of_SLong0_29() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___SLong0_29)); }
	inline int64_t get_SLong0_29() const { return ___SLong0_29; }
	inline int64_t* get_address_of_SLong0_29() { return &___SLong0_29; }
	inline void set_SLong0_29(int64_t value)
	{
		___SLong0_29 = value;
	}

	inline static int32_t get_offset_of_Float0_30() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___Float0_30)); }
	inline float get_Float0_30() const { return ___Float0_30; }
	inline float* get_address_of_Float0_30() { return &___Float0_30; }
	inline void set_Float0_30(float value)
	{
		___Float0_30 = value;
	}

	inline static int32_t get_offset_of_Float1_31() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___Float1_31)); }
	inline float get_Float1_31() const { return ___Float1_31; }
	inline float* get_address_of_Float1_31() { return &___Float1_31; }
	inline void set_Float1_31(float value)
	{
		___Float1_31 = value;
	}

	inline static int32_t get_offset_of_Double0_32() { return static_cast<int32_t>(offsetof(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD, ___Double0_32)); }
	inline double get_Double0_32() const { return ___Double0_32; }
	inline double* get_address_of_Double0_32() { return &___Double0_32; }
	inline void set_Double0_32(double value)
	{
		___Double0_32 = value;
	}
};


// Unity.Burst.BurstCompiler/StaticTypeReinitAttribute
struct StaticTypeReinitAttribute_t44EBC424CAE299F7DA16C5FAA87819AB80848CD2  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Type Unity.Burst.BurstCompiler/StaticTypeReinitAttribute::reinitType
	Type_t * ___reinitType_0;

public:
	inline static int32_t get_offset_of_reinitType_0() { return static_cast<int32_t>(offsetof(StaticTypeReinitAttribute_t44EBC424CAE299F7DA16C5FAA87819AB80848CD2, ___reinitType_0)); }
	inline Type_t * get_reinitType_0() const { return ___reinitType_0; }
	inline Type_t ** get_address_of_reinitType_0() { return &___reinitType_0; }
	inline void set_reinitType_0(Type_t * value)
	{
		___reinitType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reinitType_0), (void*)value);
	}
};


// Unity.Burst.BurstRuntime/PreserveAttribute
struct PreserveAttribute_t5582719532581A928FFB965E9E6F529B1162FF42  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Unity.Burst.SharedStatic/PreserveAttribute
struct PreserveAttribute_tA3F52D116432709CC1E83ABC792A0FEB8B08580C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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

// Unity.Burst.FloatMode
struct FloatMode_t38741ACC50724A284056372B5D90095D40ACB1E4 
{
public:
	// System.Int32 Unity.Burst.FloatMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FloatMode_t38741ACC50724A284056372B5D90095D40ACB1E4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Burst.FloatPrecision
struct FloatPrecision_tF6B76A9F4B20E5525B4B38902AA661AAB9E199F5 
{
public:
	// System.Int32 Unity.Burst.FloatPrecision::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FloatPrecision_tF6B76A9F4B20E5525B4B38902AA661AAB9E199F5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.Reflection.ParameterAttributes
struct ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeMethodHandle
struct RuntimeMethodHandle_t8974037C4FE5F6C3AE7D3731057CDB2891A21C9A 
{
public:
	// System.IntPtr System.RuntimeMethodHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeMethodHandle_t8974037C4FE5F6C3AE7D3731057CDB2891A21C9A, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// Unity.Burst.Intrinsics.v128
struct v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Burst.Intrinsics.v128::Byte0
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte1
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte2
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte3
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_4_OffsetPadding[4];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte4
			uint8_t ___Byte4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_5_OffsetPadding[5];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte5
			uint8_t ___Byte5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_6_OffsetPadding[6];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte6
			uint8_t ___Byte6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_7_OffsetPadding[7];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte7
			uint8_t ___Byte7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_8_OffsetPadding[8];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte8
			uint8_t ___Byte8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___Byte8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte9_9_OffsetPadding[9];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte9
			uint8_t ___Byte9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___Byte9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_10_OffsetPadding[10];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte10
			uint8_t ___Byte10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___Byte10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_11_OffsetPadding[11];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte11
			uint8_t ___Byte11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___Byte11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_12_OffsetPadding[12];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte12
			uint8_t ___Byte12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___Byte12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_13_OffsetPadding[13];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte13
			uint8_t ___Byte13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___Byte13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_14_OffsetPadding[14];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte14
			uint8_t ___Byte14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___Byte14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_15_OffsetPadding[15];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte15
			uint8_t ___Byte15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___Byte15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte Unity.Burst.Intrinsics.v128::SByte0
			int8_t ___SByte0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_17_OffsetPadding[1];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte1
			int8_t ___SByte1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_17_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_18_OffsetPadding[2];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte2
			int8_t ___SByte2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_18_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_19_OffsetPadding[3];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte3
			int8_t ___SByte3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_19_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_20_OffsetPadding[4];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte4
			int8_t ___SByte4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_20_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_21_OffsetPadding[5];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte5
			int8_t ___SByte5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_21_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_22_OffsetPadding[6];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte6
			int8_t ___SByte6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_22_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_23_OffsetPadding[7];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte7
			int8_t ___SByte7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_23_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte8_24_OffsetPadding[8];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte8
			int8_t ___SByte8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte8_24_OffsetPadding_forAlignmentOnly[8];
			int8_t ___SByte8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte9_25_OffsetPadding[9];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte9
			int8_t ___SByte9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte9_25_OffsetPadding_forAlignmentOnly[9];
			int8_t ___SByte9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte10_26_OffsetPadding[10];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte10
			int8_t ___SByte10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte10_26_OffsetPadding_forAlignmentOnly[10];
			int8_t ___SByte10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte11_27_OffsetPadding[11];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte11
			int8_t ___SByte11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte11_27_OffsetPadding_forAlignmentOnly[11];
			int8_t ___SByte11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte12_28_OffsetPadding[12];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte12
			int8_t ___SByte12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte12_28_OffsetPadding_forAlignmentOnly[12];
			int8_t ___SByte12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte13_29_OffsetPadding[13];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte13
			int8_t ___SByte13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte13_29_OffsetPadding_forAlignmentOnly[13];
			int8_t ___SByte13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte14_30_OffsetPadding[14];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte14
			int8_t ___SByte14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte14_30_OffsetPadding_forAlignmentOnly[14];
			int8_t ___SByte14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte15_31_OffsetPadding[15];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte15
			int8_t ___SByte15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte15_31_OffsetPadding_forAlignmentOnly[15];
			int8_t ___SByte15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort0
			uint16_t ___UShort0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_33_OffsetPadding[2];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort1
			uint16_t ___UShort1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_33_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_34_OffsetPadding[4];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort2
			uint16_t ___UShort2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_34_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_35_OffsetPadding[6];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort3
			uint16_t ___UShort3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_35_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort4_36_OffsetPadding[8];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort4
			uint16_t ___UShort4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort4_36_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___UShort4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort5_37_OffsetPadding[10];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort5
			uint16_t ___UShort5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort5_37_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___UShort5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort6_38_OffsetPadding[12];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort6
			uint16_t ___UShort6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort6_38_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___UShort6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort7_39_OffsetPadding[14];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort7
			uint16_t ___UShort7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort7_39_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___UShort7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort0
			int16_t ___SShort0_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_41_OffsetPadding[2];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort1
			int16_t ___SShort1_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_41_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_42_OffsetPadding[4];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort2
			int16_t ___SShort2_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_42_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_43_OffsetPadding[6];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort3
			int16_t ___SShort3_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_43_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort4_44_OffsetPadding[8];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort4
			int16_t ___SShort4_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort4_44_OffsetPadding_forAlignmentOnly[8];
			int16_t ___SShort4_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort5_45_OffsetPadding[10];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort5
			int16_t ___SShort5_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort5_45_OffsetPadding_forAlignmentOnly[10];
			int16_t ___SShort5_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort6_46_OffsetPadding[12];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort6
			int16_t ___SShort6_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort6_46_OffsetPadding_forAlignmentOnly[12];
			int16_t ___SShort6_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort7_47_OffsetPadding[14];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort7
			int16_t ___SShort7_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort7_47_OffsetPadding_forAlignmentOnly[14];
			int16_t ___SShort7_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt0
			uint32_t ___UInt0_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_49_OffsetPadding[4];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt1
			uint32_t ___UInt1_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_49_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt2_50_OffsetPadding[8];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt2
			uint32_t ___UInt2_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt2_50_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___UInt2_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt3_51_OffsetPadding[12];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt3
			uint32_t ___UInt3_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt3_51_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___UInt3_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt0
			int32_t ___SInt0_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_53_OffsetPadding[4];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt1
			int32_t ___SInt1_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_53_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt2_54_OffsetPadding[8];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt2
			int32_t ___SInt2_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt2_54_OffsetPadding_forAlignmentOnly[8];
			int32_t ___SInt2_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt3_55_OffsetPadding[12];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt3
			int32_t ___SInt3_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt3_55_OffsetPadding_forAlignmentOnly[12];
			int32_t ___SInt3_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Unity.Burst.Intrinsics.v128::ULong0
			uint64_t ___ULong0_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ULong1_57_OffsetPadding[8];
			// System.UInt64 Unity.Burst.Intrinsics.v128::ULong1
			uint64_t ___ULong1_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ULong1_57_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ULong1_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Unity.Burst.Intrinsics.v128::SLong0
			int64_t ___SLong0_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SLong1_59_OffsetPadding[8];
			// System.Int64 Unity.Burst.Intrinsics.v128::SLong1
			int64_t ___SLong1_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SLong1_59_OffsetPadding_forAlignmentOnly[8];
			int64_t ___SLong1_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Unity.Burst.Intrinsics.v128::Float0
			float ___Float0_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_61_OffsetPadding[4];
			// System.Single Unity.Burst.Intrinsics.v128::Float1
			float ___Float1_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_61_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float2_62_OffsetPadding[8];
			// System.Single Unity.Burst.Intrinsics.v128::Float2
			float ___Float2_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float2_62_OffsetPadding_forAlignmentOnly[8];
			float ___Float2_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float3_63_OffsetPadding[12];
			// System.Single Unity.Burst.Intrinsics.v128::Float3
			float ___Float3_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float3_63_OffsetPadding_forAlignmentOnly[12];
			float ___Float3_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Unity.Burst.Intrinsics.v128::Double0
			double ___Double0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Double1_65_OffsetPadding[8];
			// System.Double Unity.Burst.Intrinsics.v128::Double1
			double ___Double1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Double1_65_OffsetPadding_forAlignmentOnly[8];
			double ___Double1_65_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Burst.Intrinsics.v64 Unity.Burst.Intrinsics.v128::Lo64
			v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD  ___Lo64_66;
		};
		#pragma pack(pop, tp)
		struct
		{
			v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD  ___Lo64_66_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Hi64_67_OffsetPadding[8];
			// Unity.Burst.Intrinsics.v64 Unity.Burst.Intrinsics.v128::Hi64
			v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD  ___Hi64_67;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Hi64_67_OffsetPadding_forAlignmentOnly[8];
			v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD  ___Hi64_67_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_Byte0_0() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___Byte0_0)); }
	inline uint8_t get_Byte0_0() const { return ___Byte0_0; }
	inline uint8_t* get_address_of_Byte0_0() { return &___Byte0_0; }
	inline void set_Byte0_0(uint8_t value)
	{
		___Byte0_0 = value;
	}

	inline static int32_t get_offset_of_Byte1_1() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___Byte1_1)); }
	inline uint8_t get_Byte1_1() const { return ___Byte1_1; }
	inline uint8_t* get_address_of_Byte1_1() { return &___Byte1_1; }
	inline void set_Byte1_1(uint8_t value)
	{
		___Byte1_1 = value;
	}

	inline static int32_t get_offset_of_Byte2_2() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___Byte2_2)); }
	inline uint8_t get_Byte2_2() const { return ___Byte2_2; }
	inline uint8_t* get_address_of_Byte2_2() { return &___Byte2_2; }
	inline void set_Byte2_2(uint8_t value)
	{
		___Byte2_2 = value;
	}

	inline static int32_t get_offset_of_Byte3_3() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___Byte3_3)); }
	inline uint8_t get_Byte3_3() const { return ___Byte3_3; }
	inline uint8_t* get_address_of_Byte3_3() { return &___Byte3_3; }
	inline void set_Byte3_3(uint8_t value)
	{
		___Byte3_3 = value;
	}

	inline static int32_t get_offset_of_Byte4_4() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___Byte4_4)); }
	inline uint8_t get_Byte4_4() const { return ___Byte4_4; }
	inline uint8_t* get_address_of_Byte4_4() { return &___Byte4_4; }
	inline void set_Byte4_4(uint8_t value)
	{
		___Byte4_4 = value;
	}

	inline static int32_t get_offset_of_Byte5_5() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___Byte5_5)); }
	inline uint8_t get_Byte5_5() const { return ___Byte5_5; }
	inline uint8_t* get_address_of_Byte5_5() { return &___Byte5_5; }
	inline void set_Byte5_5(uint8_t value)
	{
		___Byte5_5 = value;
	}

	inline static int32_t get_offset_of_Byte6_6() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___Byte6_6)); }
	inline uint8_t get_Byte6_6() const { return ___Byte6_6; }
	inline uint8_t* get_address_of_Byte6_6() { return &___Byte6_6; }
	inline void set_Byte6_6(uint8_t value)
	{
		___Byte6_6 = value;
	}

	inline static int32_t get_offset_of_Byte7_7() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___Byte7_7)); }
	inline uint8_t get_Byte7_7() const { return ___Byte7_7; }
	inline uint8_t* get_address_of_Byte7_7() { return &___Byte7_7; }
	inline void set_Byte7_7(uint8_t value)
	{
		___Byte7_7 = value;
	}

	inline static int32_t get_offset_of_Byte8_8() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___Byte8_8)); }
	inline uint8_t get_Byte8_8() const { return ___Byte8_8; }
	inline uint8_t* get_address_of_Byte8_8() { return &___Byte8_8; }
	inline void set_Byte8_8(uint8_t value)
	{
		___Byte8_8 = value;
	}

	inline static int32_t get_offset_of_Byte9_9() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___Byte9_9)); }
	inline uint8_t get_Byte9_9() const { return ___Byte9_9; }
	inline uint8_t* get_address_of_Byte9_9() { return &___Byte9_9; }
	inline void set_Byte9_9(uint8_t value)
	{
		___Byte9_9 = value;
	}

	inline static int32_t get_offset_of_Byte10_10() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___Byte10_10)); }
	inline uint8_t get_Byte10_10() const { return ___Byte10_10; }
	inline uint8_t* get_address_of_Byte10_10() { return &___Byte10_10; }
	inline void set_Byte10_10(uint8_t value)
	{
		___Byte10_10 = value;
	}

	inline static int32_t get_offset_of_Byte11_11() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___Byte11_11)); }
	inline uint8_t get_Byte11_11() const { return ___Byte11_11; }
	inline uint8_t* get_address_of_Byte11_11() { return &___Byte11_11; }
	inline void set_Byte11_11(uint8_t value)
	{
		___Byte11_11 = value;
	}

	inline static int32_t get_offset_of_Byte12_12() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___Byte12_12)); }
	inline uint8_t get_Byte12_12() const { return ___Byte12_12; }
	inline uint8_t* get_address_of_Byte12_12() { return &___Byte12_12; }
	inline void set_Byte12_12(uint8_t value)
	{
		___Byte12_12 = value;
	}

	inline static int32_t get_offset_of_Byte13_13() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___Byte13_13)); }
	inline uint8_t get_Byte13_13() const { return ___Byte13_13; }
	inline uint8_t* get_address_of_Byte13_13() { return &___Byte13_13; }
	inline void set_Byte13_13(uint8_t value)
	{
		___Byte13_13 = value;
	}

	inline static int32_t get_offset_of_Byte14_14() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___Byte14_14)); }
	inline uint8_t get_Byte14_14() const { return ___Byte14_14; }
	inline uint8_t* get_address_of_Byte14_14() { return &___Byte14_14; }
	inline void set_Byte14_14(uint8_t value)
	{
		___Byte14_14 = value;
	}

	inline static int32_t get_offset_of_Byte15_15() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___Byte15_15)); }
	inline uint8_t get_Byte15_15() const { return ___Byte15_15; }
	inline uint8_t* get_address_of_Byte15_15() { return &___Byte15_15; }
	inline void set_Byte15_15(uint8_t value)
	{
		___Byte15_15 = value;
	}

	inline static int32_t get_offset_of_SByte0_16() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SByte0_16)); }
	inline int8_t get_SByte0_16() const { return ___SByte0_16; }
	inline int8_t* get_address_of_SByte0_16() { return &___SByte0_16; }
	inline void set_SByte0_16(int8_t value)
	{
		___SByte0_16 = value;
	}

	inline static int32_t get_offset_of_SByte1_17() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SByte1_17)); }
	inline int8_t get_SByte1_17() const { return ___SByte1_17; }
	inline int8_t* get_address_of_SByte1_17() { return &___SByte1_17; }
	inline void set_SByte1_17(int8_t value)
	{
		___SByte1_17 = value;
	}

	inline static int32_t get_offset_of_SByte2_18() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SByte2_18)); }
	inline int8_t get_SByte2_18() const { return ___SByte2_18; }
	inline int8_t* get_address_of_SByte2_18() { return &___SByte2_18; }
	inline void set_SByte2_18(int8_t value)
	{
		___SByte2_18 = value;
	}

	inline static int32_t get_offset_of_SByte3_19() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SByte3_19)); }
	inline int8_t get_SByte3_19() const { return ___SByte3_19; }
	inline int8_t* get_address_of_SByte3_19() { return &___SByte3_19; }
	inline void set_SByte3_19(int8_t value)
	{
		___SByte3_19 = value;
	}

	inline static int32_t get_offset_of_SByte4_20() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SByte4_20)); }
	inline int8_t get_SByte4_20() const { return ___SByte4_20; }
	inline int8_t* get_address_of_SByte4_20() { return &___SByte4_20; }
	inline void set_SByte4_20(int8_t value)
	{
		___SByte4_20 = value;
	}

	inline static int32_t get_offset_of_SByte5_21() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SByte5_21)); }
	inline int8_t get_SByte5_21() const { return ___SByte5_21; }
	inline int8_t* get_address_of_SByte5_21() { return &___SByte5_21; }
	inline void set_SByte5_21(int8_t value)
	{
		___SByte5_21 = value;
	}

	inline static int32_t get_offset_of_SByte6_22() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SByte6_22)); }
	inline int8_t get_SByte6_22() const { return ___SByte6_22; }
	inline int8_t* get_address_of_SByte6_22() { return &___SByte6_22; }
	inline void set_SByte6_22(int8_t value)
	{
		___SByte6_22 = value;
	}

	inline static int32_t get_offset_of_SByte7_23() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SByte7_23)); }
	inline int8_t get_SByte7_23() const { return ___SByte7_23; }
	inline int8_t* get_address_of_SByte7_23() { return &___SByte7_23; }
	inline void set_SByte7_23(int8_t value)
	{
		___SByte7_23 = value;
	}

	inline static int32_t get_offset_of_SByte8_24() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SByte8_24)); }
	inline int8_t get_SByte8_24() const { return ___SByte8_24; }
	inline int8_t* get_address_of_SByte8_24() { return &___SByte8_24; }
	inline void set_SByte8_24(int8_t value)
	{
		___SByte8_24 = value;
	}

	inline static int32_t get_offset_of_SByte9_25() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SByte9_25)); }
	inline int8_t get_SByte9_25() const { return ___SByte9_25; }
	inline int8_t* get_address_of_SByte9_25() { return &___SByte9_25; }
	inline void set_SByte9_25(int8_t value)
	{
		___SByte9_25 = value;
	}

	inline static int32_t get_offset_of_SByte10_26() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SByte10_26)); }
	inline int8_t get_SByte10_26() const { return ___SByte10_26; }
	inline int8_t* get_address_of_SByte10_26() { return &___SByte10_26; }
	inline void set_SByte10_26(int8_t value)
	{
		___SByte10_26 = value;
	}

	inline static int32_t get_offset_of_SByte11_27() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SByte11_27)); }
	inline int8_t get_SByte11_27() const { return ___SByte11_27; }
	inline int8_t* get_address_of_SByte11_27() { return &___SByte11_27; }
	inline void set_SByte11_27(int8_t value)
	{
		___SByte11_27 = value;
	}

	inline static int32_t get_offset_of_SByte12_28() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SByte12_28)); }
	inline int8_t get_SByte12_28() const { return ___SByte12_28; }
	inline int8_t* get_address_of_SByte12_28() { return &___SByte12_28; }
	inline void set_SByte12_28(int8_t value)
	{
		___SByte12_28 = value;
	}

	inline static int32_t get_offset_of_SByte13_29() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SByte13_29)); }
	inline int8_t get_SByte13_29() const { return ___SByte13_29; }
	inline int8_t* get_address_of_SByte13_29() { return &___SByte13_29; }
	inline void set_SByte13_29(int8_t value)
	{
		___SByte13_29 = value;
	}

	inline static int32_t get_offset_of_SByte14_30() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SByte14_30)); }
	inline int8_t get_SByte14_30() const { return ___SByte14_30; }
	inline int8_t* get_address_of_SByte14_30() { return &___SByte14_30; }
	inline void set_SByte14_30(int8_t value)
	{
		___SByte14_30 = value;
	}

	inline static int32_t get_offset_of_SByte15_31() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SByte15_31)); }
	inline int8_t get_SByte15_31() const { return ___SByte15_31; }
	inline int8_t* get_address_of_SByte15_31() { return &___SByte15_31; }
	inline void set_SByte15_31(int8_t value)
	{
		___SByte15_31 = value;
	}

	inline static int32_t get_offset_of_UShort0_32() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___UShort0_32)); }
	inline uint16_t get_UShort0_32() const { return ___UShort0_32; }
	inline uint16_t* get_address_of_UShort0_32() { return &___UShort0_32; }
	inline void set_UShort0_32(uint16_t value)
	{
		___UShort0_32 = value;
	}

	inline static int32_t get_offset_of_UShort1_33() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___UShort1_33)); }
	inline uint16_t get_UShort1_33() const { return ___UShort1_33; }
	inline uint16_t* get_address_of_UShort1_33() { return &___UShort1_33; }
	inline void set_UShort1_33(uint16_t value)
	{
		___UShort1_33 = value;
	}

	inline static int32_t get_offset_of_UShort2_34() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___UShort2_34)); }
	inline uint16_t get_UShort2_34() const { return ___UShort2_34; }
	inline uint16_t* get_address_of_UShort2_34() { return &___UShort2_34; }
	inline void set_UShort2_34(uint16_t value)
	{
		___UShort2_34 = value;
	}

	inline static int32_t get_offset_of_UShort3_35() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___UShort3_35)); }
	inline uint16_t get_UShort3_35() const { return ___UShort3_35; }
	inline uint16_t* get_address_of_UShort3_35() { return &___UShort3_35; }
	inline void set_UShort3_35(uint16_t value)
	{
		___UShort3_35 = value;
	}

	inline static int32_t get_offset_of_UShort4_36() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___UShort4_36)); }
	inline uint16_t get_UShort4_36() const { return ___UShort4_36; }
	inline uint16_t* get_address_of_UShort4_36() { return &___UShort4_36; }
	inline void set_UShort4_36(uint16_t value)
	{
		___UShort4_36 = value;
	}

	inline static int32_t get_offset_of_UShort5_37() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___UShort5_37)); }
	inline uint16_t get_UShort5_37() const { return ___UShort5_37; }
	inline uint16_t* get_address_of_UShort5_37() { return &___UShort5_37; }
	inline void set_UShort5_37(uint16_t value)
	{
		___UShort5_37 = value;
	}

	inline static int32_t get_offset_of_UShort6_38() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___UShort6_38)); }
	inline uint16_t get_UShort6_38() const { return ___UShort6_38; }
	inline uint16_t* get_address_of_UShort6_38() { return &___UShort6_38; }
	inline void set_UShort6_38(uint16_t value)
	{
		___UShort6_38 = value;
	}

	inline static int32_t get_offset_of_UShort7_39() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___UShort7_39)); }
	inline uint16_t get_UShort7_39() const { return ___UShort7_39; }
	inline uint16_t* get_address_of_UShort7_39() { return &___UShort7_39; }
	inline void set_UShort7_39(uint16_t value)
	{
		___UShort7_39 = value;
	}

	inline static int32_t get_offset_of_SShort0_40() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SShort0_40)); }
	inline int16_t get_SShort0_40() const { return ___SShort0_40; }
	inline int16_t* get_address_of_SShort0_40() { return &___SShort0_40; }
	inline void set_SShort0_40(int16_t value)
	{
		___SShort0_40 = value;
	}

	inline static int32_t get_offset_of_SShort1_41() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SShort1_41)); }
	inline int16_t get_SShort1_41() const { return ___SShort1_41; }
	inline int16_t* get_address_of_SShort1_41() { return &___SShort1_41; }
	inline void set_SShort1_41(int16_t value)
	{
		___SShort1_41 = value;
	}

	inline static int32_t get_offset_of_SShort2_42() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SShort2_42)); }
	inline int16_t get_SShort2_42() const { return ___SShort2_42; }
	inline int16_t* get_address_of_SShort2_42() { return &___SShort2_42; }
	inline void set_SShort2_42(int16_t value)
	{
		___SShort2_42 = value;
	}

	inline static int32_t get_offset_of_SShort3_43() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SShort3_43)); }
	inline int16_t get_SShort3_43() const { return ___SShort3_43; }
	inline int16_t* get_address_of_SShort3_43() { return &___SShort3_43; }
	inline void set_SShort3_43(int16_t value)
	{
		___SShort3_43 = value;
	}

	inline static int32_t get_offset_of_SShort4_44() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SShort4_44)); }
	inline int16_t get_SShort4_44() const { return ___SShort4_44; }
	inline int16_t* get_address_of_SShort4_44() { return &___SShort4_44; }
	inline void set_SShort4_44(int16_t value)
	{
		___SShort4_44 = value;
	}

	inline static int32_t get_offset_of_SShort5_45() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SShort5_45)); }
	inline int16_t get_SShort5_45() const { return ___SShort5_45; }
	inline int16_t* get_address_of_SShort5_45() { return &___SShort5_45; }
	inline void set_SShort5_45(int16_t value)
	{
		___SShort5_45 = value;
	}

	inline static int32_t get_offset_of_SShort6_46() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SShort6_46)); }
	inline int16_t get_SShort6_46() const { return ___SShort6_46; }
	inline int16_t* get_address_of_SShort6_46() { return &___SShort6_46; }
	inline void set_SShort6_46(int16_t value)
	{
		___SShort6_46 = value;
	}

	inline static int32_t get_offset_of_SShort7_47() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SShort7_47)); }
	inline int16_t get_SShort7_47() const { return ___SShort7_47; }
	inline int16_t* get_address_of_SShort7_47() { return &___SShort7_47; }
	inline void set_SShort7_47(int16_t value)
	{
		___SShort7_47 = value;
	}

	inline static int32_t get_offset_of_UInt0_48() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___UInt0_48)); }
	inline uint32_t get_UInt0_48() const { return ___UInt0_48; }
	inline uint32_t* get_address_of_UInt0_48() { return &___UInt0_48; }
	inline void set_UInt0_48(uint32_t value)
	{
		___UInt0_48 = value;
	}

	inline static int32_t get_offset_of_UInt1_49() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___UInt1_49)); }
	inline uint32_t get_UInt1_49() const { return ___UInt1_49; }
	inline uint32_t* get_address_of_UInt1_49() { return &___UInt1_49; }
	inline void set_UInt1_49(uint32_t value)
	{
		___UInt1_49 = value;
	}

	inline static int32_t get_offset_of_UInt2_50() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___UInt2_50)); }
	inline uint32_t get_UInt2_50() const { return ___UInt2_50; }
	inline uint32_t* get_address_of_UInt2_50() { return &___UInt2_50; }
	inline void set_UInt2_50(uint32_t value)
	{
		___UInt2_50 = value;
	}

	inline static int32_t get_offset_of_UInt3_51() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___UInt3_51)); }
	inline uint32_t get_UInt3_51() const { return ___UInt3_51; }
	inline uint32_t* get_address_of_UInt3_51() { return &___UInt3_51; }
	inline void set_UInt3_51(uint32_t value)
	{
		___UInt3_51 = value;
	}

	inline static int32_t get_offset_of_SInt0_52() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SInt0_52)); }
	inline int32_t get_SInt0_52() const { return ___SInt0_52; }
	inline int32_t* get_address_of_SInt0_52() { return &___SInt0_52; }
	inline void set_SInt0_52(int32_t value)
	{
		___SInt0_52 = value;
	}

	inline static int32_t get_offset_of_SInt1_53() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SInt1_53)); }
	inline int32_t get_SInt1_53() const { return ___SInt1_53; }
	inline int32_t* get_address_of_SInt1_53() { return &___SInt1_53; }
	inline void set_SInt1_53(int32_t value)
	{
		___SInt1_53 = value;
	}

	inline static int32_t get_offset_of_SInt2_54() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SInt2_54)); }
	inline int32_t get_SInt2_54() const { return ___SInt2_54; }
	inline int32_t* get_address_of_SInt2_54() { return &___SInt2_54; }
	inline void set_SInt2_54(int32_t value)
	{
		___SInt2_54 = value;
	}

	inline static int32_t get_offset_of_SInt3_55() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SInt3_55)); }
	inline int32_t get_SInt3_55() const { return ___SInt3_55; }
	inline int32_t* get_address_of_SInt3_55() { return &___SInt3_55; }
	inline void set_SInt3_55(int32_t value)
	{
		___SInt3_55 = value;
	}

	inline static int32_t get_offset_of_ULong0_56() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___ULong0_56)); }
	inline uint64_t get_ULong0_56() const { return ___ULong0_56; }
	inline uint64_t* get_address_of_ULong0_56() { return &___ULong0_56; }
	inline void set_ULong0_56(uint64_t value)
	{
		___ULong0_56 = value;
	}

	inline static int32_t get_offset_of_ULong1_57() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___ULong1_57)); }
	inline uint64_t get_ULong1_57() const { return ___ULong1_57; }
	inline uint64_t* get_address_of_ULong1_57() { return &___ULong1_57; }
	inline void set_ULong1_57(uint64_t value)
	{
		___ULong1_57 = value;
	}

	inline static int32_t get_offset_of_SLong0_58() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SLong0_58)); }
	inline int64_t get_SLong0_58() const { return ___SLong0_58; }
	inline int64_t* get_address_of_SLong0_58() { return &___SLong0_58; }
	inline void set_SLong0_58(int64_t value)
	{
		___SLong0_58 = value;
	}

	inline static int32_t get_offset_of_SLong1_59() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___SLong1_59)); }
	inline int64_t get_SLong1_59() const { return ___SLong1_59; }
	inline int64_t* get_address_of_SLong1_59() { return &___SLong1_59; }
	inline void set_SLong1_59(int64_t value)
	{
		___SLong1_59 = value;
	}

	inline static int32_t get_offset_of_Float0_60() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___Float0_60)); }
	inline float get_Float0_60() const { return ___Float0_60; }
	inline float* get_address_of_Float0_60() { return &___Float0_60; }
	inline void set_Float0_60(float value)
	{
		___Float0_60 = value;
	}

	inline static int32_t get_offset_of_Float1_61() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___Float1_61)); }
	inline float get_Float1_61() const { return ___Float1_61; }
	inline float* get_address_of_Float1_61() { return &___Float1_61; }
	inline void set_Float1_61(float value)
	{
		___Float1_61 = value;
	}

	inline static int32_t get_offset_of_Float2_62() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___Float2_62)); }
	inline float get_Float2_62() const { return ___Float2_62; }
	inline float* get_address_of_Float2_62() { return &___Float2_62; }
	inline void set_Float2_62(float value)
	{
		___Float2_62 = value;
	}

	inline static int32_t get_offset_of_Float3_63() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___Float3_63)); }
	inline float get_Float3_63() const { return ___Float3_63; }
	inline float* get_address_of_Float3_63() { return &___Float3_63; }
	inline void set_Float3_63(float value)
	{
		___Float3_63 = value;
	}

	inline static int32_t get_offset_of_Double0_64() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___Double0_64)); }
	inline double get_Double0_64() const { return ___Double0_64; }
	inline double* get_address_of_Double0_64() { return &___Double0_64; }
	inline void set_Double0_64(double value)
	{
		___Double0_64 = value;
	}

	inline static int32_t get_offset_of_Double1_65() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___Double1_65)); }
	inline double get_Double1_65() const { return ___Double1_65; }
	inline double* get_address_of_Double1_65() { return &___Double1_65; }
	inline void set_Double1_65(double value)
	{
		___Double1_65 = value;
	}

	inline static int32_t get_offset_of_Lo64_66() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___Lo64_66)); }
	inline v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD  get_Lo64_66() const { return ___Lo64_66; }
	inline v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD * get_address_of_Lo64_66() { return &___Lo64_66; }
	inline void set_Lo64_66(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD  value)
	{
		___Lo64_66 = value;
	}

	inline static int32_t get_offset_of_Hi64_67() { return static_cast<int32_t>(offsetof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5, ___Hi64_67)); }
	inline v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD  get_Hi64_67() const { return ___Hi64_67; }
	inline v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD * get_address_of_Hi64_67() { return &___Hi64_67; }
	inline void set_Hi64_67(v64_tC46010BF2894EC94A3B8D91078ADFB041F73A7DD  value)
	{
		___Hi64_67 = value;
	}
};


// Unity.Burst.LowLevel.BurstCompilerService/BurstLogType
struct BurstLogType_t733DB4EBA1397A6A02872942292EB97C18C2EA34 
{
public:
	// System.Int32 Unity.Burst.LowLevel.BurstCompilerService/BurstLogType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BurstLogType_t733DB4EBA1397A6A02872942292EB97C18C2EA34, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.Burst.BurstCompileAttribute
struct BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// Unity.Burst.FloatMode Unity.Burst.BurstCompileAttribute::<FloatMode>k__BackingField
	int32_t ___U3CFloatModeU3Ek__BackingField_0;
	// Unity.Burst.FloatPrecision Unity.Burst.BurstCompileAttribute::<FloatPrecision>k__BackingField
	int32_t ___U3CFloatPrecisionU3Ek__BackingField_1;
	// System.Boolean Unity.Burst.BurstCompileAttribute::<CompileSynchronously>k__BackingField
	bool ___U3CCompileSynchronouslyU3Ek__BackingField_2;
	// System.String[] Unity.Burst.BurstCompileAttribute::<Options>k__BackingField
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3COptionsU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CFloatModeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1, ___U3CFloatModeU3Ek__BackingField_0)); }
	inline int32_t get_U3CFloatModeU3Ek__BackingField_0() const { return ___U3CFloatModeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CFloatModeU3Ek__BackingField_0() { return &___U3CFloatModeU3Ek__BackingField_0; }
	inline void set_U3CFloatModeU3Ek__BackingField_0(int32_t value)
	{
		___U3CFloatModeU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CFloatPrecisionU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1, ___U3CFloatPrecisionU3Ek__BackingField_1)); }
	inline int32_t get_U3CFloatPrecisionU3Ek__BackingField_1() const { return ___U3CFloatPrecisionU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CFloatPrecisionU3Ek__BackingField_1() { return &___U3CFloatPrecisionU3Ek__BackingField_1; }
	inline void set_U3CFloatPrecisionU3Ek__BackingField_1(int32_t value)
	{
		___U3CFloatPrecisionU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CCompileSynchronouslyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1, ___U3CCompileSynchronouslyU3Ek__BackingField_2)); }
	inline bool get_U3CCompileSynchronouslyU3Ek__BackingField_2() const { return ___U3CCompileSynchronouslyU3Ek__BackingField_2; }
	inline bool* get_address_of_U3CCompileSynchronouslyU3Ek__BackingField_2() { return &___U3CCompileSynchronouslyU3Ek__BackingField_2; }
	inline void set_U3CCompileSynchronouslyU3Ek__BackingField_2(bool value)
	{
		___U3CCompileSynchronouslyU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3COptionsU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1, ___U3COptionsU3Ek__BackingField_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3COptionsU3Ek__BackingField_3() const { return ___U3COptionsU3Ek__BackingField_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3COptionsU3Ek__BackingField_3() { return &___U3COptionsU3Ek__BackingField_3; }
	inline void set_U3COptionsU3Ek__BackingField_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3COptionsU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COptionsU3Ek__BackingField_3), (void*)value);
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

// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.ParameterInfo::marshalAs
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassImpl_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValueImpl_1), (void*)value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberImpl_2), (void*)value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameImpl_3), (void*)value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___marshalAs_6)); }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___marshalAs_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_pinvoke
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	char* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_com
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	Il2CppChar* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// UnityEngine.UnityException
struct UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101  : public Exception_t
{
public:

public:
};


// Unity.Burst.Intrinsics.v256
struct v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Burst.Intrinsics.v256::Byte0
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte1
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte2
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte3
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_4_OffsetPadding[4];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte4
			uint8_t ___Byte4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_5_OffsetPadding[5];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte5
			uint8_t ___Byte5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_6_OffsetPadding[6];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte6
			uint8_t ___Byte6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_7_OffsetPadding[7];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte7
			uint8_t ___Byte7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_8_OffsetPadding[8];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte8
			uint8_t ___Byte8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___Byte8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte9_9_OffsetPadding[9];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte9
			uint8_t ___Byte9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___Byte9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_10_OffsetPadding[10];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte10
			uint8_t ___Byte10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___Byte10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_11_OffsetPadding[11];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte11
			uint8_t ___Byte11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___Byte11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_12_OffsetPadding[12];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte12
			uint8_t ___Byte12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___Byte12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_13_OffsetPadding[13];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte13
			uint8_t ___Byte13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___Byte13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_14_OffsetPadding[14];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte14
			uint8_t ___Byte14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___Byte14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_15_OffsetPadding[15];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte15
			uint8_t ___Byte15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___Byte15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte16_16_OffsetPadding[16];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte16
			uint8_t ___Byte16_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte16_16_OffsetPadding_forAlignmentOnly[16];
			uint8_t ___Byte16_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte17_17_OffsetPadding[17];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte17
			uint8_t ___Byte17_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte17_17_OffsetPadding_forAlignmentOnly[17];
			uint8_t ___Byte17_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte18_18_OffsetPadding[18];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte18
			uint8_t ___Byte18_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte18_18_OffsetPadding_forAlignmentOnly[18];
			uint8_t ___Byte18_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte19_19_OffsetPadding[19];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte19
			uint8_t ___Byte19_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte19_19_OffsetPadding_forAlignmentOnly[19];
			uint8_t ___Byte19_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte20_20_OffsetPadding[20];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte20
			uint8_t ___Byte20_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte20_20_OffsetPadding_forAlignmentOnly[20];
			uint8_t ___Byte20_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte21_21_OffsetPadding[21];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte21
			uint8_t ___Byte21_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte21_21_OffsetPadding_forAlignmentOnly[21];
			uint8_t ___Byte21_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte22_22_OffsetPadding[22];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte22
			uint8_t ___Byte22_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte22_22_OffsetPadding_forAlignmentOnly[22];
			uint8_t ___Byte22_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte23_23_OffsetPadding[23];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte23
			uint8_t ___Byte23_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte23_23_OffsetPadding_forAlignmentOnly[23];
			uint8_t ___Byte23_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte24_24_OffsetPadding[24];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte24
			uint8_t ___Byte24_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte24_24_OffsetPadding_forAlignmentOnly[24];
			uint8_t ___Byte24_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte25_25_OffsetPadding[25];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte25
			uint8_t ___Byte25_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte25_25_OffsetPadding_forAlignmentOnly[25];
			uint8_t ___Byte25_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte26_26_OffsetPadding[26];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte26
			uint8_t ___Byte26_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte26_26_OffsetPadding_forAlignmentOnly[26];
			uint8_t ___Byte26_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte27_27_OffsetPadding[27];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte27
			uint8_t ___Byte27_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte27_27_OffsetPadding_forAlignmentOnly[27];
			uint8_t ___Byte27_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte28_28_OffsetPadding[28];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte28
			uint8_t ___Byte28_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte28_28_OffsetPadding_forAlignmentOnly[28];
			uint8_t ___Byte28_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte29_29_OffsetPadding[29];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte29
			uint8_t ___Byte29_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte29_29_OffsetPadding_forAlignmentOnly[29];
			uint8_t ___Byte29_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte30_30_OffsetPadding[30];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte30
			uint8_t ___Byte30_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte30_30_OffsetPadding_forAlignmentOnly[30];
			uint8_t ___Byte30_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte31_31_OffsetPadding[31];
			// System.Byte Unity.Burst.Intrinsics.v256::Byte31
			uint8_t ___Byte31_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte31_31_OffsetPadding_forAlignmentOnly[31];
			uint8_t ___Byte31_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte Unity.Burst.Intrinsics.v256::SByte0
			int8_t ___SByte0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_33_OffsetPadding[1];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte1
			int8_t ___SByte1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_33_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_34_OffsetPadding[2];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte2
			int8_t ___SByte2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_34_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_35_OffsetPadding[3];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte3
			int8_t ___SByte3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_35_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_36_OffsetPadding[4];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte4
			int8_t ___SByte4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_36_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_37_OffsetPadding[5];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte5
			int8_t ___SByte5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_37_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_38_OffsetPadding[6];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte6
			int8_t ___SByte6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_38_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_39_OffsetPadding[7];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte7
			int8_t ___SByte7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_39_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte8_40_OffsetPadding[8];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte8
			int8_t ___SByte8_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte8_40_OffsetPadding_forAlignmentOnly[8];
			int8_t ___SByte8_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte9_41_OffsetPadding[9];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte9
			int8_t ___SByte9_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte9_41_OffsetPadding_forAlignmentOnly[9];
			int8_t ___SByte9_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte10_42_OffsetPadding[10];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte10
			int8_t ___SByte10_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte10_42_OffsetPadding_forAlignmentOnly[10];
			int8_t ___SByte10_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte11_43_OffsetPadding[11];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte11
			int8_t ___SByte11_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte11_43_OffsetPadding_forAlignmentOnly[11];
			int8_t ___SByte11_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte12_44_OffsetPadding[12];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte12
			int8_t ___SByte12_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte12_44_OffsetPadding_forAlignmentOnly[12];
			int8_t ___SByte12_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte13_45_OffsetPadding[13];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte13
			int8_t ___SByte13_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte13_45_OffsetPadding_forAlignmentOnly[13];
			int8_t ___SByte13_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte14_46_OffsetPadding[14];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte14
			int8_t ___SByte14_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte14_46_OffsetPadding_forAlignmentOnly[14];
			int8_t ___SByte14_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte15_47_OffsetPadding[15];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte15
			int8_t ___SByte15_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte15_47_OffsetPadding_forAlignmentOnly[15];
			int8_t ___SByte15_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte16_48_OffsetPadding[16];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte16
			int8_t ___SByte16_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte16_48_OffsetPadding_forAlignmentOnly[16];
			int8_t ___SByte16_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte17_49_OffsetPadding[17];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte17
			int8_t ___SByte17_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte17_49_OffsetPadding_forAlignmentOnly[17];
			int8_t ___SByte17_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte18_50_OffsetPadding[18];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte18
			int8_t ___SByte18_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte18_50_OffsetPadding_forAlignmentOnly[18];
			int8_t ___SByte18_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte19_51_OffsetPadding[19];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte19
			int8_t ___SByte19_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte19_51_OffsetPadding_forAlignmentOnly[19];
			int8_t ___SByte19_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte20_52_OffsetPadding[20];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte20
			int8_t ___SByte20_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte20_52_OffsetPadding_forAlignmentOnly[20];
			int8_t ___SByte20_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte21_53_OffsetPadding[21];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte21
			int8_t ___SByte21_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte21_53_OffsetPadding_forAlignmentOnly[21];
			int8_t ___SByte21_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte22_54_OffsetPadding[22];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte22
			int8_t ___SByte22_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte22_54_OffsetPadding_forAlignmentOnly[22];
			int8_t ___SByte22_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte23_55_OffsetPadding[23];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte23
			int8_t ___SByte23_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte23_55_OffsetPadding_forAlignmentOnly[23];
			int8_t ___SByte23_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte24_56_OffsetPadding[24];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte24
			int8_t ___SByte24_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte24_56_OffsetPadding_forAlignmentOnly[24];
			int8_t ___SByte24_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte25_57_OffsetPadding[25];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte25
			int8_t ___SByte25_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte25_57_OffsetPadding_forAlignmentOnly[25];
			int8_t ___SByte25_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte26_58_OffsetPadding[26];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte26
			int8_t ___SByte26_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte26_58_OffsetPadding_forAlignmentOnly[26];
			int8_t ___SByte26_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte27_59_OffsetPadding[27];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte27
			int8_t ___SByte27_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte27_59_OffsetPadding_forAlignmentOnly[27];
			int8_t ___SByte27_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte28_60_OffsetPadding[28];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte28
			int8_t ___SByte28_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte28_60_OffsetPadding_forAlignmentOnly[28];
			int8_t ___SByte28_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte29_61_OffsetPadding[29];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte29
			int8_t ___SByte29_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte29_61_OffsetPadding_forAlignmentOnly[29];
			int8_t ___SByte29_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte30_62_OffsetPadding[30];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte30
			int8_t ___SByte30_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte30_62_OffsetPadding_forAlignmentOnly[30];
			int8_t ___SByte30_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte31_63_OffsetPadding[31];
			// System.SByte Unity.Burst.Intrinsics.v256::SByte31
			int8_t ___SByte31_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte31_63_OffsetPadding_forAlignmentOnly[31];
			int8_t ___SByte31_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort0
			uint16_t ___UShort0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_65_OffsetPadding[2];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort1
			uint16_t ___UShort1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_65_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_65_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_66_OffsetPadding[4];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort2
			uint16_t ___UShort2_66;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_66_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_66_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_67_OffsetPadding[6];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort3
			uint16_t ___UShort3_67;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_67_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_67_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort4_68_OffsetPadding[8];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort4
			uint16_t ___UShort4_68;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort4_68_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___UShort4_68_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort5_69_OffsetPadding[10];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort5
			uint16_t ___UShort5_69;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort5_69_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___UShort5_69_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort6_70_OffsetPadding[12];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort6
			uint16_t ___UShort6_70;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort6_70_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___UShort6_70_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort7_71_OffsetPadding[14];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort7
			uint16_t ___UShort7_71;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort7_71_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___UShort7_71_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort8_72_OffsetPadding[16];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort8
			uint16_t ___UShort8_72;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort8_72_OffsetPadding_forAlignmentOnly[16];
			uint16_t ___UShort8_72_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort9_73_OffsetPadding[18];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort9
			uint16_t ___UShort9_73;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort9_73_OffsetPadding_forAlignmentOnly[18];
			uint16_t ___UShort9_73_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort10_74_OffsetPadding[20];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort10
			uint16_t ___UShort10_74;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort10_74_OffsetPadding_forAlignmentOnly[20];
			uint16_t ___UShort10_74_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort11_75_OffsetPadding[22];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort11
			uint16_t ___UShort11_75;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort11_75_OffsetPadding_forAlignmentOnly[22];
			uint16_t ___UShort11_75_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort12_76_OffsetPadding[24];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort12
			uint16_t ___UShort12_76;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort12_76_OffsetPadding_forAlignmentOnly[24];
			uint16_t ___UShort12_76_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort13_77_OffsetPadding[26];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort13
			uint16_t ___UShort13_77;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort13_77_OffsetPadding_forAlignmentOnly[26];
			uint16_t ___UShort13_77_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort14_78_OffsetPadding[28];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort14
			uint16_t ___UShort14_78;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort14_78_OffsetPadding_forAlignmentOnly[28];
			uint16_t ___UShort14_78_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort15_79_OffsetPadding[30];
			// System.UInt16 Unity.Burst.Intrinsics.v256::UShort15
			uint16_t ___UShort15_79;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort15_79_OffsetPadding_forAlignmentOnly[30];
			uint16_t ___UShort15_79_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort0
			int16_t ___SShort0_80;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_80_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_81_OffsetPadding[2];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort1
			int16_t ___SShort1_81;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_81_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_81_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_82_OffsetPadding[4];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort2
			int16_t ___SShort2_82;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_82_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_82_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_83_OffsetPadding[6];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort3
			int16_t ___SShort3_83;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_83_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_83_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort4_84_OffsetPadding[8];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort4
			int16_t ___SShort4_84;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort4_84_OffsetPadding_forAlignmentOnly[8];
			int16_t ___SShort4_84_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort5_85_OffsetPadding[10];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort5
			int16_t ___SShort5_85;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort5_85_OffsetPadding_forAlignmentOnly[10];
			int16_t ___SShort5_85_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort6_86_OffsetPadding[12];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort6
			int16_t ___SShort6_86;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort6_86_OffsetPadding_forAlignmentOnly[12];
			int16_t ___SShort6_86_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort7_87_OffsetPadding[14];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort7
			int16_t ___SShort7_87;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort7_87_OffsetPadding_forAlignmentOnly[14];
			int16_t ___SShort7_87_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort8_88_OffsetPadding[16];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort8
			int16_t ___SShort8_88;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort8_88_OffsetPadding_forAlignmentOnly[16];
			int16_t ___SShort8_88_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort9_89_OffsetPadding[18];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort9
			int16_t ___SShort9_89;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort9_89_OffsetPadding_forAlignmentOnly[18];
			int16_t ___SShort9_89_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort10_90_OffsetPadding[20];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort10
			int16_t ___SShort10_90;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort10_90_OffsetPadding_forAlignmentOnly[20];
			int16_t ___SShort10_90_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort11_91_OffsetPadding[22];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort11
			int16_t ___SShort11_91;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort11_91_OffsetPadding_forAlignmentOnly[22];
			int16_t ___SShort11_91_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort12_92_OffsetPadding[24];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort12
			int16_t ___SShort12_92;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort12_92_OffsetPadding_forAlignmentOnly[24];
			int16_t ___SShort12_92_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort13_93_OffsetPadding[26];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort13
			int16_t ___SShort13_93;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort13_93_OffsetPadding_forAlignmentOnly[26];
			int16_t ___SShort13_93_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort14_94_OffsetPadding[28];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort14
			int16_t ___SShort14_94;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort14_94_OffsetPadding_forAlignmentOnly[28];
			int16_t ___SShort14_94_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort15_95_OffsetPadding[30];
			// System.Int16 Unity.Burst.Intrinsics.v256::SShort15
			int16_t ___SShort15_95;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort15_95_OffsetPadding_forAlignmentOnly[30];
			int16_t ___SShort15_95_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Unity.Burst.Intrinsics.v256::UInt0
			uint32_t ___UInt0_96;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_96_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_97_OffsetPadding[4];
			// System.UInt32 Unity.Burst.Intrinsics.v256::UInt1
			uint32_t ___UInt1_97;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_97_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_97_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt2_98_OffsetPadding[8];
			// System.UInt32 Unity.Burst.Intrinsics.v256::UInt2
			uint32_t ___UInt2_98;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt2_98_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___UInt2_98_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt3_99_OffsetPadding[12];
			// System.UInt32 Unity.Burst.Intrinsics.v256::UInt3
			uint32_t ___UInt3_99;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt3_99_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___UInt3_99_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt4_100_OffsetPadding[16];
			// System.UInt32 Unity.Burst.Intrinsics.v256::UInt4
			uint32_t ___UInt4_100;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt4_100_OffsetPadding_forAlignmentOnly[16];
			uint32_t ___UInt4_100_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt5_101_OffsetPadding[20];
			// System.UInt32 Unity.Burst.Intrinsics.v256::UInt5
			uint32_t ___UInt5_101;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt5_101_OffsetPadding_forAlignmentOnly[20];
			uint32_t ___UInt5_101_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt6_102_OffsetPadding[24];
			// System.UInt32 Unity.Burst.Intrinsics.v256::UInt6
			uint32_t ___UInt6_102;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt6_102_OffsetPadding_forAlignmentOnly[24];
			uint32_t ___UInt6_102_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt7_103_OffsetPadding[28];
			// System.UInt32 Unity.Burst.Intrinsics.v256::UInt7
			uint32_t ___UInt7_103;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt7_103_OffsetPadding_forAlignmentOnly[28];
			uint32_t ___UInt7_103_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Unity.Burst.Intrinsics.v256::SInt0
			int32_t ___SInt0_104;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_104_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_105_OffsetPadding[4];
			// System.Int32 Unity.Burst.Intrinsics.v256::SInt1
			int32_t ___SInt1_105;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_105_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_105_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt2_106_OffsetPadding[8];
			// System.Int32 Unity.Burst.Intrinsics.v256::SInt2
			int32_t ___SInt2_106;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt2_106_OffsetPadding_forAlignmentOnly[8];
			int32_t ___SInt2_106_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt3_107_OffsetPadding[12];
			// System.Int32 Unity.Burst.Intrinsics.v256::SInt3
			int32_t ___SInt3_107;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt3_107_OffsetPadding_forAlignmentOnly[12];
			int32_t ___SInt3_107_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt4_108_OffsetPadding[16];
			// System.Int32 Unity.Burst.Intrinsics.v256::SInt4
			int32_t ___SInt4_108;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt4_108_OffsetPadding_forAlignmentOnly[16];
			int32_t ___SInt4_108_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt5_109_OffsetPadding[20];
			// System.Int32 Unity.Burst.Intrinsics.v256::SInt5
			int32_t ___SInt5_109;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt5_109_OffsetPadding_forAlignmentOnly[20];
			int32_t ___SInt5_109_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt6_110_OffsetPadding[24];
			// System.Int32 Unity.Burst.Intrinsics.v256::SInt6
			int32_t ___SInt6_110;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt6_110_OffsetPadding_forAlignmentOnly[24];
			int32_t ___SInt6_110_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt7_111_OffsetPadding[28];
			// System.Int32 Unity.Burst.Intrinsics.v256::SInt7
			int32_t ___SInt7_111;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt7_111_OffsetPadding_forAlignmentOnly[28];
			int32_t ___SInt7_111_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Unity.Burst.Intrinsics.v256::ULong0
			uint64_t ___ULong0_112;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_112_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ULong1_113_OffsetPadding[8];
			// System.UInt64 Unity.Burst.Intrinsics.v256::ULong1
			uint64_t ___ULong1_113;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ULong1_113_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ULong1_113_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ULong2_114_OffsetPadding[16];
			// System.UInt64 Unity.Burst.Intrinsics.v256::ULong2
			uint64_t ___ULong2_114;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ULong2_114_OffsetPadding_forAlignmentOnly[16];
			uint64_t ___ULong2_114_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ULong3_115_OffsetPadding[24];
			// System.UInt64 Unity.Burst.Intrinsics.v256::ULong3
			uint64_t ___ULong3_115;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ULong3_115_OffsetPadding_forAlignmentOnly[24];
			uint64_t ___ULong3_115_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Unity.Burst.Intrinsics.v256::SLong0
			int64_t ___SLong0_116;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_116_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SLong1_117_OffsetPadding[8];
			// System.Int64 Unity.Burst.Intrinsics.v256::SLong1
			int64_t ___SLong1_117;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SLong1_117_OffsetPadding_forAlignmentOnly[8];
			int64_t ___SLong1_117_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SLong2_118_OffsetPadding[16];
			// System.Int64 Unity.Burst.Intrinsics.v256::SLong2
			int64_t ___SLong2_118;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SLong2_118_OffsetPadding_forAlignmentOnly[16];
			int64_t ___SLong2_118_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SLong3_119_OffsetPadding[24];
			// System.Int64 Unity.Burst.Intrinsics.v256::SLong3
			int64_t ___SLong3_119;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SLong3_119_OffsetPadding_forAlignmentOnly[24];
			int64_t ___SLong3_119_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Unity.Burst.Intrinsics.v256::Float0
			float ___Float0_120;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_120_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_121_OffsetPadding[4];
			// System.Single Unity.Burst.Intrinsics.v256::Float1
			float ___Float1_121;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_121_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_121_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float2_122_OffsetPadding[8];
			// System.Single Unity.Burst.Intrinsics.v256::Float2
			float ___Float2_122;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float2_122_OffsetPadding_forAlignmentOnly[8];
			float ___Float2_122_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float3_123_OffsetPadding[12];
			// System.Single Unity.Burst.Intrinsics.v256::Float3
			float ___Float3_123;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float3_123_OffsetPadding_forAlignmentOnly[12];
			float ___Float3_123_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float4_124_OffsetPadding[16];
			// System.Single Unity.Burst.Intrinsics.v256::Float4
			float ___Float4_124;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float4_124_OffsetPadding_forAlignmentOnly[16];
			float ___Float4_124_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float5_125_OffsetPadding[20];
			// System.Single Unity.Burst.Intrinsics.v256::Float5
			float ___Float5_125;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float5_125_OffsetPadding_forAlignmentOnly[20];
			float ___Float5_125_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float6_126_OffsetPadding[24];
			// System.Single Unity.Burst.Intrinsics.v256::Float6
			float ___Float6_126;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float6_126_OffsetPadding_forAlignmentOnly[24];
			float ___Float6_126_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float7_127_OffsetPadding[28];
			// System.Single Unity.Burst.Intrinsics.v256::Float7
			float ___Float7_127;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float7_127_OffsetPadding_forAlignmentOnly[28];
			float ___Float7_127_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Unity.Burst.Intrinsics.v256::Double0
			double ___Double0_128;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_128_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Double1_129_OffsetPadding[8];
			// System.Double Unity.Burst.Intrinsics.v256::Double1
			double ___Double1_129;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Double1_129_OffsetPadding_forAlignmentOnly[8];
			double ___Double1_129_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Double2_130_OffsetPadding[16];
			// System.Double Unity.Burst.Intrinsics.v256::Double2
			double ___Double2_130;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Double2_130_OffsetPadding_forAlignmentOnly[16];
			double ___Double2_130_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Double3_131_OffsetPadding[24];
			// System.Double Unity.Burst.Intrinsics.v256::Double3
			double ___Double3_131;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Double3_131_OffsetPadding_forAlignmentOnly[24];
			double ___Double3_131_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.v256::Lo128
			v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  ___Lo128_132;
		};
		#pragma pack(pop, tp)
		struct
		{
			v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  ___Lo128_132_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Hi128_133_OffsetPadding[16];
			// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.v256::Hi128
			v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  ___Hi128_133;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Hi128_133_OffsetPadding_forAlignmentOnly[16];
			v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  ___Hi128_133_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_Byte0_0() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte0_0)); }
	inline uint8_t get_Byte0_0() const { return ___Byte0_0; }
	inline uint8_t* get_address_of_Byte0_0() { return &___Byte0_0; }
	inline void set_Byte0_0(uint8_t value)
	{
		___Byte0_0 = value;
	}

	inline static int32_t get_offset_of_Byte1_1() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte1_1)); }
	inline uint8_t get_Byte1_1() const { return ___Byte1_1; }
	inline uint8_t* get_address_of_Byte1_1() { return &___Byte1_1; }
	inline void set_Byte1_1(uint8_t value)
	{
		___Byte1_1 = value;
	}

	inline static int32_t get_offset_of_Byte2_2() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte2_2)); }
	inline uint8_t get_Byte2_2() const { return ___Byte2_2; }
	inline uint8_t* get_address_of_Byte2_2() { return &___Byte2_2; }
	inline void set_Byte2_2(uint8_t value)
	{
		___Byte2_2 = value;
	}

	inline static int32_t get_offset_of_Byte3_3() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte3_3)); }
	inline uint8_t get_Byte3_3() const { return ___Byte3_3; }
	inline uint8_t* get_address_of_Byte3_3() { return &___Byte3_3; }
	inline void set_Byte3_3(uint8_t value)
	{
		___Byte3_3 = value;
	}

	inline static int32_t get_offset_of_Byte4_4() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte4_4)); }
	inline uint8_t get_Byte4_4() const { return ___Byte4_4; }
	inline uint8_t* get_address_of_Byte4_4() { return &___Byte4_4; }
	inline void set_Byte4_4(uint8_t value)
	{
		___Byte4_4 = value;
	}

	inline static int32_t get_offset_of_Byte5_5() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte5_5)); }
	inline uint8_t get_Byte5_5() const { return ___Byte5_5; }
	inline uint8_t* get_address_of_Byte5_5() { return &___Byte5_5; }
	inline void set_Byte5_5(uint8_t value)
	{
		___Byte5_5 = value;
	}

	inline static int32_t get_offset_of_Byte6_6() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte6_6)); }
	inline uint8_t get_Byte6_6() const { return ___Byte6_6; }
	inline uint8_t* get_address_of_Byte6_6() { return &___Byte6_6; }
	inline void set_Byte6_6(uint8_t value)
	{
		___Byte6_6 = value;
	}

	inline static int32_t get_offset_of_Byte7_7() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte7_7)); }
	inline uint8_t get_Byte7_7() const { return ___Byte7_7; }
	inline uint8_t* get_address_of_Byte7_7() { return &___Byte7_7; }
	inline void set_Byte7_7(uint8_t value)
	{
		___Byte7_7 = value;
	}

	inline static int32_t get_offset_of_Byte8_8() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte8_8)); }
	inline uint8_t get_Byte8_8() const { return ___Byte8_8; }
	inline uint8_t* get_address_of_Byte8_8() { return &___Byte8_8; }
	inline void set_Byte8_8(uint8_t value)
	{
		___Byte8_8 = value;
	}

	inline static int32_t get_offset_of_Byte9_9() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte9_9)); }
	inline uint8_t get_Byte9_9() const { return ___Byte9_9; }
	inline uint8_t* get_address_of_Byte9_9() { return &___Byte9_9; }
	inline void set_Byte9_9(uint8_t value)
	{
		___Byte9_9 = value;
	}

	inline static int32_t get_offset_of_Byte10_10() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte10_10)); }
	inline uint8_t get_Byte10_10() const { return ___Byte10_10; }
	inline uint8_t* get_address_of_Byte10_10() { return &___Byte10_10; }
	inline void set_Byte10_10(uint8_t value)
	{
		___Byte10_10 = value;
	}

	inline static int32_t get_offset_of_Byte11_11() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte11_11)); }
	inline uint8_t get_Byte11_11() const { return ___Byte11_11; }
	inline uint8_t* get_address_of_Byte11_11() { return &___Byte11_11; }
	inline void set_Byte11_11(uint8_t value)
	{
		___Byte11_11 = value;
	}

	inline static int32_t get_offset_of_Byte12_12() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte12_12)); }
	inline uint8_t get_Byte12_12() const { return ___Byte12_12; }
	inline uint8_t* get_address_of_Byte12_12() { return &___Byte12_12; }
	inline void set_Byte12_12(uint8_t value)
	{
		___Byte12_12 = value;
	}

	inline static int32_t get_offset_of_Byte13_13() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte13_13)); }
	inline uint8_t get_Byte13_13() const { return ___Byte13_13; }
	inline uint8_t* get_address_of_Byte13_13() { return &___Byte13_13; }
	inline void set_Byte13_13(uint8_t value)
	{
		___Byte13_13 = value;
	}

	inline static int32_t get_offset_of_Byte14_14() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte14_14)); }
	inline uint8_t get_Byte14_14() const { return ___Byte14_14; }
	inline uint8_t* get_address_of_Byte14_14() { return &___Byte14_14; }
	inline void set_Byte14_14(uint8_t value)
	{
		___Byte14_14 = value;
	}

	inline static int32_t get_offset_of_Byte15_15() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte15_15)); }
	inline uint8_t get_Byte15_15() const { return ___Byte15_15; }
	inline uint8_t* get_address_of_Byte15_15() { return &___Byte15_15; }
	inline void set_Byte15_15(uint8_t value)
	{
		___Byte15_15 = value;
	}

	inline static int32_t get_offset_of_Byte16_16() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte16_16)); }
	inline uint8_t get_Byte16_16() const { return ___Byte16_16; }
	inline uint8_t* get_address_of_Byte16_16() { return &___Byte16_16; }
	inline void set_Byte16_16(uint8_t value)
	{
		___Byte16_16 = value;
	}

	inline static int32_t get_offset_of_Byte17_17() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte17_17)); }
	inline uint8_t get_Byte17_17() const { return ___Byte17_17; }
	inline uint8_t* get_address_of_Byte17_17() { return &___Byte17_17; }
	inline void set_Byte17_17(uint8_t value)
	{
		___Byte17_17 = value;
	}

	inline static int32_t get_offset_of_Byte18_18() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte18_18)); }
	inline uint8_t get_Byte18_18() const { return ___Byte18_18; }
	inline uint8_t* get_address_of_Byte18_18() { return &___Byte18_18; }
	inline void set_Byte18_18(uint8_t value)
	{
		___Byte18_18 = value;
	}

	inline static int32_t get_offset_of_Byte19_19() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte19_19)); }
	inline uint8_t get_Byte19_19() const { return ___Byte19_19; }
	inline uint8_t* get_address_of_Byte19_19() { return &___Byte19_19; }
	inline void set_Byte19_19(uint8_t value)
	{
		___Byte19_19 = value;
	}

	inline static int32_t get_offset_of_Byte20_20() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte20_20)); }
	inline uint8_t get_Byte20_20() const { return ___Byte20_20; }
	inline uint8_t* get_address_of_Byte20_20() { return &___Byte20_20; }
	inline void set_Byte20_20(uint8_t value)
	{
		___Byte20_20 = value;
	}

	inline static int32_t get_offset_of_Byte21_21() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte21_21)); }
	inline uint8_t get_Byte21_21() const { return ___Byte21_21; }
	inline uint8_t* get_address_of_Byte21_21() { return &___Byte21_21; }
	inline void set_Byte21_21(uint8_t value)
	{
		___Byte21_21 = value;
	}

	inline static int32_t get_offset_of_Byte22_22() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte22_22)); }
	inline uint8_t get_Byte22_22() const { return ___Byte22_22; }
	inline uint8_t* get_address_of_Byte22_22() { return &___Byte22_22; }
	inline void set_Byte22_22(uint8_t value)
	{
		___Byte22_22 = value;
	}

	inline static int32_t get_offset_of_Byte23_23() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte23_23)); }
	inline uint8_t get_Byte23_23() const { return ___Byte23_23; }
	inline uint8_t* get_address_of_Byte23_23() { return &___Byte23_23; }
	inline void set_Byte23_23(uint8_t value)
	{
		___Byte23_23 = value;
	}

	inline static int32_t get_offset_of_Byte24_24() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte24_24)); }
	inline uint8_t get_Byte24_24() const { return ___Byte24_24; }
	inline uint8_t* get_address_of_Byte24_24() { return &___Byte24_24; }
	inline void set_Byte24_24(uint8_t value)
	{
		___Byte24_24 = value;
	}

	inline static int32_t get_offset_of_Byte25_25() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte25_25)); }
	inline uint8_t get_Byte25_25() const { return ___Byte25_25; }
	inline uint8_t* get_address_of_Byte25_25() { return &___Byte25_25; }
	inline void set_Byte25_25(uint8_t value)
	{
		___Byte25_25 = value;
	}

	inline static int32_t get_offset_of_Byte26_26() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte26_26)); }
	inline uint8_t get_Byte26_26() const { return ___Byte26_26; }
	inline uint8_t* get_address_of_Byte26_26() { return &___Byte26_26; }
	inline void set_Byte26_26(uint8_t value)
	{
		___Byte26_26 = value;
	}

	inline static int32_t get_offset_of_Byte27_27() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte27_27)); }
	inline uint8_t get_Byte27_27() const { return ___Byte27_27; }
	inline uint8_t* get_address_of_Byte27_27() { return &___Byte27_27; }
	inline void set_Byte27_27(uint8_t value)
	{
		___Byte27_27 = value;
	}

	inline static int32_t get_offset_of_Byte28_28() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte28_28)); }
	inline uint8_t get_Byte28_28() const { return ___Byte28_28; }
	inline uint8_t* get_address_of_Byte28_28() { return &___Byte28_28; }
	inline void set_Byte28_28(uint8_t value)
	{
		___Byte28_28 = value;
	}

	inline static int32_t get_offset_of_Byte29_29() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte29_29)); }
	inline uint8_t get_Byte29_29() const { return ___Byte29_29; }
	inline uint8_t* get_address_of_Byte29_29() { return &___Byte29_29; }
	inline void set_Byte29_29(uint8_t value)
	{
		___Byte29_29 = value;
	}

	inline static int32_t get_offset_of_Byte30_30() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte30_30)); }
	inline uint8_t get_Byte30_30() const { return ___Byte30_30; }
	inline uint8_t* get_address_of_Byte30_30() { return &___Byte30_30; }
	inline void set_Byte30_30(uint8_t value)
	{
		___Byte30_30 = value;
	}

	inline static int32_t get_offset_of_Byte31_31() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Byte31_31)); }
	inline uint8_t get_Byte31_31() const { return ___Byte31_31; }
	inline uint8_t* get_address_of_Byte31_31() { return &___Byte31_31; }
	inline void set_Byte31_31(uint8_t value)
	{
		___Byte31_31 = value;
	}

	inline static int32_t get_offset_of_SByte0_32() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte0_32)); }
	inline int8_t get_SByte0_32() const { return ___SByte0_32; }
	inline int8_t* get_address_of_SByte0_32() { return &___SByte0_32; }
	inline void set_SByte0_32(int8_t value)
	{
		___SByte0_32 = value;
	}

	inline static int32_t get_offset_of_SByte1_33() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte1_33)); }
	inline int8_t get_SByte1_33() const { return ___SByte1_33; }
	inline int8_t* get_address_of_SByte1_33() { return &___SByte1_33; }
	inline void set_SByte1_33(int8_t value)
	{
		___SByte1_33 = value;
	}

	inline static int32_t get_offset_of_SByte2_34() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte2_34)); }
	inline int8_t get_SByte2_34() const { return ___SByte2_34; }
	inline int8_t* get_address_of_SByte2_34() { return &___SByte2_34; }
	inline void set_SByte2_34(int8_t value)
	{
		___SByte2_34 = value;
	}

	inline static int32_t get_offset_of_SByte3_35() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte3_35)); }
	inline int8_t get_SByte3_35() const { return ___SByte3_35; }
	inline int8_t* get_address_of_SByte3_35() { return &___SByte3_35; }
	inline void set_SByte3_35(int8_t value)
	{
		___SByte3_35 = value;
	}

	inline static int32_t get_offset_of_SByte4_36() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte4_36)); }
	inline int8_t get_SByte4_36() const { return ___SByte4_36; }
	inline int8_t* get_address_of_SByte4_36() { return &___SByte4_36; }
	inline void set_SByte4_36(int8_t value)
	{
		___SByte4_36 = value;
	}

	inline static int32_t get_offset_of_SByte5_37() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte5_37)); }
	inline int8_t get_SByte5_37() const { return ___SByte5_37; }
	inline int8_t* get_address_of_SByte5_37() { return &___SByte5_37; }
	inline void set_SByte5_37(int8_t value)
	{
		___SByte5_37 = value;
	}

	inline static int32_t get_offset_of_SByte6_38() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte6_38)); }
	inline int8_t get_SByte6_38() const { return ___SByte6_38; }
	inline int8_t* get_address_of_SByte6_38() { return &___SByte6_38; }
	inline void set_SByte6_38(int8_t value)
	{
		___SByte6_38 = value;
	}

	inline static int32_t get_offset_of_SByte7_39() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte7_39)); }
	inline int8_t get_SByte7_39() const { return ___SByte7_39; }
	inline int8_t* get_address_of_SByte7_39() { return &___SByte7_39; }
	inline void set_SByte7_39(int8_t value)
	{
		___SByte7_39 = value;
	}

	inline static int32_t get_offset_of_SByte8_40() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte8_40)); }
	inline int8_t get_SByte8_40() const { return ___SByte8_40; }
	inline int8_t* get_address_of_SByte8_40() { return &___SByte8_40; }
	inline void set_SByte8_40(int8_t value)
	{
		___SByte8_40 = value;
	}

	inline static int32_t get_offset_of_SByte9_41() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte9_41)); }
	inline int8_t get_SByte9_41() const { return ___SByte9_41; }
	inline int8_t* get_address_of_SByte9_41() { return &___SByte9_41; }
	inline void set_SByte9_41(int8_t value)
	{
		___SByte9_41 = value;
	}

	inline static int32_t get_offset_of_SByte10_42() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte10_42)); }
	inline int8_t get_SByte10_42() const { return ___SByte10_42; }
	inline int8_t* get_address_of_SByte10_42() { return &___SByte10_42; }
	inline void set_SByte10_42(int8_t value)
	{
		___SByte10_42 = value;
	}

	inline static int32_t get_offset_of_SByte11_43() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte11_43)); }
	inline int8_t get_SByte11_43() const { return ___SByte11_43; }
	inline int8_t* get_address_of_SByte11_43() { return &___SByte11_43; }
	inline void set_SByte11_43(int8_t value)
	{
		___SByte11_43 = value;
	}

	inline static int32_t get_offset_of_SByte12_44() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte12_44)); }
	inline int8_t get_SByte12_44() const { return ___SByte12_44; }
	inline int8_t* get_address_of_SByte12_44() { return &___SByte12_44; }
	inline void set_SByte12_44(int8_t value)
	{
		___SByte12_44 = value;
	}

	inline static int32_t get_offset_of_SByte13_45() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte13_45)); }
	inline int8_t get_SByte13_45() const { return ___SByte13_45; }
	inline int8_t* get_address_of_SByte13_45() { return &___SByte13_45; }
	inline void set_SByte13_45(int8_t value)
	{
		___SByte13_45 = value;
	}

	inline static int32_t get_offset_of_SByte14_46() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte14_46)); }
	inline int8_t get_SByte14_46() const { return ___SByte14_46; }
	inline int8_t* get_address_of_SByte14_46() { return &___SByte14_46; }
	inline void set_SByte14_46(int8_t value)
	{
		___SByte14_46 = value;
	}

	inline static int32_t get_offset_of_SByte15_47() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte15_47)); }
	inline int8_t get_SByte15_47() const { return ___SByte15_47; }
	inline int8_t* get_address_of_SByte15_47() { return &___SByte15_47; }
	inline void set_SByte15_47(int8_t value)
	{
		___SByte15_47 = value;
	}

	inline static int32_t get_offset_of_SByte16_48() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte16_48)); }
	inline int8_t get_SByte16_48() const { return ___SByte16_48; }
	inline int8_t* get_address_of_SByte16_48() { return &___SByte16_48; }
	inline void set_SByte16_48(int8_t value)
	{
		___SByte16_48 = value;
	}

	inline static int32_t get_offset_of_SByte17_49() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte17_49)); }
	inline int8_t get_SByte17_49() const { return ___SByte17_49; }
	inline int8_t* get_address_of_SByte17_49() { return &___SByte17_49; }
	inline void set_SByte17_49(int8_t value)
	{
		___SByte17_49 = value;
	}

	inline static int32_t get_offset_of_SByte18_50() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte18_50)); }
	inline int8_t get_SByte18_50() const { return ___SByte18_50; }
	inline int8_t* get_address_of_SByte18_50() { return &___SByte18_50; }
	inline void set_SByte18_50(int8_t value)
	{
		___SByte18_50 = value;
	}

	inline static int32_t get_offset_of_SByte19_51() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte19_51)); }
	inline int8_t get_SByte19_51() const { return ___SByte19_51; }
	inline int8_t* get_address_of_SByte19_51() { return &___SByte19_51; }
	inline void set_SByte19_51(int8_t value)
	{
		___SByte19_51 = value;
	}

	inline static int32_t get_offset_of_SByte20_52() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte20_52)); }
	inline int8_t get_SByte20_52() const { return ___SByte20_52; }
	inline int8_t* get_address_of_SByte20_52() { return &___SByte20_52; }
	inline void set_SByte20_52(int8_t value)
	{
		___SByte20_52 = value;
	}

	inline static int32_t get_offset_of_SByte21_53() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte21_53)); }
	inline int8_t get_SByte21_53() const { return ___SByte21_53; }
	inline int8_t* get_address_of_SByte21_53() { return &___SByte21_53; }
	inline void set_SByte21_53(int8_t value)
	{
		___SByte21_53 = value;
	}

	inline static int32_t get_offset_of_SByte22_54() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte22_54)); }
	inline int8_t get_SByte22_54() const { return ___SByte22_54; }
	inline int8_t* get_address_of_SByte22_54() { return &___SByte22_54; }
	inline void set_SByte22_54(int8_t value)
	{
		___SByte22_54 = value;
	}

	inline static int32_t get_offset_of_SByte23_55() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte23_55)); }
	inline int8_t get_SByte23_55() const { return ___SByte23_55; }
	inline int8_t* get_address_of_SByte23_55() { return &___SByte23_55; }
	inline void set_SByte23_55(int8_t value)
	{
		___SByte23_55 = value;
	}

	inline static int32_t get_offset_of_SByte24_56() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte24_56)); }
	inline int8_t get_SByte24_56() const { return ___SByte24_56; }
	inline int8_t* get_address_of_SByte24_56() { return &___SByte24_56; }
	inline void set_SByte24_56(int8_t value)
	{
		___SByte24_56 = value;
	}

	inline static int32_t get_offset_of_SByte25_57() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte25_57)); }
	inline int8_t get_SByte25_57() const { return ___SByte25_57; }
	inline int8_t* get_address_of_SByte25_57() { return &___SByte25_57; }
	inline void set_SByte25_57(int8_t value)
	{
		___SByte25_57 = value;
	}

	inline static int32_t get_offset_of_SByte26_58() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte26_58)); }
	inline int8_t get_SByte26_58() const { return ___SByte26_58; }
	inline int8_t* get_address_of_SByte26_58() { return &___SByte26_58; }
	inline void set_SByte26_58(int8_t value)
	{
		___SByte26_58 = value;
	}

	inline static int32_t get_offset_of_SByte27_59() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte27_59)); }
	inline int8_t get_SByte27_59() const { return ___SByte27_59; }
	inline int8_t* get_address_of_SByte27_59() { return &___SByte27_59; }
	inline void set_SByte27_59(int8_t value)
	{
		___SByte27_59 = value;
	}

	inline static int32_t get_offset_of_SByte28_60() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte28_60)); }
	inline int8_t get_SByte28_60() const { return ___SByte28_60; }
	inline int8_t* get_address_of_SByte28_60() { return &___SByte28_60; }
	inline void set_SByte28_60(int8_t value)
	{
		___SByte28_60 = value;
	}

	inline static int32_t get_offset_of_SByte29_61() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte29_61)); }
	inline int8_t get_SByte29_61() const { return ___SByte29_61; }
	inline int8_t* get_address_of_SByte29_61() { return &___SByte29_61; }
	inline void set_SByte29_61(int8_t value)
	{
		___SByte29_61 = value;
	}

	inline static int32_t get_offset_of_SByte30_62() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte30_62)); }
	inline int8_t get_SByte30_62() const { return ___SByte30_62; }
	inline int8_t* get_address_of_SByte30_62() { return &___SByte30_62; }
	inline void set_SByte30_62(int8_t value)
	{
		___SByte30_62 = value;
	}

	inline static int32_t get_offset_of_SByte31_63() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SByte31_63)); }
	inline int8_t get_SByte31_63() const { return ___SByte31_63; }
	inline int8_t* get_address_of_SByte31_63() { return &___SByte31_63; }
	inline void set_SByte31_63(int8_t value)
	{
		___SByte31_63 = value;
	}

	inline static int32_t get_offset_of_UShort0_64() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___UShort0_64)); }
	inline uint16_t get_UShort0_64() const { return ___UShort0_64; }
	inline uint16_t* get_address_of_UShort0_64() { return &___UShort0_64; }
	inline void set_UShort0_64(uint16_t value)
	{
		___UShort0_64 = value;
	}

	inline static int32_t get_offset_of_UShort1_65() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___UShort1_65)); }
	inline uint16_t get_UShort1_65() const { return ___UShort1_65; }
	inline uint16_t* get_address_of_UShort1_65() { return &___UShort1_65; }
	inline void set_UShort1_65(uint16_t value)
	{
		___UShort1_65 = value;
	}

	inline static int32_t get_offset_of_UShort2_66() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___UShort2_66)); }
	inline uint16_t get_UShort2_66() const { return ___UShort2_66; }
	inline uint16_t* get_address_of_UShort2_66() { return &___UShort2_66; }
	inline void set_UShort2_66(uint16_t value)
	{
		___UShort2_66 = value;
	}

	inline static int32_t get_offset_of_UShort3_67() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___UShort3_67)); }
	inline uint16_t get_UShort3_67() const { return ___UShort3_67; }
	inline uint16_t* get_address_of_UShort3_67() { return &___UShort3_67; }
	inline void set_UShort3_67(uint16_t value)
	{
		___UShort3_67 = value;
	}

	inline static int32_t get_offset_of_UShort4_68() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___UShort4_68)); }
	inline uint16_t get_UShort4_68() const { return ___UShort4_68; }
	inline uint16_t* get_address_of_UShort4_68() { return &___UShort4_68; }
	inline void set_UShort4_68(uint16_t value)
	{
		___UShort4_68 = value;
	}

	inline static int32_t get_offset_of_UShort5_69() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___UShort5_69)); }
	inline uint16_t get_UShort5_69() const { return ___UShort5_69; }
	inline uint16_t* get_address_of_UShort5_69() { return &___UShort5_69; }
	inline void set_UShort5_69(uint16_t value)
	{
		___UShort5_69 = value;
	}

	inline static int32_t get_offset_of_UShort6_70() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___UShort6_70)); }
	inline uint16_t get_UShort6_70() const { return ___UShort6_70; }
	inline uint16_t* get_address_of_UShort6_70() { return &___UShort6_70; }
	inline void set_UShort6_70(uint16_t value)
	{
		___UShort6_70 = value;
	}

	inline static int32_t get_offset_of_UShort7_71() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___UShort7_71)); }
	inline uint16_t get_UShort7_71() const { return ___UShort7_71; }
	inline uint16_t* get_address_of_UShort7_71() { return &___UShort7_71; }
	inline void set_UShort7_71(uint16_t value)
	{
		___UShort7_71 = value;
	}

	inline static int32_t get_offset_of_UShort8_72() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___UShort8_72)); }
	inline uint16_t get_UShort8_72() const { return ___UShort8_72; }
	inline uint16_t* get_address_of_UShort8_72() { return &___UShort8_72; }
	inline void set_UShort8_72(uint16_t value)
	{
		___UShort8_72 = value;
	}

	inline static int32_t get_offset_of_UShort9_73() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___UShort9_73)); }
	inline uint16_t get_UShort9_73() const { return ___UShort9_73; }
	inline uint16_t* get_address_of_UShort9_73() { return &___UShort9_73; }
	inline void set_UShort9_73(uint16_t value)
	{
		___UShort9_73 = value;
	}

	inline static int32_t get_offset_of_UShort10_74() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___UShort10_74)); }
	inline uint16_t get_UShort10_74() const { return ___UShort10_74; }
	inline uint16_t* get_address_of_UShort10_74() { return &___UShort10_74; }
	inline void set_UShort10_74(uint16_t value)
	{
		___UShort10_74 = value;
	}

	inline static int32_t get_offset_of_UShort11_75() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___UShort11_75)); }
	inline uint16_t get_UShort11_75() const { return ___UShort11_75; }
	inline uint16_t* get_address_of_UShort11_75() { return &___UShort11_75; }
	inline void set_UShort11_75(uint16_t value)
	{
		___UShort11_75 = value;
	}

	inline static int32_t get_offset_of_UShort12_76() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___UShort12_76)); }
	inline uint16_t get_UShort12_76() const { return ___UShort12_76; }
	inline uint16_t* get_address_of_UShort12_76() { return &___UShort12_76; }
	inline void set_UShort12_76(uint16_t value)
	{
		___UShort12_76 = value;
	}

	inline static int32_t get_offset_of_UShort13_77() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___UShort13_77)); }
	inline uint16_t get_UShort13_77() const { return ___UShort13_77; }
	inline uint16_t* get_address_of_UShort13_77() { return &___UShort13_77; }
	inline void set_UShort13_77(uint16_t value)
	{
		___UShort13_77 = value;
	}

	inline static int32_t get_offset_of_UShort14_78() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___UShort14_78)); }
	inline uint16_t get_UShort14_78() const { return ___UShort14_78; }
	inline uint16_t* get_address_of_UShort14_78() { return &___UShort14_78; }
	inline void set_UShort14_78(uint16_t value)
	{
		___UShort14_78 = value;
	}

	inline static int32_t get_offset_of_UShort15_79() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___UShort15_79)); }
	inline uint16_t get_UShort15_79() const { return ___UShort15_79; }
	inline uint16_t* get_address_of_UShort15_79() { return &___UShort15_79; }
	inline void set_UShort15_79(uint16_t value)
	{
		___UShort15_79 = value;
	}

	inline static int32_t get_offset_of_SShort0_80() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SShort0_80)); }
	inline int16_t get_SShort0_80() const { return ___SShort0_80; }
	inline int16_t* get_address_of_SShort0_80() { return &___SShort0_80; }
	inline void set_SShort0_80(int16_t value)
	{
		___SShort0_80 = value;
	}

	inline static int32_t get_offset_of_SShort1_81() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SShort1_81)); }
	inline int16_t get_SShort1_81() const { return ___SShort1_81; }
	inline int16_t* get_address_of_SShort1_81() { return &___SShort1_81; }
	inline void set_SShort1_81(int16_t value)
	{
		___SShort1_81 = value;
	}

	inline static int32_t get_offset_of_SShort2_82() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SShort2_82)); }
	inline int16_t get_SShort2_82() const { return ___SShort2_82; }
	inline int16_t* get_address_of_SShort2_82() { return &___SShort2_82; }
	inline void set_SShort2_82(int16_t value)
	{
		___SShort2_82 = value;
	}

	inline static int32_t get_offset_of_SShort3_83() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SShort3_83)); }
	inline int16_t get_SShort3_83() const { return ___SShort3_83; }
	inline int16_t* get_address_of_SShort3_83() { return &___SShort3_83; }
	inline void set_SShort3_83(int16_t value)
	{
		___SShort3_83 = value;
	}

	inline static int32_t get_offset_of_SShort4_84() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SShort4_84)); }
	inline int16_t get_SShort4_84() const { return ___SShort4_84; }
	inline int16_t* get_address_of_SShort4_84() { return &___SShort4_84; }
	inline void set_SShort4_84(int16_t value)
	{
		___SShort4_84 = value;
	}

	inline static int32_t get_offset_of_SShort5_85() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SShort5_85)); }
	inline int16_t get_SShort5_85() const { return ___SShort5_85; }
	inline int16_t* get_address_of_SShort5_85() { return &___SShort5_85; }
	inline void set_SShort5_85(int16_t value)
	{
		___SShort5_85 = value;
	}

	inline static int32_t get_offset_of_SShort6_86() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SShort6_86)); }
	inline int16_t get_SShort6_86() const { return ___SShort6_86; }
	inline int16_t* get_address_of_SShort6_86() { return &___SShort6_86; }
	inline void set_SShort6_86(int16_t value)
	{
		___SShort6_86 = value;
	}

	inline static int32_t get_offset_of_SShort7_87() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SShort7_87)); }
	inline int16_t get_SShort7_87() const { return ___SShort7_87; }
	inline int16_t* get_address_of_SShort7_87() { return &___SShort7_87; }
	inline void set_SShort7_87(int16_t value)
	{
		___SShort7_87 = value;
	}

	inline static int32_t get_offset_of_SShort8_88() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SShort8_88)); }
	inline int16_t get_SShort8_88() const { return ___SShort8_88; }
	inline int16_t* get_address_of_SShort8_88() { return &___SShort8_88; }
	inline void set_SShort8_88(int16_t value)
	{
		___SShort8_88 = value;
	}

	inline static int32_t get_offset_of_SShort9_89() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SShort9_89)); }
	inline int16_t get_SShort9_89() const { return ___SShort9_89; }
	inline int16_t* get_address_of_SShort9_89() { return &___SShort9_89; }
	inline void set_SShort9_89(int16_t value)
	{
		___SShort9_89 = value;
	}

	inline static int32_t get_offset_of_SShort10_90() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SShort10_90)); }
	inline int16_t get_SShort10_90() const { return ___SShort10_90; }
	inline int16_t* get_address_of_SShort10_90() { return &___SShort10_90; }
	inline void set_SShort10_90(int16_t value)
	{
		___SShort10_90 = value;
	}

	inline static int32_t get_offset_of_SShort11_91() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SShort11_91)); }
	inline int16_t get_SShort11_91() const { return ___SShort11_91; }
	inline int16_t* get_address_of_SShort11_91() { return &___SShort11_91; }
	inline void set_SShort11_91(int16_t value)
	{
		___SShort11_91 = value;
	}

	inline static int32_t get_offset_of_SShort12_92() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SShort12_92)); }
	inline int16_t get_SShort12_92() const { return ___SShort12_92; }
	inline int16_t* get_address_of_SShort12_92() { return &___SShort12_92; }
	inline void set_SShort12_92(int16_t value)
	{
		___SShort12_92 = value;
	}

	inline static int32_t get_offset_of_SShort13_93() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SShort13_93)); }
	inline int16_t get_SShort13_93() const { return ___SShort13_93; }
	inline int16_t* get_address_of_SShort13_93() { return &___SShort13_93; }
	inline void set_SShort13_93(int16_t value)
	{
		___SShort13_93 = value;
	}

	inline static int32_t get_offset_of_SShort14_94() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SShort14_94)); }
	inline int16_t get_SShort14_94() const { return ___SShort14_94; }
	inline int16_t* get_address_of_SShort14_94() { return &___SShort14_94; }
	inline void set_SShort14_94(int16_t value)
	{
		___SShort14_94 = value;
	}

	inline static int32_t get_offset_of_SShort15_95() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SShort15_95)); }
	inline int16_t get_SShort15_95() const { return ___SShort15_95; }
	inline int16_t* get_address_of_SShort15_95() { return &___SShort15_95; }
	inline void set_SShort15_95(int16_t value)
	{
		___SShort15_95 = value;
	}

	inline static int32_t get_offset_of_UInt0_96() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___UInt0_96)); }
	inline uint32_t get_UInt0_96() const { return ___UInt0_96; }
	inline uint32_t* get_address_of_UInt0_96() { return &___UInt0_96; }
	inline void set_UInt0_96(uint32_t value)
	{
		___UInt0_96 = value;
	}

	inline static int32_t get_offset_of_UInt1_97() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___UInt1_97)); }
	inline uint32_t get_UInt1_97() const { return ___UInt1_97; }
	inline uint32_t* get_address_of_UInt1_97() { return &___UInt1_97; }
	inline void set_UInt1_97(uint32_t value)
	{
		___UInt1_97 = value;
	}

	inline static int32_t get_offset_of_UInt2_98() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___UInt2_98)); }
	inline uint32_t get_UInt2_98() const { return ___UInt2_98; }
	inline uint32_t* get_address_of_UInt2_98() { return &___UInt2_98; }
	inline void set_UInt2_98(uint32_t value)
	{
		___UInt2_98 = value;
	}

	inline static int32_t get_offset_of_UInt3_99() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___UInt3_99)); }
	inline uint32_t get_UInt3_99() const { return ___UInt3_99; }
	inline uint32_t* get_address_of_UInt3_99() { return &___UInt3_99; }
	inline void set_UInt3_99(uint32_t value)
	{
		___UInt3_99 = value;
	}

	inline static int32_t get_offset_of_UInt4_100() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___UInt4_100)); }
	inline uint32_t get_UInt4_100() const { return ___UInt4_100; }
	inline uint32_t* get_address_of_UInt4_100() { return &___UInt4_100; }
	inline void set_UInt4_100(uint32_t value)
	{
		___UInt4_100 = value;
	}

	inline static int32_t get_offset_of_UInt5_101() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___UInt5_101)); }
	inline uint32_t get_UInt5_101() const { return ___UInt5_101; }
	inline uint32_t* get_address_of_UInt5_101() { return &___UInt5_101; }
	inline void set_UInt5_101(uint32_t value)
	{
		___UInt5_101 = value;
	}

	inline static int32_t get_offset_of_UInt6_102() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___UInt6_102)); }
	inline uint32_t get_UInt6_102() const { return ___UInt6_102; }
	inline uint32_t* get_address_of_UInt6_102() { return &___UInt6_102; }
	inline void set_UInt6_102(uint32_t value)
	{
		___UInt6_102 = value;
	}

	inline static int32_t get_offset_of_UInt7_103() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___UInt7_103)); }
	inline uint32_t get_UInt7_103() const { return ___UInt7_103; }
	inline uint32_t* get_address_of_UInt7_103() { return &___UInt7_103; }
	inline void set_UInt7_103(uint32_t value)
	{
		___UInt7_103 = value;
	}

	inline static int32_t get_offset_of_SInt0_104() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SInt0_104)); }
	inline int32_t get_SInt0_104() const { return ___SInt0_104; }
	inline int32_t* get_address_of_SInt0_104() { return &___SInt0_104; }
	inline void set_SInt0_104(int32_t value)
	{
		___SInt0_104 = value;
	}

	inline static int32_t get_offset_of_SInt1_105() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SInt1_105)); }
	inline int32_t get_SInt1_105() const { return ___SInt1_105; }
	inline int32_t* get_address_of_SInt1_105() { return &___SInt1_105; }
	inline void set_SInt1_105(int32_t value)
	{
		___SInt1_105 = value;
	}

	inline static int32_t get_offset_of_SInt2_106() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SInt2_106)); }
	inline int32_t get_SInt2_106() const { return ___SInt2_106; }
	inline int32_t* get_address_of_SInt2_106() { return &___SInt2_106; }
	inline void set_SInt2_106(int32_t value)
	{
		___SInt2_106 = value;
	}

	inline static int32_t get_offset_of_SInt3_107() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SInt3_107)); }
	inline int32_t get_SInt3_107() const { return ___SInt3_107; }
	inline int32_t* get_address_of_SInt3_107() { return &___SInt3_107; }
	inline void set_SInt3_107(int32_t value)
	{
		___SInt3_107 = value;
	}

	inline static int32_t get_offset_of_SInt4_108() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SInt4_108)); }
	inline int32_t get_SInt4_108() const { return ___SInt4_108; }
	inline int32_t* get_address_of_SInt4_108() { return &___SInt4_108; }
	inline void set_SInt4_108(int32_t value)
	{
		___SInt4_108 = value;
	}

	inline static int32_t get_offset_of_SInt5_109() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SInt5_109)); }
	inline int32_t get_SInt5_109() const { return ___SInt5_109; }
	inline int32_t* get_address_of_SInt5_109() { return &___SInt5_109; }
	inline void set_SInt5_109(int32_t value)
	{
		___SInt5_109 = value;
	}

	inline static int32_t get_offset_of_SInt6_110() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SInt6_110)); }
	inline int32_t get_SInt6_110() const { return ___SInt6_110; }
	inline int32_t* get_address_of_SInt6_110() { return &___SInt6_110; }
	inline void set_SInt6_110(int32_t value)
	{
		___SInt6_110 = value;
	}

	inline static int32_t get_offset_of_SInt7_111() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SInt7_111)); }
	inline int32_t get_SInt7_111() const { return ___SInt7_111; }
	inline int32_t* get_address_of_SInt7_111() { return &___SInt7_111; }
	inline void set_SInt7_111(int32_t value)
	{
		___SInt7_111 = value;
	}

	inline static int32_t get_offset_of_ULong0_112() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___ULong0_112)); }
	inline uint64_t get_ULong0_112() const { return ___ULong0_112; }
	inline uint64_t* get_address_of_ULong0_112() { return &___ULong0_112; }
	inline void set_ULong0_112(uint64_t value)
	{
		___ULong0_112 = value;
	}

	inline static int32_t get_offset_of_ULong1_113() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___ULong1_113)); }
	inline uint64_t get_ULong1_113() const { return ___ULong1_113; }
	inline uint64_t* get_address_of_ULong1_113() { return &___ULong1_113; }
	inline void set_ULong1_113(uint64_t value)
	{
		___ULong1_113 = value;
	}

	inline static int32_t get_offset_of_ULong2_114() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___ULong2_114)); }
	inline uint64_t get_ULong2_114() const { return ___ULong2_114; }
	inline uint64_t* get_address_of_ULong2_114() { return &___ULong2_114; }
	inline void set_ULong2_114(uint64_t value)
	{
		___ULong2_114 = value;
	}

	inline static int32_t get_offset_of_ULong3_115() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___ULong3_115)); }
	inline uint64_t get_ULong3_115() const { return ___ULong3_115; }
	inline uint64_t* get_address_of_ULong3_115() { return &___ULong3_115; }
	inline void set_ULong3_115(uint64_t value)
	{
		___ULong3_115 = value;
	}

	inline static int32_t get_offset_of_SLong0_116() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SLong0_116)); }
	inline int64_t get_SLong0_116() const { return ___SLong0_116; }
	inline int64_t* get_address_of_SLong0_116() { return &___SLong0_116; }
	inline void set_SLong0_116(int64_t value)
	{
		___SLong0_116 = value;
	}

	inline static int32_t get_offset_of_SLong1_117() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SLong1_117)); }
	inline int64_t get_SLong1_117() const { return ___SLong1_117; }
	inline int64_t* get_address_of_SLong1_117() { return &___SLong1_117; }
	inline void set_SLong1_117(int64_t value)
	{
		___SLong1_117 = value;
	}

	inline static int32_t get_offset_of_SLong2_118() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SLong2_118)); }
	inline int64_t get_SLong2_118() const { return ___SLong2_118; }
	inline int64_t* get_address_of_SLong2_118() { return &___SLong2_118; }
	inline void set_SLong2_118(int64_t value)
	{
		___SLong2_118 = value;
	}

	inline static int32_t get_offset_of_SLong3_119() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___SLong3_119)); }
	inline int64_t get_SLong3_119() const { return ___SLong3_119; }
	inline int64_t* get_address_of_SLong3_119() { return &___SLong3_119; }
	inline void set_SLong3_119(int64_t value)
	{
		___SLong3_119 = value;
	}

	inline static int32_t get_offset_of_Float0_120() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Float0_120)); }
	inline float get_Float0_120() const { return ___Float0_120; }
	inline float* get_address_of_Float0_120() { return &___Float0_120; }
	inline void set_Float0_120(float value)
	{
		___Float0_120 = value;
	}

	inline static int32_t get_offset_of_Float1_121() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Float1_121)); }
	inline float get_Float1_121() const { return ___Float1_121; }
	inline float* get_address_of_Float1_121() { return &___Float1_121; }
	inline void set_Float1_121(float value)
	{
		___Float1_121 = value;
	}

	inline static int32_t get_offset_of_Float2_122() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Float2_122)); }
	inline float get_Float2_122() const { return ___Float2_122; }
	inline float* get_address_of_Float2_122() { return &___Float2_122; }
	inline void set_Float2_122(float value)
	{
		___Float2_122 = value;
	}

	inline static int32_t get_offset_of_Float3_123() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Float3_123)); }
	inline float get_Float3_123() const { return ___Float3_123; }
	inline float* get_address_of_Float3_123() { return &___Float3_123; }
	inline void set_Float3_123(float value)
	{
		___Float3_123 = value;
	}

	inline static int32_t get_offset_of_Float4_124() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Float4_124)); }
	inline float get_Float4_124() const { return ___Float4_124; }
	inline float* get_address_of_Float4_124() { return &___Float4_124; }
	inline void set_Float4_124(float value)
	{
		___Float4_124 = value;
	}

	inline static int32_t get_offset_of_Float5_125() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Float5_125)); }
	inline float get_Float5_125() const { return ___Float5_125; }
	inline float* get_address_of_Float5_125() { return &___Float5_125; }
	inline void set_Float5_125(float value)
	{
		___Float5_125 = value;
	}

	inline static int32_t get_offset_of_Float6_126() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Float6_126)); }
	inline float get_Float6_126() const { return ___Float6_126; }
	inline float* get_address_of_Float6_126() { return &___Float6_126; }
	inline void set_Float6_126(float value)
	{
		___Float6_126 = value;
	}

	inline static int32_t get_offset_of_Float7_127() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Float7_127)); }
	inline float get_Float7_127() const { return ___Float7_127; }
	inline float* get_address_of_Float7_127() { return &___Float7_127; }
	inline void set_Float7_127(float value)
	{
		___Float7_127 = value;
	}

	inline static int32_t get_offset_of_Double0_128() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Double0_128)); }
	inline double get_Double0_128() const { return ___Double0_128; }
	inline double* get_address_of_Double0_128() { return &___Double0_128; }
	inline void set_Double0_128(double value)
	{
		___Double0_128 = value;
	}

	inline static int32_t get_offset_of_Double1_129() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Double1_129)); }
	inline double get_Double1_129() const { return ___Double1_129; }
	inline double* get_address_of_Double1_129() { return &___Double1_129; }
	inline void set_Double1_129(double value)
	{
		___Double1_129 = value;
	}

	inline static int32_t get_offset_of_Double2_130() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Double2_130)); }
	inline double get_Double2_130() const { return ___Double2_130; }
	inline double* get_address_of_Double2_130() { return &___Double2_130; }
	inline void set_Double2_130(double value)
	{
		___Double2_130 = value;
	}

	inline static int32_t get_offset_of_Double3_131() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Double3_131)); }
	inline double get_Double3_131() const { return ___Double3_131; }
	inline double* get_address_of_Double3_131() { return &___Double3_131; }
	inline void set_Double3_131(double value)
	{
		___Double3_131 = value;
	}

	inline static int32_t get_offset_of_Lo128_132() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Lo128_132)); }
	inline v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  get_Lo128_132() const { return ___Lo128_132; }
	inline v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5 * get_address_of_Lo128_132() { return &___Lo128_132; }
	inline void set_Lo128_132(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  value)
	{
		___Lo128_132 = value;
	}

	inline static int32_t get_offset_of_Hi128_133() { return static_cast<int32_t>(offsetof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B, ___Hi128_133)); }
	inline v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  get_Hi128_133() const { return ___Hi128_133; }
	inline v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5 * get_address_of_Hi128_133() { return &___Hi128_133; }
	inline void set_Hi128_133(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  value)
	{
		___Hi128_133 = value;
	}
};


// System.Func`2<System.Attribute,System.Boolean>
struct Func_2_tC8249329D9436908CCFC615B65B1169FA16DB8E2  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
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


// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NullReferenceException
struct NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate
struct IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5  : public MulticastDelegate_t
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * m_Items[1];

public:
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) MethodInfo_t * m_Items[1];

public:
	inline MethodInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MethodInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MethodInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MethodInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MethodInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::All<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_All_TisRuntimeObject_mAB7DDBA2A721E5E08769CDBFD1E9FA658DD14989_gshared (RuntimeObject* ___source0, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___predicate1, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Contains<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Contains_TisRuntimeObject_mD323B6AB5F5CE44D9FECAA37D9134CBA42586B45_gshared (RuntimeObject* ___source0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !!0 System.Reflection.CustomAttributeExtensions::GetCustomAttribute<System.Object>(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_mCFC7690084D2E45FB609A39D2DD9C11B0195D052_gshared (MemberInfo_t * ___element0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m8333BBB4DDAE242DCF8984A6A5D7A2E469405BDB_gshared (Dictionary_2_t240BB5F785CC3B2A17B14447F3C0E0BB6AAB8E26 * __this, const RuntimeMethod* method);

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompileAttribute::set_FloatMode(Unity.Burst.FloatMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatMode_m87B9F1667557E4A62D1564F6BBCE9C0DD983784F_inline (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompileAttribute::set_FloatPrecision(Unity.Burst.FloatPrecision)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatPrecision_mF892081799E15A1C1ED18CA8B4B2733F0D5DC4B3_inline (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Boolean Unity.Burst.BurstCompiler::get_IsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompiler_get_IsEnabled_m78D2E2B6B47666674CD5D93E5610C7BD0F1CDD6E (const RuntimeMethod* method);
// System.IntPtr System.RuntimeMethodHandle::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RuntimeMethodHandle_get_Value_m51CC0BBFB22497E874A2B5A36346C79A0055281F_inline (RuntimeMethodHandle_t8974037C4FE5F6C3AE7D3731057CDB2891A21C9A * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Reflection.MethodBase System.Reflection.MethodBase::GetMethodFromHandle(System.RuntimeMethodHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodBase_t * MethodBase_GetMethodFromHandle_mFF986FE06E17C3D4E02D437DF6C87C62AAB7B59E (RuntimeMethodHandle_t8974037C4FE5F6C3AE7D3731057CDB2891A21C9A  ___handle0, const RuntimeMethod* method);
// System.Reflection.MethodInfo[] System.Type::GetMethods()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* Type_GetMethods_m5412C161832F16B9CFE8F201F72E11AF0C61D91C (Type_t * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean Unity.Burst.BurstCompiler::IsMatchingMethod(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompiler_IsMatchingMethod_m6F82F6AEA6C98B39B1F397BC1769AA1EE8CBCD39 (MethodInfo_t * ___burstMethod0, MethodInfo_t * ___otherMethod1, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodInfo::op_Equality(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_mC78C53FBCEF409A2EBD689D6781D23C62E6161F2 (MethodInfo_t * ___left0, MethodInfo_t * ___right1, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mF1733893E10358B400E817297D686A48AB3FB7B3 (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Type[] System.Type::GetNestedTypes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* Type_GetNestedTypes_m12C701CF5F7610E39C858617DE72B81900CBBA88 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_mDD47332AAF3036AAFC4C6626A999A452E7143DCF (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046 (Type_t * ___left0, Type_t * ___right1, const RuntimeMethod* method);
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_CreateDelegate_m4B6F4C6A4A3C1B2C55CD01FEA15E0C801CADCB24 (Type_t * ___type0, MethodInfo_t * ___method1, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompiler/FakeDelegate::.ctor(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FakeDelegate__ctor_m3021D19ED6A1F08575FED25932877F4586A57EC0 (FakeDelegate_t5C32095DECA16B795748EAE137988C071A80C62C * __this, MethodInfo_t * ___method0, const RuntimeMethod* method);
// System.Void* Unity.Burst.BurstCompiler::Compile(System.Object,System.Reflection.MethodInfo,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompiler_Compile_mECFF990384A362035C9B5833D0F621CE4D9147ED (RuntimeObject * ___delegateObj0, MethodInfo_t * ___methodInfo1, bool ___isFunctionPointer2, RuntimeObject * ___managedFallbackDelegateObj3, const RuntimeMethod* method);
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_Alloc_m937829FAD1C69F168CF045B9406228AC9F8B9389 (RuntimeObject * ___value0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.Marshal::GetFunctionPointerForDelegate(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Marshal_GetFunctionPointerForDelegate_m7C6D54EA9829C877C46D2A1CD4D8D0BB4702C795 (Delegate_t * ___d0, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD (intptr_t ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Delegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227 (Delegate_t * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.MethodBase::get_IsStatic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodBase_get_IsStatic_mDFDF51EDFE5DBDD5FE942564A1F56E3C7E3DE43F (MethodBase_t * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<System.Attribute> System.Reflection.CustomAttributeExtensions::GetCustomAttributes(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CustomAttributeExtensions_GetCustomAttributes_m9269C5EF7E5168EFDCE4D620B8FA890DF6B3E65B (MemberInfo_t * ___element0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Attribute,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m4D123D75E9CD917285F99983FCA192BC11962ED4 (Func_2_tC8249329D9436908CCFC615B65B1169FA16DB8E2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tC8249329D9436908CCFC615B65B1169FA16DB8E2 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mCA84157864A199574AD0B7F3083F99B54DC1F98C_gshared)(__this, ___object0, ___method1, method);
}
// System.Boolean System.Linq.Enumerable::All<System.Attribute>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,System.Boolean>)
inline bool Enumerable_All_TisAttribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71_m3E2C346102F90F2D173E0C2D3192B4821E7E9648 (RuntimeObject* ___source0, Func_2_tC8249329D9436908CCFC615B65B1169FA16DB8E2 * ___predicate1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, Func_2_tC8249329D9436908CCFC615B65B1169FA16DB8E2 *, const RuntimeMethod*))Enumerable_All_TisRuntimeObject_mAB7DDBA2A721E5E08769CDBFD1E9FA658DD14989_gshared)(___source0, ___predicate1, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean Unity.Burst.BurstCompilerOptions::HasBurstCompileAttribute(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_HasBurstCompileAttribute_m4EF62614BD8EAAF2015D0B19230E79523213FC9D (MemberInfo_t * ___member0, const RuntimeMethod* method);
// System.Boolean Unity.Burst.BurstCompilerOptions::get_EnableBurstCompilation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_EnableBurstCompilation_mF6AF625D845CE154ADDC6B1AE86DA7103CA0EA3F_inline (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, const RuntimeMethod* method);
// System.Int32 Unity.Burst.LowLevel.BurstCompilerService::CompileAsyncDelegateMethod(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BurstCompilerService_CompileAsyncDelegateMethod_mA76294773B6989F87A291642A00722F5F5266726 (RuntimeObject * ___delegateMethod0, String_t* ___compilerOptions1, const RuntimeMethod* method);
// System.Void* Unity.Burst.LowLevel.BurstCompilerService::GetAsyncCompiledAsyncDelegateMethod(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompilerService_GetAsyncCompiledAsyncDelegateMethod_m94255AE10D8C3F7B875D69D3889E029A936DE84F (int32_t ___userID0, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompilerOptions::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions__ctor_m8C50F25244F5A8847E6EEF94895E61B17AB7B17D (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, bool ___isGlobal0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * Type_GetMethod_m2DDEF37DF33D28F579BA8E03F4376B67D91F0DEB (Type_t * __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompilerOptions::set_EnableBurstCompilation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_set_EnableBurstCompilation_m2C0458F30D5BAF07E4BACA9835A6AADC0ECB90BF (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompilerOptions::set_EnableBurstSafetyChecks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_set_EnableBurstSafetyChecks_m77E05637197E1564EBF921D3360FE58FDE0AD7C7 (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Unity.Burst.BurstCompilerOptions::get_IsGlobal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_IsGlobal_m90DDCB92AAF9312ADB8B243151C3BEC19AEA0F97_inline (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompilerOptions::MaybePreventChangingOption()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_MaybePreventChangingOption_mE6E57516B93F02A8E9EA32AB565D7BC38FAEA656 (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, const RuntimeMethod* method);
// System.Void Unity.Jobs.LowLevel.Unsafe.JobsUtility::set_JobCompilerEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobsUtility_set_JobCompilerEnabled_m4B38B836F8D2CBD730C1300E9D5FE04383DA54AC (bool ___value0, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompilerOptions::OnOptionsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_OnOptionsChanged_m48DD95130188EC8554576E89025CBCEA71FDC731 (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompilerOptions::MaybeTriggerRecompilation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_MaybeTriggerRecompilation_mC4F331073D5318A674AC176209A3ADE68756F79C (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.MemberInfo::op_Equality(System.Reflection.MemberInfo,System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemberInfo_op_Equality_mE9FA8D3493294DDF178B8E8150E76C94F1CD03A9 (MemberInfo_t * ___left0, MemberInfo_t * ___right1, const RuntimeMethod* method);
// Unity.Burst.BurstCompileAttribute Unity.Burst.BurstCompilerOptions::GetBurstCompileAttribute(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * BurstCompilerOptions_GetBurstCompileAttribute_mF55455921BF75D6447C87EB4F5B3E8CA69DC47A6 (MemberInfo_t * ___memberInfo0, const RuntimeMethod* method);
// System.String[] Unity.Burst.BurstCompileAttribute::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* BurstCompileAttribute_get_Options_mCCF112092D275D1B185095A36AF49FD5096F2EE5_inline (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Contains<System.String>(System.Collections.Generic.IEnumerable`1<!!0>,!!0)
inline bool Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5 (RuntimeObject* ___source0, String_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, String_t*, const RuntimeMethod*))Enumerable_Contains_TisRuntimeObject_mD323B6AB5F5CE44D9FECAA37D9134CBA42586B45_gshared)(___source0, ___value1, method);
}
// !!0 System.Reflection.CustomAttributeExtensions::GetCustomAttribute<Unity.Burst.BurstCompileAttribute>(System.Reflection.MemberInfo)
inline BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * CustomAttributeExtensions_GetCustomAttribute_TisBurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1_m9B8B3869855183A66586F91FE26BFB947E0A919F (MemberInfo_t * ___element0, const RuntimeMethod* method)
{
	return ((  BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * (*) (MemberInfo_t *, const RuntimeMethod*))CustomAttributeExtensions_GetCustomAttribute_TisRuntimeObject_mCFC7690084D2E45FB609A39D2DD9C11B0195D052_gshared)(___element0, method);
}
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t * Type_GetProperty_mF9677E24A43BADE21DE5E45E0BD0CB881BAB4C89 (Type_t * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Boolean System.Reflection.PropertyInfo::op_Inequality(System.Reflection.PropertyInfo,System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Inequality_mB4C6169DC83174E7712055F0973BC55469AD9962 (PropertyInfo_t * ___left0, PropertyInfo_t * ___right1, const RuntimeMethod* method);
// System.Object System.Reflection.PropertyInfo::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PropertyInfo_GetValue_m2E9CA9EBD5971D3A30DDCB07A720A978AB9E18AE (PropertyInfo_t * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void Unity.Burst.BurstCompileAttribute::.ctor(Unity.Burst.FloatPrecision,Unity.Burst.FloatMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute__ctor_m17500B823B3C461F030F57D6D0F32C5C3030113E (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, int32_t ___floatPrecision0, int32_t ___floatMode1, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompileAttribute::set_CompileSynchronously(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_CompileSynchronously_mB83EBCE3125C95CB2A5B429B07F66F2310056025_inline (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, bool ___value0, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_ToArray_mA737986DE6389E9DD8FA8E3D4E222DE4DA34958D_gshared)(__this, method);
}
// System.Void Unity.Burst.BurstCompileAttribute::set_Options(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_Options_m5BE030E2894C9B5E0A27AEF354D4896455B62B2B_inline (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method);
// System.Boolean Unity.Burst.BurstCompilerOptions::TryGetAttribute(System.Reflection.MemberInfo,Unity.Burst.BurstCompileAttribute&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_TryGetAttribute_m44A001B2ADE9900BED57B44CAA316FCEC47CF75C (MemberInfo_t * ___member0, BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 ** ___attribute1, bool ___isForEagerCompilation2, const RuntimeMethod* method);
// System.Action Unity.Burst.BurstCompilerOptions::get_OptionsChanged()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * BurstCompilerOptions_get_OptionsChanged_mD6BBC85F20B1732F0C570A7994AC5BDF9AE164EE_inline (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.String[] System.Environment::GetCommandLineArgs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Environment_GetCommandLineArgs_m12F7E5CE17BB9D41283D95ADF989C4F75463C329 (const RuntimeMethod* method);
// System.Boolean Unity.Burst.BurstCompilerOptions::CheckIsSecondaryUnityProcess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_CheckIsSecondaryUnityProcess_m77FCD475806E03272F87453B5C969BB5DAD9F3C7 (const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void Unity.Burst.LowLevel.BurstCompilerService::Log(System.Void*,Unity.Burst.LowLevel.BurstCompilerService/BurstLogType,System.Byte*,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerService_Log_m8B72F315B8A8DCCB6ED31880F5B4ECD0C516DE5E (void* ___userData0, int32_t ___logType1, uint8_t* ___message2, uint8_t* ___filename3, int32_t ___lineNumber4, const RuntimeMethod* method);
// System.Void UnityEngine.Hash128::.ctor(System.UInt64,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Hash128__ctor_m7958BAB68961412F06FACF1F09E04B4CEAE8FB9D (Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A * __this, uint64_t ___u64_00, uint64_t ___u64_11, const RuntimeMethod* method);
// System.Void* Unity.Burst.LowLevel.BurstCompilerService::GetOrCreateSharedMemory(UnityEngine.Hash128&,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompilerService_GetOrCreateSharedMemory_m861188CFBCAC0D14519A4E88D5485ACADA2C0858 (Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A * ___key0, uint32_t ___size_of1, uint32_t ___alignment2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int64,System.Type>::.ctor()
inline void Dictionary_2__ctor_mEDDD9C0EDBF84B20D8EEC0295487B7446286353C (Dictionary_2_t9FC6861E09F23C7035FD1CE506D4404DCE331C9D * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9FC6861E09F23C7035FD1CE506D4404DCE331C9D *, const RuntimeMethod*))Dictionary_2__ctor_m8333BBB4DDAE242DCF8984A6A5D7A2E469405BDB_gshared)(__this, method);
}
// System.Void Unity.Burst.Intrinsics.v256::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void v256__ctor_m131416277C0DD410026F90E62B0CFB8EFCA41800 (v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B * __this, int32_t ___v0, const RuntimeMethod* method);
// System.Void Unity.Burst.Intrinsics.v256::.ctor(Unity.Burst.Intrinsics.v128,Unity.Burst.Intrinsics.v128)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void v256__ctor_m2D463F2D0C0ECD694FA88E860B35D939D3C926CE (v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B * __this, v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  ___lo0, v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  ___hi1, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompiler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8A58E04D35F7771D6874AB616403052A380F53A5 (U3CU3Ec_t8736AFE52E7CAC14A352C931FBA1411A8CC6CE41 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Burst.BurstCompiler/BurstCompilerHelper::IsBurstEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerHelper_IsBurstEnabled_mC1B24958FFA3F3D5360E1F933CE0900E586B2A5D (const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompiler/BurstCompilerHelper::DiscardedMethod(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerHelper_DiscardedMethod_mAB545E9EE144EE8946BA1025C50B0A62CC126FBC (bool* ___value0, const RuntimeMethod* method);
// System.Void Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsBurstEnabledDelegate__ctor_m1C0571B67EF7C95E4536E122295FA8E3851ED0ED (IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Boolean Unity.Burst.BurstCompiler/BurstCompilerHelper::IsCompiledByBurst(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerHelper_IsCompiledByBurst_m8CC7FEC39A7D2459CD8AAA3DC71AC04ACEC7BFFC (Delegate_t * ___del0, const RuntimeMethod* method);
// Unity.Burst.Intrinsics.v256 Unity.Burst.Intrinsics.X86/Avx::mm256_load_ps(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  Avx_mm256_load_ps_m9F969F2850AEA8EBFED439CF72282F5D05814CD5 (void* ___ptr0, const RuntimeMethod* method);
// System.Void Unity.Burst.Intrinsics.X86/Avx::mm256_store_ps(System.Void*,Unity.Burst.Intrinsics.v256)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx_mm256_store_ps_m06AF52B4C23B00F73AA7043BA66589DE47EDAFC8 (void* ___ptr0, v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  ___val1, const RuntimeMethod* method);
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse2::xor_si128(Unity.Burst.Intrinsics.v128,Unity.Burst.Intrinsics.v128)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  Sse2_xor_si128_m39D242F47BD0ECDFD91FBFFC6156600DB951E7EF (v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  ___a0, v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  ___b1, const RuntimeMethod* method);
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse2::add_epi64(Unity.Burst.Intrinsics.v128,Unity.Burst.Intrinsics.v128)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  Sse2_add_epi64_m19EC8F64094DF905A38555C5958DAEF5B21B1B30 (v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  ___a0, v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  ___b1, const RuntimeMethod* method);
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse2::mul_epu32(Unity.Burst.Intrinsics.v128,Unity.Burst.Intrinsics.v128)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  Sse2_mul_epu32_mC6068D2FEA476DDF0E8B20F77A62103C087CFD94 (v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  ___a0, v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  ___b1, const RuntimeMethod* method);
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse2::slli_epi64(Unity.Burst.Intrinsics.v128,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  Sse2_slli_epi64_m9018953E5C9EA588429BB8E874386D6326B447C4 (v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  ___a0, int32_t ___imm81, const RuntimeMethod* method);
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse2::srli_epi64(Unity.Burst.Intrinsics.v128,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  Sse2_srli_epi64_mF545E6832B728082018367263CEABA1A94386300 (v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  ___a0, int32_t ___imm81, const RuntimeMethod* method);
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse2::shuffle_epi32(Unity.Burst.Intrinsics.v128,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  Sse2_shuffle_epi32_m9BB1CB9399A68A1D1902ED506B0AF962945E49B4 (v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  ___a0, int32_t ___imm81, const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
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
// System.Void Unity.Burst.CompilerServices.AssumeRangeAttribute::.ctor(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssumeRangeAttribute__ctor_m1FE1F4857280AE42B275E543E1424E5B44C455CC (AssumeRangeAttribute_t9CB4051727958D8EC81907FC2D1E8A4672DBA1B1 * __this, int64_t ___min0, int64_t ___max1, const RuntimeMethod* method)
{
	{
		// public AssumeRangeAttribute(long min, long max) { }
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		// public AssumeRangeAttribute(long min, long max) { }
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
// System.Void Unity.Burst.BurstCompileAttribute::set_FloatMode(Unity.Burst.FloatMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatMode_m87B9F1667557E4A62D1564F6BBCE9C0DD983784F (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public FloatMode FloatMode { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CFloatModeU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Unity.Burst.BurstCompileAttribute::set_FloatPrecision(Unity.Burst.FloatPrecision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatPrecision_mF892081799E15A1C1ED18CA8B4B2733F0D5DC4B3 (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public FloatPrecision FloatPrecision { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CFloatPrecisionU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Unity.Burst.BurstCompileAttribute::set_CompileSynchronously(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_CompileSynchronously_mB83EBCE3125C95CB2A5B429B07F66F2310056025 (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool CompileSynchronously { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CCompileSynchronouslyU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.String[] Unity.Burst.BurstCompileAttribute::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* BurstCompileAttribute_get_Options_mCCF112092D275D1B185095A36AF49FD5096F2EE5 (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, const RuntimeMethod* method)
{
	{
		// internal string[] Options { get; set; }
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_U3COptionsU3Ek__BackingField_3();
		return L_0;
	}
}
// System.Void Unity.Burst.BurstCompileAttribute::set_Options(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_Options_m5BE030E2894C9B5E0A27AEF354D4896455B62B2B (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// internal string[] Options { get; set; }
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_U3COptionsU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void Unity.Burst.BurstCompileAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute__ctor_m75F0EF699FB9E5AD644F26B04ACE674ED2C81628 (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, const RuntimeMethod* method)
{
	{
		// public BurstCompileAttribute()
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstCompileAttribute::.ctor(Unity.Burst.FloatPrecision,Unity.Burst.FloatMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompileAttribute__ctor_m17500B823B3C461F030F57D6D0F32C5C3030113E (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, int32_t ___floatPrecision0, int32_t ___floatMode1, const RuntimeMethod* method)
{
	{
		// public BurstCompileAttribute(FloatPrecision floatPrecision, FloatMode floatMode)
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		// FloatMode = floatMode;
		int32_t L_0 = ___floatMode1;
		BurstCompileAttribute_set_FloatMode_m87B9F1667557E4A62D1564F6BBCE9C0DD983784F_inline(__this, L_0, /*hidden argument*/NULL);
		// FloatPrecision = floatPrecision;
		int32_t L_1 = ___floatPrecision0;
		BurstCompileAttribute_set_FloatPrecision_mF892081799E15A1C1ED18CA8B4B2733F0D5DC4B3_inline(__this, L_1, /*hidden argument*/NULL);
		// }
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
// System.Boolean Unity.Burst.BurstCompiler::get_IsEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompiler_get_IsEnabled_m78D2E2B6B47666674CD5D93E5610C7BD0F1CDD6E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static bool IsEnabled => _IsEnabled && BurstCompilerHelper.IsBurstGenerated;
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		bool L_0 = ((BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var))->get__IsEnabled_0();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_il2cpp_TypeInfo_var);
		bool L_1 = ((BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_il2cpp_TypeInfo_var))->get_IsBurstGenerated_1();
		return L_1;
	}

IL_000d:
	{
		return (bool)0;
	}
}
// System.Boolean Unity.Burst.BurstCompiler::IsMatchingMethod(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompiler_IsMatchingMethod_m6F82F6AEA6C98B39B1F397BC1769AA1EE8CBCD39 (MethodInfo_t * ___burstMethod0, MethodInfo_t * ___otherMethod1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* V_0 = NULL;
	ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (burstMethod.ReturnType != otherMethod.ReturnType)
		MethodInfo_t * L_0 = ___burstMethod0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = VirtFuncInvoker0< Type_t * >::Invoke(42 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_0);
		MethodInfo_t * L_2 = ___otherMethod1;
		NullCheck(L_2);
		Type_t * L_3;
		L_3 = VirtFuncInvoker0< Type_t * >::Invoke(42 /* System.Type System.Reflection.MethodInfo::get_ReturnType() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// var burstParameters = burstMethod.GetParameters();
		MethodInfo_t * L_5 = ___burstMethod0;
		NullCheck(L_5);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_6;
		L_6 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(18 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_5);
		V_0 = L_6;
		// var otherParameters = otherMethod.GetParameters();
		MethodInfo_t * L_7 = ___otherMethod1;
		NullCheck(L_7);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_8;
		L_8 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(18 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_7);
		V_1 = L_8;
		// if (burstParameters.Length != otherParameters.Length)
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_9 = V_0;
		NullCheck(L_9);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_10 = V_1;
		NullCheck(L_10);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_002d;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_002d:
	{
		// for (var i = 0; i < burstParameters.Length; i++)
		V_2 = 0;
		goto IL_004e;
	}

IL_0031:
	{
		// if (burstParameters[i].ParameterType != otherParameters[i].ParameterType)
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_11 = V_0;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		Type_t * L_15;
		L_15 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_14);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_16 = V_1;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		int32_t L_18 = L_17;
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		Type_t * L_20;
		L_20 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_19);
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Type_op_Inequality_m6DDC5E923203A79BF505F9275B694AD3FAA36DB0(L_15, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_004a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_004a:
	{
		// for (var i = 0; i < burstParameters.Length; i++)
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_004e:
	{
		// for (var i = 0; i < burstParameters.Length; i++)
		int32_t L_23 = V_2;
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_24 = V_0;
		NullCheck(L_24);
		if ((((int32_t)L_23) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))))))
		{
			goto IL_0031;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Void* Unity.Burst.BurstCompiler::CompileUnsafeStaticMethod(System.RuntimeMethodHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompiler_CompileUnsafeStaticMethod_m01C0A30458F77CC44F563C60B3EF404810BED751 (RuntimeMethodHandle_t8974037C4FE5F6C3AE7D3731057CDB2891A21C9A  ___handle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FakeDelegate_t5C32095DECA16B795748EAE137988C071A80C62C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MethodInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26A59A679F5CBAD26A0CB62B57E491F8D4F6823D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59E5F752398B542B254DD58302DEB9067AA9FC1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7A66F857F6E3FCCC482964755DB79017BF35DD2);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t * V_0 = NULL;
	MethodInfo_t * V_1 = NULL;
	Type_t * V_2 = NULL;
	Delegate_t * V_3 = NULL;
	MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* V_4 = NULL;
	int32_t V_5 = 0;
	MethodInfo_t * V_6 = NULL;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_7 = NULL;
	Type_t * V_8 = NULL;
	void* V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (!IsEnabled)
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = BurstCompiler_get_IsEnabled_m78D2E2B6B47666674CD5D93E5610C7BD0F1CDD6E(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return null;
		return (void*)(((uintptr_t)0));
	}

IL_000a:
	{
		// if (handle.Value == IntPtr.Zero)
		intptr_t L_1;
		L_1 = RuntimeMethodHandle_get_Value_m51CC0BBFB22497E874A2B5A36346C79A0055281F_inline((RuntimeMethodHandle_t8974037C4FE5F6C3AE7D3731057CDB2891A21C9A *)(&___handle0), /*hidden argument*/NULL);
		bool L_2;
		L_2 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// throw new ArgumentNullException(nameof(handle));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFFE3A1B73CD7FC81540FBBE737435B0A887629D5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_CompileUnsafeStaticMethod_m01C0A30458F77CC44F563C60B3EF404810BED751_RuntimeMethod_var)));
	}

IL_0028:
	{
		// var burstMethod = (MethodInfo)MethodBase.GetMethodFromHandle(handle);
		RuntimeMethodHandle_t8974037C4FE5F6C3AE7D3731057CDB2891A21C9A  L_4 = ___handle0;
		MethodBase_t * L_5;
		L_5 = MethodBase_GetMethodFromHandle_mFF986FE06E17C3D4E02D437DF6C87C62AAB7B59E(L_4, /*hidden argument*/NULL);
		V_0 = ((MethodInfo_t *)CastclassClass((RuntimeObject*)L_5, MethodInfo_t_il2cpp_TypeInfo_var));
		// MethodInfo managedMethod = null;
		V_1 = (MethodInfo_t *)NULL;
		// foreach (var method in burstMethod.DeclaringType.GetMethods())
		MethodInfo_t * L_6 = V_0;
		NullCheck(L_6);
		Type_t * L_7;
		L_7 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_6);
		NullCheck(L_7);
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_8;
		L_8 = Type_GetMethods_m5412C161832F16B9CFE8F201F72E11AF0C61D91C(L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		V_5 = 0;
		goto IL_0082;
	}

IL_0048:
	{
		// foreach (var method in burstMethod.DeclaringType.GetMethods())
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_9 = V_4;
		int32_t L_10 = V_5;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		MethodInfo_t * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_6 = L_12;
		// if (method.Name != (burstMethod.Name + "$BurstManaged"))
		MethodInfo_t * L_13 = V_6;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_13);
		MethodInfo_t * L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
		String_t* L_17;
		L_17 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_16, _stringLiteral59E5F752398B542B254DD58302DEB9067AA9FC1D, /*hidden argument*/NULL);
		bool L_18;
		L_18 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_14, L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_007c;
		}
	}
	{
		// if (IsMatchingMethod(burstMethod, method))
		MethodInfo_t * L_19 = V_0;
		MethodInfo_t * L_20 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = BurstCompiler_IsMatchingMethod_m6F82F6AEA6C98B39B1F397BC1769AA1EE8CBCD39(L_19, L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_007c;
		}
	}
	{
		// managedMethod = method;
		MethodInfo_t * L_22 = V_6;
		V_1 = L_22;
		// break;
		goto IL_008a;
	}

IL_007c:
	{
		int32_t L_23 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0082:
	{
		// foreach (var method in burstMethod.DeclaringType.GetMethods())
		int32_t L_24 = V_5;
		MethodInfoU5BU5D_t86AA7E1AF11D62BAE3189F25907B252596FA627E* L_25 = V_4;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))))
		{
			goto IL_0048;
		}
	}

IL_008a:
	{
		// if (managedMethod == null)
		MethodInfo_t * L_26 = V_1;
		bool L_27;
		L_27 = MethodInfo_op_Equality_mC78C53FBCEF409A2EBD689D6781D23C62E6161F2(L_26, (MethodInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00a4;
		}
	}
	{
		// throw new NullReferenceException($"Could not find matching method for '{burstMethod}'");
		MethodInfo_t * L_28 = V_0;
		String_t* L_29;
		L_29 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3BDA11ACB4A5DE34152226FE00D113C15333848A)), L_28, /*hidden argument*/NULL);
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_30 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var)));
		NullReferenceException__ctor_mF1733893E10358B400E817297D686A48AB3FB7B3(L_30, L_29, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_CompileUnsafeStaticMethod_m01C0A30458F77CC44F563C60B3EF404810BED751_RuntimeMethod_var)));
	}

IL_00a4:
	{
		// Type delegateType = null;
		V_2 = (Type_t *)NULL;
		// foreach (var nestedType in burstMethod.DeclaringType.GetNestedTypes())
		MethodInfo_t * L_31 = V_0;
		NullCheck(L_31);
		Type_t * L_32;
		L_32 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_31);
		NullCheck(L_32);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_33;
		L_33 = Type_GetNestedTypes_m12C701CF5F7610E39C858617DE72B81900CBBA88(L_32, /*hidden argument*/NULL);
		V_7 = L_33;
		V_5 = 0;
		goto IL_010f;
	}

IL_00b8:
	{
		// foreach (var nestedType in burstMethod.DeclaringType.GetNestedTypes())
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_34 = V_7;
		int32_t L_35 = V_5;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		Type_t * L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		V_8 = L_37;
		// if (!nestedType.Name.StartsWith(burstMethod.Name + "_"))
		Type_t * L_38 = V_8;
		NullCheck(L_38);
		String_t* L_39;
		L_39 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_38);
		MethodInfo_t * L_40 = V_0;
		NullCheck(L_40);
		String_t* L_41;
		L_41 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_40);
		String_t* L_42;
		L_42 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_41, _stringLiteral50639CAD49418C7B223CC529395C0E2A3892501C, /*hidden argument*/NULL);
		NullCheck(L_39);
		bool L_43;
		L_43 = String_StartsWith_mDE2FF98CAFFD13F88EDEB6C40158DDF840BFCF12(L_39, L_42, /*hidden argument*/NULL);
		if (!L_43)
		{
			goto IL_0109;
		}
	}
	{
		// if (!nestedType.Name.EndsWith("$PostfixBurstDelegate"))
		Type_t * L_44 = V_8;
		NullCheck(L_44);
		String_t* L_45;
		L_45 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_44);
		NullCheck(L_45);
		bool L_46;
		L_46 = String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE(L_45, _stringLiteral26A59A679F5CBAD26A0CB62B57E491F8D4F6823D, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_0109;
		}
	}
	{
		// if (IsMatchingMethod(burstMethod, nestedType.GetMethod("Invoke")))
		MethodInfo_t * L_47 = V_0;
		Type_t * L_48 = V_8;
		NullCheck(L_48);
		MethodInfo_t * L_49;
		L_49 = Type_GetMethod_mDD47332AAF3036AAFC4C6626A999A452E7143DCF(L_48, _stringLiteralD7A66F857F6E3FCCC482964755DB79017BF35DD2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = BurstCompiler_IsMatchingMethod_m6F82F6AEA6C98B39B1F397BC1769AA1EE8CBCD39(L_47, L_49, /*hidden argument*/NULL);
		if (!L_50)
		{
			goto IL_0109;
		}
	}
	{
		// delegateType = nestedType;
		Type_t * L_51 = V_8;
		V_2 = L_51;
		// break;
		goto IL_0117;
	}

IL_0109:
	{
		int32_t L_52 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_52, (int32_t)1));
	}

IL_010f:
	{
		// foreach (var nestedType in burstMethod.DeclaringType.GetNestedTypes())
		int32_t L_53 = V_5;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_54 = V_7;
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length))))))
		{
			goto IL_00b8;
		}
	}

IL_0117:
	{
		// if (delegateType == null)
		Type_t * L_55 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		bool L_56;
		L_56 = Type_op_Equality_mA438719A1FDF103C7BBBB08AEF564E7FAEEA0046(L_55, (Type_t *)NULL, /*hidden argument*/NULL);
		if (!L_56)
		{
			goto IL_0131;
		}
	}
	{
		// throw new NullReferenceException($"Could not find the delegate type '{delegateType}'");
		Type_t * L_57 = V_2;
		String_t* L_58;
		L_58 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD60EE3ABB89D0E9B73BC076558F7AB2B1B1D5F05)), L_57, /*hidden argument*/NULL);
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_59 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var)));
		NullReferenceException__ctor_mF1733893E10358B400E817297D686A48AB3FB7B3(L_59, L_58, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_59, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_CompileUnsafeStaticMethod_m01C0A30458F77CC44F563C60B3EF404810BED751_RuntimeMethod_var)));
	}

IL_0131:
	{
		// var managedFallbackDelegate = Delegate.CreateDelegate(delegateType, managedMethod);
		Type_t * L_60 = V_2;
		MethodInfo_t * L_61 = V_1;
		Delegate_t * L_62;
		L_62 = Delegate_CreateDelegate_m4B6F4C6A4A3C1B2C55CD01FEA15E0C801CADCB24(L_60, L_61, /*hidden argument*/NULL);
		V_3 = L_62;
	}

IL_0139:
	try
	{ // begin try (depth: 1)
		// return Compile(new FakeDelegate(burstMethod), burstMethod, isFunctionPointer: true, managedFallbackDelegateObj: managedFallbackDelegate);
		MethodInfo_t * L_63 = V_0;
		FakeDelegate_t5C32095DECA16B795748EAE137988C071A80C62C * L_64 = (FakeDelegate_t5C32095DECA16B795748EAE137988C071A80C62C *)il2cpp_codegen_object_new(FakeDelegate_t5C32095DECA16B795748EAE137988C071A80C62C_il2cpp_TypeInfo_var);
		FakeDelegate__ctor_m3021D19ED6A1F08575FED25932877F4586A57EC0(L_64, L_63, /*hidden argument*/NULL);
		MethodInfo_t * L_65 = V_0;
		Delegate_t * L_66 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		void* L_67;
		L_67 = BurstCompiler_Compile_mECFF990384A362035C9B5833D0F621CE4D9147ED(L_64, L_65, (bool)1, L_66, /*hidden argument*/NULL);
		V_9 = (void*)L_67;
		goto IL_0174;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_014b;
		}
		throw e;
	}

CATCH_014b:
	{ // begin catch(UnityEngine.UnityException)
		{
			// if (exception.Message.Contains("CompileAsyncDelegateMethod can only be called from the main thread"))
			NullCheck(((UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 *)IL2CPP_GET_ACTIVE_EXCEPTION(UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 *)));
			String_t* L_68;
			L_68 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, ((UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 *)IL2CPP_GET_ACTIVE_EXCEPTION(UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 *)));
			NullCheck(L_68);
			bool L_69;
			L_69 = String_Contains_mA26BDCCE8F191E8965EB8EEFC18BB4D0F85A075A(L_68, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9471CB5EE8443E0C9C2FD0C1DF0F52C2F5CD9927)), /*hidden argument*/NULL);
			if (!L_69)
			{
				goto IL_0172;
			}
		}

IL_015c:
		{
			// GCHandle.Alloc(managedFallbackDelegate);
			Delegate_t * L_70 = V_3;
			GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_71;
			L_71 = GCHandle_Alloc_m937829FAD1C69F168CF045B9406228AC9F8B9389(L_70, /*hidden argument*/NULL);
			// return (void*)Marshal.GetFunctionPointerForDelegate(managedFallbackDelegate);
			Delegate_t * L_72 = V_3;
			IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var)));
			intptr_t L_73;
			L_73 = Marshal_GetFunctionPointerForDelegate_m7C6D54EA9829C877C46D2A1CD4D8D0BB4702C795(L_72, /*hidden argument*/NULL);
			void* L_74;
			L_74 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_73, /*hidden argument*/NULL);
			V_9 = (void*)L_74;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0174;
		}

IL_0172:
		{
			// throw;
			IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_CompileUnsafeStaticMethod_m01C0A30458F77CC44F563C60B3EF404810BED751_RuntimeMethod_var)));
		}
	} // end catch (depth: 1)

IL_0174:
	{
		// }
		void* L_75 = V_9;
		return (void*)(L_75);
	}
}
// System.Void* Unity.Burst.BurstCompiler::Compile(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompiler_Compile_m299CF526298E2A693F510F036D3604C8E8BF7CB6 (RuntimeObject * ___delegateObj0, bool ___isFunctionPointer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t * V_0 = NULL;
	{
		// if (!(delegateObj is Delegate)) throw new ArgumentException("object instance must be a System.Delegate", nameof(delegateObj));
		RuntimeObject * L_0 = ___delegateObj0;
		if (((Delegate_t *)IsInstClass((RuntimeObject*)L_0, Delegate_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0018;
		}
	}
	{
		// if (!(delegateObj is Delegate)) throw new ArgumentException("object instance must be a System.Delegate", nameof(delegateObj));
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_1 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC13C026731BF574915EF781C5CC709D179D7F4C7)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AC6E2C9E3B0B89CE7829E6FE9748CF10C25C407)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_Compile_m299CF526298E2A693F510F036D3604C8E8BF7CB6_RuntimeMethod_var)));
	}

IL_0018:
	{
		// var delegateMethod = (Delegate)delegateObj;
		RuntimeObject * L_2 = ___delegateObj0;
		V_0 = ((Delegate_t *)CastclassClass((RuntimeObject*)L_2, Delegate_t_il2cpp_TypeInfo_var));
		// return Compile(delegateMethod, delegateMethod.Method, isFunctionPointer);
		Delegate_t * L_3 = V_0;
		Delegate_t * L_4 = V_0;
		NullCheck(L_4);
		MethodInfo_t * L_5;
		L_5 = Delegate_get_Method_m8C2479250311F4BEA75F013CD3045F5558DE2227(L_4, /*hidden argument*/NULL);
		bool L_6 = ___isFunctionPointer1;
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		void* L_7;
		L_7 = BurstCompiler_Compile_mECFF990384A362035C9B5833D0F621CE4D9147ED(L_3, L_5, L_6, NULL, /*hidden argument*/NULL);
		return (void*)(L_7);
	}
}
// System.Void* Unity.Burst.BurstCompiler::Compile(System.Object,System.Reflection.MethodInfo,System.Boolean,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* BurstCompiler_Compile_mECFF990384A362035C9B5833D0F621CE4D9147ED (RuntimeObject * ___delegateObj0, MethodInfo_t * ___methodInfo1, bool ___isFunctionPointer2, RuntimeObject * ___managedFallbackDelegateObj3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_All_TisAttribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71_m3E2C346102F90F2D173E0C2D3192B4821E7E9648_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2__ctor_m4D123D75E9CD917285F99983FCA192BC11962ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tC8249329D9436908CCFC615B65B1169FA16DB8E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CCompileU3Eb__14_0_mEE4C1F4096F86162688058F7DCC5765EB351F31F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8736AFE52E7CAC14A352C931FBA1411A8CC6CE41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4BCE0A6A775CEDDE2F72825B7D364029086B76D3);
		s_Il2CppMethodInitialized = true;
	}
	void* V_0 = NULL;
	Delegate_t * V_1 = NULL;
	Func_2_tC8249329D9436908CCFC615B65B1169FA16DB8E2 * G_B9_0 = NULL;
	RuntimeObject* G_B9_1 = NULL;
	Func_2_tC8249329D9436908CCFC615B65B1169FA16DB8E2 * G_B8_0 = NULL;
	RuntimeObject* G_B8_1 = NULL;
	{
		// if (delegateObj == null) throw new ArgumentNullException(nameof(delegateObj));
		RuntimeObject * L_0 = ___delegateObj0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (delegateObj == null) throw new ArgumentNullException(nameof(delegateObj));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AC6E2C9E3B0B89CE7829E6FE9748CF10C25C407)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_Compile_mECFF990384A362035C9B5833D0F621CE4D9147ED_RuntimeMethod_var)));
	}

IL_000e:
	{
		// if (!methodInfo.IsStatic)
		MethodInfo_t * L_2 = ___methodInfo1;
		NullCheck(L_2);
		bool L_3;
		L_3 = MethodBase_get_IsStatic_mDFDF51EDFE5DBDD5FE942564A1F56E3C7E3DE43F(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0027;
		}
	}
	{
		// throw new InvalidOperationException($"The method `{methodInfo}` must be static. Instance methods are not supported");
		MethodInfo_t * L_4 = ___methodInfo1;
		String_t* L_5;
		L_5 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral85F734AB4B70F85FBE3AD2752128D17420A8753B)), L_4, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_6 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_6, L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_Compile_mECFF990384A362035C9B5833D0F621CE4D9147ED_RuntimeMethod_var)));
	}

IL_0027:
	{
		// if (methodInfo.IsGenericMethod)
		MethodInfo_t * L_7 = ___methodInfo1;
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtFuncInvoker0< bool >::Invoke(27 /* System.Boolean System.Reflection.MethodBase::get_IsGenericMethod() */, L_7);
		if (!L_8)
		{
			goto IL_0040;
		}
	}
	{
		// throw new InvalidOperationException($"The method `{methodInfo}` must be a non-generic method");
		MethodInfo_t * L_9 = ___methodInfo1;
		String_t* L_10;
		L_10 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7AD6BA121E4A8420E000A0297BE2958650057EEB)), L_9, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_11 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_Compile_mECFF990384A362035C9B5833D0F621CE4D9147ED_RuntimeMethod_var)));
	}

IL_0040:
	{
		// if (isFunctionPointer &&
		//     methodInfo.GetCustomAttributes().All(s => s.GetType().Name != "MonoPInvokeCallbackAttribute"))
		bool L_12 = ___isFunctionPointer2;
		if (!L_12)
		{
			goto IL_007f;
		}
	}
	{
		MethodInfo_t * L_13 = ___methodInfo1;
		RuntimeObject* L_14;
		L_14 = CustomAttributeExtensions_GetCustomAttributes_m9269C5EF7E5168EFDCE4D620B8FA890DF6B3E65B(L_13, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t8736AFE52E7CAC14A352C931FBA1411A8CC6CE41_il2cpp_TypeInfo_var);
		Func_2_tC8249329D9436908CCFC615B65B1169FA16DB8E2 * L_15 = ((U3CU3Ec_t8736AFE52E7CAC14A352C931FBA1411A8CC6CE41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8736AFE52E7CAC14A352C931FBA1411A8CC6CE41_il2cpp_TypeInfo_var))->get_U3CU3E9__14_0_1();
		Func_2_tC8249329D9436908CCFC615B65B1169FA16DB8E2 * L_16 = L_15;
		G_B8_0 = L_16;
		G_B8_1 = L_14;
		if (L_16)
		{
			G_B9_0 = L_16;
			G_B9_1 = L_14;
			goto IL_0068;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t8736AFE52E7CAC14A352C931FBA1411A8CC6CE41_il2cpp_TypeInfo_var);
		U3CU3Ec_t8736AFE52E7CAC14A352C931FBA1411A8CC6CE41 * L_17 = ((U3CU3Ec_t8736AFE52E7CAC14A352C931FBA1411A8CC6CE41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8736AFE52E7CAC14A352C931FBA1411A8CC6CE41_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_tC8249329D9436908CCFC615B65B1169FA16DB8E2 * L_18 = (Func_2_tC8249329D9436908CCFC615B65B1169FA16DB8E2 *)il2cpp_codegen_object_new(Func_2_tC8249329D9436908CCFC615B65B1169FA16DB8E2_il2cpp_TypeInfo_var);
		Func_2__ctor_m4D123D75E9CD917285F99983FCA192BC11962ED4(L_18, L_17, (intptr_t)((intptr_t)U3CU3Ec_U3CCompileU3Eb__14_0_mEE4C1F4096F86162688058F7DCC5765EB351F31F_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m4D123D75E9CD917285F99983FCA192BC11962ED4_RuntimeMethod_var);
		Func_2_tC8249329D9436908CCFC615B65B1169FA16DB8E2 * L_19 = L_18;
		((U3CU3Ec_t8736AFE52E7CAC14A352C931FBA1411A8CC6CE41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8736AFE52E7CAC14A352C931FBA1411A8CC6CE41_il2cpp_TypeInfo_var))->set_U3CU3E9__14_0_1(L_19);
		G_B9_0 = L_19;
		G_B9_1 = G_B8_1;
	}

IL_0068:
	{
		bool L_20;
		L_20 = Enumerable_All_TisAttribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71_m3E2C346102F90F2D173E0C2D3192B4821E7E9648(G_B9_1, G_B9_0, /*hidden argument*/Enumerable_All_TisAttribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71_m3E2C346102F90F2D173E0C2D3192B4821E7E9648_RuntimeMethod_var);
		if (!L_20)
		{
			goto IL_007f;
		}
	}
	{
		// UnityEngine.Debug.Log($"The method `{methodInfo}` must have `MonoPInvokeCallback` attribute to be compatible with IL2CPP!");
		MethodInfo_t * L_21 = ___methodInfo1;
		String_t* L_22;
		L_22 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral4BCE0A6A775CEDDE2F72825B7D364029086B76D3, L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_22, /*hidden argument*/NULL);
	}

IL_007f:
	{
		// var isILPostProcessing = managedFallbackDelegateObj != null;
		RuntimeObject * L_23 = ___managedFallbackDelegateObj3;
		// if (!isILPostProcessing)
		if (((!(((RuntimeObject*)(RuntimeObject *)L_23) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0))
		{
			goto IL_0088;
		}
	}
	{
		// managedFallbackDelegateObj = delegateObj;
		RuntimeObject * L_24 = ___delegateObj0;
		___managedFallbackDelegateObj3 = L_24;
	}

IL_0088:
	{
		// var managedFallbackDelegateMethod = managedFallbackDelegateObj as Delegate;
		RuntimeObject * L_25 = ___managedFallbackDelegateObj3;
		V_1 = ((Delegate_t *)IsInstClass((RuntimeObject*)L_25, Delegate_t_il2cpp_TypeInfo_var));
		// if (BurstCompilerOptions.HasBurstCompileAttribute(methodInfo))
		MethodInfo_t * L_26 = ___methodInfo1;
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = BurstCompilerOptions_HasBurstCompileAttribute_m4EF62614BD8EAAF2015D0B19230E79523213FC9D(L_26, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00d2;
		}
	}
	{
		// if (Options.EnableBurstCompilation && BurstCompilerHelper.IsBurstGenerated)
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * L_28 = ((BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var))->get_Options_1();
		NullCheck(L_28);
		bool L_29;
		L_29 = BurstCompilerOptions_get_EnableBurstCompilation_mF6AF625D845CE154ADDC6B1AE86DA7103CA0EA3F_inline(L_28, /*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00bd;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_il2cpp_TypeInfo_var);
		bool L_30 = ((BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_il2cpp_TypeInfo_var))->get_IsBurstGenerated_1();
		if (!L_30)
		{
			goto IL_00bd;
		}
	}
	{
		// var delegateMethodId = Unity.Burst.LowLevel.BurstCompilerService.CompileAsyncDelegateMethod(delegateObj, string.Empty);
		RuntimeObject * L_31 = ___delegateObj0;
		String_t* L_32 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		int32_t L_33;
		L_33 = BurstCompilerService_CompileAsyncDelegateMethod_mA76294773B6989F87A291642A00722F5F5266726(L_31, L_32, /*hidden argument*/NULL);
		// function = Unity.Burst.LowLevel.BurstCompilerService.GetAsyncCompiledAsyncDelegateMethod(delegateMethodId);
		void* L_34;
		L_34 = BurstCompilerService_GetAsyncCompiledAsyncDelegateMethod_m94255AE10D8C3F7B875D69D3889E029A936DE84F(L_33, /*hidden argument*/NULL);
		V_0 = (void*)L_34;
		// }
		goto IL_00e3;
	}

IL_00bd:
	{
		// GCHandle.Alloc(managedFallbackDelegateMethod);
		Delegate_t * L_35 = V_1;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_36;
		L_36 = GCHandle_Alloc_m937829FAD1C69F168CF045B9406228AC9F8B9389(L_35, /*hidden argument*/NULL);
		// function = (void*)Marshal.GetFunctionPointerForDelegate(managedFallbackDelegateMethod);
		Delegate_t * L_37 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Marshal_tEBAFAE20369FCB1B38C49C4E27A8D8C2C4B55058_il2cpp_TypeInfo_var);
		intptr_t L_38;
		L_38 = Marshal_GetFunctionPointerForDelegate_m7C6D54EA9829C877C46D2A1CD4D8D0BB4702C795(L_37, /*hidden argument*/NULL);
		void* L_39;
		L_39 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_38, /*hidden argument*/NULL);
		V_0 = (void*)L_39;
		// }
		goto IL_00e3;
	}

IL_00d2:
	{
		// throw new InvalidOperationException($"Burst cannot compile the function pointer `{methodInfo}` because the `[BurstCompile]` attribute is missing");
		MethodInfo_t * L_40 = ___methodInfo1;
		String_t* L_41;
		L_41 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral16764301FDE0B2444923BB6CE0B9B7F315E4DB64)), L_40, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_42 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_42, L_41, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_Compile_mECFF990384A362035C9B5833D0F621CE4D9147ED_RuntimeMethod_var)));
	}

IL_00e3:
	{
		// if (function == null)
		void* L_43 = V_0;
		if ((!(((uintptr_t)L_43) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_00f9;
		}
	}
	{
		// throw new InvalidOperationException($"Burst failed to compile the function pointer `{methodInfo}`");
		MethodInfo_t * L_44 = ___methodInfo1;
		String_t* L_45;
		L_45 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral17490A99BE5820911E7C397A415006E24720C376)), L_44, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_46 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_46, L_45, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_46, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompiler_Compile_mECFF990384A362035C9B5833D0F621CE4D9147ED_RuntimeMethod_var)));
	}

IL_00f9:
	{
		// return function;
		void* L_47 = V_0;
		return (void*)(L_47);
	}
}
// System.Void Unity.Burst.BurstCompiler::DummyMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompiler_DummyMethod_mA4384B09A7D84D30557B4F94D03FE0694A486482 (const RuntimeMethod* method)
{
	{
		// private static void DummyMethod() { }
		return;
	}
}
// System.Void Unity.Burst.BurstCompiler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompiler__cctor_m6482E2EA0A198C07EB665E4A7A1E0923257D4FD8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral095255162964C376C50DCE630D972167CA5AE0D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly BurstCompilerOptions Options = new BurstCompilerOptions(true);
		BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * L_0 = (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 *)il2cpp_codegen_object_new(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var);
		BurstCompilerOptions__ctor_m8C50F25244F5A8847E6EEF94895E61B17AB7B17D(L_0, (bool)1, /*hidden argument*/NULL);
		((BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var))->set_Options_1(L_0);
		// private static readonly MethodInfo DummyMethodInfo = typeof(BurstCompiler).GetMethod(nameof(DummyMethod), BindingFlags.Static | BindingFlags.NonPublic);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		MethodInfo_t * L_3;
		L_3 = Type_GetMethod_m2DDEF37DF33D28F579BA8E03F4376B67D91F0DEB(L_2, _stringLiteral095255162964C376C50DCE630D972167CA5AE0D8, ((int32_t)40), /*hidden argument*/NULL);
		((BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var))->set_DummyMethodInfo_2(L_3);
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
// System.Void Unity.Burst.BurstCompilerOptions::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions__ctor_m8C50F25244F5A8847E6EEF94895E61B17AB7B17D (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, bool ___isGlobal0, const RuntimeMethod* method)
{
	{
		// internal BurstCompilerOptions(bool isGlobal)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// IsGlobal = isGlobal;
		bool L_0 = ___isGlobal0;
		__this->set_U3CIsGlobalU3Ek__BackingField_5(L_0);
		// EnableBurstCompilation = true;
		BurstCompilerOptions_set_EnableBurstCompilation_m2C0458F30D5BAF07E4BACA9835A6AADC0ECB90BF(__this, (bool)1, /*hidden argument*/NULL);
		// EnableBurstSafetyChecks = true;
		BurstCompilerOptions_set_EnableBurstSafetyChecks_m77E05637197E1564EBF921D3360FE58FDE0AD7C7(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Unity.Burst.BurstCompilerOptions::get_IsGlobal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_IsGlobal_m90DDCB92AAF9312ADB8B243151C3BEC19AEA0F97 (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, const RuntimeMethod* method)
{
	{
		// private bool IsGlobal { get; }
		bool L_0 = __this->get_U3CIsGlobalU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Boolean Unity.Burst.BurstCompilerOptions::get_EnableBurstCompilation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_EnableBurstCompilation_mF6AF625D845CE154ADDC6B1AE86DA7103CA0EA3F (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, const RuntimeMethod* method)
{
	{
		// get => _enableBurstCompilation;
		bool L_0 = __this->get__enableBurstCompilation_3();
		return L_0;
	}
}
// System.Void Unity.Burst.BurstCompilerOptions::set_EnableBurstCompilation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_set_EnableBurstCompilation_m2C0458F30D5BAF07E4BACA9835A6AADC0ECB90BF (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, bool ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B6_0 = 0;
	{
		// if (IsGlobal && ForceDisableBurstCompilation) value = false;
		bool L_0;
		L_0 = BurstCompilerOptions_get_IsGlobal_m90DDCB92AAF9312ADB8B243151C3BEC19AEA0F97_inline(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var);
		bool L_1 = ((BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var))->get_ForceDisableBurstCompilation_0();
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if (IsGlobal && ForceDisableBurstCompilation) value = false;
		___value0 = (bool)0;
	}

IL_0012:
	{
		// bool changed = _enableBurstCompilation != value;
		bool L_2 = __this->get__enableBurstCompilation_3();
		bool L_3 = ___value0;
		// if (changed && value)
		int32_t L_4 = ((((int32_t)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = ___value0;
		G_B4_0 = L_4;
		if (!((int32_t)((int32_t)L_4&(int32_t)L_5)))
		{
			G_B5_0 = L_4;
			goto IL_0029;
		}
	}
	{
		// MaybePreventChangingOption();
		BurstCompilerOptions_MaybePreventChangingOption_mE6E57516B93F02A8E9EA32AB565D7BC38FAEA656(__this, /*hidden argument*/NULL);
		G_B5_0 = G_B4_0;
	}

IL_0029:
	{
		// _enableBurstCompilation = value;
		bool L_6 = ___value0;
		__this->set__enableBurstCompilation_3(L_6);
		// if (IsGlobal)
		bool L_7;
		L_7 = BurstCompilerOptions_get_IsGlobal_m90DDCB92AAF9312ADB8B243151C3BEC19AEA0F97_inline(__this, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
		if (!L_7)
		{
			G_B7_0 = G_B5_0;
			goto IL_0044;
		}
	}
	{
		// JobsUtility.JobCompilerEnabled = value;
		bool L_8 = ___value0;
		JobsUtility_set_JobCompilerEnabled_m4B38B836F8D2CBD730C1300E9D5FE04383DA54AC(L_8, /*hidden argument*/NULL);
		// BurstCompiler._IsEnabled = value;
		bool L_9 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var);
		((BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompiler_t99F34BDE62961CF5A5ACEFBB6522F1343BF085D2_il2cpp_TypeInfo_var))->set__IsEnabled_0(L_9);
		G_B7_0 = G_B6_0;
	}

IL_0044:
	{
		// if (changed)
		if (!G_B7_0)
		{
			goto IL_004c;
		}
	}
	{
		// OnOptionsChanged();
		BurstCompilerOptions_OnOptionsChanged_m48DD95130188EC8554576E89025CBCEA71FDC731(__this, /*hidden argument*/NULL);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstCompilerOptions::set_EnableBurstSafetyChecks(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_set_EnableBurstSafetyChecks_m77E05637197E1564EBF921D3360FE58FDE0AD7C7 (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, bool ___value0, const RuntimeMethod* method)
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		// bool changed = _enableBurstSafetyChecks != value;
		bool L_0 = __this->get__enableBurstSafetyChecks_4();
		bool L_1 = ___value0;
		// if (changed)
		int32_t L_2 = ((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		G_B1_0 = L_2;
		if (!L_2)
		{
			G_B2_0 = L_2;
			goto IL_0015;
		}
	}
	{
		// MaybePreventChangingOption();
		BurstCompilerOptions_MaybePreventChangingOption_mE6E57516B93F02A8E9EA32AB565D7BC38FAEA656(__this, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
	}

IL_0015:
	{
		// _enableBurstSafetyChecks = value;
		bool L_3 = ___value0;
		__this->set__enableBurstSafetyChecks_4(L_3);
		// if (changed)
		if (!G_B2_0)
		{
			goto IL_002a;
		}
	}
	{
		// OnOptionsChanged();
		BurstCompilerOptions_OnOptionsChanged_m48DD95130188EC8554576E89025CBCEA71FDC731(__this, /*hidden argument*/NULL);
		// MaybeTriggerRecompilation();
		BurstCompilerOptions_MaybeTriggerRecompilation_mC4F331073D5318A674AC176209A3ADE68756F79C(__this, /*hidden argument*/NULL);
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Action Unity.Burst.BurstCompilerOptions::get_OptionsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * BurstCompilerOptions_get_OptionsChanged_mD6BBC85F20B1732F0C570A7994AC5BDF9AE164EE (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, const RuntimeMethod* method)
{
	{
		// internal Action OptionsChanged { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_U3COptionsChangedU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Boolean Unity.Burst.BurstCompilerOptions::TryGetAttribute(System.Reflection.MemberInfo,Unity.Burst.BurstCompileAttribute&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_TryGetAttribute_m44A001B2ADE9900BED57B44CAA316FCEC47CF75C (MemberInfo_t * ___member0, BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 ** ___attribute1, bool ___isForEagerCompilation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral402003B86DB2ADAB276C8ADBD26264B6C126B492);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B7_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B6_0 = NULL;
	int32_t G_B8_0 = 0;
	{
		// attribute = null;
		BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 ** L_0 = ___attribute1;
		*((RuntimeObject **)L_0) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)NULL);
		// if (member == null)
		MemberInfo_t * L_1 = ___member0;
		bool L_2;
		L_2 = MemberInfo_op_Equality_mE9FA8D3493294DDF178B8E8150E76C94F1CD03A9(L_1, (MemberInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000e:
	{
		// attribute = GetBurstCompileAttribute(member);
		BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 ** L_3 = ___attribute1;
		MemberInfo_t * L_4 = ___member0;
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var);
		BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * L_5;
		L_5 = BurstCompilerOptions_GetBurstCompileAttribute_mF55455921BF75D6447C87EB4F5B3E8CA69DC47A6(L_4, /*hidden argument*/NULL);
		*((RuntimeObject **)L_3) = (RuntimeObject *)L_5;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_3, (void*)(RuntimeObject *)L_5);
		// if (attribute == null)
		BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 ** L_6 = ___attribute1;
		BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * L_7 = *((BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 **)L_6);
		if (L_7)
		{
			goto IL_001c;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_001c:
	{
		// if (isForEagerCompilation && (attribute.Options?.Contains(DoNotEagerCompile) ?? false))
		bool L_8 = ___isForEagerCompilation2;
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 ** L_9 = ___attribute1;
		BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * L_10 = *((BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 **)L_9);
		NullCheck(L_10);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11;
		L_11 = BurstCompileAttribute_get_Options_mCCF112092D275D1B185095A36AF49FD5096F2EE5_inline(L_10, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		G_B6_0 = L_12;
		if (L_12)
		{
			G_B7_0 = L_12;
			goto IL_002d;
		}
	}
	{
		G_B8_0 = 0;
		goto IL_0037;
	}

IL_002d:
	{
		bool L_13;
		L_13 = Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5((RuntimeObject*)(RuntimeObject*)G_B7_0, _stringLiteral402003B86DB2ADAB276C8ADBD26264B6C126B492, /*hidden argument*/Enumerable_Contains_TisString_t_mF5D1CEB77894D995EA265973B316CB977F08FDC5_RuntimeMethod_var);
		G_B8_0 = ((int32_t)(L_13));
	}

IL_0037:
	{
		if (!G_B8_0)
		{
			goto IL_003b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_003b:
	{
		// return true;
		return (bool)1;
	}
}
// Unity.Burst.BurstCompileAttribute Unity.Burst.BurstCompilerOptions::GetBurstCompileAttribute(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * BurstCompilerOptions_GetBurstCompileAttribute_mF55455921BF75D6447C87EB4F5B3E8CA69DC47A6 (MemberInfo_t * ___memberInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CustomAttributeExtensions_GetCustomAttribute_TisBurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1_m9B8B3869855183A66586F91FE26BFB947E0A919F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t95FA6F2545E4B529565364A2F48515FE4B80AD31_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD213EBCE7B3BCD6C10AD4828845AF17048A1D1B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral402003B86DB2ADAB276C8ADBD26264B6C126B492);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5259D7ED6EC0401E934F7EBB0E22B9C3DA388D16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEE03BDA1448C10795E764222E36CC6226EECA1A);
		s_Il2CppMethodInitialized = true;
	}
	BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * V_2 = NULL;
	Type_t * V_3 = NULL;
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * V_4 = NULL;
	PropertyInfo_t * V_5 = NULL;
	BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	int32_t G_B8_0 = 0;
	{
		// var result = memberInfo.GetCustomAttribute<BurstCompileAttribute>();
		MemberInfo_t * L_0 = ___memberInfo0;
		BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * L_1;
		L_1 = CustomAttributeExtensions_GetCustomAttribute_TisBurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1_m9B8B3869855183A66586F91FE26BFB947E0A919F(L_0, /*hidden argument*/CustomAttributeExtensions_GetCustomAttribute_TisBurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1_m9B8B3869855183A66586F91FE26BFB947E0A919F_RuntimeMethod_var);
		V_0 = L_1;
		// if (result != null)
		BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_000c;
		}
	}
	{
		// return result;
		BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * L_3 = V_0;
		return L_3;
	}

IL_000c:
	{
		// foreach (var a in memberInfo.GetCustomAttributes())
		MemberInfo_t * L_4 = ___memberInfo0;
		RuntimeObject* L_5;
		L_5 = CustomAttributeExtensions_GetCustomAttributes_m9269C5EF7E5168EFDCE4D620B8FA890DF6B3E65B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Attribute>::GetEnumerator() */, IEnumerable_1_t95FA6F2545E4B529565364A2F48515FE4B80AD31_il2cpp_TypeInfo_var, L_5);
		V_1 = L_6;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0095;
		}

IL_001a:
		{
			// foreach (var a in memberInfo.GetCustomAttributes())
			RuntimeObject* L_7 = V_1;
			NullCheck(L_7);
			Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * L_8;
			L_8 = InterfaceFuncInvoker0< Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Attribute>::get_Current() */, IEnumerator_1_tD213EBCE7B3BCD6C10AD4828845AF17048A1D1B7_il2cpp_TypeInfo_var, L_7);
			V_2 = L_8;
			// var attributeType = a.GetType();
			Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * L_9 = V_2;
			NullCheck(L_9);
			Type_t * L_10;
			L_10 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_9, /*hidden argument*/NULL);
			V_3 = L_10;
			// if (attributeType.FullName == "Burst.Compiler.IL.Tests.TestCompilerAttribute")
			Type_t * L_11 = V_3;
			NullCheck(L_11);
			String_t* L_12;
			L_12 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_11);
			bool L_13;
			L_13 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_12, _stringLiteralBEE03BDA1448C10795E764222E36CC6226EECA1A, /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_0095;
			}
		}

IL_003a:
		{
			// var options = new List<string>();
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_14 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
			List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_14, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
			V_4 = L_14;
			// var expectCompilerExceptionProperty = attributeType.GetProperty("ExpectCompilerException");
			Type_t * L_15 = V_3;
			NullCheck(L_15);
			PropertyInfo_t * L_16;
			L_16 = Type_GetProperty_mF9677E24A43BADE21DE5E45E0BD0CB881BAB4C89(L_15, _stringLiteral5259D7ED6EC0401E934F7EBB0E22B9C3DA388D16, /*hidden argument*/NULL);
			V_5 = L_16;
			// var expectCompilerException = (expectCompilerExceptionProperty != null)
			//     ? (bool)expectCompilerExceptionProperty.GetValue(a)
			//     : false;
			PropertyInfo_t * L_17 = V_5;
			bool L_18;
			L_18 = PropertyInfo_op_Inequality_mB4C6169DC83174E7712055F0973BC55469AD9962(L_17, (PropertyInfo_t *)NULL, /*hidden argument*/NULL);
			if (L_18)
			{
				goto IL_005b;
			}
		}

IL_0058:
		{
			G_B8_0 = 0;
			goto IL_0068;
		}

IL_005b:
		{
			PropertyInfo_t * L_19 = V_5;
			Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * L_20 = V_2;
			NullCheck(L_19);
			RuntimeObject * L_21;
			L_21 = PropertyInfo_GetValue_m2E9CA9EBD5971D3A30DDCB07A720A978AB9E18AE(L_19, L_20, /*hidden argument*/NULL);
			G_B8_0 = ((int32_t)(((*(bool*)((bool*)UnBox(L_21, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))))));
		}

IL_0068:
		{
			// if (expectCompilerException)
			if (!G_B8_0)
			{
				goto IL_0076;
			}
		}

IL_006a:
		{
			// options.Add(DoNotEagerCompile);
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_22 = V_4;
			NullCheck(L_22);
			List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_22, _stringLiteral402003B86DB2ADAB276C8ADBD26264B6C126B492, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
		}

IL_0076:
		{
			// return new BurstCompileAttribute(FloatPrecision.Standard, FloatMode.Default)
			// {
			//     CompileSynchronously = true,
			//     Options = options.ToArray(),
			// };
			BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * L_23 = (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 *)il2cpp_codegen_object_new(BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1_il2cpp_TypeInfo_var);
			BurstCompileAttribute__ctor_m17500B823B3C461F030F57D6D0F32C5C3030113E(L_23, 0, 0, /*hidden argument*/NULL);
			BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * L_24 = L_23;
			NullCheck(L_24);
			BurstCompileAttribute_set_CompileSynchronously_mB83EBCE3125C95CB2A5B429B07F66F2310056025_inline(L_24, (bool)1, /*hidden argument*/NULL);
			BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * L_25 = L_24;
			List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_26 = V_4;
			NullCheck(L_26);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27;
			L_27 = List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB(L_26, /*hidden argument*/List_1_ToArray_m94163AE84EBF9A1F7483014A8E9906BD93D9EBDB_RuntimeMethod_var);
			NullCheck(L_25);
			BurstCompileAttribute_set_Options_m5BE030E2894C9B5E0A27AEF354D4896455B62B2B_inline(L_25, L_27, /*hidden argument*/NULL);
			V_6 = L_25;
			IL2CPP_LEAVE(0xAE, FINALLY_00a2);
		}

IL_0095:
		{
			// foreach (var a in memberInfo.GetCustomAttributes())
			RuntimeObject* L_28 = V_1;
			NullCheck(L_28);
			bool L_29;
			L_29 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_28);
			if (L_29)
			{
				goto IL_001a;
			}
		}

IL_00a0:
		{
			IL2CPP_LEAVE(0xAC, FINALLY_00a2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a2;
	}

FINALLY_00a2:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_30 = V_1;
			if (!L_30)
			{
				goto IL_00ab;
			}
		}

IL_00a5:
		{
			RuntimeObject* L_31 = V_1;
			NullCheck(L_31);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_31);
		}

IL_00ab:
		{
			IL2CPP_END_FINALLY(162)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(162)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAE, IL_00ae)
		IL2CPP_JUMP_TBL(0xAC, IL_00ac)
	}

IL_00ac:
	{
		// return null;
		return (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 *)NULL;
	}

IL_00ae:
	{
		// }
		BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * L_32 = V_6;
		return L_32;
	}
}
// System.Boolean Unity.Burst.BurstCompilerOptions::HasBurstCompileAttribute(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_HasBurstCompileAttribute_m4EF62614BD8EAAF2015D0B19230E79523213FC9D (MemberInfo_t * ___member0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * V_0 = NULL;
	{
		// if (member == null) throw new ArgumentNullException(nameof(member));
		MemberInfo_t * L_0 = ___member0;
		bool L_1;
		L_1 = MemberInfo_op_Equality_mE9FA8D3493294DDF178B8E8150E76C94F1CD03A9(L_0, (MemberInfo_t *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (member == null) throw new ArgumentNullException(nameof(member));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4784CA4E159D86F8767CCC55143536AF34801074)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&BurstCompilerOptions_HasBurstCompileAttribute_m4EF62614BD8EAAF2015D0B19230E79523213FC9D_RuntimeMethod_var)));
	}

IL_0014:
	{
		// return TryGetAttribute(member, out attr);
		MemberInfo_t * L_3 = ___member0;
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = BurstCompilerOptions_TryGetAttribute_m44A001B2ADE9900BED57B44CAA316FCEC47CF75C(L_3, (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 **)(&V_0), (bool)0, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void Unity.Burst.BurstCompilerOptions::OnOptionsChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_OnOptionsChanged_m48DD95130188EC8554576E89025CBCEA71FDC731 (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, const RuntimeMethod* method)
{
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B2_0 = NULL;
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * G_B1_0 = NULL;
	{
		// OptionsChanged?.Invoke();
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0;
		L_0 = BurstCompilerOptions_get_OptionsChanged_mD6BBC85F20B1732F0C570A7994AC5BDF9AE164EE_inline(__this, /*hidden argument*/NULL);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstCompilerOptions::MaybeTriggerRecompilation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_MaybeTriggerRecompilation_mC4F331073D5318A674AC176209A3ADE68756F79C (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstCompilerOptions::MaybePreventChangingOption()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions_MaybePreventChangingOption_mE6E57516B93F02A8E9EA32AB565D7BC38FAEA656 (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.BurstCompilerOptions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerOptions__cctor_m998B13B9D2A1813E93900FFAE79A23357CB611A6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral052A90A585030A2D7669CC7D2884B0D78760C742);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79DA35A084D67D3A4C946D97765E49E456B15354);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// foreach (var arg in Environment.GetCommandLineArgs())
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0;
		L_0 = Environment_GetCommandLineArgs_m12F7E5CE17BB9D41283D95ADF989C4F75463C329(/*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003f;
	}

IL_000a:
	{
		// foreach (var arg in Environment.GetCommandLineArgs())
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		String_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		String_t* L_5 = V_2;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_6 = V_2;
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_6, _stringLiteral052A90A585030A2D7669CC7D2884B0D78760C742, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_002d;
		}
	}
	{
		String_t* L_8 = V_2;
		bool L_9;
		L_9 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_8, _stringLiteral79DA35A084D67D3A4C946D97765E49E456B15354, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0035;
		}
	}
	{
		goto IL_003b;
	}

IL_002d:
	{
		// ForceDisableBurstCompilation = true;
		((BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var))->set_ForceDisableBurstCompilation_0((bool)1);
		// break;
		goto IL_003b;
	}

IL_0035:
	{
		// ForceBurstCompilationSynchronously = false;
		((BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var))->set_ForceBurstCompilationSynchronously_1((bool)0);
	}

IL_003b:
	{
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_003f:
	{
		// foreach (var arg in Environment.GetCommandLineArgs())
		int32_t L_11 = V_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = V_0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		// if (CheckIsSecondaryUnityProcess())
		bool L_13;
		L_13 = BurstCompilerOptions_CheckIsSecondaryUnityProcess_m77FCD475806E03272F87453B5C969BB5DAD9F3C7(/*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0058;
		}
	}
	{
		// ForceDisableBurstCompilation = true;
		((BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var))->set_ForceDisableBurstCompilation_0((bool)1);
		// IsSecondaryUnityProcess = true;
		((BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34_il2cpp_TypeInfo_var))->set_IsSecondaryUnityProcess_2((bool)1);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Boolean Unity.Burst.BurstCompilerOptions::CheckIsSecondaryUnityProcess()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerOptions_CheckIsSecondaryUnityProcess_m77FCD475806E03272F87453B5C969BB5DAD9F3C7 (const RuntimeMethod* method)
{
	{
		// return false;
		return (bool)0;
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
// System.Int64 Unity.Burst.BurstRuntime::HashStringWithFNV1A64(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t BurstRuntime_HashStringWithFNV1A64_m36354952510DAE5551D8576CAEE0CC23BC49864E (String_t* ___text0, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	Il2CppChar V_3 = 0x0;
	{
		// ulong result = offsetBasis;
		V_0 = ((int64_t)-3750763034362895579LL);
		// foreach (var c in text)
		String_t* L_0 = ___text0;
		V_1 = L_0;
		V_2 = 0;
		goto IL_0044;
	}

IL_0010:
	{
		// foreach (var c in text)
		String_t* L_1 = V_1;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_1, L_2, /*hidden argument*/NULL);
		V_3 = L_3;
		// result = prime * (result ^ (byte)(c & 255));
		uint64_t L_4 = V_0;
		Il2CppChar L_5 = V_3;
		V_0 = ((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)1099511628211LL), (int64_t)((int64_t)((int64_t)L_4^(int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_5&(int32_t)((int32_t)255)))))))))))));
		// result = prime * (result ^ (byte)(c >> 8));
		uint64_t L_6 = V_0;
		Il2CppChar L_7 = V_3;
		V_0 = ((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)1099511628211LL), (int64_t)((int64_t)((int64_t)L_6^(int64_t)((int64_t)((uint64_t)((uint32_t)((uint32_t)((int32_t)((uint8_t)((int32_t)((int32_t)L_7>>(int32_t)8))))))))))));
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0044:
	{
		// foreach (var c in text)
		int32_t L_9 = V_2;
		String_t* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_10, /*hidden argument*/NULL);
		if ((((int32_t)L_9) < ((int32_t)L_11)))
		{
			goto IL_0010;
		}
	}
	{
		// return (long)result;
		uint64_t L_12 = V_0;
		return L_12;
	}
}
// System.Void Unity.Burst.BurstRuntime::Log(System.Byte*,System.Int32,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstRuntime_Log_mA326750916D8B27060FFE335CFE3BB74F12E8632 (uint8_t* ___message0, int32_t ___logType1, uint8_t* ___fileName2, int32_t ___lineNumber3, const RuntimeMethod* method)
{
	{
		// BurstCompilerService.Log((byte*) 0, (BurstCompilerService.BurstLogType)logType, message, fileName, lineNumber);
		int32_t L_0 = ___logType1;
		uint8_t* L_1 = ___message0;
		uint8_t* L_2 = ___fileName2;
		int32_t L_3 = ___lineNumber3;
		BurstCompilerService_Log_m8B72F315B8A8DCCB6ED31880F5B4ECD0C516DE5E((void*)(void*)((intptr_t)0), L_0, (uint8_t*)(uint8_t*)L_1, (uint8_t*)(uint8_t*)L_2, L_3, /*hidden argument*/NULL);
		// }
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
// System.UInt64 Unity.Burst.Intrinsics.Common::umul128(System.UInt64,System.UInt64,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Common_umul128_mE3CD3B3F51BAF20914E1871001C8239FB4B1BBC4 (uint64_t ___x0, uint64_t ___y1, uint64_t* ___high2, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	uint64_t V_3 = 0;
	uint64_t V_4 = 0;
	uint64_t V_5 = 0;
	uint64_t V_6 = 0;
	uint64_t V_7 = 0;
	uint64_t V_8 = 0;
	{
		// ulong xLo = (uint)x;
		uint64_t L_0 = ___x0;
		V_0 = ((int64_t)((uint64_t)((uint32_t)((uint32_t)((int32_t)((uint32_t)L_0))))));
		// ulong xHi = x >> 32;
		uint64_t L_1 = ___x0;
		// ulong yLo = (uint)y;
		uint64_t L_2 = ___y1;
		V_1 = ((int64_t)((uint64_t)((uint32_t)((uint32_t)((int32_t)((uint32_t)L_2))))));
		// ulong yHi = y >> 32;
		uint64_t L_3 = ___y1;
		V_2 = ((int64_t)((uint64_t)L_3>>((int32_t)32)));
		// ulong hi = xHi * yHi;
		int64_t L_4 = ((int64_t)((uint64_t)L_1>>((int32_t)32)));
		uint64_t L_5 = V_2;
		V_3 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_4, (int64_t)L_5));
		// ulong m1 = xHi * yLo;
		uint64_t L_6 = V_1;
		V_4 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_4, (int64_t)L_6));
		// ulong m2 = yHi * xLo;
		uint64_t L_7 = V_2;
		uint64_t L_8 = V_0;
		V_5 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_7, (int64_t)L_8));
		// ulong lo = xLo * yLo;
		uint64_t L_9 = V_0;
		uint64_t L_10 = V_1;
		// ulong m1Lo = (uint)m1;
		uint64_t L_11 = V_4;
		V_6 = ((int64_t)((uint64_t)((uint32_t)((uint32_t)((int32_t)((uint32_t)L_11))))));
		// ulong loHi = lo >> 32;
		V_7 = ((int64_t)((uint64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_9, (int64_t)L_10))>>((int32_t)32)));
		// ulong m1Hi = m1 >> 32;
		uint64_t L_12 = V_4;
		V_8 = ((int64_t)((uint64_t)L_12>>((int32_t)32)));
		// high = hi + m1Hi + ((loHi + m1Lo + m2) >> 32);
		uint64_t* L_13 = ___high2;
		uint64_t L_14 = V_3;
		uint64_t L_15 = V_8;
		uint64_t L_16 = V_7;
		uint64_t L_17 = V_6;
		uint64_t L_18 = V_5;
		*((int64_t*)L_13) = (int64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_14, (int64_t)L_15)), (int64_t)((int64_t)((uint64_t)((int64_t)il2cpp_codegen_add((int64_t)((int64_t)il2cpp_codegen_add((int64_t)L_16, (int64_t)L_17)), (int64_t)L_18))>>((int32_t)32)))));
		// return x * y;
		uint64_t L_19 = ___x0;
		uint64_t L_20 = ___y1;
		return ((int64_t)il2cpp_codegen_multiply((int64_t)L_19, (int64_t)L_20));
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
// System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmbeddedAttribute__ctor_m4F0374906116110F04D52494A86ED13E76735AF7 (EmbeddedAttribute_tCE6C6AFD78D5FE8E29956D0A3F136830E7F1ACF3 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsReadOnlyAttribute__ctor_m4BCBD7CF3859E4030420E2CEF1C9BE4426AEB1FB (IsReadOnlyAttribute_t793010A707224DF83D1377EDAD701903E34A38AD * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void* Unity.Burst.SharedStatic::GetOrCreateSharedStaticInternal(System.Int64,System.Int64,System.UInt32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* SharedStatic_GetOrCreateSharedStaticInternal_m1FDD96EE55D49263DA5EA34EB6502507F1EAD254 (int64_t ___getHashCode640, int64_t ___getSubHashCode641, uint32_t ___sizeOf2, uint32_t ___alignment3, const RuntimeMethod* method)
{
	Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var hash128 = new Hash128((ulong)getHashCode64, (ulong)getSubHashCode64);
		int64_t L_0 = ___getHashCode640;
		int64_t L_1 = ___getSubHashCode641;
		Hash128__ctor_m7958BAB68961412F06FACF1F09E04B4CEAE8FB9D((Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A *)(&V_0), L_0, L_1, /*hidden argument*/NULL);
		// var result = BurstCompilerService.GetOrCreateSharedMemory(ref hash128, sizeOf, alignment);
		uint32_t L_2 = ___sizeOf2;
		uint32_t L_3 = ___alignment3;
		void* L_4;
		L_4 = BurstCompilerService_GetOrCreateSharedMemory_m861188CFBCAC0D14519A4E88D5485ACADA2C0858((Hash128_t1858EA099934FD6F2B769E5661C17A276A2AFE7A *)(&V_0), L_2, L_3, /*hidden argument*/NULL);
		// return result;
		return (void*)(L_4);
	}
}
// System.Void Unity.Burst.SharedStatic::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SharedStatic__cctor_m91BEC2BB24D9ABA5B5998E30913C1C0DE51E9E36 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mEDDD9C0EDBF84B20D8EEC0295487B7446286353C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9FC6861E09F23C7035FD1CE506D4404DCE331C9D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SharedStatic_t4A478B3109091C26ED6F772B9BEC1EA0802B2FFC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Dictionary<long, Type> HashToType = new Dictionary<long, Type>();
		Dictionary_2_t9FC6861E09F23C7035FD1CE506D4404DCE331C9D * L_0 = (Dictionary_2_t9FC6861E09F23C7035FD1CE506D4404DCE331C9D *)il2cpp_codegen_object_new(Dictionary_2_t9FC6861E09F23C7035FD1CE506D4404DCE331C9D_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mEDDD9C0EDBF84B20D8EEC0295487B7446286353C(L_0, /*hidden argument*/Dictionary_2__ctor_mEDDD9C0EDBF84B20D8EEC0295487B7446286353C_RuntimeMethod_var);
		((SharedStatic_t4A478B3109091C26ED6F772B9BEC1EA0802B2FFC_StaticFields*)il2cpp_codegen_static_fields_for(SharedStatic_t4A478B3109091C26ED6F772B9BEC1EA0802B2FFC_il2cpp_TypeInfo_var))->set_HashToType_0(L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Burst.Intrinsics.v256::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void v256__ctor_m131416277C0DD410026F90E62B0CFB8EFCA41800 (v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B * __this, int32_t ___v0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// this = default(v256);
		il2cpp_codegen_initobj(__this, sizeof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B ));
		// SInt0 = SInt1 = SInt2 = SInt3 = SInt4 = SInt5 = SInt6 = SInt7 = v;
		int32_t L_0 = ___v0;
		int32_t L_1 = L_0;
		V_0 = L_1;
		__this->set_SInt7_111(L_1);
		int32_t L_2 = V_0;
		int32_t L_3 = L_2;
		V_0 = L_3;
		__this->set_SInt6_110(L_3);
		int32_t L_4 = V_0;
		int32_t L_5 = L_4;
		V_0 = L_5;
		__this->set_SInt5_109(L_5);
		int32_t L_6 = V_0;
		int32_t L_7 = L_6;
		V_0 = L_7;
		__this->set_SInt4_108(L_7);
		int32_t L_8 = V_0;
		int32_t L_9 = L_8;
		V_0 = L_9;
		__this->set_SInt3_107(L_9);
		int32_t L_10 = V_0;
		int32_t L_11 = L_10;
		V_0 = L_11;
		__this->set_SInt2_106(L_11);
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		V_0 = L_13;
		__this->set_SInt1_105(L_13);
		int32_t L_14 = V_0;
		__this->set_SInt0_104(L_14);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void v256__ctor_m131416277C0DD410026F90E62B0CFB8EFCA41800_AdjustorThunk (RuntimeObject * __this, int32_t ___v0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B * _thisAdjusted = reinterpret_cast<v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B *>(__this + _offset);
	v256__ctor_m131416277C0DD410026F90E62B0CFB8EFCA41800(_thisAdjusted, ___v0, method);
}
// System.Void Unity.Burst.Intrinsics.v256::.ctor(Unity.Burst.Intrinsics.v128,Unity.Burst.Intrinsics.v128)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void v256__ctor_m2D463F2D0C0ECD694FA88E860B35D939D3C926CE (v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B * __this, v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  ___lo0, v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  ___hi1, const RuntimeMethod* method)
{
	{
		// this = default(v256);
		il2cpp_codegen_initobj(__this, sizeof(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B ));
		// Lo128 = lo;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_0 = ___lo0;
		__this->set_Lo128_132(L_0);
		// Hi128 = hi;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_1 = ___hi1;
		__this->set_Hi128_133(L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void v256__ctor_m2D463F2D0C0ECD694FA88E860B35D939D3C926CE_AdjustorThunk (RuntimeObject * __this, v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  ___lo0, v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  ___hi1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B * _thisAdjusted = reinterpret_cast<v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B *>(__this + _offset);
	v256__ctor_m2D463F2D0C0ECD694FA88E860B35D939D3C926CE(_thisAdjusted, ___lo0, ___hi1, method);
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
// System.Void Unity.Burst.BurstCompiler/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC66BA40F10B252D1236813C7E65F3F4314507AEA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t8736AFE52E7CAC14A352C931FBA1411A8CC6CE41_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t8736AFE52E7CAC14A352C931FBA1411A8CC6CE41 * L_0 = (U3CU3Ec_t8736AFE52E7CAC14A352C931FBA1411A8CC6CE41 *)il2cpp_codegen_object_new(U3CU3Ec_t8736AFE52E7CAC14A352C931FBA1411A8CC6CE41_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m8A58E04D35F7771D6874AB616403052A380F53A5(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t8736AFE52E7CAC14A352C931FBA1411A8CC6CE41_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t8736AFE52E7CAC14A352C931FBA1411A8CC6CE41_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Unity.Burst.BurstCompiler/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8A58E04D35F7771D6874AB616403052A380F53A5 (U3CU3Ec_t8736AFE52E7CAC14A352C931FBA1411A8CC6CE41 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Unity.Burst.BurstCompiler/<>c::<Compile>b__14_0(System.Attribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CCompileU3Eb__14_0_mEE4C1F4096F86162688058F7DCC5765EB351F31F (U3CU3Ec_t8736AFE52E7CAC14A352C931FBA1411A8CC6CE41 * __this, Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral592EA6352B1DC6F257CCDA7C5C1A064EFE696C16);
		s_Il2CppMethodInitialized = true;
	}
	{
		// methodInfo.GetCustomAttributes().All(s => s.GetType().Name != "MonoPInvokeCallbackAttribute"))
		Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * L_0 = ___s0;
		NullCheck(L_0);
		Type_t * L_1;
		L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_1);
		bool L_3;
		L_3 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_2, _stringLiteral592EA6352B1DC6F257CCDA7C5C1A064EFE696C16, /*hidden argument*/NULL);
		return L_3;
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
extern "C" int32_t CDECL ReversePInvokeWrapper_BurstCompilerHelper_IsBurstEnabled_mC1B24958FFA3F3D5360E1F933CE0900E586B2A5D()
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	returnValue = BurstCompilerHelper_IsBurstEnabled_mC1B24958FFA3F3D5360E1F933CE0900E586B2A5D(NULL);

	return static_cast<int32_t>(returnValue);
}
// System.Boolean Unity.Burst.BurstCompiler/BurstCompilerHelper::IsBurstEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerHelper_IsBurstEnabled_mC1B24958FFA3F3D5360E1F933CE0900E586B2A5D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// bool result = true;
		V_0 = (bool)1;
		// DiscardedMethod(ref result);
		IL2CPP_RUNTIME_CLASS_INIT(BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_il2cpp_TypeInfo_var);
		BurstCompilerHelper_DiscardedMethod_mAB545E9EE144EE8946BA1025C50B0A62CC126FBC((bool*)(&V_0), /*hidden argument*/NULL);
		// return result;
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void Unity.Burst.BurstCompiler/BurstCompilerHelper::DiscardedMethod(System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerHelper_DiscardedMethod_mAB545E9EE144EE8946BA1025C50B0A62CC126FBC (bool* ___value0, const RuntimeMethod* method)
{
	{
		// value = false;
		bool* L_0 = ___value0;
		*((int8_t*)L_0) = (int8_t)0;
		// }
		return;
	}
}
// System.Boolean Unity.Burst.BurstCompiler/BurstCompilerHelper::IsCompiledByBurst(System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BurstCompilerHelper_IsCompiledByBurst_m8CC7FEC39A7D2459CD8AAA3DC71AC04ACEC7BFFC (Delegate_t * ___del0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var delegateMethodId = Unity.Burst.LowLevel.BurstCompilerService.CompileAsyncDelegateMethod(del, string.Empty);
		Delegate_t * L_0 = ___del0;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		int32_t L_2;
		L_2 = BurstCompilerService_CompileAsyncDelegateMethod_mA76294773B6989F87A291642A00722F5F5266726(L_0, L_1, /*hidden argument*/NULL);
		// return Unity.Burst.LowLevel.BurstCompilerService.GetAsyncCompiledAsyncDelegateMethod(delegateMethodId) != (void*)0;
		void* L_3;
		L_3 = BurstCompilerService_GetAsyncCompiledAsyncDelegateMethod_m94255AE10D8C3F7B875D69D3889E029A936DE84F(L_2, /*hidden argument*/NULL);
		return (bool)((((int32_t)((((intptr_t)L_3) == ((intptr_t)((intptr_t)0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Unity.Burst.BurstCompiler/BurstCompilerHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BurstCompilerHelper__cctor_mD76FFC76096643AA6180877EE5FCCC86CD37E02B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerHelper_IsBurstEnabled_mC1B24958FFA3F3D5360E1F933CE0900E586B2A5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly IsBurstEnabledDelegate IsBurstEnabledImpl = new IsBurstEnabledDelegate(IsBurstEnabled);
		IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5 * L_0 = (IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5 *)il2cpp_codegen_object_new(IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5_il2cpp_TypeInfo_var);
		IsBurstEnabledDelegate__ctor_m1C0571B67EF7C95E4536E122295FA8E3851ED0ED(L_0, NULL, (intptr_t)((intptr_t)BurstCompilerHelper_IsBurstEnabled_mC1B24958FFA3F3D5360E1F933CE0900E586B2A5D_RuntimeMethod_var), /*hidden argument*/NULL);
		((BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_il2cpp_TypeInfo_var))->set_IsBurstEnabledImpl_0(L_0);
		// public static readonly bool IsBurstGenerated = IsCompiledByBurst(IsBurstEnabledImpl);
		IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5 * L_1 = ((BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_il2cpp_TypeInfo_var))->get_IsBurstEnabledImpl_0();
		bool L_2;
		L_2 = BurstCompilerHelper_IsCompiledByBurst_m8CC7FEC39A7D2459CD8AAA3DC71AC04ACEC7BFFC(L_1, /*hidden argument*/NULL);
		((BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_StaticFields*)il2cpp_codegen_static_fields_for(BurstCompilerHelper_tBFAE069B1EED68EFA83AF35A2224700B2BDCB4FA_il2cpp_TypeInfo_var))->set_IsBurstGenerated_1(L_2);
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
// System.Void Unity.Burst.BurstCompiler/FakeDelegate::.ctor(System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FakeDelegate__ctor_m3021D19ED6A1F08575FED25932877F4586A57EC0 (FakeDelegate_t5C32095DECA16B795748EAE137988C071A80C62C * __this, MethodInfo_t * ___method0, const RuntimeMethod* method)
{
	{
		// public FakeDelegate(MethodInfo method)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Method = method;
		MethodInfo_t * L_0 = ___method0;
		__this->set_U3CMethodU3Ek__BackingField_0(L_0);
		// }
		return;
	}
}
// System.Reflection.MethodInfo Unity.Burst.BurstCompiler/FakeDelegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * FakeDelegate_get_Method_m480526A6B6ABA399BA92403569A30AFA0B115C07 (FakeDelegate_t5C32095DECA16B795748EAE137988C071A80C62C * __this, const RuntimeMethod* method)
{
	{
		// public MethodInfo Method { get; }
		MethodInfo_t * L_0 = __this->get_U3CMethodU3Ek__BackingField_0();
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
// System.Void Unity.Burst.BurstCompiler/StaticTypeReinitAttribute::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StaticTypeReinitAttribute__ctor_m208E150603714E94BFBF65BFC68CEB220D5414D1 (StaticTypeReinitAttribute_t44EBC424CAE299F7DA16C5FAA87819AB80848CD2 * __this, Type_t * ___toReinit0, const RuntimeMethod* method)
{
	{
		// public StaticTypeReinitAttribute(Type toReinit)
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		// reinitType = toReinit;
		Type_t * L_0 = ___toReinit0;
		__this->set_reinitType_0(L_0);
		// }
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
// System.Void Unity.Burst.BurstRuntime/PreserveAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveAttribute__ctor_m03ACCEB4A3006FFF47CF22847FDC44963A6775DE (PreserveAttribute_t5582719532581A928FFB965E9E6F529B1162FF42 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// System.Void Unity.Burst.SharedStatic/PreserveAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreserveAttribute__ctor_m6889CC5FD73A0D5DA5AE3DF55B92238092969B7A (PreserveAttribute_tA3F52D116432709CC1E83ABC792A0FEB8B08580C * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
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
// Unity.Burst.Intrinsics.v256 Unity.Burst.Intrinsics.X86/Avx::mm256_load_ps(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  Avx_mm256_load_ps_m9F969F2850AEA8EBFED439CF72282F5D05814CD5 (void* ___ptr0, const RuntimeMethod* method)
{
	{
		// return *(v256*)ptr;
		void* L_0 = ___ptr0;
		v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  L_1 = (*(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B *)L_0);
		return L_1;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx::mm256_store_ps(System.Void*,Unity.Burst.Intrinsics.v256)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx_mm256_store_ps_m06AF52B4C23B00F73AA7043BA66589DE47EDAFC8 (void* ___ptr0, v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  ___val1, const RuntimeMethod* method)
{
	{
		// *(v256*)ptr = val;
		void* L_0 = ___ptr0;
		v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  L_1 = ___val1;
		*(v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B *)L_0 = L_1;
		// }
		return;
	}
}
// Unity.Burst.Intrinsics.v256 Unity.Burst.Intrinsics.X86/Avx::mm256_loadu_si256(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  Avx_mm256_loadu_si256_mC547FB8C16FA34BDF468BF525E147C7F0E04CEAE (void* ___ptr0, const RuntimeMethod* method)
{
	{
		// return mm256_load_ps(ptr);
		void* L_0 = ___ptr0;
		v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  L_1;
		L_1 = Avx_mm256_load_ps_m9F969F2850AEA8EBFED439CF72282F5D05814CD5((void*)(void*)L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx::mm256_storeu_si256(System.Void*,Unity.Burst.Intrinsics.v256)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx_mm256_storeu_si256_m8A5C3E3D4A3A32B77C8FA92B6463A7B0F5E2E206 (void* ___ptr0, v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  ___v1, const RuntimeMethod* method)
{
	{
		// mm256_store_ps(ptr, v);
		void* L_0 = ___ptr0;
		v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  L_1 = ___v1;
		Avx_mm256_store_ps_m06AF52B4C23B00F73AA7043BA66589DE47EDAFC8((void*)(void*)L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// Unity.Burst.Intrinsics.v256 Unity.Burst.Intrinsics.X86/Avx::mm256_set1_epi32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  Avx_mm256_set1_epi32_m5D8145EBE23EB046569D75BE4C542B295076D01B (int32_t ___a0, const RuntimeMethod* method)
{
	{
		// return new v256(a);
		int32_t L_0 = ___a0;
		v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  L_1;
		memset((&L_1), 0, sizeof(L_1));
		v256__ctor_m131416277C0DD410026F90E62B0CFB8EFCA41800((&L_1), L_0, /*hidden argument*/NULL);
		return L_1;
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
// System.Boolean Unity.Burst.Intrinsics.X86/Avx2::get_IsAvx2Supported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Avx2_get_IsAvx2Supported_m0BC6422FDAB370A83B7D5E44509F8F0EFC442FFA (const RuntimeMethod* method)
{
	{
		// public static bool IsAvx2Supported { get { return false; } }
		return (bool)0;
	}
}
// Unity.Burst.Intrinsics.v256 Unity.Burst.Intrinsics.X86/Avx2::mm256_xor_si256(Unity.Burst.Intrinsics.v256,Unity.Burst.Intrinsics.v256)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  Avx2_mm256_xor_si256_m4493B7702DA5B5F0FEE67ABE9FA2C3199177E826 (v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  ___a0, v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  ___b1, const RuntimeMethod* method)
{
	{
		// return new v256(Sse2.xor_si128(a.Lo128, b.Lo128), Sse2.xor_si128(a.Hi128, b.Hi128));
		v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  L_0 = ___a0;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_1 = L_0.get_Lo128_132();
		v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  L_2 = ___b1;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_3 = L_2.get_Lo128_132();
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_4;
		L_4 = Sse2_xor_si128_m39D242F47BD0ECDFD91FBFFC6156600DB951E7EF(L_1, L_3, /*hidden argument*/NULL);
		v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  L_5 = ___a0;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_6 = L_5.get_Hi128_133();
		v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  L_7 = ___b1;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_8 = L_7.get_Hi128_133();
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_9;
		L_9 = Sse2_xor_si128_m39D242F47BD0ECDFD91FBFFC6156600DB951E7EF(L_6, L_8, /*hidden argument*/NULL);
		v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  L_10;
		memset((&L_10), 0, sizeof(L_10));
		v256__ctor_m2D463F2D0C0ECD694FA88E860B35D939D3C926CE((&L_10), L_4, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// Unity.Burst.Intrinsics.v256 Unity.Burst.Intrinsics.X86/Avx2::mm256_add_epi64(Unity.Burst.Intrinsics.v256,Unity.Burst.Intrinsics.v256)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  Avx2_mm256_add_epi64_m9076F9EC595609231AEF827D25185DF9E10A2311 (v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  ___a0, v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  ___b1, const RuntimeMethod* method)
{
	{
		// return new v256(Sse2.add_epi64(a.Lo128, b.Lo128), Sse2.add_epi64(a.Hi128, b.Hi128));
		v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  L_0 = ___a0;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_1 = L_0.get_Lo128_132();
		v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  L_2 = ___b1;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_3 = L_2.get_Lo128_132();
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_4;
		L_4 = Sse2_add_epi64_m19EC8F64094DF905A38555C5958DAEF5B21B1B30(L_1, L_3, /*hidden argument*/NULL);
		v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  L_5 = ___a0;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_6 = L_5.get_Hi128_133();
		v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  L_7 = ___b1;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_8 = L_7.get_Hi128_133();
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_9;
		L_9 = Sse2_add_epi64_m19EC8F64094DF905A38555C5958DAEF5B21B1B30(L_6, L_8, /*hidden argument*/NULL);
		v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  L_10;
		memset((&L_10), 0, sizeof(L_10));
		v256__ctor_m2D463F2D0C0ECD694FA88E860B35D939D3C926CE((&L_10), L_4, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// Unity.Burst.Intrinsics.v256 Unity.Burst.Intrinsics.X86/Avx2::mm256_mul_epu32(Unity.Burst.Intrinsics.v256,Unity.Burst.Intrinsics.v256)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  Avx2_mm256_mul_epu32_m5588BF11B6A4C200221475B3E492E7B70F6E6CB2 (v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  ___a0, v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  ___b1, const RuntimeMethod* method)
{
	{
		// return new v256(Sse2.mul_epu32(a.Lo128, b.Lo128), Sse2.mul_epu32(a.Hi128, b.Hi128));
		v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  L_0 = ___a0;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_1 = L_0.get_Lo128_132();
		v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  L_2 = ___b1;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_3 = L_2.get_Lo128_132();
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_4;
		L_4 = Sse2_mul_epu32_mC6068D2FEA476DDF0E8B20F77A62103C087CFD94(L_1, L_3, /*hidden argument*/NULL);
		v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  L_5 = ___a0;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_6 = L_5.get_Hi128_133();
		v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  L_7 = ___b1;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_8 = L_7.get_Hi128_133();
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_9;
		L_9 = Sse2_mul_epu32_mC6068D2FEA476DDF0E8B20F77A62103C087CFD94(L_6, L_8, /*hidden argument*/NULL);
		v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  L_10;
		memset((&L_10), 0, sizeof(L_10));
		v256__ctor_m2D463F2D0C0ECD694FA88E860B35D939D3C926CE((&L_10), L_4, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// Unity.Burst.Intrinsics.v256 Unity.Burst.Intrinsics.X86/Avx2::mm256_slli_epi64(Unity.Burst.Intrinsics.v256,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  Avx2_mm256_slli_epi64_mA45822660DAA7558CE2509A5D6BD609B50BC0357 (v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  ___a0, int32_t ___imm81, const RuntimeMethod* method)
{
	{
		// return new v256(Sse2.slli_epi64(a.Lo128, imm8), Sse2.slli_epi64(a.Hi128, imm8));
		v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  L_0 = ___a0;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_1 = L_0.get_Lo128_132();
		int32_t L_2 = ___imm81;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_3;
		L_3 = Sse2_slli_epi64_m9018953E5C9EA588429BB8E874386D6326B447C4(L_1, L_2, /*hidden argument*/NULL);
		v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  L_4 = ___a0;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_5 = L_4.get_Hi128_133();
		int32_t L_6 = ___imm81;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_7;
		L_7 = Sse2_slli_epi64_m9018953E5C9EA588429BB8E874386D6326B447C4(L_5, L_6, /*hidden argument*/NULL);
		v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  L_8;
		memset((&L_8), 0, sizeof(L_8));
		v256__ctor_m2D463F2D0C0ECD694FA88E860B35D939D3C926CE((&L_8), L_3, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// Unity.Burst.Intrinsics.v256 Unity.Burst.Intrinsics.X86/Avx2::mm256_srli_epi64(Unity.Burst.Intrinsics.v256,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  Avx2_mm256_srli_epi64_mCFE92A66B4687148356CA194D10688043EDA4599 (v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  ___a0, int32_t ___imm81, const RuntimeMethod* method)
{
	{
		// return new v256(Sse2.srli_epi64(a.Lo128, imm8), Sse2.srli_epi64(a.Hi128, imm8));
		v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  L_0 = ___a0;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_1 = L_0.get_Lo128_132();
		int32_t L_2 = ___imm81;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_3;
		L_3 = Sse2_srli_epi64_mF545E6832B728082018367263CEABA1A94386300(L_1, L_2, /*hidden argument*/NULL);
		v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  L_4 = ___a0;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_5 = L_4.get_Hi128_133();
		int32_t L_6 = ___imm81;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_7;
		L_7 = Sse2_srli_epi64_mF545E6832B728082018367263CEABA1A94386300(L_5, L_6, /*hidden argument*/NULL);
		v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  L_8;
		memset((&L_8), 0, sizeof(L_8));
		v256__ctor_m2D463F2D0C0ECD694FA88E860B35D939D3C926CE((&L_8), L_3, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// Unity.Burst.Intrinsics.v256 Unity.Burst.Intrinsics.X86/Avx2::mm256_shuffle_epi32(Unity.Burst.Intrinsics.v256,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  Avx2_mm256_shuffle_epi32_m13BD0408E32F03201259BA0A58BA523E579A83DE (v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  ___a0, int32_t ___imm81, const RuntimeMethod* method)
{
	{
		// return new v256(Sse2.shuffle_epi32(a.Lo128, imm8), Sse2.shuffle_epi32(a.Hi128, imm8));
		v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  L_0 = ___a0;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_1 = L_0.get_Lo128_132();
		int32_t L_2 = ___imm81;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_3;
		L_3 = Sse2_shuffle_epi32_m9BB1CB9399A68A1D1902ED506B0AF962945E49B4(L_1, L_2, /*hidden argument*/NULL);
		v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  L_4 = ___a0;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_5 = L_4.get_Hi128_133();
		int32_t L_6 = ___imm81;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_7;
		L_7 = Sse2_shuffle_epi32_m9BB1CB9399A68A1D1902ED506B0AF962945E49B4(L_5, L_6, /*hidden argument*/NULL);
		v256_t366329B34AC6CF9A0342801A16FD0DE6B9EDD79B  L_8;
		memset((&L_8), 0, sizeof(L_8));
		v256__ctor_m2D463F2D0C0ECD694FA88E860B35D939D3C926CE((&L_8), L_3, L_7, /*hidden argument*/NULL);
		return L_8;
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
// System.Int32 Unity.Burst.Intrinsics.X86/Sse::SHUFFLE(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse_SHUFFLE_mD9B995C203CBD92B7B28A0C003BB4E3B3EAACE25 (int32_t ___d0, int32_t ___c1, int32_t ___b2, int32_t ___a3, const RuntimeMethod* method)
{
	{
		// return ((a & 3)) | ((b & 3) << 2) | ((c & 3) << 4) | ((d & 3) << 6);
		int32_t L_0 = ___a3;
		int32_t L_1 = ___b2;
		int32_t L_2 = ___c1;
		int32_t L_3 = ___d0;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_0&(int32_t)3))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_1&(int32_t)3))<<(int32_t)2))))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_2&(int32_t)3))<<(int32_t)4))))|(int32_t)((int32_t)((int32_t)((int32_t)((int32_t)L_3&(int32_t)3))<<(int32_t)6))));
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
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse2::add_epi64(Unity.Burst.Intrinsics.v128,Unity.Burst.Intrinsics.v128)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  Sse2_add_epi64_m19EC8F64094DF905A38555C5958DAEF5B21B1B30 (v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  ___a0, v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  ___b1, const RuntimeMethod* method)
{
	v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// v128 dst = default(v128);
		il2cpp_codegen_initobj((&V_0), sizeof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5 ));
		// dst.SLong0 = a.SLong0 + b.SLong0;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_0 = ___a0;
		int64_t L_1 = L_0.get_SLong0_58();
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_2 = ___b1;
		int64_t L_3 = L_2.get_SLong0_58();
		(&V_0)->set_SLong0_58(((int64_t)il2cpp_codegen_add((int64_t)L_1, (int64_t)L_3)));
		// dst.SLong1 = a.SLong1 + b.SLong1;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_4 = ___a0;
		int64_t L_5 = L_4.get_SLong1_59();
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_6 = ___b1;
		int64_t L_7 = L_6.get_SLong1_59();
		(&V_0)->set_SLong1_59(((int64_t)il2cpp_codegen_add((int64_t)L_5, (int64_t)L_7)));
		// return dst;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_8 = V_0;
		return L_8;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse2::mul_epu32(Unity.Burst.Intrinsics.v128,Unity.Burst.Intrinsics.v128)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  Sse2_mul_epu32_mC6068D2FEA476DDF0E8B20F77A62103C087CFD94 (v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  ___a0, v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  ___b1, const RuntimeMethod* method)
{
	v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// v128 dst = default(v128);
		il2cpp_codegen_initobj((&V_0), sizeof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5 ));
		// dst.ULong0 = (ulong)a.UInt0 * (ulong)b.UInt0;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_0 = ___a0;
		uint32_t L_1 = L_0.get_UInt0_48();
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_2 = ___b1;
		uint32_t L_3 = L_2.get_UInt0_48();
		(&V_0)->set_ULong0_56(((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((uint64_t)L_1)), (int64_t)((int64_t)((uint64_t)L_3)))));
		// dst.ULong1 = (ulong)a.UInt2 * (ulong)b.UInt2;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_4 = ___a0;
		uint32_t L_5 = L_4.get_UInt2_50();
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_6 = ___b1;
		uint32_t L_7 = L_6.get_UInt2_50();
		(&V_0)->set_ULong1_57(((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((uint64_t)L_5)), (int64_t)((int64_t)((uint64_t)L_7)))));
		// return dst;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_8 = V_0;
		return L_8;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse2::slli_epi64(Unity.Burst.Intrinsics.v128,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  Sse2_slli_epi64_m9018953E5C9EA588429BB8E874386D6326B447C4 (v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  ___a0, int32_t ___imm81, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	uint64_t* V_2 = NULL;
	uint64_t* V_3 = NULL;
	int32_t V_4 = 0;
	{
		// v128 dst = default(v128);
		il2cpp_codegen_initobj((&V_0), sizeof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5 ));
		// int dist = Math.Min(imm8 & 0xff, 64);
		int32_t L_0 = ___imm81;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(((int32_t)((int32_t)L_0&(int32_t)((int32_t)255))), ((int32_t)64), /*hidden argument*/NULL);
		V_1 = L_1;
		// ulong* dptr = &dst.ULong0;
		uint64_t* L_2 = (&V_0)->get_address_of_ULong0_56();
		V_2 = (uint64_t*)((uintptr_t)L_2);
		// ulong* aptr = &a.ULong0;
		uint64_t* L_3 = (&___a0)->get_address_of_ULong0_56();
		V_3 = (uint64_t*)((uintptr_t)L_3);
		// for (int j = 0; j <= 1; j++)
		V_4 = 0;
		goto IL_005a;
	}

IL_002e:
	{
		// if (dist > 63)
		int32_t L_4 = V_1;
		if ((((int32_t)L_4) <= ((int32_t)((int32_t)63))))
		{
			goto IL_003f;
		}
	}
	{
		// dptr[j] = 0;
		uint64_t* L_5 = V_2;
		int32_t L_6 = V_4;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_5, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_6), (int32_t)8))))) = (int64_t)((int64_t)((int64_t)0));
		goto IL_0054;
	}

IL_003f:
	{
		// dptr[j] = aptr[j] << dist;
		uint64_t* L_7 = V_2;
		int32_t L_8 = V_4;
		uint64_t* L_9 = V_3;
		int32_t L_10 = V_4;
		int64_t L_11 = *((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_9, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_10), (int32_t)8)))));
		int32_t L_12 = V_1;
		*((int64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_7, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_8), (int32_t)8))))) = (int64_t)((int64_t)((int64_t)L_11<<(int32_t)((int32_t)((int32_t)L_12&(int32_t)((int32_t)63)))));
	}

IL_0054:
	{
		// for (int j = 0; j <= 1; j++)
		int32_t L_13 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_005a:
	{
		// for (int j = 0; j <= 1; j++)
		int32_t L_14 = V_4;
		if ((((int32_t)L_14) <= ((int32_t)1)))
		{
			goto IL_002e;
		}
	}
	{
		// return dst;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_15 = V_0;
		return L_15;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse2::srli_epi64(Unity.Burst.Intrinsics.v128,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  Sse2_srli_epi64_mF545E6832B728082018367263CEABA1A94386300 (v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  ___a0, int32_t ___imm81, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  V_1;
	memset((&V_1), 0, sizeof(V_1));
	uint64_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// int dist = Math.Min(imm8 & 0xff, 64);
		int32_t L_0 = ___imm81;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(((int32_t)((int32_t)L_0&(int32_t)((int32_t)255))), ((int32_t)64), /*hidden argument*/NULL);
		V_0 = L_1;
		// v128 dst = a;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_2 = ___a0;
		V_1 = L_2;
		// ulong* dptr = &dst.ULong0;
		uint64_t* L_3 = (&V_1)->get_address_of_ULong0_56();
		V_2 = (uint64_t*)((uintptr_t)L_3);
		// if (dist > 0)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0047;
		}
	}
	{
		// dist--;
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1));
		// for (int j = 0; j <= 1; j++)
		V_3 = 0;
		goto IL_0043;
	}

IL_0026:
	{
		// dptr[j] >>= 1;
		uint64_t* L_6 = V_2;
		int32_t L_7 = V_3;
		uint64_t* L_8 = (uint64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_6, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_7), (int32_t)8))));
		int64_t L_9 = *((int64_t*)L_8);
		*((int64_t*)L_8) = (int64_t)((int64_t)((uint64_t)L_9>>1));
		// dptr[j] >>= dist;
		uint64_t* L_10 = V_2;
		int32_t L_11 = V_3;
		uint64_t* L_12 = (uint64_t*)((uint64_t*)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)L_11), (int32_t)8))));
		int64_t L_13 = *((int64_t*)L_12);
		int32_t L_14 = V_0;
		*((int64_t*)L_12) = (int64_t)((int64_t)((uint64_t)L_13>>((int32_t)((int32_t)L_14&(int32_t)((int32_t)63)))));
		// for (int j = 0; j <= 1; j++)
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0043:
	{
		// for (int j = 0; j <= 1; j++)
		int32_t L_16 = V_3;
		if ((((int32_t)L_16) <= ((int32_t)1)))
		{
			goto IL_0026;
		}
	}

IL_0047:
	{
		// return dst;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_17 = V_1;
		return L_17;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse2::xor_si128(Unity.Burst.Intrinsics.v128,Unity.Burst.Intrinsics.v128)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  Sse2_xor_si128_m39D242F47BD0ECDFD91FBFFC6156600DB951E7EF (v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  ___a0, v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  ___b1, const RuntimeMethod* method)
{
	v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// v128 dst = default(v128);
		il2cpp_codegen_initobj((&V_0), sizeof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5 ));
		// dst.ULong0 = a.ULong0 ^ b.ULong0;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_0 = ___a0;
		uint64_t L_1 = L_0.get_ULong0_56();
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_2 = ___b1;
		uint64_t L_3 = L_2.get_ULong0_56();
		(&V_0)->set_ULong0_56(((int64_t)((int64_t)L_1^(int64_t)L_3)));
		// dst.ULong1 = a.ULong1 ^ b.ULong1;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_4 = ___a0;
		uint64_t L_5 = L_4.get_ULong1_57();
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_6 = ___b1;
		uint64_t L_7 = L_6.get_ULong1_57();
		(&V_0)->set_ULong1_57(((int64_t)((int64_t)L_5^(int64_t)L_7)));
		// return dst;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_8 = V_0;
		return L_8;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse2::shuffle_epi32(Unity.Burst.Intrinsics.v128,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  Sse2_shuffle_epi32_m9BB1CB9399A68A1D1902ED506B0AF962945E49B4 (v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  ___a0, int32_t ___imm81, const RuntimeMethod* method)
{
	v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint32_t* V_1 = NULL;
	{
		// v128 dst = default(v128);
		il2cpp_codegen_initobj((&V_0), sizeof(v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5 ));
		// uint* dptr = &dst.UInt0;
		uint32_t* L_0 = (&V_0)->get_address_of_UInt0_48();
		// uint* aptr = &a.UInt0;
		uint32_t* L_1 = (&___a0)->get_address_of_UInt0_48();
		V_1 = (uint32_t*)((uintptr_t)L_1);
		// dptr[0] = aptr[imm8 & 3];
		uintptr_t L_2 = ((uintptr_t)L_0);
		uint32_t* L_3 = V_1;
		int32_t L_4 = ___imm81;
		int32_t L_5 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_3, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)((int32_t)L_4&(int32_t)3))), (int32_t)4)))));
		*((int32_t*)L_2) = (int32_t)L_5;
		// dptr[1] = aptr[(imm8 >> 2) & 3];
		uintptr_t L_6 = L_2;
		uint32_t* L_7 = V_1;
		int32_t L_8 = ___imm81;
		int32_t L_9 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_7, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)((int32_t)((int32_t)((int32_t)L_8>>(int32_t)2))&(int32_t)3))), (int32_t)4)))));
		*((int32_t*)((intptr_t)il2cpp_codegen_add((intptr_t)L_6, (int32_t)4))) = (int32_t)L_9;
		// dptr[2] = aptr[(imm8 >> 4) & 3];
		uintptr_t L_10 = L_6;
		uint32_t* L_11 = V_1;
		int32_t L_12 = ___imm81;
		int32_t L_13 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_11, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)((int32_t)((int32_t)((int32_t)L_12>>(int32_t)4))&(int32_t)3))), (int32_t)4)))));
		*((int32_t*)((intptr_t)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)2), (int32_t)4))))) = (int32_t)L_13;
		// dptr[3] = aptr[(imm8 >> 6) & 3];
		uint32_t* L_14 = V_1;
		int32_t L_15 = ___imm81;
		int32_t L_16 = *((uint32_t*)((uint32_t*)il2cpp_codegen_add((intptr_t)L_14, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)((int32_t)((int32_t)((int32_t)((int32_t)L_15>>(int32_t)6))&(int32_t)3))), (int32_t)4)))));
		*((int32_t*)((intptr_t)il2cpp_codegen_add((intptr_t)L_10, (intptr_t)((intptr_t)il2cpp_codegen_multiply((intptr_t)((intptr_t)3), (int32_t)4))))) = (int32_t)L_16;
		// return dst;
		v128_tC2ABD8B029FDA8A417166193B5281646FB0FDBE5  L_17 = V_0;
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
IL2CPP_EXTERN_C  bool DelegatePInvokeWrapper_IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5 (IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5 * __this, const RuntimeMethod* method)
{
	typedef int32_t (CDECL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(((RuntimeDelegate*)__this)->method->nativeFunction);

	// Native function invocation
	int32_t returnValue = il2cppPInvokeFunc();

	return static_cast<bool>(returnValue);
}
// System.Void Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsBurstEnabledDelegate__ctor_m1C0571B67EF7C95E4536E122295FA8E3851ED0ED (IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IsBurstEnabledDelegate_Invoke_m985ABAE72EF555F9EDC4B03FDACDAF132B56AD6A (IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5 * __this, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef bool (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< bool >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< bool >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IsBurstEnabledDelegate_BeginInvoke_m82BEF01F13F57DFB377E8AF66A63ADCD23FA4678 (IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// System.Boolean Unity.Burst.BurstCompiler/BurstCompilerHelper/IsBurstEnabledDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IsBurstEnabledDelegate_EndInvoke_mAC335D885BC871F4290ACB7E630D1C9A8E1D1272 (IsBurstEnabledDelegate_t678871E0385FC62AC50FBA769FDD3F0113807BD5 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatMode_m87B9F1667557E4A62D1564F6BBCE9C0DD983784F_inline (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public FloatMode FloatMode { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CFloatModeU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_FloatPrecision_mF892081799E15A1C1ED18CA8B4B2733F0D5DC4B3_inline (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public FloatPrecision FloatPrecision { get; set; }
		int32_t L_0 = ___value0;
		__this->set_U3CFloatPrecisionU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t RuntimeMethodHandle_get_Value_m51CC0BBFB22497E874A2B5A36346C79A0055281F_inline (RuntimeMethodHandle_t8974037C4FE5F6C3AE7D3731057CDB2891A21C9A * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_value_0();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_EnableBurstCompilation_mF6AF625D845CE154ADDC6B1AE86DA7103CA0EA3F_inline (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, const RuntimeMethod* method)
{
	{
		// get => _enableBurstCompilation;
		bool L_0 = __this->get__enableBurstCompilation_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BurstCompilerOptions_get_IsGlobal_m90DDCB92AAF9312ADB8B243151C3BEC19AEA0F97_inline (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, const RuntimeMethod* method)
{
	{
		// private bool IsGlobal { get; }
		bool L_0 = __this->get_U3CIsGlobalU3Ek__BackingField_5();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* BurstCompileAttribute_get_Options_mCCF112092D275D1B185095A36AF49FD5096F2EE5_inline (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, const RuntimeMethod* method)
{
	{
		// internal string[] Options { get; set; }
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_U3COptionsU3Ek__BackingField_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_CompileSynchronously_mB83EBCE3125C95CB2A5B429B07F66F2310056025_inline (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// public bool CompileSynchronously { get; set; }
		bool L_0 = ___value0;
		__this->set_U3CCompileSynchronouslyU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BurstCompileAttribute_set_Options_m5BE030E2894C9B5E0A27AEF354D4896455B62B2B_inline (BurstCompileAttribute_t845F9073B3F7D817A249B1F2191CE96B8ADA00D1 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value0, const RuntimeMethod* method)
{
	{
		// internal string[] Options { get; set; }
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___value0;
		__this->set_U3COptionsU3Ek__BackingField_3(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * BurstCompilerOptions_get_OptionsChanged_mD6BBC85F20B1732F0C570A7994AC5BDF9AE164EE_inline (BurstCompilerOptions_t544328048213260A97D2986702A9041F4237FC34 * __this, const RuntimeMethod* method)
{
	{
		// internal Action OptionsChanged { get; set; }
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = __this->get_U3COptionsChangedU3Ek__BackingField_6();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
