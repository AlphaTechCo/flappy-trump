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
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PipeSetup
struct  PipeSetup_t2218399289  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PipeSetup::minSpace
	float ___minSpace_2;
	// System.Single PipeSetup::maxSpace
	float ___maxSpace_3;
	// UnityEngine.GameObject PipeSetup::top
	GameObject_t1756533147 * ___top_4;
	// UnityEngine.GameObject PipeSetup::bottom
	GameObject_t1756533147 * ___bottom_5;
	// UnityEngine.SpriteRenderer PipeSetup::renTop
	SpriteRenderer_t1209076198 * ___renTop_6;
	// UnityEngine.SpriteRenderer PipeSetup::renBottom
	SpriteRenderer_t1209076198 * ___renBottom_7;

public:
	inline static int32_t get_offset_of_minSpace_2() { return static_cast<int32_t>(offsetof(PipeSetup_t2218399289, ___minSpace_2)); }
	inline float get_minSpace_2() const { return ___minSpace_2; }
	inline float* get_address_of_minSpace_2() { return &___minSpace_2; }
	inline void set_minSpace_2(float value)
	{
		___minSpace_2 = value;
	}

	inline static int32_t get_offset_of_maxSpace_3() { return static_cast<int32_t>(offsetof(PipeSetup_t2218399289, ___maxSpace_3)); }
	inline float get_maxSpace_3() const { return ___maxSpace_3; }
	inline float* get_address_of_maxSpace_3() { return &___maxSpace_3; }
	inline void set_maxSpace_3(float value)
	{
		___maxSpace_3 = value;
	}

	inline static int32_t get_offset_of_top_4() { return static_cast<int32_t>(offsetof(PipeSetup_t2218399289, ___top_4)); }
	inline GameObject_t1756533147 * get_top_4() const { return ___top_4; }
	inline GameObject_t1756533147 ** get_address_of_top_4() { return &___top_4; }
	inline void set_top_4(GameObject_t1756533147 * value)
	{
		___top_4 = value;
		Il2CppCodeGenWriteBarrier(&___top_4, value);
	}

	inline static int32_t get_offset_of_bottom_5() { return static_cast<int32_t>(offsetof(PipeSetup_t2218399289, ___bottom_5)); }
	inline GameObject_t1756533147 * get_bottom_5() const { return ___bottom_5; }
	inline GameObject_t1756533147 ** get_address_of_bottom_5() { return &___bottom_5; }
	inline void set_bottom_5(GameObject_t1756533147 * value)
	{
		___bottom_5 = value;
		Il2CppCodeGenWriteBarrier(&___bottom_5, value);
	}

	inline static int32_t get_offset_of_renTop_6() { return static_cast<int32_t>(offsetof(PipeSetup_t2218399289, ___renTop_6)); }
	inline SpriteRenderer_t1209076198 * get_renTop_6() const { return ___renTop_6; }
	inline SpriteRenderer_t1209076198 ** get_address_of_renTop_6() { return &___renTop_6; }
	inline void set_renTop_6(SpriteRenderer_t1209076198 * value)
	{
		___renTop_6 = value;
		Il2CppCodeGenWriteBarrier(&___renTop_6, value);
	}

	inline static int32_t get_offset_of_renBottom_7() { return static_cast<int32_t>(offsetof(PipeSetup_t2218399289, ___renBottom_7)); }
	inline SpriteRenderer_t1209076198 * get_renBottom_7() const { return ___renBottom_7; }
	inline SpriteRenderer_t1209076198 ** get_address_of_renBottom_7() { return &___renBottom_7; }
	inline void set_renBottom_7(SpriteRenderer_t1209076198 * value)
	{
		___renBottom_7 = value;
		Il2CppCodeGenWriteBarrier(&___renBottom_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
