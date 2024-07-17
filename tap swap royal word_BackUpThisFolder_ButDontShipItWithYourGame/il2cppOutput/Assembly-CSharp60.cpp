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

// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// Game.RoyalWord_LevelPreviewText
struct RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var;

struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___s_emptyArray_5;
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

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
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

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.UIVertex
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 
{
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_1;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent_2;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_3;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv0
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv0_4;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv1
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv1_5;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv2
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv2_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv3
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv3_7;
};

struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_StaticFields
{
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___simpleVert_10;
};

// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_Indices_8;
	// System.Boolean UnityEngine.UI.VertexHelper::m_ListsInitalized
	bool ___m_ListsInitalized_11;
};

struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s_DefaultNormal_10;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTargetCache
	bool ___m_RaycastTargetCache_11;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_12;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_13;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_14;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_15;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_16;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_19;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_20;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_23;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_24;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_25;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_26;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_21;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_22;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_27;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_28;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_31;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_32;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_33;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_34;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_35;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_36;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_37;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_39;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_40;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_42;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_43;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_41;
};

// Game.RoyalWord_LevelPreviewText
struct RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D  : public Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62
{
	// System.Single Game.RoyalWord_LevelPreviewText::radius
	float ___radius_44;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F  : public RuntimeArray
{
	ALIGN_FIELD (8) UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 m_Items[1];

	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_gshared (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_gshared (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_gshared_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_gshared_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.UI.Text::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text__ctor_mE28BC6E42B4715F23401A9379C9681867A0631C1 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::OnPopulateMesh(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
inline void List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, const RuntimeMethod*))List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_gshared)(__this, method);
}
// System.Void UnityEngine.UI.VertexHelper::GetUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___stream0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67 (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, int32_t, const RuntimeMethod*))List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_gshared)(__this, ___index0, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
inline void List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207, const RuntimeMethod*))List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_gshared_inline)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
inline int32_t List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, const RuntimeMethod*))List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexTriangleStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___verts0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Game.RoyalWord_LevelPreviewText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText__ctor_m7D88BAA3695840FB0CE1DC6735E0C266935DD199 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, const RuntimeMethod* method) 
{
	{
		Text__ctor_mE28BC6E42B4715F23401A9379C9681867A0631C1(__this, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_28(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_28_m02FF08E50EAC0B37393CD1F9C9380A67ED615919 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((630.0f)/L_7));
		V_4 = 0;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 2)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 8)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 7)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 4)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(601.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(375.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((949.0f), (1555.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(347.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (1863.0f), (741.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 2));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_46(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_46_m596B000B30C94F0135DAB3A59A151E5ABE1BDD54 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((1653.0f)/L_7));
		V_4 = 1;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 7)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 8)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 3)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 4)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(616.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(826.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((379.0f), (1329.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(1547.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (751.0f), (1462.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 2));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_8(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_8_mB86D660B6BA78999858D5155CD05F66662B7A883 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((144.0f)/L_7));
		V_4 = 1;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 8)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 6)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 8)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(1359.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(725.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((276.0f), (514.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(1094.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (46.0f), (379.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 8));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_37(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_37_mF1BA4F80E1E99FBB4A9F11078242F301A40D8213 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((1506.0f)/L_7));
		V_4 = 0;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 2)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 3)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 5)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 5)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(939.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(796.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((250.0f), (609.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(440.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (1152.0f), (985.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 6));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_29(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_29_mDADAB4A35BECD7E6BAADE2E79F1F3ECC23E70A4A (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((580.0f)/L_7));
		V_4 = 0;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 2)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 5)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 7)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 6)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(461.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(463.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((1790.0f), (321.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(982.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (948.0f), (1184.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 2));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_13(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_13_m0E29B2429053CBDD88D4BA73E3E08758D518BFF8 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((850.0f)/L_7));
		V_4 = 1;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 5)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 3)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 8)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 5)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(1694.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(459.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((513.0f), (483.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(1785.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (1.0f), (1982.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 1));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_27(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_27_mB0C34F691179455E1C0CC86CC2E81A99CFCBE54A (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((1820.0f)/L_7));
		V_4 = 0;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 3)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 4)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 3)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 3)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(1206.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(1909.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((285.0f), (1326.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(949.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (682.0f), (359.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 2));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_41(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_41_m752D4763F237BCF9A0F9B33655754A0966C5A354 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((1815.0f)/L_7));
		V_4 = 0;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 7)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 5)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(1934.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(214.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((1399.0f), (296.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(121.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (304.0f), (1608.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 1));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_25(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_25_m629D992D3D4B223B619D7E59EC7EF819E4D931F9 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((1300.0f)/L_7));
		V_4 = 1;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 2)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 6)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 7)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 2)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(1813.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(1418.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((1295.0f), (717.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(1567.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (321.0f), (1967.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 8));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_49(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_49_m7084CDBDF8EBA5354B780E0D11842B147A189FC6 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((1529.0f)/L_7));
		V_4 = 0;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 2)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 2)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 7)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 8)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(679.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(1779.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((105.0f), (940.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(1076.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (1790.0f), (1710.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 0));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_51(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_51_mF4EDB36ACC7A54E20F82B513F26E5B96FDEB014F (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((1255.0f)/L_7));
		V_4 = 0;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 5)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 8)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(235.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(1446.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((1066.0f), (197.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(1095.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (658.0f), (252.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 1));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_38(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_38_mD0EE4A90762B77FFF44BA60EA180DA5167F04341 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((714.0f)/L_7));
		V_4 = 1;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 5)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 8)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(1659.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(1907.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((1600.0f), (770.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(1295.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (920.0f), (1897.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 7));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_45(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_45_mE1859C68B83BBB6C4E031F5355DCFB4BDB5F4963 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((1135.0f)/L_7));
		V_4 = 0;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 3)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 7)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(800.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(646.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((1191.0f), (1376.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(247.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (1757.0f), (1103.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 7));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_31(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_31_mC2A4BC51379D0BF2DF1C60B7E1181699D3AEE6C6 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((1605.0f)/L_7));
		V_4 = 1;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 2)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 8)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(347.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(1235.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((1334.0f), (177.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(373.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (1176.0f), (224.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 6));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_33(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_33_m84F5DD389ADF87AB2FB02A1E7663E144F3D0680E (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((611.0f)/L_7));
		V_4 = 0;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 5)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 8)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 7)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(1485.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(334.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((18.0f), (1978.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(850.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (343.0f), (1668.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 1));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_44(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_44_mDCA0355F28DA0A928DFB420AB63931A22631518F (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((1092.0f)/L_7));
		V_4 = 1;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 8)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 5)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(1661.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(1931.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((949.0f), (952.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(1485.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (419.0f), (1415.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 6));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_18(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_18_m11DFD61E2B9EEA640F249AA5E497651F28D41C27 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((1469.0f)/L_7));
		V_4 = 1;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 3)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 4)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 2)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(1369.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(1186.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((1718.0f), (513.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(1247.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (1479.0f), (1853.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 1));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_32(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_32_m602A73F7C18FE1335BFAE0B77B9375F7D29CADD4 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((728.0f)/L_7));
		V_4 = 0;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 7)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 5)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 7)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(1696.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(1836.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((73.0f), (1988.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(1305.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (1970.0f), (598.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 6));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_0(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_0_mB288BB58530ED595EC04F30E6C0C083C93ACC26A (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((503.0f)/L_7));
		V_4 = 1;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 3)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 5)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 4)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 2)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(1510.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(1105.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((611.0f), (1517.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(28.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (1034.0f), (1828.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 4));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_30(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_30_m98EFBBB7D2179580A994EA510626F4627161A6F1 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((803.0f)/L_7));
		V_4 = 1;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 8)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 3)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 4)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 6)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(1484.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(1101.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((1893.0f), (403.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(1053.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (1857.0f), (281.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 6));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_23(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_23_mEEC2869D58F3036A5010D900939FA75D1BEA9024 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((1687.0f)/L_7));
		V_4 = 1;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 5)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 5)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 2)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(1708.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(159.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((609.0f), (352.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(484.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (171.0f), (315.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 2));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_20(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_20_m99F9331C39E9A94798731C8AEFC1337D99CD5CF7 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((249.0f)/L_7));
		V_4 = 0;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 2)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 3)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 3)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(161.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(202.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((1069.0f), (1124.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(966.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (82.0f), (1993.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 6));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_9(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_9_m6AF8BF6BDE99E2D5C0FE24FE46BD84F465BD5FBC (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((925.0f)/L_7));
		V_4 = 1;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 7)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 7)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 7)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 7)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(494.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(1214.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((363.0f), (541.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(782.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (1388.0f), (1364.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 8));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_22(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_22_m49A62EF44BB91373D78E99C369D0B013498F262A (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((723.0f)/L_7));
		V_4 = 0;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 6)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 6)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(580.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(191.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((230.0f), (1947.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(531.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (212.0f), (297.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 5));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_19(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_19_m04A00C06BD8464ABE46BAA4672E2896A77DFDDDC (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((1360.0f)/L_7));
		V_4 = 1;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 8)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 5)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(120.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(1416.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((1487.0f), (1288.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(848.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (613.0f), (1693.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 0));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_24(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_24_m59DC2A4255554BCA829D204E281C7E2E0098E453 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((413.0f)/L_7));
		V_4 = 1;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 4)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 3)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 5)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(932.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(559.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((860.0f), (1452.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(335.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (564.0f), (382.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 5));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_34(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_34_m205CFB1851DBBFFBE066167797BEFD3D586E6F4E (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((194.0f)/L_7));
		V_4 = 0;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 2)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 5)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 4)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(1786.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(1571.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((1057.0f), (1020.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(1475.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (48.0f), (879.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 2));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_4(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_4_m0EFDE7275658A8DBBCDA435D1827D72931D74B2C (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((1598.0f)/L_7));
		V_4 = 1;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 2)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 6)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 6)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(1026.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(1640.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((1944.0f), (344.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(1318.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (1736.0f), (888.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 1));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_15(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_15_mD1A61A856E2015DE55113CBCCF3B5F9FD4B859C5 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((1185.0f)/L_7));
		V_4 = 0;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 7)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 6)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 5)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 5)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(983.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(1895.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((1926.0f), (1299.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(1193.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (6.0f), (1504.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 8));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::OnPopulateMesh(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText_OnPopulateMesh_mE58545764015CEFD442487043FAED5D3A5ABF136 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((360.0f)/L_7));
		V_4 = 0;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 2)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 3)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 4)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 5)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(2.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(2.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((0.0f), (0.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(6.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (0.0f), (1.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 6));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_40(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_40_m87FA94EC9BC5CF774B98DEBB3EAA08F11C0A4F89 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((89.0f)/L_7));
		V_4 = 1;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 2)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 4)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(1252.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(938.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((1993.0f), (1194.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(219.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (264.0f), (122.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 8));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_6(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_6_m9A88BF2E7E7C724F6BF496F0508E39B5905C8A0A (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((750.0f)/L_7));
		V_4 = 1;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 2)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 7)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 3)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 4)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(972.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(1416.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((1472.0f), (1002.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(1363.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (1262.0f), (522.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 2));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_36(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_36_m1709AAEE8A71BD825BB0A5EBC5EB30BC5BEE37E3 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((475.0f)/L_7));
		V_4 = 0;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 2)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 4)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 7)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 3)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(1569.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(1506.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((1236.0f), (1179.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(332.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (379.0f), (1137.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 7));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_10(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_10_m2DC14A97836523A1BCD28C25696F1C593678D146 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((1475.0f)/L_7));
		V_4 = 0;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 7)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 2)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 7)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 6)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(66.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(142.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((573.0f), (546.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(168.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (297.0f), (1731.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 3));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_35(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_35_mF612993D4BC7205E199084243593AFBC09E7CFE3 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((850.0f)/L_7));
		V_4 = 0;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 7)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 4)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(1486.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(537.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((166.0f), (1376.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(1045.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (1315.0f), (1830.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 2));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_50(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_50_mDA82AA446D6D2D75564A09B7B02A868333915BBD (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((1874.0f)/L_7));
		V_4 = 0;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 4)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 4)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 5)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 4)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(1775.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(1173.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((1788.0f), (1165.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(1225.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (1265.0f), (1221.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 3));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_48(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_48_mD6DCD1A64CF75A9F4621B5689E2CC73E2C5DA41F (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((549.0f)/L_7));
		V_4 = 1;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 8)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 4)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(9.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(1306.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((1077.0f), (995.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(350.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (123.0f), (672.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 4));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_47(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_47_m3C3031ED40299F84239EE8DC4B291BF7EF5FD690 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((385.0f)/L_7));
		V_4 = 0;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 8)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 8)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 7)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 4)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(127.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(580.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((1950.0f), (1155.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(950.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (305.0f), (1940.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 8));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_7(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_7_m63B499A0BB9CD4A0C3089B49D2887C1D71B25413 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((1901.0f)/L_7));
		V_4 = 0;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 7)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 3)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 3)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(1698.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(1360.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((1771.0f), (420.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(180.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (1053.0f), (764.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 3));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_16(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_16_mBADAE90A90F779BC04AF84072F08CA72652873EC (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((856.0f)/L_7));
		V_4 = 1;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 7)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 5)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 5)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(440.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(789.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((983.0f), (1088.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(717.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (1381.0f), (1870.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 2));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_52(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_52_mA0EBA23D72D880431ACD515194C9556C3BF13BAD (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((1967.0f)/L_7));
		V_4 = 1;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 8)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 3)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(793.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(1708.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((934.0f), (1196.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(1192.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (351.0f), (828.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 8));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_3(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_3_m5E28621756EA73C9A4F15A0C1371DAD8FF40B986 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((1323.0f)/L_7));
		V_4 = 1;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 7)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 8)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(688.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(1068.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((619.0f), (956.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(1510.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (314.0f), (1334.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 6));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_2(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_2_m274074D2B8A52121A846E8EFCFC65F26137DAD49 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((1166.0f)/L_7));
		V_4 = 1;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 6)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 8)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 2)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(1091.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(100.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((1855.0f), (1001.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(502.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (1717.0f), (1023.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 7));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_17(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_17_m52CE42FB22A415BDFE78E7661C0844830AEDC61F (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((1768.0f)/L_7));
		V_4 = 1;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 4)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 2)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 8)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(354.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(897.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((1491.0f), (913.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(1022.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (1472.0f), (1859.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 6));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_26(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_26_mB2E2C5A3945A90C4D7B426DB1A4FCD0EEA938C0E (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((1373.0f)/L_7));
		V_4 = 0;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 7)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 8)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 3)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 8)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(932.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(1403.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((643.0f), (251.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(285.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (41.0f), (1087.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 2));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_43(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_43_mDBF08D4989772095730F01416BDAC4B63D71ACBC (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((1394.0f)/L_7));
		V_4 = 0;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 7)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 5)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 5)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 5)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(1297.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(117.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((1875.0f), (1009.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(712.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (1346.0f), (786.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 3));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_11(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_11_m9ED39F881CB1A16CE71BE6AC2995FC3F9BD1A1EF (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((953.0f)/L_7));
		V_4 = 0;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 2)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 7)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 2)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 2)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(184.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(837.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((696.0f), (1396.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(1842.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (1439.0f), (1623.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 2));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_39(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_39_m7A2FE8D56535C4AFBF4CE289BB8FB75E254F2FC9 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((1494.0f)/L_7));
		V_4 = 1;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 4)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 8)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 5)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(559.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(1846.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((520.0f), (1004.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(1365.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (1845.0f), (989.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 6));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_1(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_1_m3BCB540AE7CDC776D24536ED77CF68E3C6E8F51A (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((1825.0f)/L_7));
		V_4 = 1;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 8)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 3)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(1562.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(1404.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((1655.0f), (1566.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(1735.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (429.0f), (1823.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 3));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_12(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_12_mAAD7325714FCDB973C01DF2DA991F22FA2FA499C (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((1086.0f)/L_7));
		V_4 = 1;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 6)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 6)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 3)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 5)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(1262.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(758.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((611.0f), (1688.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(1434.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (898.0f), (1810.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 7));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_21(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_21_m6525ACFB2A2893CA4AED16BC425C4CC7032E8FC7 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((130.0f)/L_7));
		V_4 = 1;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 3)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 2)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 3)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(384.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(1114.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((1265.0f), (912.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(1709.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (367.0f), (690.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 3));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_42(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_42_m18912C03D402CEDF1A34C7F99EF100AB7F11FCCF (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((674.0f)/L_7));
		V_4 = 1;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 5)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 3)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 4)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(1821.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(394.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((1029.0f), (894.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(1195.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (1403.0f), (106.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 1));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_5(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_5_mC177336774238CC757314FE19B3E0370E191CA6B (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((476.0f)/L_7));
		V_4 = 1;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 2)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 2)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(1405.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(1544.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((261.0f), (560.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(1771.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (1531.0f), (81.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 1));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
// System.Void Game.RoyalWord_LevelPreviewText::__BB_OBFUSCATOR_14(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoyalWord_LevelPreviewText___BB_OBFUSCATOR_14_m2AFF5B5F906DAD89C962E7FC3F3E4C86585D2A15 (RoyalWord_LevelPreviewText_t2002BA44BE53153DD5762DB7B3981142123CD81D* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___toFill0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_0 = NULL;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* V_1 = NULL;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_5;
	memset((&V_5), 0, sizeof(V_5));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_6;
	memset((&V_6), 0, sizeof(V_6));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_7;
	memset((&V_7), 0, sizeof(V_7));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_8;
	memset((&V_8), 0, sizeof(V_8));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_9;
	memset((&V_9), 0, sizeof(V_9));
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_10;
	memset((&V_10), 0, sizeof(V_10));
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_13;
	memset((&V_13), 0, sizeof(V_13));
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_0 = ___toFill0;
		Text_OnPopulateMesh_m6505569424B120C338EAF6840893E38530185ECE(__this, L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_0 = L_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		V_1 = L_2;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_3 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = V_0;
		NullCheck(L_3);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_3, L_4, NULL);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, __this);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		V_2 = ((float)L_6);
		float L_7 = V_2;
		V_3 = ((float)((170.0f)/L_7));
		V_4 = 0;
		goto IL_024c;
	}

IL_0037:
	{
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = V_0;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, L_9, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_5 = L_10;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = V_0;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_13;
		L_13 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_11, ((int32_t)il2cpp_codegen_add(L_12, 0)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_6 = L_13;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = V_0;
		int32_t L_15 = V_4;
		NullCheck(L_14);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_16;
		L_16 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_14, ((int32_t)il2cpp_codegen_add(L_15, 8)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_7 = L_16;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_17 = V_0;
		int32_t L_18 = V_4;
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_19;
		L_19 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_17, ((int32_t)il2cpp_codegen_add(L_18, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_8 = L_19;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_20 = V_0;
		int32_t L_21 = V_4;
		NullCheck(L_20);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22;
		L_22 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_20, ((int32_t)il2cpp_codegen_add(L_21, 8)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_9 = L_22;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = V_0;
		int32_t L_24 = V_4;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, ((int32_t)il2cpp_codegen_add(L_24, 6)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		V_10 = L_25;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_26 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = L_26.___position_0;
		float L_28 = L_27.___x_2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29.___position_0;
		float L_31 = L_30.___x_2;
		float L_32;
		L_32 = fabsf(((float)il2cpp_codegen_subtract(L_28, L_31)));
		V_11 = ((float)(L_32/(468.0f)));
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33.___position_0;
		float L_35 = L_34.___y_3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_36 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = L_36.___position_0;
		float L_38 = L_37.___y_3;
		float L_39;
		L_39 = fabsf(((float)il2cpp_codegen_subtract(L_35, L_38)));
		V_12 = ((float)(L_39/(1874.0f)));
		float L_40 = __this->___radius_44;
		int32_t L_41 = V_4;
		float L_42 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_43;
		L_43 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline((1908.0f), (262.0f), ((float)il2cpp_codegen_multiply(((float)(((float)L_41)/(1353.0f))), L_42)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_44), (1396.0f), (1090.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_43, L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_40, L_46, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_48;
		L_48 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_47, NULL);
		V_13 = L_48;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49 = V_13;
		float L_50 = L_49.___x_0;
		float L_51 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_52 = V_13;
		float L_53 = L_52.___y_1;
		float L_54 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_55 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = L_55.___position_0;
		float L_57 = L_56.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		memset((&L_58), 0, sizeof(L_58));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_58), ((float)il2cpp_codegen_subtract(L_50, L_51)), ((float)il2cpp_codegen_add(L_53, L_54)), L_57, /*hidden argument*/NULL);
		(&V_5)->___position_0 = L_58;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59 = V_13;
		float L_60 = L_59.___x_0;
		float L_61 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = V_13;
		float L_63 = L_62.___y_1;
		float L_64 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_65 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = L_65.___position_0;
		float L_67 = L_66.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		memset((&L_68), 0, sizeof(L_68));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_68), ((float)il2cpp_codegen_add(L_60, L_61)), ((float)il2cpp_codegen_add(L_63, L_64)), L_67, /*hidden argument*/NULL);
		(&V_6)->___position_0 = L_68;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = V_13;
		float L_70 = L_69.___x_0;
		float L_71 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72 = V_13;
		float L_73 = L_72.___y_1;
		float L_74 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_75 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = L_75.___position_0;
		float L_77 = L_76.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		memset((&L_78), 0, sizeof(L_78));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_78), ((float)il2cpp_codegen_add(L_70, L_71)), ((float)il2cpp_codegen_subtract(L_73, L_74)), L_77, /*hidden argument*/NULL);
		(&V_7)->___position_0 = L_78;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79 = V_13;
		float L_80 = L_79.___x_0;
		float L_81 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_82 = V_13;
		float L_83 = L_82.___y_1;
		float L_84 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_85 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86 = L_85.___position_0;
		float L_87 = L_86.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		memset((&L_88), 0, sizeof(L_88));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_88), ((float)il2cpp_codegen_add(L_80, L_81)), ((float)il2cpp_codegen_subtract(L_83, L_84)), L_87, /*hidden argument*/NULL);
		(&V_8)->___position_0 = L_88;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_89 = V_13;
		float L_90 = L_89.___x_0;
		float L_91 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_92 = V_13;
		float L_93 = L_92.___y_1;
		float L_94 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_95 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = L_95.___position_0;
		float L_97 = L_96.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98;
		memset((&L_98), 0, sizeof(L_98));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_98), ((float)il2cpp_codegen_subtract(L_90, L_91)), ((float)il2cpp_codegen_subtract(L_93, L_94)), L_97, /*hidden argument*/NULL);
		(&V_9)->___position_0 = L_98;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = V_13;
		float L_100 = L_99.___x_0;
		float L_101 = V_11;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_102 = V_13;
		float L_103 = L_102.___y_1;
		float L_104 = V_12;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_105 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = L_105.___position_0;
		float L_107 = L_106.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		memset((&L_108), 0, sizeof(L_108));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_108), ((float)il2cpp_codegen_subtract(L_100, L_101)), ((float)il2cpp_codegen_add(L_103, L_104)), L_107, /*hidden argument*/NULL);
		(&V_10)->___position_0 = L_108;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_109 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_110 = V_5;
		NullCheck(L_109);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_109, L_110, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_111 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_112 = V_6;
		NullCheck(L_111);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_111, L_112, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_113 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_114 = V_7;
		NullCheck(L_113);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_113, L_114, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_115 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_116 = V_8;
		NullCheck(L_115);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_115, L_116, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_117 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_118 = V_9;
		NullCheck(L_117);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_117, L_118, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_119 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_120 = V_10;
		NullCheck(L_119);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_119, L_120, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		int32_t L_121 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_121, 4));
	}

IL_024c:
	{
		int32_t L_122 = V_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_123 = V_0;
		NullCheck(L_123);
		int32_t L_124;
		L_124 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_123, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		if ((((int32_t)L_122) < ((int32_t)L_124)))
		{
			goto IL_0037;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_125 = ___toFill0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_126 = V_1;
		NullCheck(L_125);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_125, L_126, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___v0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___v0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___v0;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_gshared_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___item0, const RuntimeMethod* method) 
{
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_1 = (UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_6 = V_0;
		int32_t L_7 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207)L_8);
		return;
	}

IL_0034:
	{
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_9 = ___item0;
		((  void (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_gshared_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
