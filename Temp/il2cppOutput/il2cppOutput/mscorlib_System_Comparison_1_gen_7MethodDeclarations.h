﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Comparison`1<UnityEngine.Vector4>
struct Comparison_1_t2272;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t206;
// System.AsyncCallback
struct AsyncCallback_t207;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Vector4.h"

// System.Void System.Comparison`1<UnityEngine.Vector4>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m14050_gshared (Comparison_1_t2272 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m14050(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2272 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m14050_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector4>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14051_gshared (Comparison_1_t2272 * __this, Vector4_t219  ___x, Vector4_t219  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m14051(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2272 *, Vector4_t219 , Vector4_t219 , const MethodInfo*))Comparison_1_Invoke_m14051_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.Vector4>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m14052_gshared (Comparison_1_t2272 * __this, Vector4_t219  ___x, Vector4_t219  ___y, AsyncCallback_t207 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m14052(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2272 *, Vector4_t219 , Vector4_t219 , AsyncCallback_t207 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m14052_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.Vector4>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14053_gshared (Comparison_1_t2272 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m14053(__this, ___result, method) (( int32_t (*) (Comparison_1_t2272 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m14053_gshared)(__this, ___result, method)
