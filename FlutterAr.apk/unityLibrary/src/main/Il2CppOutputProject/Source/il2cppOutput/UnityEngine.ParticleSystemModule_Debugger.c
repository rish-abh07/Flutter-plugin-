﻿#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = 
{
	{ 19466, 0,  0 } /*tableIndex: 0 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[1] = 
{
	"particle",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[20] = 
{
	{ 0, 0 } /* 0x06000001 System.Void UnityEngine.ParticleSystem::Emit(System.Int32) */,
	{ 0, 0 } /* 0x06000002 System.Void UnityEngine.ParticleSystem::Emit_Internal(System.Int32) */,
	{ 0, 0 } /* 0x06000003 System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.ParticleSystem/EmitParams,System.Int32) */,
	{ 0, 0 } /* 0x06000004 System.Void UnityEngine.ParticleSystem::EmitOld_Internal(UnityEngine.ParticleSystem/Particle&) */,
	{ 0, 1 } /* 0x06000005 System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,UnityEngine.Color32) */,
	{ 0, 0 } /* 0x06000006 System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.ParticleSystem/Particle) */,
	{ 0, 0 } /* 0x06000007 System.Void UnityEngine.ParticleSystem::Emit_Injected(UnityEngine.ParticleSystem/EmitParams&,System.Int32) */,
	{ 0, 0 } /* 0x06000008 System.Void UnityEngine.ParticleSystem/Particle::set_position(UnityEngine.Vector3) */,
	{ 0, 0 } /* 0x06000009 System.Void UnityEngine.ParticleSystem/Particle::set_velocity(UnityEngine.Vector3) */,
	{ 0, 0 } /* 0x0600000A System.Void UnityEngine.ParticleSystem/Particle::set_remainingLifetime(System.Single) */,
	{ 0, 0 } /* 0x0600000B System.Void UnityEngine.ParticleSystem/Particle::set_startLifetime(System.Single) */,
	{ 0, 0 } /* 0x0600000C System.Void UnityEngine.ParticleSystem/Particle::set_startColor(UnityEngine.Color32) */,
	{ 0, 0 } /* 0x0600000D System.Void UnityEngine.ParticleSystem/Particle::set_randomSeed(System.UInt32) */,
	{ 0, 0 } /* 0x0600000E System.Void UnityEngine.ParticleSystem/Particle::set_startSize(System.Single) */,
	{ 0, 0 } /* 0x0600000F System.Void UnityEngine.ParticleSystem/Particle::set_rotation3D(UnityEngine.Vector3) */,
	{ 0, 0 } /* 0x06000010 System.Void UnityEngine.ParticleSystem/Particle::set_angularVelocity3D(UnityEngine.Vector3) */,
	{ 0, 0 } /* 0x06000011 System.Void UnityEngine.ParticleSystem/Particle::set_lifetime(System.Single) */,
	{ 0, 0 } /* 0x06000012 System.Int32 UnityEngine.ParticleSystemExtensionsImpl::GetCollisionEvents(UnityEngine.ParticleSystem,UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>) */,
	{ 0, 0 } /* 0x06000013 System.Int32 UnityEngine.ParticlePhysicsExtensions::GetCollisionEvents(UnityEngine.ParticleSystem,UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>) */,
	{ 0, 0 } /* 0x06000014 System.Int32 UnityEngine.ParticleSystemRenderer::GetMeshes(UnityEngine.Mesh[]) */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnityEngine_ParticleSystemModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_ParticleSystemModule[101] = 
{
	{ 56943, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 56943, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 56943, 1, 176, 176, 37, 38, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 56943, 1, 176, 176, 39, 60, 1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 56943, 1, 176, 176, 39, 60, 3, kSequencePointKind_StepOut, 0, 4 } /* seqPointIndex: 4 */,
	{ 56943, 1, 176, 176, 61, 62, 9, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 56947, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 56947, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 56947, 2, 120, 120, 9, 10, 0, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 56947, 2, 121, 121, 13, 78, 1, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 56947, 2, 122, 122, 13, 42, 9, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 56947, 2, 122, 122, 13, 42, 12, kSequencePointKind_StepOut, 0, 11 } /* seqPointIndex: 11 */,
	{ 56947, 2, 123, 123, 13, 42, 18, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 56947, 2, 123, 123, 13, 42, 21, kSequencePointKind_StepOut, 0, 13 } /* seqPointIndex: 13 */,
	{ 56947, 2, 124, 124, 13, 42, 27, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 56947, 2, 124, 124, 13, 42, 31, kSequencePointKind_StepOut, 0, 15 } /* seqPointIndex: 15 */,
	{ 56947, 2, 125, 125, 13, 47, 37, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 56947, 2, 125, 125, 13, 47, 41, kSequencePointKind_StepOut, 0, 17 } /* seqPointIndex: 17 */,
	{ 56947, 2, 126, 126, 13, 39, 47, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 56947, 2, 126, 126, 13, 39, 50, kSequencePointKind_StepOut, 0, 19 } /* seqPointIndex: 19 */,
	{ 56947, 2, 127, 127, 13, 48, 56, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 56947, 2, 127, 127, 13, 48, 58, kSequencePointKind_StepOut, 0, 21 } /* seqPointIndex: 21 */,
	{ 56947, 2, 127, 127, 13, 48, 63, kSequencePointKind_StepOut, 0, 22 } /* seqPointIndex: 22 */,
	{ 56947, 2, 128, 128, 13, 55, 69, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 56947, 2, 128, 128, 13, 55, 71, kSequencePointKind_StepOut, 0, 24 } /* seqPointIndex: 24 */,
	{ 56947, 2, 128, 128, 13, 55, 76, kSequencePointKind_StepOut, 0, 25 } /* seqPointIndex: 25 */,
	{ 56947, 2, 129, 129, 13, 41, 82, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 56947, 2, 129, 129, 13, 41, 86, kSequencePointKind_StepOut, 0, 27 } /* seqPointIndex: 27 */,
	{ 56947, 2, 130, 130, 13, 37, 92, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 56947, 2, 130, 130, 13, 37, 95, kSequencePointKind_StepOut, 0, 29 } /* seqPointIndex: 29 */,
	{ 56947, 2, 131, 131, 13, 44, 101, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 56947, 2, 131, 131, 13, 44, 104, kSequencePointKind_StepOut, 0, 31 } /* seqPointIndex: 31 */,
	{ 56947, 2, 132, 132, 9, 10, 110, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 56948, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 56948, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 56948, 2, 136, 136, 9, 10, 0, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 56948, 2, 137, 137, 13, 44, 1, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 56948, 2, 137, 137, 13, 44, 4, kSequencePointKind_StepOut, 0, 37 } /* seqPointIndex: 37 */,
	{ 56948, 2, 138, 138, 9, 10, 10, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 56950, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 56950, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 56950, 3, 190, 190, 70, 71, 0, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 56950, 3, 190, 190, 72, 91, 1, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 56950, 3, 190, 190, 92, 93, 8, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 56951, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 56951, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 56951, 3, 191, 191, 70, 71, 0, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 56951, 3, 191, 191, 72, 91, 1, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 56951, 3, 191, 191, 92, 93, 8, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 56952, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 56952, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 56952, 3, 194, 194, 77, 78, 0, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 56952, 3, 194, 194, 79, 98, 1, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 56952, 3, 194, 194, 99, 100, 8, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 56953, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 56953, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 56953, 3, 195, 195, 78, 79, 0, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 56953, 3, 195, 195, 80, 104, 1, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 56953, 3, 195, 195, 105, 106, 8, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 56954, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 56954, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 56954, 3, 196, 196, 74, 75, 0, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 56954, 3, 196, 196, 76, 97, 1, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 56954, 3, 196, 196, 98, 99, 8, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 56955, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 56955, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 65 } /* seqPointIndex: 65 */,
	{ 56955, 3, 197, 197, 73, 74, 0, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 56955, 3, 197, 197, 75, 96, 1, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 56955, 3, 197, 197, 97, 98, 8, kSequencePointKind_Normal, 0, 68 } /* seqPointIndex: 68 */,
	{ 56956, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 56956, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 56956, 3, 200, 200, 72, 73, 0, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 56956, 3, 200, 200, 74, 121, 1, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 56956, 3, 200, 200, 74, 121, 5, kSequencePointKind_StepOut, 0, 73 } /* seqPointIndex: 73 */,
	{ 56956, 3, 200, 200, 122, 123, 15, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 56957, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 56957, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 56957, 3, 204, 204, 88, 89, 0, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 56957, 3, 204, 204, 90, 125, 1, kSequencePointKind_Normal, 0, 78 } /* seqPointIndex: 78 */,
	{ 56957, 3, 204, 204, 90, 125, 8, kSequencePointKind_StepOut, 0, 79 } /* seqPointIndex: 79 */,
	{ 56957, 3, 204, 204, 126, 162, 18, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 56957, 3, 204, 204, 163, 164, 32, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 56958, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 56958, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 56958, 3, 207, 207, 102, 103, 0, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 56958, 3, 207, 207, 104, 146, 1, kSequencePointKind_Normal, 0, 85 } /* seqPointIndex: 85 */,
	{ 56958, 3, 207, 207, 104, 146, 8, kSequencePointKind_StepOut, 0, 86 } /* seqPointIndex: 86 */,
	{ 56958, 3, 207, 207, 147, 183, 18, kSequencePointKind_Normal, 0, 87 } /* seqPointIndex: 87 */,
	{ 56958, 3, 207, 207, 184, 185, 32, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 56959, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 89 } /* seqPointIndex: 89 */,
	{ 56959, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 90 } /* seqPointIndex: 90 */,
	{ 56959, 2, 94, 94, 75, 76, 0, kSequencePointKind_Normal, 0, 91 } /* seqPointIndex: 91 */,
	{ 56959, 2, 94, 94, 77, 103, 1, kSequencePointKind_Normal, 0, 92 } /* seqPointIndex: 92 */,
	{ 56959, 2, 94, 94, 77, 103, 3, kSequencePointKind_StepOut, 0, 93 } /* seqPointIndex: 93 */,
	{ 56959, 2, 94, 94, 104, 105, 9, kSequencePointKind_Normal, 0, 94 } /* seqPointIndex: 94 */,
	{ 56961, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 95 } /* seqPointIndex: 95 */,
	{ 56961, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 96 } /* seqPointIndex: 96 */,
	{ 56961, 1, 291, 291, 9, 10, 0, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
	{ 56961, 1, 292, 292, 13, 93, 1, kSequencePointKind_Normal, 0, 98 } /* seqPointIndex: 98 */,
	{ 56961, 1, 292, 292, 13, 93, 4, kSequencePointKind_StepOut, 0, 99 } /* seqPointIndex: 99 */,
	{ 56961, 1, 293, 293, 9, 10, 12, kSequencePointKind_Normal, 0, 100 } /* seqPointIndex: 100 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnityEngine_ParticleSystemModule[];
Il2CppSequencePoint g_sequencePointsUnityEngine_ParticleSystemModule[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "\\home\\bokken\\build\\output\\unity\\unity\\Modules\\ParticleSystem\\ScriptBindings\\ParticleSystem.bindings.cs", { 236, 65, 203, 223, 251, 100, 230, 5, 113, 251, 2, 165, 182, 52, 78, 2} }, //1 
{ "\\home\\bokken\\build\\output\\unity\\unity\\Modules\\ParticleSystem\\Managed\\ParticleSystem.deprecated.cs", { 254, 108, 111, 128, 100, 7, 222, 4, 156, 244, 245, 164, 175, 217, 189, 197} }, //2 
{ "\\home\\bokken\\build\\output\\unity\\unity\\Modules\\ParticleSystem\\Managed\\ParticleSystemStructs.cs", { 220, 239, 182, 144, 220, 43, 200, 140, 248, 250, 235, 227, 210, 7, 223, 37} }, //3 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[5] = 
{
	{ 7709, 1 },
	{ 7709, 2 },
	{ 7707, 3 },
	{ 7707, 2 },
	{ 7712, 1 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[2] = 
{
	{ 0, 111 },
	{ 0, 14 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[20] = 
{
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem::Emit(System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem::Emit_Internal(System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.ParticleSystem/EmitParams,System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem::EmitOld_Internal(UnityEngine.ParticleSystem/Particle&) */,
	{ 111, 0, 1 } /* System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single,UnityEngine.Color32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem::Emit(UnityEngine.ParticleSystem/Particle) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem::Emit_Injected(UnityEngine.ParticleSystem/EmitParams&,System.Int32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_position(UnityEngine.Vector3) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_velocity(UnityEngine.Vector3) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_remainingLifetime(System.Single) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_startLifetime(System.Single) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_startColor(UnityEngine.Color32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_randomSeed(System.UInt32) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_startSize(System.Single) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_rotation3D(UnityEngine.Vector3) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_angularVelocity3D(UnityEngine.Vector3) */,
	{ 0, 0, 0 } /* System.Void UnityEngine.ParticleSystem/Particle::set_lifetime(System.Single) */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.ParticleSystemExtensionsImpl::GetCollisionEvents(UnityEngine.ParticleSystem,UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>) */,
	{ 14, 1, 1 } /* System.Int32 UnityEngine.ParticlePhysicsExtensions::GetCollisionEvents(UnityEngine.ParticleSystem,UnityEngine.GameObject,System.Collections.Generic.List`1<UnityEngine.ParticleCollisionEvent>) */,
	{ 0, 0, 0 } /* System.Int32 UnityEngine.ParticleSystemRenderer::GetMeshes(UnityEngine.Mesh[]) */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_ParticleSystemModule;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnityEngine_ParticleSystemModule = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	101,
	(Il2CppSequencePoint*)g_sequencePointsUnityEngine_ParticleSystemModule,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	5,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
