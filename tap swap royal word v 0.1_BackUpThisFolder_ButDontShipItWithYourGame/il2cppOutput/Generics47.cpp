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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// AtXV]?y/xk`XOuW<System.Object>
struct xk_XOuW_tD4310C09B5053BD43E1DCB7DB58360DDA8F75A59;
// RGRFUv[/yYtjk}l<System.Object,System.Object>
struct yYtjkU7Dl_t00CB0D48A2C77B7EB2D34405C8986F8C761BF433;
// ?ZVCVHI<System.Object>
struct U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AtXV]?y/xk`XOuW<System.Object>
struct xk_XOuW_tD4310C09B5053BD43E1DCB7DB58360DDA8F75A59  : public RuntimeObject
{
	// UnityEngine.RectTransform AtXV]?y/xk`XOuW::target
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___target_0;
	// System.Int32 AtXV]?y/xk`XOuW::index
	int32_t ___index_1;
	// System.Single AtXV]?y/xk`XOuW::timer
	float ___timer_2;
	// System.Single AtXV]?y/xk`XOuW::from
	float ___from_3;
	// System.Single AtXV]?y/xk`XOuW::to
	float ___to_4;
};

// ?ZVCVHI<System.Object>
struct U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A  : public RuntimeObject
{
	// T ?ZVCVHI::_Instance
	RuntimeObject* ____Instance_0;
};
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

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

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
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

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// RGRFUv[/yYtjk}l<System.Object,System.Object>
struct yYtjkU7Dl_t00CB0D48A2C77B7EB2D34405C8986F8C761BF433  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
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



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void AtXV]?y/xk`XOuW<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void xk_XOuW__ctor_mCF0C5122F4135BF7E178768918908E417F1BFC14_gshared (xk_XOuW_tD4310C09B5053BD43E1DCB7DB58360DDA8F75A59* __this, const RuntimeMethod* method) 
{
	{
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
RuntimeObject* yYtjkU7Dl_Invoke_m4584CA59409D3387F702073009A1274562D3D287_Multicast(yYtjkU7Dl_t00CB0D48A2C77B7EB2D34405C8986F8C761BF433* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	RuntimeObject* retVal = NULL;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		yYtjkU7Dl_t00CB0D48A2C77B7EB2D34405C8986F8C761BF433* currentDelegate = reinterpret_cast<yYtjkU7Dl_t00CB0D48A2C77B7EB2D34405C8986F8C761BF433*>(delegatesToInvoke[i]);
		typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
RuntimeObject* yYtjkU7Dl_Invoke_m4584CA59409D3387F702073009A1274562D3D287_OpenInst(yYtjkU7Dl_t00CB0D48A2C77B7EB2D34405C8986F8C761BF433* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	NullCheck(___arg0);
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___arg0, method);
}
RuntimeObject* yYtjkU7Dl_Invoke_m4584CA59409D3387F702073009A1274562D3D287_OpenStatic(yYtjkU7Dl_t00CB0D48A2C77B7EB2D34405C8986F8C761BF433* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___arg0, method);
}
RuntimeObject* yYtjkU7Dl_Invoke_m4584CA59409D3387F702073009A1274562D3D287_OpenStaticInvoker(yYtjkU7Dl_t00CB0D48A2C77B7EB2D34405C8986F8C761BF433* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___arg0);
}
RuntimeObject* yYtjkU7Dl_Invoke_m4584CA59409D3387F702073009A1274562D3D287_ClosedStaticInvoker(yYtjkU7Dl_t00CB0D48A2C77B7EB2D34405C8986F8C761BF433* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___arg0);
}
RuntimeObject* yYtjkU7Dl_Invoke_m4584CA59409D3387F702073009A1274562D3D287_OpenVirtual(yYtjkU7Dl_t00CB0D48A2C77B7EB2D34405C8986F8C761BF433* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	NullCheck(___arg0);
	return VirtualFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), ___arg0);
}
RuntimeObject* yYtjkU7Dl_Invoke_m4584CA59409D3387F702073009A1274562D3D287_OpenInterface(yYtjkU7Dl_t00CB0D48A2C77B7EB2D34405C8986F8C761BF433* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	NullCheck(___arg0);
	return InterfaceFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___arg0);
}
RuntimeObject* yYtjkU7Dl_Invoke_m4584CA59409D3387F702073009A1274562D3D287_OpenGenericVirtual(yYtjkU7Dl_t00CB0D48A2C77B7EB2D34405C8986F8C761BF433* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	NullCheck(___arg0);
	return GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(method, ___arg0);
}
RuntimeObject* yYtjkU7Dl_Invoke_m4584CA59409D3387F702073009A1274562D3D287_OpenGenericInterface(yYtjkU7Dl_t00CB0D48A2C77B7EB2D34405C8986F8C761BF433* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	NullCheck(___arg0);
	return GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(method, ___arg0);
}
// System.Void RGRFUv[/yYtjk}l<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void yYtjkU7Dl__ctor_mBF3FF71C87E46B8829666017F08F6DFD60B8A21D_gshared (yYtjkU7Dl_t00CB0D48A2C77B7EB2D34405C8986F8C761BF433* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
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
				__this->___invoke_impl_1 = (intptr_t)&yYtjkU7Dl_Invoke_m4584CA59409D3387F702073009A1274562D3D287_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&yYtjkU7Dl_Invoke_m4584CA59409D3387F702073009A1274562D3D287_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&yYtjkU7Dl_Invoke_m4584CA59409D3387F702073009A1274562D3D287_OpenStatic;
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
						__this->___invoke_impl_1 = (intptr_t)&yYtjkU7Dl_Invoke_m4584CA59409D3387F702073009A1274562D3D287_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&yYtjkU7Dl_Invoke_m4584CA59409D3387F702073009A1274562D3D287_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&yYtjkU7Dl_Invoke_m4584CA59409D3387F702073009A1274562D3D287_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&yYtjkU7Dl_Invoke_m4584CA59409D3387F702073009A1274562D3D287_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&yYtjkU7Dl_Invoke_m4584CA59409D3387F702073009A1274562D3D287_OpenInst;
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
	__this->___extra_arg_5 = (intptr_t)&yYtjkU7Dl_Invoke_m4584CA59409D3387F702073009A1274562D3D287_Multicast;
}
// TResult RGRFUv[/yYtjk}l<System.Object,System.Object>::Invoke(TArg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* yYtjkU7Dl_Invoke_m4584CA59409D3387F702073009A1274562D3D287_gshared (yYtjkU7Dl_t00CB0D48A2C77B7EB2D34405C8986F8C761BF433* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult RGRFUv[/yYtjk}l<System.Object,System.Object>::BeginInvoke(TArg,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* yYtjkU7Dl_BeginInvoke_m55330C8C66B864A812A7F0E27156DFB205F1280E_gshared (yYtjkU7Dl_t00CB0D48A2C77B7EB2D34405C8986F8C761BF433* __this, RuntimeObject* ___arg0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___arg0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// TResult RGRFUv[/yYtjk}l<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* yYtjkU7Dl_EndInvoke_mD333FC892743E523163F789DDCA653BFF8D0F50F_gshared (yYtjkU7Dl_t00CB0D48A2C77B7EB2D34405C8986F8C761BF433* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
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
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_4(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_4_mF9562E8A8C54B850E68B8B630314D742B8A8D86B_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)16));
		return L_3;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_2(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_2_mC3C0F074AE2C9D8A9164A197C071C798D4F81794_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)-33));
		return L_3;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_12(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_12_m407088F8D33FF449B88E08281906D89CFAD45C41_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)-51));
		return L_3;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_17(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_17_mEF12E8DBDEF7E5775150F0E63C26E5461C679C13_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)-45));
		return L_3;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI_GetField_mBFD368E1A1F34BB0D18CB93738C83E85C8B85E94_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)36));
		return L_3;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_29(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_29_mF6F8344DFECAC7BA0E6096590551C52F3B700C46_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)-61));
		return L_3;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_7(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_7_m65A3A62A93D83AC4B4A823CF2B7CE6FB12E635CA_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)74));
		return L_3;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_27(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_27_mE1711F7338888C5EADB1D5CE8F05A764FBEE4495_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)1));
		return L_3;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_16(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_16_m2A1E5046CEFDCDE0365693D654E71EBD71D8596B_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)-56));
		return L_3;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_3(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_3_m5B9EF6C0E6F904E21816ACBC321AB4155C4A7C29_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)33));
		return L_3;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_22(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_22_m80206E1C05C91840D6452AF5999B5CCAC0CE392C_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)-15));
		return L_3;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_25(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_25_mD7ABC9D9F4753BAC0060E5BB24DB0D15C38667B5_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)43));
		return L_3;
	}
}
// System.Void ?ZVCVHI<System.Object>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U80ZVCVHI__ctor_mFCE1EF16B9CDEA585A02A586CF43301905A26D8A_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, RuntimeObject* ___instance0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		RuntimeObject* L_0 = ___instance0;
		__this->____Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____Instance_0), (void*)L_0);
		return;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_10(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_10_mAE9A99CCCE3AF41605F1E5DFAB4C64325B3FE5AD_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)-21));
		return L_3;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_5(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_5_mE0B23908150D7E7C157D30A19CCCE304427C97D7_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)73));
		return L_3;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_15(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_15_mD20FC170EF828379680D6565799381BE5247B084_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)37));
		return L_3;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_11(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_11_m310991C8F8C50EEADA3C6ED4D41CA038C37F7766_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)-5));
		return L_3;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_20(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_20_mA9BA3CEA71DF0D0B2DE1CEF5802FCAFFACE4F376_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)-50));
		return L_3;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_13(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_13_mB9A89DF3B35667331ED5900731ED74CF96C39EF6_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)48));
		return L_3;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_19(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_19_m8A360B7DDF8B474EBD9CF1B641E82B8019029B24_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)-72));
		return L_3;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_1(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_1_m1E1B56F5F355BB8C06EABB6789E5C3063D143BAE_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)42));
		return L_3;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_24(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_24_m9E2D045769F4BA18AF98FCDF29C3948CF1B06E0F_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)-109));
		return L_3;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_8(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_8_mAEF89AAECAD70C5886B8B2A4EE15DEEE02AF4FAF_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)-119));
		return L_3;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_18(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_18_mD60E269AAA9EE2F14FC43868E82670F3AE070503_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)59));
		return L_3;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_28(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_28_m3B9A3FFF62B08E63AC7605A7BDDAD45160B0F035_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)-48));
		return L_3;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_6(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_6_m770879AFA9752A6E0B99B0C5A4198862BA450BE5_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)117));
		return L_3;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_14(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_14_m8CFAE6EE4DDBB3C7E9D30B0D03FF1587A0CCAC62_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)-67));
		return L_3;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_21(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_21_m2149E4F13DA2284C3FDE3437AF83C21EF780F8FC_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)84));
		return L_3;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_9(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_9_m949E2362DB6C3D0850C9F1C7337AD53CC29B95AE_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)-124));
		return L_3;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_23(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_23_m45E3286F9C10471BFBBDB41046612D8842FABD7B_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)-100));
		return L_3;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_26(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_26_mB8217982E1A0CDBF73320C2B1393EF654965CF93_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)-27));
		return L_3;
	}
}
// System.Reflection.FieldInfo ?ZVCVHI<System.Object>::__BB_OBFUSCATOR_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* U80ZVCVHI___BB_OBFUSCATOR_0_m75EBE41A8F9FEA2A96F8908206D2FD4351051219_gshared (U80ZVCVHI_tE863F6EBB384BC4837128436A916C5D954AAC03A* __this, String_t* ___fieldName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->klass->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		String_t* L_2 = ___fieldName0;
		NullCheck(L_1);
		FieldInfo_t* L_3;
		L_3 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(87 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_1, L_2, (int32_t)((int32_t)121));
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
