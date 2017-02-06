#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlayerController::flapForce
	float ___flapForce_2;
	// UnityEngine.Rigidbody2D PlayerController::rB
	Rigidbody2D_t502193897 * ___rB_3;
	// System.Boolean PlayerController::isGameOver
	bool ___isGameOver_4;
	// System.Boolean PlayerController::isStart
	bool ___isStart_5;
	// System.Int32 PlayerController::playerScore
	int32_t ___playerScore_6;
	// UnityEngine.GameObject PlayerController::gameOverPanel
	GameObject_t1756533147 * ___gameOverPanel_7;
	// UnityEngine.UI.Text PlayerController::highScore
	Text_t356221433 * ___highScore_8;
	// UnityEngine.UI.Text PlayerController::score
	Text_t356221433 * ___score_9;

public:
	inline static int32_t get_offset_of_flapForce_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___flapForce_2)); }
	inline float get_flapForce_2() const { return ___flapForce_2; }
	inline float* get_address_of_flapForce_2() { return &___flapForce_2; }
	inline void set_flapForce_2(float value)
	{
		___flapForce_2 = value;
	}

	inline static int32_t get_offset_of_rB_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___rB_3)); }
	inline Rigidbody2D_t502193897 * get_rB_3() const { return ___rB_3; }
	inline Rigidbody2D_t502193897 ** get_address_of_rB_3() { return &___rB_3; }
	inline void set_rB_3(Rigidbody2D_t502193897 * value)
	{
		___rB_3 = value;
		Il2CppCodeGenWriteBarrier(&___rB_3, value);
	}

	inline static int32_t get_offset_of_isGameOver_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___isGameOver_4)); }
	inline bool get_isGameOver_4() const { return ___isGameOver_4; }
	inline bool* get_address_of_isGameOver_4() { return &___isGameOver_4; }
	inline void set_isGameOver_4(bool value)
	{
		___isGameOver_4 = value;
	}

	inline static int32_t get_offset_of_isStart_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___isStart_5)); }
	inline bool get_isStart_5() const { return ___isStart_5; }
	inline bool* get_address_of_isStart_5() { return &___isStart_5; }
	inline void set_isStart_5(bool value)
	{
		___isStart_5 = value;
	}

	inline static int32_t get_offset_of_playerScore_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___playerScore_6)); }
	inline int32_t get_playerScore_6() const { return ___playerScore_6; }
	inline int32_t* get_address_of_playerScore_6() { return &___playerScore_6; }
	inline void set_playerScore_6(int32_t value)
	{
		___playerScore_6 = value;
	}

	inline static int32_t get_offset_of_gameOverPanel_7() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___gameOverPanel_7)); }
	inline GameObject_t1756533147 * get_gameOverPanel_7() const { return ___gameOverPanel_7; }
	inline GameObject_t1756533147 ** get_address_of_gameOverPanel_7() { return &___gameOverPanel_7; }
	inline void set_gameOverPanel_7(GameObject_t1756533147 * value)
	{
		___gameOverPanel_7 = value;
		Il2CppCodeGenWriteBarrier(&___gameOverPanel_7, value);
	}

	inline static int32_t get_offset_of_highScore_8() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___highScore_8)); }
	inline Text_t356221433 * get_highScore_8() const { return ___highScore_8; }
	inline Text_t356221433 ** get_address_of_highScore_8() { return &___highScore_8; }
	inline void set_highScore_8(Text_t356221433 * value)
	{
		___highScore_8 = value;
		Il2CppCodeGenWriteBarrier(&___highScore_8, value);
	}

	inline static int32_t get_offset_of_score_9() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___score_9)); }
	inline Text_t356221433 * get_score_9() const { return ___score_9; }
	inline Text_t356221433 ** get_address_of_score_9() { return &___score_9; }
	inline void set_score_9(Text_t356221433 * value)
	{
		___score_9 = value;
		Il2CppCodeGenWriteBarrier(&___score_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
