#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// GameController
struct GameController_t3607102586;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// System.Object
struct Il2CppObject;
// Ground
struct Ground_t1296415243;
// MainMenuController
struct MainMenuController_t2486335374;
// Movement
struct Movement_t2096174109;
// PipeSetup
struct PipeSetup_t2218399289;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;
// PlayerController
struct PlayerController_t4148409433;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// UnityEngine.Collision2D
struct Collision2D_t1539500754;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// PlayerController/<waitForGameOver>c__Iterator0
struct U3CwaitForGameOverU3Ec__Iterator0_t2042742681;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharp_GameController3607102586.h"
#include "AssemblyU2DCSharp_GameController3607102586MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time31991979MethodDeclarations.h"
#include "mscorlib_System_Single2076509932.h"
#include "AssemblyU2DCSharp_PlayerController4148409433.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_Transform3275118058MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object1021602117MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Random1170710517MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433.h"
#include "mscorlib_System_Int322071877448.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Int322071877448MethodDeclarations.h"
#include "mscorlib_System_Object2689449295MethodDeclarations.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UI_UnityEngine_UI_Text356221433MethodDeclarations.h"
#include "UnityEngine_UnityEngine_PlayerPrefs3325146001MethodDeclarations.h"
#include "UnityEngine_UnityEngine_SceneManagement_SceneManager90660965MethodDeclarations.h"
#include "AssemblyU2DCSharp_Ground1296415243.h"
#include "AssemblyU2DCSharp_Ground1296415243MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "AssemblyU2DCSharp_MainMenuController2486335374.h"
#include "AssemblyU2DCSharp_MainMenuController2486335374MethodDeclarations.h"
#include "AssemblyU2DCSharp_Movement2096174109.h"
#include "AssemblyU2DCSharp_Movement2096174109MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector32243707580MethodDeclarations.h"
#include "AssemblyU2DCSharp_PipeSetup2218399289.h"
#include "AssemblyU2DCSharp_PipeSetup2218399289MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1756533147MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector22243707579MethodDeclarations.h"
#include "UnityEngine_UnityEngine_SpriteRenderer1209076198.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Renderer257310565MethodDeclarations.h"
#include "AssemblyU2DCSharp_PlayerController4148409433MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody2D502193897.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_Input1785128008MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody2D502193897MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"
#include "mscorlib_System_String2029220233MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Coroutine2299508840.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754MethodDeclarations.h"
#include "AssemblyU2DCSharp_PlayerController_U3CwaitForGameO2042742681MethodDeclarations.h"
#include "AssemblyU2DCSharp_PlayerController_U3CwaitForGameO2042742681.h"
#include "UnityEngine_UnityEngine_Mathf2336485820MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918MethodDeclarations.h"
#include "UnityEngine_UnityEngine_WaitForSeconds3839502067MethodDeclarations.h"
#include "mscorlib_System_UInt322149682021.h"
#include "UnityEngine_UnityEngine_WaitForSeconds3839502067.h"
#include "mscorlib_System_NotSupportedException1793819818MethodDeclarations.h"
#include "mscorlib_System_NotSupportedException1793819818.h"

// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C"  Il2CppObject * Object_Instantiate_TisIl2CppObject_m3829784634_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * p0, Vector3_t2243707580  p1, Quaternion_t4030073918  p2, const MethodInfo* method);
#define Object_Instantiate_TisIl2CppObject_m3829784634(__this /* static, unused */, p0, p1, p2, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, Vector3_t2243707580 , Quaternion_t4030073918 , const MethodInfo*))Object_Instantiate_TisIl2CppObject_m3829784634_gshared)(__this /* static, unused */, p0, p1, p2, method)
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
#define Object_Instantiate_TisGameObject_t1756533147_m3064851704(__this /* static, unused */, p0, p1, p2, method) ((  GameObject_t1756533147 * (*) (Il2CppObject * /* static, unused */, GameObject_t1756533147 *, Vector3_t2243707580 , Quaternion_t4030073918 , const MethodInfo*))Object_Instantiate_TisIl2CppObject_m3829784634_gshared)(__this /* static, unused */, p0, p1, p2, method)
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared (GameObject_t1756533147 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisIl2CppObject_m2812611596(__this, method) ((  Il2CppObject * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
#define GameObject_GetComponent_TisSpriteRenderer_t1209076198_m1184556631(__this, method) ((  SpriteRenderer_t1209076198 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m2812611596_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m4109961936_gshared (Component_t3819376471 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m4109961936(__this, method) ((  Il2CppObject * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, method) ((  Rigidbody2D_t502193897 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m4109961936_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GameController::.ctor()
extern "C"  void GameController__ctor_m1439649957 (GameController_t3607102586 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::Start()
extern "C"  void GameController_Start_m239487205 (GameController_t3607102586 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void GameController::Update()
extern "C"  void GameController_Update_m1556003900 (GameController_t3607102586 * __this, const MethodInfo* method)
{
	{
		float L_0 = __this->get_timer_6();
		if ((!(((float)L_0) <= ((float)(0.0f)))))
		{
			goto IL_0029;
		}
	}
	{
		PlayerController_t4148409433 * L_1 = __this->get_PC_7();
		NullCheck(L_1);
		bool L_2 = L_1->get_isStart_5();
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		GameController_PipeSpwaner_m3756765945(__this, /*hidden argument*/NULL);
	}

IL_0029:
	{
		float L_3 = __this->get_timer_6();
		float L_4 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_timer_6(((float)((float)L_3-(float)L_4)));
		GameController_ScoreFunction_m2113445239(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::PipeSpwaner()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var;
extern const uint32_t GameController_PipeSpwaner_m3756765945_MetadataUsageId;
extern "C"  void GameController_PipeSpwaner_m3756765945 (GameController_t3607102586 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_PipeSpwaner_m3756765945_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_t1756533147 * L_0 = __this->get_pipePrefab_2();
		Transform_t3275118058 * L_1 = __this->get_pipeSpawn_3();
		NullCheck(L_1);
		Vector3_t2243707580  L_2 = Transform_get_position_m1104419803(L_1, /*hidden argument*/NULL);
		Transform_t3275118058 * L_3 = __this->get_pipeSpawn_3();
		NullCheck(L_3);
		Quaternion_t4030073918  L_4 = Transform_get_rotation_m1033555130(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Instantiate_TisGameObject_t1756533147_m3064851704(NULL /*static, unused*/, L_0, L_2, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_t1756533147_m3064851704_MethodInfo_var);
		float L_5 = __this->get_minTime_4();
		float L_6 = __this->get_maxTime_5();
		float L_7 = Random_Range_m2884721203(NULL /*static, unused*/, L_5, L_6, /*hidden argument*/NULL);
		__this->set_timer_6(L_7);
		return;
	}
}
// System.Void GameController::ScoreFunction()
extern "C"  void GameController_ScoreFunction_m2113445239 (GameController_t3607102586 * __this, const MethodInfo* method)
{
	{
		Text_t356221433 * L_0 = __this->get_score_8();
		PlayerController_t4148409433 * L_1 = __this->get_PC_7();
		NullCheck(L_1);
		int32_t* L_2 = L_1->get_address_of_playerScore_6();
		String_t* L_3 = Int32_ToString_m2960866144(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_3);
		return;
	}
}
// System.Void GameController::HighScoreFunction()
extern Il2CppCodeGenString* _stringLiteral3131029212;
extern const uint32_t GameController_HighScoreFunction_m410548917_MetadataUsageId;
extern "C"  void GameController_HighScoreFunction_m410548917 (GameController_t3607102586 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameController_HighScoreFunction_m410548917_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Text_t356221433 * L_0 = __this->get_highScore_9();
		int32_t L_1 = PlayerPrefs_GetInt_m2889062785(NULL /*static, unused*/, _stringLiteral3131029212, /*hidden argument*/NULL);
		V_0 = L_1;
		String_t* L_2 = Int32_ToString_m2960866144((&V_0), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(72 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		return;
	}
}
// System.Void GameController::ReplyFunction()
extern "C"  void GameController_ReplyFunction_m3609964093 (GameController_t3607102586 * __this, const MethodInfo* method)
{
	{
		Time_set_timeScale_m2194722837(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		SceneManager_LoadScene_m87258056(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void GameController::MainMenuButton()
extern "C"  void GameController_MainMenuButton_m2201432183 (GameController_t3607102586 * __this, const MethodInfo* method)
{
	{
		Time_set_timeScale_m2194722837(NULL /*static, unused*/, (1.0f), /*hidden argument*/NULL);
		SceneManager_LoadScene_m87258056(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Ground::.ctor()
extern "C"  void Ground__ctor_m3448510418 (Ground_t1296415243 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Ground::Start()
extern "C"  void Ground_Start_m2085213878 (Ground_t1296415243 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Ground::Update()
extern "C"  void Ground_Update_m2148877491 (Ground_t1296415243 * __this, const MethodInfo* method)
{
	{
		Ground_Reposition_m635183090(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Ground::Reposition()
extern "C"  void Ground_Reposition_m635183090 (Ground_t1296415243 * __this, const MethodInfo* method)
{
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t2243707580  L_1 = Transform_get_position_m1104419803(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_x_1();
		Transform_t3275118058 * L_3 = __this->get_groundSpawn_2();
		NullCheck(L_3);
		Vector3_t2243707580  L_4 = Transform_get_position_m1104419803(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = (&V_1)->get_x_1();
		if ((!(((float)L_2) <= ((float)((-L_5))))))
		{
			goto IL_0045;
		}
	}
	{
		Transform_t3275118058 * L_6 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_7 = __this->get_groundSpawn_2();
		NullCheck(L_7);
		Vector3_t2243707580  L_8 = Transform_get_position_m1104419803(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_m2469242620(L_6, L_8, /*hidden argument*/NULL);
	}

IL_0045:
	{
		return;
	}
}
// System.Void MainMenuController::.ctor()
extern "C"  void MainMenuController__ctor_m3036212531 (MainMenuController_t2486335374 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MainMenuController::PlayButton()
extern "C"  void MainMenuController_PlayButton_m2370959205 (MainMenuController_t2486335374 * __this, const MethodInfo* method)
{
	{
		SceneManager_LoadScene_m87258056(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Movement::.ctor()
extern "C"  void Movement__ctor_m3661627584 (Movement_t2096174109 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Movement::Start()
extern "C"  void Movement_Start_m3276351816 (Movement_t2096174109 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Movement::Update()
extern "C"  void Movement_Update_m4261240041 (Movement_t2096174109 * __this, const MethodInfo* method)
{
	{
		Movement_movementFunction_m2146354917(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Movement::movementFunction()
extern "C"  void Movement_movementFunction_m2146354917 (Movement_t2096174109 * __this, const MethodInfo* method)
{
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_1 = Vector3_get_left_m2429378123(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_2 = __this->get_movementSpeed_2();
		Vector3_t2243707580  L_3 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		float L_4 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_5 = Vector3_op_Multiply_m1351554733(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_m3316827744(L_0, L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PipeSetup::.ctor()
extern "C"  void PipeSetup__ctor_m1566604188 (PipeSetup_t2218399289 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PipeSetup::Start()
extern "C"  void PipeSetup_Start_m918972372 (PipeSetup_t2218399289 * __this, const MethodInfo* method)
{
	{
		PipeSetup_Setup_m245451451(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PipeSetup::Update()
extern "C"  void PipeSetup_Update_m3370108153 (PipeSetup_t2218399289 * __this, const MethodInfo* method)
{
	{
		PipeSetup_PipeRemover_m267897978(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PipeSetup::Setup()
extern const MethodInfo* GameObject_GetComponent_TisSpriteRenderer_t1209076198_m1184556631_MethodInfo_var;
extern const uint32_t PipeSetup_Setup_m245451451_MetadataUsageId;
extern "C"  void PipeSetup_Setup_m245451451 (PipeSetup_t2218399289 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PipeSetup_Setup_m245451451_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	float V_2 = 0.0f;
	Vector3_t2243707580  V_3;
	memset(&V_3, 0, sizeof(V_3));
	{
		GameObject_t1756533147 * L_0 = __this->get_top_4();
		NullCheck(L_0);
		SpriteRenderer_t1209076198 * L_1 = GameObject_GetComponent_TisSpriteRenderer_t1209076198_m1184556631(L_0, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t1209076198_m1184556631_MethodInfo_var);
		__this->set_renTop_6(L_1);
		GameObject_t1756533147 * L_2 = __this->get_bottom_5();
		NullCheck(L_2);
		SpriteRenderer_t1209076198 * L_3 = GameObject_GetComponent_TisSpriteRenderer_t1209076198_m1184556631(L_2, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t1209076198_m1184556631_MethodInfo_var);
		__this->set_renBottom_7(L_3);
		float L_4 = __this->get_minSpace_2();
		float L_5 = Random_Range_m2884721203(NULL /*static, unused*/, ((float)((float)(-3.38f)+(float)L_4)), (5.0f), /*hidden argument*/NULL);
		V_0 = L_5;
		GameObject_t1756533147 * L_6 = __this->get_top_4();
		NullCheck(L_6);
		Transform_t3275118058 * L_7 = GameObject_get_transform_m909382139(L_6, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_8 = __this->get_top_4();
		NullCheck(L_8);
		Transform_t3275118058 * L_9 = GameObject_get_transform_m909382139(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_t2243707580  L_10 = Transform_get_position_m1104419803(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		float L_11 = (&V_1)->get_x_1();
		float L_12 = V_0;
		Vector2_t2243707579  L_13;
		memset(&L_13, 0, sizeof(L_13));
		Vector2__ctor_m3067419446(&L_13, L_11, L_12, /*hidden argument*/NULL);
		Vector3_t2243707580  L_14 = Vector2_op_Implicit_m176791411(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_position_m2469242620(L_7, L_14, /*hidden argument*/NULL);
		float L_15 = __this->get_minSpace_2();
		float L_16 = __this->get_maxSpace_3();
		float L_17 = Random_Range_m2884721203(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		GameObject_t1756533147 * L_18 = __this->get_bottom_5();
		NullCheck(L_18);
		Transform_t3275118058 * L_19 = GameObject_get_transform_m909382139(L_18, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_20 = __this->get_bottom_5();
		NullCheck(L_20);
		Transform_t3275118058 * L_21 = GameObject_get_transform_m909382139(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t2243707580  L_22 = Transform_get_position_m1104419803(L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		float L_23 = (&V_3)->get_x_1();
		float L_24 = V_0;
		float L_25 = V_2;
		Vector2_t2243707579  L_26;
		memset(&L_26, 0, sizeof(L_26));
		Vector2__ctor_m3067419446(&L_26, L_23, ((float)((float)L_24-(float)L_25)), /*hidden argument*/NULL);
		Vector3_t2243707580  L_27 = Vector2_op_Implicit_m176791411(NULL /*static, unused*/, L_26, /*hidden argument*/NULL);
		NullCheck(L_19);
		Transform_set_position_m2469242620(L_19, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PipeSetup::PipeRemover()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const uint32_t PipeSetup_PipeRemover_m267897978_MetadataUsageId;
extern "C"  void PipeSetup_PipeRemover_m267897978 (PipeSetup_t2218399289 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PipeSetup_PipeRemover_m267897978_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		Transform_t3275118058 * L_0 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t2243707580  L_1 = Transform_get_position_m1104419803(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		float L_2 = (&V_0)->get_x_1();
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_004d;
		}
	}
	{
		SpriteRenderer_t1209076198 * L_3 = __this->get_renTop_6();
		NullCheck(L_3);
		bool L_4 = Renderer_get_isVisible_m3612355717(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_004c;
		}
	}
	{
		SpriteRenderer_t1209076198 * L_5 = __this->get_renBottom_7();
		NullCheck(L_5);
		bool L_6 = Renderer_get_isVisible_m3612355717(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		GameObject_t1756533147 * L_7 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		Object_Destroy_m4145850038(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
	}

IL_004c:
	{
	}

IL_004d:
	{
		return;
	}
}
// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m3280132936 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Start()
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var;
extern const uint32_t PlayerController_Start_m3606284888_MetadataUsageId;
extern "C"  void PlayerController_Start_m3606284888 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Start_m3606284888_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Rigidbody2D_t502193897 * L_0 = Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var);
		__this->set_rB_3(L_0);
		return;
	}
}
// System.Void PlayerController::Update()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3645101709;
extern const uint32_t PlayerController_Update_m4228472513_MetadataUsageId;
extern "C"  void PlayerController_Update_m4228472513 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_Update_m4228472513_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetButtonDown_m2792523731(NULL /*static, unused*/, _stringLiteral3645101709, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0047;
		}
	}
	{
		bool L_1 = __this->get_isGameOver_4();
		if (L_1)
		{
			goto IL_0047;
		}
	}
	{
		bool L_2 = __this->get_isStart_5();
		if (L_2)
		{
			goto IL_0040;
		}
	}
	{
		__this->set_isStart_5((bool)1);
		Rigidbody2D_t502193897 * L_3 = __this->get_rB_3();
		NullCheck(L_3);
		Rigidbody2D_set_gravityScale_m1426625078(L_3, (1.0f), /*hidden argument*/NULL);
	}

IL_0040:
	{
		PlayerController_Flap_m1804141915(__this, /*hidden argument*/NULL);
	}

IL_0047:
	{
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
extern "C"  void PlayerController_FixedUpdate_m1756102567 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	{
		bool L_0 = __this->get_isStart_5();
		if (!L_0)
		{
			goto IL_001f;
		}
	}
	{
		bool L_1 = __this->get_isGameOver_4();
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		PlayerController_HeavyEnd_m4061495706(__this, /*hidden argument*/NULL);
	}

IL_001f:
	{
		return;
	}
}
// System.Void PlayerController::Flap()
extern "C"  void PlayerController_Flap_m1804141915 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	{
		Rigidbody2D_t502193897 * L_0 = __this->get_rB_3();
		Vector2_t2243707579  L_1 = Vector2_get_zero_m3966848876(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody2D_set_velocity_m3592751374(L_0, L_1, /*hidden argument*/NULL);
		Rigidbody2D_t502193897 * L_2 = __this->get_rB_3();
		float L_3 = __this->get_flapForce_2();
		Vector2_t2243707579  L_4;
		memset(&L_4, 0, sizeof(L_4));
		Vector2__ctor_m3067419446(&L_4, (0.0f), L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Rigidbody2D_AddForce_m3200488178(L_2, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnTriggerEnter2D(UnityEngine.Collider2D)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral582319970;
extern Il2CppCodeGenString* _stringLiteral1443208758;
extern const uint32_t PlayerController_OnTriggerEnter2D_m429568576_MetadataUsageId;
extern "C"  void PlayerController_OnTriggerEnter2D_m429568576 (PlayerController_t4148409433 * __this, Collider2D_t646061738 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_OnTriggerEnter2D_m429568576_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collider2D_t646061738 * L_0 = ___other0;
		NullCheck(L_0);
		String_t* L_1 = Component_get_tag_m357168014(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_2 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_1, _stringLiteral582319970, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		__this->set_isGameOver_4((bool)1);
		Il2CppObject * L_3 = PlayerController_waitForGameOver_m1778154116(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2470621050(__this, L_3, /*hidden argument*/NULL);
	}

IL_002c:
	{
		Collider2D_t646061738 * L_4 = ___other0;
		NullCheck(L_4);
		String_t* L_5 = Component_get_tag_m357168014(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_6 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_5, _stringLiteral1443208758, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_7 = __this->get_playerScore_6();
		__this->set_playerScore_6(((int32_t)((int32_t)L_7+(int32_t)1)));
	}

IL_0051:
	{
		return;
	}
}
// System.Void PlayerController::OnCollisionEnter2D(UnityEngine.Collision2D)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral582319970;
extern const uint32_t PlayerController_OnCollisionEnter2D_m3521110746_MetadataUsageId;
extern "C"  void PlayerController_OnCollisionEnter2D_m3521110746 (PlayerController_t4148409433 * __this, Collision2D_t1539500754 * ___other0, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_OnCollisionEnter2D_m3521110746_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Collision2D_t1539500754 * L_0 = ___other0;
		NullCheck(L_0);
		Transform_t3275118058 * L_1 = Collision2D_get_transform_m314016758(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = Component_get_tag_m357168014(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_2, _stringLiteral582319970, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		__this->set_isGameOver_4((bool)1);
		Il2CppObject * L_4 = PlayerController_waitForGameOver_m1778154116(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_m2470621050(__this, L_4, /*hidden argument*/NULL);
	}

IL_0031:
	{
		return;
	}
}
// System.Collections.IEnumerator PlayerController::waitForGameOver()
extern Il2CppClass* U3CwaitForGameOverU3Ec__Iterator0_t2042742681_il2cpp_TypeInfo_var;
extern const uint32_t PlayerController_waitForGameOver_m1778154116_MetadataUsageId;
extern "C"  Il2CppObject * PlayerController_waitForGameOver_m1778154116 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_waitForGameOver_m1778154116_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CwaitForGameOverU3Ec__Iterator0_t2042742681 * V_0 = NULL;
	Il2CppObject * V_1 = NULL;
	{
		U3CwaitForGameOverU3Ec__Iterator0_t2042742681 * L_0 = (U3CwaitForGameOverU3Ec__Iterator0_t2042742681 *)il2cpp_codegen_object_new(U3CwaitForGameOverU3Ec__Iterator0_t2042742681_il2cpp_TypeInfo_var);
		U3CwaitForGameOverU3Ec__Iterator0__ctor_m1988339162(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CwaitForGameOverU3Ec__Iterator0_t2042742681 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_0(__this);
		U3CwaitForGameOverU3Ec__Iterator0_t2042742681 * L_2 = V_0;
		V_1 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Il2CppObject * L_3 = V_1;
		return L_3;
	}
}
// System.Void PlayerController::HeavyEnd()
extern Il2CppClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern const uint32_t PlayerController_HeavyEnd_m4061495706_MetadataUsageId;
extern "C"  void PlayerController_HeavyEnd_m4061495706 (PlayerController_t4148409433 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerController_HeavyEnd_m4061495706_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector2_t2243707579  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2243707579  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		V_0 = (30.0f);
		Rigidbody2D_t502193897 * L_0 = __this->get_rB_3();
		NullCheck(L_0);
		Vector2_t2243707579  L_1 = Rigidbody2D_get_velocity_m3310151195(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = (&V_1)->get_y_1();
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_0050;
		}
	}
	{
		Rigidbody2D_t502193897 * L_3 = __this->get_rB_3();
		NullCheck(L_3);
		Vector2_t2243707579  L_4 = Rigidbody2D_get_velocity_m3310151195(L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = (&V_2)->get_y_1();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_6 = Mathf_Lerp_m1686556575(NULL /*static, unused*/, (35.0f), (-90.0f), ((float)((float)((-L_5))/(float)(10.0f))), /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_0050:
	{
		Transform_t3275118058 * L_7 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		float L_8 = V_0;
		Quaternion_t4030073918  L_9 = Quaternion_Euler_m2887458175(NULL /*static, unused*/, (0.0f), (0.0f), L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_rotation_m3411284563(L_7, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController/<waitForGameOver>c__Iterator0::.ctor()
extern "C"  void U3CwaitForGameOverU3Ec__Iterator0__ctor_m1988339162 (U3CwaitForGameOverU3Ec__Iterator0_t2042742681 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m2551263788(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean PlayerController/<waitForGameOver>c__Iterator0::MoveNext()
extern Il2CppClass* WaitForSeconds_t3839502067_il2cpp_TypeInfo_var;
extern const uint32_t U3CwaitForGameOverU3Ec__Iterator0_MoveNext_m2892617454_MetadataUsageId;
extern "C"  bool U3CwaitForGameOverU3Ec__Iterator0_MoveNext_m2892617454 (U3CwaitForGameOverU3Ec__Iterator0_t2042742681 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CwaitForGameOverU3Ec__Iterator0_MoveNext_m2892617454_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U24PC_3();
		V_0 = L_0;
		__this->set_U24PC_3((-1));
		uint32_t L_1 = V_0;
		if (L_1 == 0)
		{
			goto IL_0021;
		}
		if (L_1 == 1)
		{
			goto IL_0046;
		}
	}
	{
		goto IL_0068;
	}

IL_0021:
	{
		WaitForSeconds_t3839502067 * L_2 = (WaitForSeconds_t3839502067 *)il2cpp_codegen_object_new(WaitForSeconds_t3839502067_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m1990515539(L_2, (1.0f), /*hidden argument*/NULL);
		__this->set_U24current_1(L_2);
		bool L_3 = __this->get_U24disposing_2();
		if (L_3)
		{
			goto IL_0041;
		}
	}
	{
		__this->set_U24PC_3(1);
	}

IL_0041:
	{
		goto IL_006a;
	}

IL_0046:
	{
		PlayerController_t4148409433 * L_4 = __this->get_U24this_0();
		NullCheck(L_4);
		GameObject_t1756533147 * L_5 = L_4->get_gameOverPanel_7();
		NullCheck(L_5);
		GameObject_SetActive_m2887581199(L_5, (bool)1, /*hidden argument*/NULL);
		Time_set_timeScale_m2194722837(NULL /*static, unused*/, (0.0f), /*hidden argument*/NULL);
		__this->set_U24PC_3((-1));
	}

IL_0068:
	{
		return (bool)0;
	}

IL_006a:
	{
		return (bool)1;
	}
}
// System.Object PlayerController/<waitForGameOver>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
extern "C"  Il2CppObject * U3CwaitForGameOverU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m1914714130 (U3CwaitForGameOverU3Ec__Iterator0_t2042742681 * __this, const MethodInfo* method)
{
	Il2CppObject * V_0 = NULL;
	{
		Il2CppObject * L_0 = __this->get_U24current_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Il2CppObject * L_1 = V_0;
		return L_1;
	}
}
// System.Object PlayerController/<waitForGameOver>c__Iterator0::System.Collections.IEnumerator.get_Current()
extern "C"  Il2CppObject * U3CwaitForGameOverU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m3044997898 (U3CwaitForGameOverU3Ec__Iterator0_t2042742681 * __this, const MethodInfo* method)
{
	Il2CppObject * V_0 = NULL;
	{
		Il2CppObject * L_0 = __this->get_U24current_1();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		Il2CppObject * L_1 = V_0;
		return L_1;
	}
}
// System.Void PlayerController/<waitForGameOver>c__Iterator0::Dispose()
extern "C"  void U3CwaitForGameOverU3Ec__Iterator0_Dispose_m2980246627 (U3CwaitForGameOverU3Ec__Iterator0_t2042742681 * __this, const MethodInfo* method)
{
	{
		__this->set_U24disposing_2((bool)1);
		__this->set_U24PC_3((-1));
		return;
	}
}
// System.Void PlayerController/<waitForGameOver>c__Iterator0::Reset()
extern Il2CppClass* NotSupportedException_t1793819818_il2cpp_TypeInfo_var;
extern const uint32_t U3CwaitForGameOverU3Ec__Iterator0_Reset_m917875465_MetadataUsageId;
extern "C"  void U3CwaitForGameOverU3Ec__Iterator0_Reset_m917875465 (U3CwaitForGameOverU3Ec__Iterator0_t2042742681 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CwaitForGameOverU3Ec__Iterator0_Reset_m917875465_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_t1793819818 * L_0 = (NotSupportedException_t1793819818 *)il2cpp_codegen_object_new(NotSupportedException_t1793819818_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3232764727(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
