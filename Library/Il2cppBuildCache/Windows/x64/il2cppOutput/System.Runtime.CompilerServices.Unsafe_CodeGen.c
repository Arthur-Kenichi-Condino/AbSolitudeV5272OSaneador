#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 T System.Runtime.CompilerServices.Unsafe::Read(System.Void*)
// 0x00000002 T System.Runtime.CompilerServices.Unsafe::ReadUnaligned(System.Byte&)
// 0x00000003 System.Void* System.Runtime.CompilerServices.Unsafe::AsPointer(T&)
// 0x00000004 System.Int32 System.Runtime.CompilerServices.Unsafe::SizeOf()
// 0x00000005 System.Void System.Runtime.CompilerServices.Unsafe::CopyBlock(System.Byte&,System.Byte&,System.UInt32)
extern void Unsafe_CopyBlock_m620FFE28230187482E6A1F6C2951E86E9397D537 (void);
// 0x00000006 System.Void System.Runtime.CompilerServices.Unsafe::InitBlockUnaligned(System.Void*,System.Byte,System.UInt32)
extern void Unsafe_InitBlockUnaligned_m052F07F8475562B2C26782A0926C742F718BDA22 (void);
// 0x00000007 System.Void System.Runtime.CompilerServices.Unsafe::InitBlockUnaligned(System.Byte&,System.Byte,System.UInt32)
extern void Unsafe_InitBlockUnaligned_m19BEDC2C614CA372758548BB4D1622F8CC53FF4F (void);
// 0x00000008 T System.Runtime.CompilerServices.Unsafe::As(System.Object)
// 0x00000009 T& System.Runtime.CompilerServices.Unsafe::AsRef(System.Void*)
// 0x0000000A TTo& System.Runtime.CompilerServices.Unsafe::As(TFrom&)
// 0x0000000B T& System.Runtime.CompilerServices.Unsafe::Add(T&,System.Int32)
// 0x0000000C T& System.Runtime.CompilerServices.Unsafe::Add(T&,System.IntPtr)
// 0x0000000D T& System.Runtime.CompilerServices.Unsafe::AddByteOffset(T&,System.IntPtr)
// 0x0000000E System.IntPtr System.Runtime.CompilerServices.Unsafe::ByteOffset(T&,T&)
// 0x0000000F System.Boolean System.Runtime.CompilerServices.Unsafe::AreSame(T&,T&)
// 0x00000010 System.Void System.Runtime.Versioning.NonVersionableAttribute::.ctor()
extern void NonVersionableAttribute__ctor_m42737892A413DAF4079C33A61205452777804D13 (void);
static Il2CppMethodPointer s_methodPointers[16] = 
{
	NULL,
	NULL,
	NULL,
	NULL,
	Unsafe_CopyBlock_m620FFE28230187482E6A1F6C2951E86E9397D537,
	Unsafe_InitBlockUnaligned_m052F07F8475562B2C26782A0926C742F718BDA22,
	Unsafe_InitBlockUnaligned_m19BEDC2C614CA372758548BB4D1622F8CC53FF4F,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NonVersionableAttribute__ctor_m42737892A413DAF4079C33A61205452777804D13,
};
static const int32_t s_InvokerIndices[16] = 
{
	-1,
	-1,
	-1,
	-1,
	7434,
	7459,
	7459,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	6421,
};
static const Il2CppTokenRangePair s_rgctxIndices[3] = 
{
	{ 0x06000004, { 0, 1 } },
	{ 0x0600000B, { 1, 1 } },
	{ 0x0600000C, { 2, 1 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[3] = 
{
	{ (Il2CppRGCTXDataType)2, 433 },
	{ (Il2CppRGCTXDataType)2, 439 },
	{ (Il2CppRGCTXDataType)2, 440 },
};
extern const CustomAttributesCacheGenerator g_System_Runtime_CompilerServices_Unsafe_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Runtime_CompilerServices_Unsafe_CodeGenModule;
const Il2CppCodeGenModule g_System_Runtime_CompilerServices_Unsafe_CodeGenModule = 
{
	"System.Runtime.CompilerServices.Unsafe.dll",
	16,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	3,
	s_rgctxIndices,
	3,
	s_rgctxValues,
	NULL,
	g_System_Runtime_CompilerServices_Unsafe_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
