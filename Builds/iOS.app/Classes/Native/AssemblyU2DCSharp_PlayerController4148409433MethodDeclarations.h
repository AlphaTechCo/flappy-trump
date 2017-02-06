#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// PlayerController
struct PlayerController_t4148409433;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// UnityEngine.Collision2D
struct Collision2D_t1539500754;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754.h"

// System.Void PlayerController::.ctor()
extern "C"  void PlayerController__ctor_m3280132936 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Start()
extern "C"  void PlayerController_Start_m3606284888 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Update()
extern "C"  void PlayerController_Update_m4228472513 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::FixedUpdate()
extern "C"  void PlayerController_FixedUpdate_m1756102567 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Flap()
extern "C"  void PlayerController_Flap_m1804141915 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void PlayerController_OnTriggerEnter2D_m429568576 (PlayerController_t4148409433 * __this, Collider2D_t646061738 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void PlayerController_OnCollisionEnter2D_m3521110746 (PlayerController_t4148409433 * __this, Collision2D_t1539500754 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PlayerController::waitForGameOver()
extern "C"  Il2CppObject * PlayerController_waitForGameOver_m1778154116 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::HeavyEnd()
extern "C"  void PlayerController_HeavyEnd_m4061495706 (PlayerController_t4148409433 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
