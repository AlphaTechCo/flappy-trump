#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Movement
struct  Movement_t2096174109  : public MonoBehaviour_t1158329972
{
public:
	// System.Single Movement::movementSpeed
	float ___movementSpeed_2;

public:
	inline static int32_t get_offset_of_movementSpeed_2() { return static_cast<int32_t>(offsetof(Movement_t2096174109, ___movementSpeed_2)); }
	inline float get_movementSpeed_2() const { return ___movementSpeed_2; }
	inline float* get_address_of_movementSpeed_2() { return &___movementSpeed_2; }
	inline void set_movementSpeed_2(float value)
	{
		___movementSpeed_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
