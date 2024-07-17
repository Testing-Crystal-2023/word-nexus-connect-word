#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<Game.RoyalWord_ExpandableListItem`1<System.Object>>
struct Action_1_tD61A611D2671F2572976A851E5B94852BB7E85B4;
// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>
struct ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B;
// PEkfdZJ<System.Object>
struct PEkfdZJ_tD595D4F28CCA4040E993E320983CB18FD0BF0BC9;
// Game.RoyalWord_ExpandableListItem`1<System.Object>
struct RoyalWord_ExpandableListItem_1_tA094F6F4489D8BDD97CF0072C1C7C638573FF911;
// System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>
struct XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A;
// System.Xml.Linq.XHashtable`1<System.Object>
struct XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072;
// D?jka|w/YewVXNI<System.Object>
struct YewVXNI_t314778FBB06B26F206C579778A47B0C43EEEE76E;
// Game.RoyalWord_EventManager`1/^Ra?XWD<System.Object>
struct U5ERaU81XWD_t5FD42DF37358E6941664AC08DCC183DDD5D2A8F4;
// PEkfdZJ/dEMaubS<System.Object>
struct dEMaubS_t3E6FA1466011DF11167919E3CE9387431BF5482F;
// {OuWt?i/r{?]qY?<System.Object>
struct rU7BU80U5DqYU80_tF563DF40DB0CAE70F233F4D0E829DB511707B3CD;
// D?jka|w/xJYnPwl<System.Object,System.Object>
struct xJYnPwl_tC4842E0791A8666D5D377798EDCF84A90BF2C2E7;
// Game.RoyalWord_EventManager`1/~yDuwlk<System.Object>
struct U7EyDuwlk_t2C7C69D22E989C22400B0E7F7D3AC308EC17A8C0;
// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<System.Object>[]
struct EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.ScrollRect
struct ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663;
// mSDFJ?W
struct mSDFJU81W_tCD372EE0201AE08ABA8CD594DB9D0AB61F48D2E1;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* LayoutRebuilder_tD2269CCD93BD5A8C4A92188C66E212B976FA6564_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* dEMaubS_System_Collections_IEnumerator_Reset_m7214E3AB20C4BFBC41B67E676AD44F2D0EA5E48A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PEkfdZJ<System.Object>
struct PEkfdZJ_tD595D4F28CCA4040E993E320983CB18FD0BF0BC9  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> PEkfdZJ::dataObjects
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___dataObjects_0;
	// Game.RoyalWord_ExpandableListItem`1<T> PEkfdZJ::listItemPrefab
	RoyalWord_ExpandableListItem_1_tA094F6F4489D8BDD97CF0072C1C7C638573FF911* ___listItemPrefab_1;
	// UnityEngine.RectTransform PEkfdZJ::listContainer
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___listContainer_2;
	// UnityEngine.UI.ScrollRect PEkfdZJ::listScrollRect
	ScrollRect_t17D2F2939CA8953110180DF53164CFC3DC88D70E* ___listScrollRect_3;
	// System.Single PEkfdZJ::expandAnimDuration
	float ___expandAnimDuration_4;
	// mSDFJ?W PEkfdZJ::listItemPool
	mSDFJU81W_tCD372EE0201AE08ABA8CD594DB9D0AB61F48D2E1* ___listItemPool_5;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> PEkfdZJ::listItemPlaceholders
	List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* ___listItemPlaceholders_6;
	// System.Int32 PEkfdZJ::topItemIndex
	int32_t ___topItemIndex_7;
	// System.Int32 PEkfdZJ::bottomItemIndex
	int32_t ___bottomItemIndex_8;
	// System.Int32 PEkfdZJ::expandedItemIndex
	int32_t ___expandedItemIndex_9;
	// System.Single PEkfdZJ::expandedHeight
	float ___expandedHeight_10;
	// System.Action`1<Game.RoyalWord_ExpandableListItem`1<T>> PEkfdZJ::<OnItemCreated>k__BackingField
	Action_1_tD61A611D2671F2572976A851E5B94852BB7E85B4* ___U3COnItemCreatedU3Ek__BackingField_11;
	// System.Boolean PEkfdZJ::<IsExpandingOrCollapsing>k__BackingField
	bool ___U3CIsExpandingOrCollapsingU3Ek__BackingField_12;
};

// System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>
struct XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A  : public RuntimeObject
{
	// System.Int32[] System.Xml.Linq.XHashtable`1/XHashtableState::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<TValue>[] System.Xml.Linq.XHashtable`1/XHashtableState::_entries
	EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* ____entries_1;
	// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState::_numEntries
	int32_t ____numEntries_2;
	// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue> System.Xml.Linq.XHashtable`1/XHashtableState::_extractKey
	ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ____extractKey_3;
};

// System.Xml.Linq.XHashtable`1<System.Object>
struct XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072  : public RuntimeObject
{
	// System.Xml.Linq.XHashtable`1/XHashtableState<TValue> System.Xml.Linq.XHashtable`1::_state
	XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* ____state_0;
};

// Game.RoyalWord_EventManager`1/^Ra?XWD<System.Object>
struct U5ERaU81XWD_t5FD42DF37358E6941664AC08DCC183DDD5D2A8F4  : public RuntimeObject
{
	// System.String Game.RoyalWord_EventManager`1/^Ra?XWD::eventId
	String_t* ___eventId_0;
	// System.Object[] Game.RoyalWord_EventManager`1/^Ra?XWD::data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data_1;
};

// PEkfdZJ/dEMaubS<System.Object>
struct dEMaubS_t3E6FA1466011DF11167919E3CE9387431BF5482F  : public RuntimeObject
{
	// System.Int32 PEkfdZJ/dEMaubS::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object PEkfdZJ/dEMaubS::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// PEkfdZJ<T> PEkfdZJ/dEMaubS::<>4__this
	PEkfdZJ_tD595D4F28CCA4040E993E320983CB18FD0BF0BC9* ___U3CU3E4__this_2;
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>
struct ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583  : public MulticastDelegate_t
{
};

// D?jka|w/YewVXNI<System.Object>
struct YewVXNI_t314778FBB06B26F206C579778A47B0C43EEEE76E  : public MulticastDelegate_t
{
};

// {OuWt?i/r{?]qY?<System.Object>
struct rU7BU80U5DqYU80_tF563DF40DB0CAE70F233F4D0E829DB511707B3CD  : public MulticastDelegate_t
{
};

// D?jka|w/xJYnPwl<System.Object,System.Object>
struct xJYnPwl_tC4842E0791A8666D5D377798EDCF84A90BF2C2E7  : public MulticastDelegate_t
{
};

// Game.RoyalWord_EventManager`1/~yDuwlk<System.Object>
struct U7EyDuwlk_t2C7C69D22E989C22400B0E7F7D3AC308EC17A8C0  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::MemoryBarrier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.LayoutRebuilder::MarkLayoutForRebuild(UnityEngine.RectTransform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LayoutRebuilder_MarkLayoutForRebuild_m37F415D59609E9D18D49423D9C33E7EA6D859EBD (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___rect0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Linq.XHashtable`1<System.Object>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1__ctor_m9D005D3C7669B409F1E1B4F0863596FD91DB335C_gshared (XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* __this, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ___extractKey0, int32_t ___capacity1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_0 = ___extractKey0;
		int32_t L_1 = ___capacity1;
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_2 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_2);
		((  void (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____state_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____state_0), (void*)L_2);
		return;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1<System.Object>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtable_1_TryGetValue_mB91947F216CD72CEE9C38FA8EF56137E42817080_gshared (XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* __this, String_t* ___key0, int32_t ___index1, int32_t ___count2, RuntimeObject** ___value3, const RuntimeMethod* method) 
{
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_0 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)__this->____state_0;
		String_t* L_1 = ___key0;
		int32_t L_2 = ___index1;
		int32_t L_3 = ___count2;
		RuntimeObject** L_4 = ___value3;
		NullCheck(L_0);
		bool L_5;
		L_5 = ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, String_t*, int32_t, int32_t, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_0, L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_5;
	}
}
// TValue System.Xml.Linq.XHashtable`1<System.Object>::Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XHashtable_1_Add_m4CE3AB9A64E8EBADEC48510932751F7C6D5581A0_gshared (XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* V_1 = NULL;
	bool V_2 = false;
	XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* V_3 = NULL;

IL_0000:
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_0 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)__this->____state_0;
		RuntimeObject* L_1 = ___value0;
		NullCheck(L_0);
		bool L_2;
		L_2 = ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, RuntimeObject*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0041;
					}
				}
				{
					XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* L_5 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_5, NULL);
				}

IL_0041:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* L_6 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_6, (&V_2), NULL);
			XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_7 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)__this->____state_0;
			NullCheck(L_7);
			XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_8;
			L_8 = ((  XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
			V_3 = L_8;
			Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
			XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_9 = V_3;
			__this->____state_0 = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____state_0), (void*)L_9);
			goto IL_0000;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}
	il2cpp_codegen_no_return();
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
bool YewVXNI_Invoke_m7CD8BBD9C1B8997E8F16FD992425004182791329_Multicast(YewVXNI_t314778FBB06B26F206C579778A47B0C43EEEE76E* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		YewVXNI_t314778FBB06B26F206C579778A47B0C43EEEE76E* currentDelegate = reinterpret_cast<YewVXNI_t314778FBB06B26F206C579778A47B0C43EEEE76E*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool YewVXNI_Invoke_m7CD8BBD9C1B8997E8F16FD992425004182791329_OpenInst(YewVXNI_t314778FBB06B26F206C579778A47B0C43EEEE76E* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	NullCheck(___arg0);
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___arg0, method);
}
bool YewVXNI_Invoke_m7CD8BBD9C1B8997E8F16FD992425004182791329_OpenStatic(YewVXNI_t314778FBB06B26F206C579778A47B0C43EEEE76E* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___arg0, method);
}
bool YewVXNI_Invoke_m7CD8BBD9C1B8997E8F16FD992425004182791329_OpenStaticInvoker(YewVXNI_t314778FBB06B26F206C579778A47B0C43EEEE76E* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___arg0);
}
bool YewVXNI_Invoke_m7CD8BBD9C1B8997E8F16FD992425004182791329_ClosedStaticInvoker(YewVXNI_t314778FBB06B26F206C579778A47B0C43EEEE76E* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___arg0);
}
bool YewVXNI_Invoke_m7CD8BBD9C1B8997E8F16FD992425004182791329_OpenVirtual(YewVXNI_t314778FBB06B26F206C579778A47B0C43EEEE76E* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	NullCheck(___arg0);
	return VirtualFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), ___arg0);
}
bool YewVXNI_Invoke_m7CD8BBD9C1B8997E8F16FD992425004182791329_OpenInterface(YewVXNI_t314778FBB06B26F206C579778A47B0C43EEEE76E* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	NullCheck(___arg0);
	return InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___arg0);
}
bool YewVXNI_Invoke_m7CD8BBD9C1B8997E8F16FD992425004182791329_OpenGenericVirtual(YewVXNI_t314778FBB06B26F206C579778A47B0C43EEEE76E* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	NullCheck(___arg0);
	return GenericVirtualFuncInvoker0< bool >::Invoke(method, ___arg0);
}
bool YewVXNI_Invoke_m7CD8BBD9C1B8997E8F16FD992425004182791329_OpenGenericInterface(YewVXNI_t314778FBB06B26F206C579778A47B0C43EEEE76E* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	NullCheck(___arg0);
	return GenericInterfaceFuncInvoker0< bool >::Invoke(method, ___arg0);
}
// System.Void D?jka|w/YewVXNI<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YewVXNI__ctor_m10B67E8C12A9A41B9D49F23C96D9DE0AEB549864_gshared (YewVXNI_t314778FBB06B26F206C579778A47B0C43EEEE76E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&YewVXNI_Invoke_m7CD8BBD9C1B8997E8F16FD992425004182791329_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&YewVXNI_Invoke_m7CD8BBD9C1B8997E8F16FD992425004182791329_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&YewVXNI_Invoke_m7CD8BBD9C1B8997E8F16FD992425004182791329_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&YewVXNI_Invoke_m7CD8BBD9C1B8997E8F16FD992425004182791329_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&YewVXNI_Invoke_m7CD8BBD9C1B8997E8F16FD992425004182791329_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&YewVXNI_Invoke_m7CD8BBD9C1B8997E8F16FD992425004182791329_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&YewVXNI_Invoke_m7CD8BBD9C1B8997E8F16FD992425004182791329_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&YewVXNI_Invoke_m7CD8BBD9C1B8997E8F16FD992425004182791329_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&YewVXNI_Invoke_m7CD8BBD9C1B8997E8F16FD992425004182791329_Multicast;
}
// System.Boolean D?jka|w/YewVXNI<System.Object>::Invoke(TArg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YewVXNI_Invoke_m7CD8BBD9C1B8997E8F16FD992425004182791329_gshared (YewVXNI_t314778FBB06B26F206C579778A47B0C43EEEE76E* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult D?jka|w/YewVXNI<System.Object>::BeginInvoke(TArg,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* YewVXNI_BeginInvoke_mC1E2F57435E41DC7734E4676BD3C2DE277295810_gshared (YewVXNI_t314778FBB06B26F206C579778A47B0C43EEEE76E* __this, RuntimeObject* ___arg0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean D?jka|w/YewVXNI<System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YewVXNI_EndInvoke_m7097CE39D6FB531AC66341A2A74D77D477E74739_gshared (YewVXNI_t314778FBB06B26F206C579778A47B0C43EEEE76E* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Game.RoyalWord_EventManager`1/^Ra?XWD<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U5ERaU81XWD__ctor_mF1F5C9561DA37011B72B6B287CB83C4C042373B6_gshared (U5ERaU81XWD_t5FD42DF37358E6941664AC08DCC183DDD5D2A8F4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___eventId_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eventId_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
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
// System.Void PEkfdZJ/dEMaubS<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dEMaubS__ctor_m6C35A2713D74778864947BBF1AFF0D8A1C832E55_gshared (dEMaubS_t3E6FA1466011DF11167919E3CE9387431BF5482F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void PEkfdZJ/dEMaubS<System.Object>::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dEMaubS_System_IDisposable_Dispose_m42C1E7AB70287056EEF958EACAF10F74836F9ABE_gshared (dEMaubS_t3E6FA1466011DF11167919E3CE9387431BF5482F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean PEkfdZJ/dEMaubS<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool dEMaubS_MoveNext_mF79F4F0187A151C80A8A974F4270B382473BA4F3_gshared (dEMaubS_t3E6FA1466011DF11167919E3CE9387431BF5482F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LayoutRebuilder_tD2269CCD93BD5A8C4A92188C66E212B976FA6564_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	PEkfdZJ_tD595D4F28CCA4040E993E320983CB18FD0BF0BC9* V_1 = NULL;
	{
		int32_t L_0 = (int32_t)__this->___U3CU3E1__state_0;
		V_0 = L_0;
		PEkfdZJ_tD595D4F28CCA4040E993E320983CB18FD0BF0BC9* L_1 = (PEkfdZJ_tD595D4F28CCA4040E993E320983CB18FD0BF0BC9*)__this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_004d;
	}

IL_0020:
	{
		PEkfdZJ_tD595D4F28CCA4040E993E320983CB18FD0BF0BC9* L_4 = V_1;
		NullCheck(L_4);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)L_4->___listContainer_2;
		il2cpp_codegen_runtime_class_init_inline(LayoutRebuilder_tD2269CCD93BD5A8C4A92188C66E212B976FA6564_il2cpp_TypeInfo_var);
		LayoutRebuilder_MarkLayoutForRebuild_m37F415D59609E9D18D49423D9C33E7EA6D859EBD(L_5, NULL);
		WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663* L_6 = (WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663*)il2cpp_codegen_object_new(WaitForEndOfFrame_tE38D80923E3F8380069B423968C25ABE50A46663_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForEndOfFrame__ctor_m4AF7E576C01E6B04443BB898B1AE5D645F7D45AB(L_6, NULL);
		__this->___U3CU3E2__current_1 = (RuntimeObject*)L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)(RuntimeObject*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		PEkfdZJ_tD595D4F28CCA4040E993E320983CB18FD0BF0BC9* L_7 = V_1;
		NullCheck(L_7);
		((  void (*) (PEkfdZJ_tD595D4F28CCA4040E993E320983CB18FD0BF0BC9*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(L_7, (bool)0, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
	}

IL_004d:
	{
		PEkfdZJ_tD595D4F28CCA4040E993E320983CB18FD0BF0BC9* L_8 = V_1;
		NullCheck(L_8);
		bool L_9;
		L_9 = ((  bool (*) (PEkfdZJ_tD595D4F28CCA4040E993E320983CB18FD0BF0BC9*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		if (L_9)
		{
			goto IL_0020;
		}
	}
	{
		return (bool)0;
	}
}
// System.Object PEkfdZJ/dEMaubS<System.Object>::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* dEMaubS_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6774EDDAE48E2CF630B82F457B61D2847B179642_gshared (dEMaubS_t3E6FA1466011DF11167919E3CE9387431BF5482F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void PEkfdZJ/dEMaubS<System.Object>::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void dEMaubS_System_Collections_IEnumerator_Reset_m7214E3AB20C4BFBC41B67E676AD44F2D0EA5E48A_gshared (dEMaubS_t3E6FA1466011DF11167919E3CE9387431BF5482F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&dEMaubS_System_Collections_IEnumerator_Reset_m7214E3AB20C4BFBC41B67E676AD44F2D0EA5E48A_RuntimeMethod_var)));
	}
}
// System.Object PEkfdZJ/dEMaubS<System.Object>::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* dEMaubS_System_Collections_IEnumerator_get_Current_mF59FD1D2A5544C6777F62E3BD3E967A87029448E_gshared (dEMaubS_t3E6FA1466011DF11167919E3CE9387431BF5482F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CU3E2__current_1;
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
bool rU7BU80U5DqYU80_Invoke_m6CC97B3DAC284509AE5DD022F41D7D54AF0F43EC_Multicast(rU7BU80U5DqYU80_tF563DF40DB0CAE70F233F4D0E829DB511707B3CD* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	bool retVal = false;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		rU7BU80U5DqYU80_tF563DF40DB0CAE70F233F4D0E829DB511707B3CD* currentDelegate = reinterpret_cast<rU7BU80U5DqYU80_tF563DF40DB0CAE70F233F4D0E829DB511707B3CD*>(delegatesToInvoke[i]);
		typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
bool rU7BU80U5DqYU80_Invoke_m6CC97B3DAC284509AE5DD022F41D7D54AF0F43EC_OpenInst(rU7BU80U5DqYU80_tF563DF40DB0CAE70F233F4D0E829DB511707B3CD* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	NullCheck(___arg0);
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___arg0, method);
}
bool rU7BU80U5DqYU80_Invoke_m6CC97B3DAC284509AE5DD022F41D7D54AF0F43EC_OpenStatic(rU7BU80U5DqYU80_tF563DF40DB0CAE70F233F4D0E829DB511707B3CD* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___arg0, method);
}
bool rU7BU80U5DqYU80_Invoke_m6CC97B3DAC284509AE5DD022F41D7D54AF0F43EC_OpenStaticInvoker(rU7BU80U5DqYU80_tF563DF40DB0CAE70F233F4D0E829DB511707B3CD* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< bool, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___arg0);
}
bool rU7BU80U5DqYU80_Invoke_m6CC97B3DAC284509AE5DD022F41D7D54AF0F43EC_ClosedStaticInvoker(rU7BU80U5DqYU80_tF563DF40DB0CAE70F233F4D0E829DB511707B3CD* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< bool, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___arg0);
}
bool rU7BU80U5DqYU80_Invoke_m6CC97B3DAC284509AE5DD022F41D7D54AF0F43EC_OpenVirtual(rU7BU80U5DqYU80_tF563DF40DB0CAE70F233F4D0E829DB511707B3CD* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	NullCheck(___arg0);
	return VirtualFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), ___arg0);
}
bool rU7BU80U5DqYU80_Invoke_m6CC97B3DAC284509AE5DD022F41D7D54AF0F43EC_OpenInterface(rU7BU80U5DqYU80_tF563DF40DB0CAE70F233F4D0E829DB511707B3CD* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	NullCheck(___arg0);
	return InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___arg0);
}
bool rU7BU80U5DqYU80_Invoke_m6CC97B3DAC284509AE5DD022F41D7D54AF0F43EC_OpenGenericVirtual(rU7BU80U5DqYU80_tF563DF40DB0CAE70F233F4D0E829DB511707B3CD* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	NullCheck(___arg0);
	return GenericVirtualFuncInvoker0< bool >::Invoke(method, ___arg0);
}
bool rU7BU80U5DqYU80_Invoke_m6CC97B3DAC284509AE5DD022F41D7D54AF0F43EC_OpenGenericInterface(rU7BU80U5DqYU80_tF563DF40DB0CAE70F233F4D0E829DB511707B3CD* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	NullCheck(___arg0);
	return GenericInterfaceFuncInvoker0< bool >::Invoke(method, ___arg0);
}
// System.Void {OuWt?i/r{?]qY?<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void rU7BU80U5DqYU80__ctor_m0239BE9DE0475128CA0F5917C9B3F1EF757D44E2_gshared (rU7BU80U5DqYU80_tF563DF40DB0CAE70F233F4D0E829DB511707B3CD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&rU7BU80U5DqYU80_Invoke_m6CC97B3DAC284509AE5DD022F41D7D54AF0F43EC_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&rU7BU80U5DqYU80_Invoke_m6CC97B3DAC284509AE5DD022F41D7D54AF0F43EC_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&rU7BU80U5DqYU80_Invoke_m6CC97B3DAC284509AE5DD022F41D7D54AF0F43EC_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&rU7BU80U5DqYU80_Invoke_m6CC97B3DAC284509AE5DD022F41D7D54AF0F43EC_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&rU7BU80U5DqYU80_Invoke_m6CC97B3DAC284509AE5DD022F41D7D54AF0F43EC_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&rU7BU80U5DqYU80_Invoke_m6CC97B3DAC284509AE5DD022F41D7D54AF0F43EC_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&rU7BU80U5DqYU80_Invoke_m6CC97B3DAC284509AE5DD022F41D7D54AF0F43EC_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&rU7BU80U5DqYU80_Invoke_m6CC97B3DAC284509AE5DD022F41D7D54AF0F43EC_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&rU7BU80U5DqYU80_Invoke_m6CC97B3DAC284509AE5DD022F41D7D54AF0F43EC_Multicast;
}
// System.Boolean {OuWt?i/r{?]qY?<System.Object>::Invoke(TArg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool rU7BU80U5DqYU80_Invoke_m6CC97B3DAC284509AE5DD022F41D7D54AF0F43EC_gshared (rU7BU80U5DqYU80_tF563DF40DB0CAE70F233F4D0E829DB511707B3CD* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef bool (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult {OuWt?i/r{?]qY?<System.Object>::BeginInvoke(TArg,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* rU7BU80U5DqYU80_BeginInvoke_m1E2FD06B0C0DB0C47A3DA9947E1162661B0FA2DF_gshared (rU7BU80U5DqYU80_tF563DF40DB0CAE70F233F4D0E829DB511707B3CD* __this, RuntimeObject* ___arg0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Boolean {OuWt?i/r{?]qY?<System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool rU7BU80U5DqYU80_EndInvoke_mB08F61831758C8CF3C3CBCF73F6567388CD78DD9_gshared (rU7BU80U5DqYU80_tF563DF40DB0CAE70F233F4D0E829DB511707B3CD* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
RuntimeObject* xJYnPwl_Invoke_m54D41B7DF462537DEE5208F47E262EF84BCE4B87_Multicast(xJYnPwl_tC4842E0791A8666D5D377798EDCF84A90BF2C2E7* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		xJYnPwl_tC4842E0791A8666D5D377798EDCF84A90BF2C2E7* currentDelegate = reinterpret_cast<xJYnPwl_tC4842E0791A8666D5D377798EDCF84A90BF2C2E7*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* xJYnPwl_Invoke_m54D41B7DF462537DEE5208F47E262EF84BCE4B87_OpenInst(xJYnPwl_tC4842E0791A8666D5D377798EDCF84A90BF2C2E7* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	NullCheck(___arg0);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___arg0, method);
}
RuntimeObject* xJYnPwl_Invoke_m54D41B7DF462537DEE5208F47E262EF84BCE4B87_OpenStatic(xJYnPwl_tC4842E0791A8666D5D377798EDCF84A90BF2C2E7* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___arg0, method);
}
RuntimeObject* xJYnPwl_Invoke_m54D41B7DF462537DEE5208F47E262EF84BCE4B87_OpenStaticInvoker(xJYnPwl_tC4842E0791A8666D5D377798EDCF84A90BF2C2E7* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___arg0);
}
RuntimeObject* xJYnPwl_Invoke_m54D41B7DF462537DEE5208F47E262EF84BCE4B87_ClosedStaticInvoker(xJYnPwl_tC4842E0791A8666D5D377798EDCF84A90BF2C2E7* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___arg0);
}
RuntimeObject* xJYnPwl_Invoke_m54D41B7DF462537DEE5208F47E262EF84BCE4B87_OpenVirtual(xJYnPwl_tC4842E0791A8666D5D377798EDCF84A90BF2C2E7* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	NullCheck(___arg0);
	return VirtualFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___arg0);
}
RuntimeObject* xJYnPwl_Invoke_m54D41B7DF462537DEE5208F47E262EF84BCE4B87_OpenInterface(xJYnPwl_tC4842E0791A8666D5D377798EDCF84A90BF2C2E7* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	NullCheck(___arg0);
	return InterfaceFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___arg0);
}
RuntimeObject* xJYnPwl_Invoke_m54D41B7DF462537DEE5208F47E262EF84BCE4B87_OpenGenericVirtual(xJYnPwl_tC4842E0791A8666D5D377798EDCF84A90BF2C2E7* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	NullCheck(___arg0);
	return GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(method, ___arg0);
}
RuntimeObject* xJYnPwl_Invoke_m54D41B7DF462537DEE5208F47E262EF84BCE4B87_OpenGenericInterface(xJYnPwl_tC4842E0791A8666D5D377798EDCF84A90BF2C2E7* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	NullCheck(___arg0);
	return GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(method, ___arg0);
}
// System.Void D?jka|w/xJYnPwl<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xJYnPwl__ctor_m74EE1C28462AA22207992153A08DAC7AC1D99AC0_gshared (xJYnPwl_tC4842E0791A8666D5D377798EDCF84A90BF2C2E7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&xJYnPwl_Invoke_m54D41B7DF462537DEE5208F47E262EF84BCE4B87_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&xJYnPwl_Invoke_m54D41B7DF462537DEE5208F47E262EF84BCE4B87_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&xJYnPwl_Invoke_m54D41B7DF462537DEE5208F47E262EF84BCE4B87_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&xJYnPwl_Invoke_m54D41B7DF462537DEE5208F47E262EF84BCE4B87_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&xJYnPwl_Invoke_m54D41B7DF462537DEE5208F47E262EF84BCE4B87_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&xJYnPwl_Invoke_m54D41B7DF462537DEE5208F47E262EF84BCE4B87_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&xJYnPwl_Invoke_m54D41B7DF462537DEE5208F47E262EF84BCE4B87_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&xJYnPwl_Invoke_m54D41B7DF462537DEE5208F47E262EF84BCE4B87_OpenInst;
			}
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&xJYnPwl_Invoke_m54D41B7DF462537DEE5208F47E262EF84BCE4B87_Multicast;
}
// TResult D?jka|w/xJYnPwl<System.Object,System.Object>::Invoke(TArg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* xJYnPwl_Invoke_m54D41B7DF462537DEE5208F47E262EF84BCE4B87_gshared (xJYnPwl_tC4842E0791A8666D5D377798EDCF84A90BF2C2E7* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult D?jka|w/xJYnPwl<System.Object,System.Object>::BeginInvoke(TArg,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* xJYnPwl_BeginInvoke_mFF808E67C99C42E98A2C401D58D859F12C06E72B_gshared (xJYnPwl_tC4842E0791A8666D5D377798EDCF84A90BF2C2E7* __this, RuntimeObject* ___arg0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// TResult D?jka|w/xJYnPwl<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* xJYnPwl_EndInvoke_m78FC8DC759B0E791651C0744D57CFEAE62CDC8C8_gshared (xJYnPwl_tC4842E0791A8666D5D377798EDCF84A90BF2C2E7* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void U7EyDuwlk_Invoke_mF2D5462ED1EF2CD1F65262976619CEAFDCE18CCF_Multicast(U7EyDuwlk_t2C7C69D22E989C22400B0E7F7D3AC308EC17A8C0* __this, String_t* ___eventId0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		U7EyDuwlk_t2C7C69D22E989C22400B0E7F7D3AC308EC17A8C0* currentDelegate = reinterpret_cast<U7EyDuwlk_t2C7C69D22E989C22400B0E7F7D3AC308EC17A8C0*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___eventId0, ___data1, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void U7EyDuwlk_Invoke_mF2D5462ED1EF2CD1F65262976619CEAFDCE18CCF_OpenInst(U7EyDuwlk_t2C7C69D22E989C22400B0E7F7D3AC308EC17A8C0* __this, String_t* ___eventId0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data1, const RuntimeMethod* method)
{
	NullCheck(___eventId0);
	typedef void (*FunctionPointerType) (String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___eventId0, ___data1, method);
}
void U7EyDuwlk_Invoke_mF2D5462ED1EF2CD1F65262976619CEAFDCE18CCF_OpenStatic(U7EyDuwlk_t2C7C69D22E989C22400B0E7F7D3AC308EC17A8C0* __this, String_t* ___eventId0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___eventId0, ___data1, method);
}
void U7EyDuwlk_Invoke_mF2D5462ED1EF2CD1F65262976619CEAFDCE18CCF_OpenStaticInvoker(U7EyDuwlk_t2C7C69D22E989C22400B0E7F7D3AC308EC17A8C0* __this, String_t* ___eventId0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(__this->___method_ptr_0, method, NULL, ___eventId0, ___data1);
}
void U7EyDuwlk_Invoke_mF2D5462ED1EF2CD1F65262976619CEAFDCE18CCF_ClosedStaticInvoker(U7EyDuwlk_t2C7C69D22E989C22400B0E7F7D3AC308EC17A8C0* __this, String_t* ___eventId0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___eventId0, ___data1);
}
// System.Void Game.RoyalWord_EventManager`1/~yDuwlk<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U7EyDuwlk__ctor_m7F84D62A0A6B47A3D635BFA4DDE7C0DC8B76053D_gshared (U7EyDuwlk_t2C7C69D22E989C22400B0E7F7D3AC308EC17A8C0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&U7EyDuwlk_Invoke_mF2D5462ED1EF2CD1F65262976619CEAFDCE18CCF_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&U7EyDuwlk_Invoke_mF2D5462ED1EF2CD1F65262976619CEAFDCE18CCF_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&U7EyDuwlk_Invoke_mF2D5462ED1EF2CD1F65262976619CEAFDCE18CCF_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		bool isOpen = parameterCount == 1;
		if (isOpen)
		{
			__this->___invoke_impl_1 = (intptr_t)&U7EyDuwlk_Invoke_mF2D5462ED1EF2CD1F65262976619CEAFDCE18CCF_OpenInst;
		}
		else
		{
			if (___object0 == NULL)
				il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
			__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
			__this->___method_code_6 = (intptr_t)__this->___m_target_2;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&U7EyDuwlk_Invoke_mF2D5462ED1EF2CD1F65262976619CEAFDCE18CCF_Multicast;
}
// System.Void Game.RoyalWord_EventManager`1/~yDuwlk<System.Object>::Invoke(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U7EyDuwlk_Invoke_mF2D5462ED1EF2CD1F65262976619CEAFDCE18CCF_gshared (U7EyDuwlk_t2C7C69D22E989C22400B0E7F7D3AC308EC17A8C0* __this, String_t* ___eventId0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___eventId0, ___data1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Game.RoyalWord_EventManager`1/~yDuwlk<System.Object>::BeginInvoke(System.String,System.Object[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U7EyDuwlk_BeginInvoke_mF6BD12F152F44DA593B5D97B0B06412BBD0F95A6_gshared (U7EyDuwlk_t2C7C69D22E989C22400B0E7F7D3AC308EC17A8C0* __this, String_t* ___eventId0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___data1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	void *__d_args[3] = {0};
	__d_args[0] = ___eventId0;
	__d_args[1] = ___data1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Game.RoyalWord_EventManager`1/~yDuwlk<System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U7EyDuwlk_EndInvoke_m29A47ECC94CF11F6F3C37D7F61116257AEAF1771_gshared (U7EyDuwlk_t2C7C69D22E989C22400B0E7F7D3AC308EC17A8C0* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
