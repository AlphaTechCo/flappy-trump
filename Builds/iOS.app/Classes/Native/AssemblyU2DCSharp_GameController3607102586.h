#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// PlayerController
struct PlayerController_t4148409433;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t3607102586  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject GameController::pipePrefab
	GameObject_t1756533147 * ___pipePrefab_2;
	// UnityEngine.Transform GameController::pipeSpawn
	Transform_t3275118058 * ___pipeSpawn_3;
	// System.Single GameController::minTime
	float ___minTime_4;
	// System.Single GameController::maxTime
	float ___maxTime_5;
	// System.Single GameController::timer
	float ___timer_6;
	// PlayerController GameController::PC
	PlayerController_t4148409433 * ___PC_7;
	// UnityEngine.UI.Text GameController::score
	Text_t356221433 * ___score_8;
	// UnityEngine.UI.Text GameController::highScore
	Text_t356221433 * ___highScore_9;

public:
	inline static int32_t get_offset_of_pipePrefab_2() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___pipePrefab_2)); }
	inline GameObject_t1756533147 * get_pipePrefab_2() const { return ___pipePrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_pipePrefab_2() { return &___pipePrefab_2; }
	inline void set_pipePrefab_2(GameObject_t1756533147 * value)
	{
		___pipePrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___pipePrefab_2, value);
	}

	inline static int32_t get_offset_of_pipeSpawn_3() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___pipeSpawn_3)); }
	inline Transform_t3275118058 * get_pipeSpawn_3() const { return ___pipeSpawn_3; }
	inline Transform_t3275118058 ** get_address_of_pipeSpawn_3() { return &___pipeSpawn_3; }
	inline void set_pipeSpawn_3(Transform_t3275118058 * value)
	{
		___pipeSpawn_3 = value;
		Il2CppCodeGenWriteBarrier(&___pipeSpawn_3, value);
	}

	inline static int32_t get_offset_of_minTime_4() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___minTime_4)); }
	inline float get_minTime_4() const { return ___minTime_4; }
	inline float* get_address_of_minTime_4() { return &___minTime_4; }
	inline void set_minTime_4(float value)
	{
		___minTime_4 = value;
	}

	inline static int32_t get_offset_of_maxTime_5() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___maxTime_5)); }
	inline float get_maxTime_5() const { return ___maxTime_5; }
	inline float* get_address_of_maxTime_5() { return &___maxTime_5; }
	inline void set_maxTime_5(float value)
	{
		___maxTime_5 = value;
	}

	inline static int32_t get_offset_of_timer_6() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___timer_6)); }
	inline float get_timer_6() const { return ___timer_6; }
	inline float* get_address_of_timer_6() { return &___timer_6; }
	inline void set_timer_6(float value)
	{
		___timer_6 = value;
	}

	inline static int32_t get_offset_of_PC_7() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___PC_7)); }
	inline PlayerController_t4148409433 * get_PC_7() const { return ___PC_7; }
	inline PlayerController_t4148409433 ** get_address_of_PC_7() { return &___PC_7; }
	inline void set_PC_7(PlayerController_t4148409433 * value)
	{
		___PC_7 = value;
		Il2CppCodeGenWriteBarrier(&___PC_7, value);
	}

	inline static int32_t get_offset_of_score_8() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___score_8)); }
	inline Text_t356221433 * get_score_8() const { return ___score_8; }
	inline Text_t356221433 ** get_address_of_score_8() { return &___score_8; }
	inline void set_score_8(Text_t356221433 * value)
	{
		___score_8 = value;
		Il2CppCodeGenWriteBarrier(&___score_8, value);
	}

	inline static int32_t get_offset_of_highScore_9() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___highScore_9)); }
	inline Text_t356221433 * get_highScore_9() const { return ___highScore_9; }
	inline Text_t356221433 ** get_address_of_highScore_9() { return &___highScore_9; }
	inline void set_highScore_9(Text_t356221433 * value)
	{
		___highScore_9 = value;
		Il2CppCodeGenWriteBarrier(&___highScore_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
