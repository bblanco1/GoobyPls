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

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,Vuforia.VuforiaManagerImpl/TrackableResultData>
struct Transform_1_t2924;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t206;
// System.AsyncCallback
struct AsyncCallback_t207;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__0.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,Vuforia.VuforiaManagerImpl/TrackableResultData>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m23490_gshared (Transform_1_t2924 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m23490(__this, ___object, ___method, method) (( void (*) (Transform_1_t2924 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m23490_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,Vuforia.VuforiaManagerImpl/TrackableResultData>::Invoke(TKey,TValue)
extern "C" TrackableResultData_t832  Transform_1_Invoke_m23491_gshared (Transform_1_t2924 * __this, int32_t ___key, TrackableResultData_t832  ___value, const MethodInfo* method);
#define Transform_1_Invoke_m23491(__this, ___key, ___value, method) (( TrackableResultData_t832  (*) (Transform_1_t2924 *, int32_t, TrackableResultData_t832 , const MethodInfo*))Transform_1_Invoke_m23491_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,Vuforia.VuforiaManagerImpl/TrackableResultData>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m23492_gshared (Transform_1_t2924 * __this, int32_t ___key, TrackableResultData_t832  ___value, AsyncCallback_t207 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m23492(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2924 *, int32_t, TrackableResultData_t832 , AsyncCallback_t207 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m23492_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,Vuforia.VuforiaManagerImpl/TrackableResultData,Vuforia.VuforiaManagerImpl/TrackableResultData>::EndInvoke(System.IAsyncResult)
extern "C" TrackableResultData_t832  Transform_1_EndInvoke_m23493_gshared (Transform_1_t2924 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m23493(__this, ___result, method) (( TrackableResultData_t832  (*) (Transform_1_t2924 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m23493_gshared)(__this, ___result, method)
