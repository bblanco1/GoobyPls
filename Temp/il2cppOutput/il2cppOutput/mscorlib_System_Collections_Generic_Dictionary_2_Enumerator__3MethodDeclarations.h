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

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2360;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_3.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m15324_gshared (Enumerator_t2368 * __this, Dictionary_2_t2360 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m15324(__this, ___dictionary, method) (( void (*) (Enumerator_t2368 *, Dictionary_2_t2360 *, const MethodInfo*))Enumerator__ctor_m15324_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m15325_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m15325(__this, method) (( Object_t * (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m15325_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m15326_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m15326(__this, method) (( void (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m15326_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1459  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15327_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15327(__this, method) (( DictionaryEntry_t1459  (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15327_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15328_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15328(__this, method) (( Object_t * (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15328_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15329_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15329(__this, method) (( Object_t * (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15329_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m15330_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m15330(__this, method) (( bool (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_MoveNext_m15330_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2363  Enumerator_get_Current_m15331_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m15331(__this, method) (( KeyValuePair_2_t2363  (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_get_Current_m15331_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m15332_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m15332(__this, method) (( Object_t * (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_get_CurrentKey_m15332_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m15333_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m15333(__this, method) (( int32_t (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_get_CurrentValue_m15333_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Reset()
extern "C" void Enumerator_Reset_m15334_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_Reset_m15334(__this, method) (( void (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_Reset_m15334_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m15335_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m15335(__this, method) (( void (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_VerifyState_m15335_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m15336_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m15336(__this, method) (( void (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_VerifyCurrent_m15336_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m15337_gshared (Enumerator_t2368 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m15337(__this, method) (( void (*) (Enumerator_t2368 *, const MethodInfo*))Enumerator_Dispose_m15337_gshared)(__this, method)
