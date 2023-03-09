#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[8] = 
{
	{ 14122, 0,  4 } /*tableIndex: 0 */,
	{ 14122, 0,  5 } /*tableIndex: 1 */,
	{ 14122, 0,  6 } /*tableIndex: 2 */,
	{ 14122, 0,  7 } /*tableIndex: 3 */,
	{ 14122, 0,  8 } /*tableIndex: 4 */,
	{ 14122, 0,  9 } /*tableIndex: 5 */,
	{ 14122, 0,  10 } /*tableIndex: 6 */,
	{ 7668, 1,  11 } /*tableIndex: 7 */,
};
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[2] = 
{
	"data",
	"c",
};
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[41] = 
{
	{ 0, 0 } /* 0x06000001 System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor() */,
	{ 0, 0 } /* 0x06000002 System.Void System.Runtime.CompilerServices.IsUnmanagedAttribute::.ctor() */,
	{ 0, 0 } /* 0x06000003 System.Void Unity.Profiling.ProfilerCounter`1::.ctor(Unity.Profiling.ProfilerCategory,System.String,Unity.Profiling.ProfilerMarkerDataUnit) */,
	{ 0, 0 } /* 0x06000004 System.Void Unity.Profiling.ProfilerCounter`1::Sample(T) */,
	{ 0, 0 } /* 0x06000005 System.Void Unity.Profiling.ProfilerCounterValue`1::.ctor(System.String) */,
	{ 0, 0 } /* 0x06000006 System.Void Unity.Profiling.ProfilerCounterValue`1::.ctor(System.String,Unity.Profiling.ProfilerMarkerDataUnit) */,
	{ 0, 0 } /* 0x06000007 System.Void Unity.Profiling.ProfilerCounterValue`1::.ctor(System.String,Unity.Profiling.ProfilerMarkerDataUnit,Unity.Profiling.ProfilerCounterOptions) */,
	{ 0, 0 } /* 0x06000008 System.Void Unity.Profiling.ProfilerCounterValue`1::.ctor(Unity.Profiling.ProfilerCategory,System.String,Unity.Profiling.ProfilerMarkerDataUnit) */,
	{ 0, 0 } /* 0x06000009 System.Void Unity.Profiling.ProfilerCounterValue`1::.ctor(Unity.Profiling.ProfilerCategory,System.String,Unity.Profiling.ProfilerMarkerDataUnit,Unity.Profiling.ProfilerCounterOptions) */,
	{ 0, 0 } /* 0x0600000A T Unity.Profiling.ProfilerCounterValue`1::get_Value() */,
	{ 0, 0 } /* 0x0600000B System.Void Unity.Profiling.ProfilerCounterValue`1::set_Value(T) */,
	{ 0, 0 } /* 0x0600000C System.Void Unity.Profiling.ProfilerCounterValue`1::Sample() */,
	{ 0, 0 } /* 0x0600000D System.Void Unity.Profiling.ProfilerMarker`1::.ctor(System.String,System.String) */,
	{ 0, 0 } /* 0x0600000E System.Void Unity.Profiling.ProfilerMarker`1::.ctor(Unity.Profiling.ProfilerCategory,System.String,System.String) */,
	{ 0, 0 } /* 0x0600000F System.Void Unity.Profiling.ProfilerMarker`1::Begin(TP1) */,
	{ 0, 0 } /* 0x06000010 System.Void Unity.Profiling.ProfilerMarker`1::End() */,
	{ 0, 0 } /* 0x06000011 Unity.Profiling.ProfilerMarker`1/AutoScope<TP1> Unity.Profiling.ProfilerMarker`1::Auto(TP1) */,
	{ 0, 0 } /* 0x06000012 System.Void Unity.Profiling.ProfilerMarker`1/AutoScope::.ctor(Unity.Profiling.ProfilerMarker`1<TP1>,TP1) */,
	{ 0, 0 } /* 0x06000013 System.Void Unity.Profiling.ProfilerMarker`1/AutoScope::Dispose() */,
	{ 0, 0 } /* 0x06000014 System.Void Unity.Profiling.ProfilerMarker`2::.ctor(System.String,System.String,System.String) */,
	{ 0, 0 } /* 0x06000015 System.Void Unity.Profiling.ProfilerMarker`2::.ctor(Unity.Profiling.ProfilerCategory,System.String,System.String,System.String) */,
	{ 0, 0 } /* 0x06000016 System.Void Unity.Profiling.ProfilerMarker`2::Begin(TP1,TP2) */,
	{ 0, 0 } /* 0x06000017 System.Void Unity.Profiling.ProfilerMarker`2::End() */,
	{ 0, 0 } /* 0x06000018 Unity.Profiling.ProfilerMarker`2/AutoScope<TP1,TP2> Unity.Profiling.ProfilerMarker`2::Auto(TP1,TP2) */,
	{ 0, 0 } /* 0x06000019 System.Void Unity.Profiling.ProfilerMarker`2/AutoScope::.ctor(Unity.Profiling.ProfilerMarker`2<TP1,TP2>,TP1,TP2) */,
	{ 0, 0 } /* 0x0600001A System.Void Unity.Profiling.ProfilerMarker`2/AutoScope::Dispose() */,
	{ 0, 0 } /* 0x0600001B System.Void Unity.Profiling.ProfilerMarker`3::.ctor(System.String,System.String,System.String,System.String) */,
	{ 0, 0 } /* 0x0600001C System.Void Unity.Profiling.ProfilerMarker`3::.ctor(Unity.Profiling.ProfilerCategory,System.String,System.String,System.String,System.String) */,
	{ 0, 0 } /* 0x0600001D System.Void Unity.Profiling.ProfilerMarker`3::Begin(TP1,TP2,TP3) */,
	{ 0, 0 } /* 0x0600001E System.Void Unity.Profiling.ProfilerMarker`3::End() */,
	{ 0, 0 } /* 0x0600001F Unity.Profiling.ProfilerMarker`3/AutoScope<TP1,TP2,TP3> Unity.Profiling.ProfilerMarker`3::Auto(TP1,TP2,TP3) */,
	{ 0, 0 } /* 0x06000020 System.Void Unity.Profiling.ProfilerMarker`3/AutoScope::.ctor(Unity.Profiling.ProfilerMarker`3<TP1,TP2,TP3>,TP1,TP2,TP3) */,
	{ 0, 0 } /* 0x06000021 System.Void Unity.Profiling.ProfilerMarker`3/AutoScope::Dispose() */,
	{ 0, 1 } /* 0x06000022 System.Void Unity.Profiling.ProfilerMarkerExtension::Begin(Unity.Profiling.ProfilerMarker,System.Int32) */,
	{ 1, 1 } /* 0x06000023 System.Void Unity.Profiling.ProfilerMarkerExtension::Begin(Unity.Profiling.ProfilerMarker,System.UInt32) */,
	{ 2, 1 } /* 0x06000024 System.Void Unity.Profiling.ProfilerMarkerExtension::Begin(Unity.Profiling.ProfilerMarker,System.Int64) */,
	{ 3, 1 } /* 0x06000025 System.Void Unity.Profiling.ProfilerMarkerExtension::Begin(Unity.Profiling.ProfilerMarker,System.UInt64) */,
	{ 4, 1 } /* 0x06000026 System.Void Unity.Profiling.ProfilerMarkerExtension::Begin(Unity.Profiling.ProfilerMarker,System.Single) */,
	{ 5, 1 } /* 0x06000027 System.Void Unity.Profiling.ProfilerMarkerExtension::Begin(Unity.Profiling.ProfilerMarker,System.Double) */,
	{ 6, 2 } /* 0x06000028 System.Void Unity.Profiling.ProfilerMarkerExtension::Begin(Unity.Profiling.ProfilerMarker,System.String) */,
	{ 0, 0 } /* 0x06000029 System.Byte Unity.Profiling.ProfilerUtility::GetProfilerMarkerDataType() */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
IL2CPP_EXTERN_C Il2CppSequencePoint g_sequencePointsUnity_Profiling_Core[];
Il2CppSequencePoint g_sequencePointsUnity_Profiling_Core[171] = 
{
	{ 57023, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 0 } /* seqPointIndex: 0 */,
	{ 57023, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 1 } /* seqPointIndex: 1 */,
	{ 57023, 1, 47, 47, 9, 10, 0, kSequencePointKind_Normal, 0, 2 } /* seqPointIndex: 2 */,
	{ 57024, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 3 } /* seqPointIndex: 3 */,
	{ 57024, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 4 } /* seqPointIndex: 4 */,
	{ 57024, 1, 71, 71, 9, 10, 0, kSequencePointKind_Normal, 0, 5 } /* seqPointIndex: 5 */,
	{ 57025, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 6 } /* seqPointIndex: 6 */,
	{ 57025, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 7 } /* seqPointIndex: 7 */,
	{ 57025, 2, 42, 42, 9, 10, 0, kSequencePointKind_Normal, 0, 8 } /* seqPointIndex: 8 */,
	{ 57026, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 9 } /* seqPointIndex: 9 */,
	{ 57026, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 10 } /* seqPointIndex: 10 */,
	{ 57026, 2, 59, 59, 9, 10, 0, kSequencePointKind_Normal, 0, 11 } /* seqPointIndex: 11 */,
	{ 57027, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 12 } /* seqPointIndex: 12 */,
	{ 57027, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 13 } /* seqPointIndex: 13 */,
	{ 57027, 2, 77, 77, 9, 10, 0, kSequencePointKind_Normal, 0, 14 } /* seqPointIndex: 14 */,
	{ 57028, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 15 } /* seqPointIndex: 15 */,
	{ 57028, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 16 } /* seqPointIndex: 16 */,
	{ 57028, 2, 95, 95, 9, 10, 0, kSequencePointKind_Normal, 0, 17 } /* seqPointIndex: 17 */,
	{ 57029, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 18 } /* seqPointIndex: 18 */,
	{ 57029, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 19 } /* seqPointIndex: 19 */,
	{ 57029, 2, 114, 114, 9, 10, 0, kSequencePointKind_Normal, 0, 20 } /* seqPointIndex: 20 */,
	{ 57030, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 21 } /* seqPointIndex: 21 */,
	{ 57030, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 22 } /* seqPointIndex: 22 */,
	{ 57030, 2, 131, 131, 17, 32, 0, kSequencePointKind_Normal, 0, 23 } /* seqPointIndex: 23 */,
	{ 57031, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 24 } /* seqPointIndex: 24 */,
	{ 57031, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 25 } /* seqPointIndex: 25 */,
	{ 57031, 2, 144, 144, 13, 14, 0, kSequencePointKind_Normal, 0, 26 } /* seqPointIndex: 26 */,
	{ 57032, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 27 } /* seqPointIndex: 27 */,
	{ 57032, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 28 } /* seqPointIndex: 28 */,
	{ 57032, 2, 159, 159, 9, 10, 0, kSequencePointKind_Normal, 0, 29 } /* seqPointIndex: 29 */,
	{ 57033, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 30 } /* seqPointIndex: 30 */,
	{ 57033, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 31 } /* seqPointIndex: 31 */,
	{ 57033, 3, 51, 51, 9, 10, 0, kSequencePointKind_Normal, 0, 32 } /* seqPointIndex: 32 */,
	{ 57034, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 33 } /* seqPointIndex: 33 */,
	{ 57034, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 34 } /* seqPointIndex: 34 */,
	{ 57034, 3, 68, 68, 9, 10, 0, kSequencePointKind_Normal, 0, 35 } /* seqPointIndex: 35 */,
	{ 57035, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 36 } /* seqPointIndex: 36 */,
	{ 57035, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 37 } /* seqPointIndex: 37 */,
	{ 57035, 3, 89, 89, 9, 10, 0, kSequencePointKind_Normal, 0, 38 } /* seqPointIndex: 38 */,
	{ 57036, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 39 } /* seqPointIndex: 39 */,
	{ 57036, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 40 } /* seqPointIndex: 40 */,
	{ 57036, 3, 103, 103, 9, 10, 0, kSequencePointKind_Normal, 0, 41 } /* seqPointIndex: 41 */,
	{ 57037, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 42 } /* seqPointIndex: 42 */,
	{ 57037, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 43 } /* seqPointIndex: 43 */,
	{ 57037, 3, 162, 162, 13, 28, 0, kSequencePointKind_Normal, 0, 44 } /* seqPointIndex: 44 */,
	{ 57038, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 45 } /* seqPointIndex: 45 */,
	{ 57038, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 46 } /* seqPointIndex: 46 */,
	{ 57038, 3, 121, 121, 13, 14, 0, kSequencePointKind_Normal, 0, 47 } /* seqPointIndex: 47 */,
	{ 57039, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 48 } /* seqPointIndex: 48 */,
	{ 57039, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 49 } /* seqPointIndex: 49 */,
	{ 57039, 3, 132, 132, 13, 14, 0, kSequencePointKind_Normal, 0, 50 } /* seqPointIndex: 50 */,
	{ 57040, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 51 } /* seqPointIndex: 51 */,
	{ 57040, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 52 } /* seqPointIndex: 52 */,
	{ 57040, 4, 67, 67, 9, 10, 0, kSequencePointKind_Normal, 0, 53 } /* seqPointIndex: 53 */,
	{ 57041, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 54 } /* seqPointIndex: 54 */,
	{ 57041, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 55 } /* seqPointIndex: 55 */,
	{ 57041, 4, 87, 87, 9, 10, 0, kSequencePointKind_Normal, 0, 56 } /* seqPointIndex: 56 */,
	{ 57042, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 57 } /* seqPointIndex: 57 */,
	{ 57042, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 58 } /* seqPointIndex: 58 */,
	{ 57042, 4, 110, 110, 9, 10, 0, kSequencePointKind_Normal, 0, 59 } /* seqPointIndex: 59 */,
	{ 57043, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 60 } /* seqPointIndex: 60 */,
	{ 57043, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 61 } /* seqPointIndex: 61 */,
	{ 57043, 4, 124, 124, 9, 10, 0, kSequencePointKind_Normal, 0, 62 } /* seqPointIndex: 62 */,
	{ 57044, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 63 } /* seqPointIndex: 63 */,
	{ 57044, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 64 } /* seqPointIndex: 64 */,
	{ 57044, 4, 183, 183, 13, 28, 0, kSequencePointKind_Normal, 0, 65 } /* seqPointIndex: 65 */,
	{ 57045, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 66 } /* seqPointIndex: 66 */,
	{ 57045, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 67 } /* seqPointIndex: 67 */,
	{ 57045, 4, 142, 142, 13, 14, 0, kSequencePointKind_Normal, 0, 68 } /* seqPointIndex: 68 */,
	{ 57046, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 69 } /* seqPointIndex: 69 */,
	{ 57046, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 70 } /* seqPointIndex: 70 */,
	{ 57046, 4, 153, 153, 13, 14, 0, kSequencePointKind_Normal, 0, 71 } /* seqPointIndex: 71 */,
	{ 57047, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 72 } /* seqPointIndex: 72 */,
	{ 57047, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 73 } /* seqPointIndex: 73 */,
	{ 57047, 5, 74, 74, 9, 10, 0, kSequencePointKind_Normal, 0, 74 } /* seqPointIndex: 74 */,
	{ 57048, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 75 } /* seqPointIndex: 75 */,
	{ 57048, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 76 } /* seqPointIndex: 76 */,
	{ 57048, 5, 97, 97, 9, 10, 0, kSequencePointKind_Normal, 0, 77 } /* seqPointIndex: 77 */,
	{ 57049, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 78 } /* seqPointIndex: 78 */,
	{ 57049, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 79 } /* seqPointIndex: 79 */,
	{ 57049, 5, 124, 124, 9, 10, 0, kSequencePointKind_Normal, 0, 80 } /* seqPointIndex: 80 */,
	{ 57050, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 81 } /* seqPointIndex: 81 */,
	{ 57050, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 82 } /* seqPointIndex: 82 */,
	{ 57050, 5, 138, 138, 9, 10, 0, kSequencePointKind_Normal, 0, 83 } /* seqPointIndex: 83 */,
	{ 57051, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 84 } /* seqPointIndex: 84 */,
	{ 57051, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 85 } /* seqPointIndex: 85 */,
	{ 57051, 5, 198, 198, 13, 28, 0, kSequencePointKind_Normal, 0, 86 } /* seqPointIndex: 86 */,
	{ 57052, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 87 } /* seqPointIndex: 87 */,
	{ 57052, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 88 } /* seqPointIndex: 88 */,
	{ 57052, 5, 156, 156, 13, 14, 0, kSequencePointKind_Normal, 0, 89 } /* seqPointIndex: 89 */,
	{ 57053, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 90 } /* seqPointIndex: 90 */,
	{ 57053, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 91 } /* seqPointIndex: 91 */,
	{ 57053, 5, 167, 167, 13, 14, 0, kSequencePointKind_Normal, 0, 92 } /* seqPointIndex: 92 */,
	{ 57054, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 93 } /* seqPointIndex: 93 */,
	{ 57054, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 94 } /* seqPointIndex: 94 */,
	{ 57054, 6, 26, 31, 13, 15, 0, kSequencePointKind_Normal, 0, 95 } /* seqPointIndex: 95 */,
	{ 57054, 6, 26, 31, 13, 15, 18, kSequencePointKind_StepOut, 0, 96 } /* seqPointIndex: 96 */,
	{ 57054, 6, 32, 32, 13, 84, 40, kSequencePointKind_Normal, 0, 97 } /* seqPointIndex: 97 */,
	{ 57054, 6, 32, 32, 13, 84, 42, kSequencePointKind_StepOut, 0, 98 } /* seqPointIndex: 98 */,
	{ 57054, 6, 32, 32, 13, 84, 51, kSequencePointKind_StepOut, 0, 99 } /* seqPointIndex: 99 */,
	{ 57054, 6, 33, 33, 9, 10, 56, kSequencePointKind_Normal, 0, 100 } /* seqPointIndex: 100 */,
	{ 57055, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 101 } /* seqPointIndex: 101 */,
	{ 57055, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 102 } /* seqPointIndex: 102 */,
	{ 57055, 6, 46, 51, 13, 15, 0, kSequencePointKind_Normal, 0, 103 } /* seqPointIndex: 103 */,
	{ 57055, 6, 46, 51, 13, 15, 18, kSequencePointKind_StepOut, 0, 104 } /* seqPointIndex: 104 */,
	{ 57055, 6, 52, 52, 13, 84, 40, kSequencePointKind_Normal, 0, 105 } /* seqPointIndex: 105 */,
	{ 57055, 6, 52, 52, 13, 84, 42, kSequencePointKind_StepOut, 0, 106 } /* seqPointIndex: 106 */,
	{ 57055, 6, 52, 52, 13, 84, 51, kSequencePointKind_StepOut, 0, 107 } /* seqPointIndex: 107 */,
	{ 57055, 6, 53, 53, 9, 10, 56, kSequencePointKind_Normal, 0, 108 } /* seqPointIndex: 108 */,
	{ 57056, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 109 } /* seqPointIndex: 109 */,
	{ 57056, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 110 } /* seqPointIndex: 110 */,
	{ 57056, 6, 66, 71, 13, 15, 0, kSequencePointKind_Normal, 0, 111 } /* seqPointIndex: 111 */,
	{ 57056, 6, 66, 71, 13, 15, 18, kSequencePointKind_StepOut, 0, 112 } /* seqPointIndex: 112 */,
	{ 57056, 6, 72, 72, 13, 84, 40, kSequencePointKind_Normal, 0, 113 } /* seqPointIndex: 113 */,
	{ 57056, 6, 72, 72, 13, 84, 42, kSequencePointKind_StepOut, 0, 114 } /* seqPointIndex: 114 */,
	{ 57056, 6, 72, 72, 13, 84, 51, kSequencePointKind_StepOut, 0, 115 } /* seqPointIndex: 115 */,
	{ 57056, 6, 73, 73, 9, 10, 56, kSequencePointKind_Normal, 0, 116 } /* seqPointIndex: 116 */,
	{ 57057, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 117 } /* seqPointIndex: 117 */,
	{ 57057, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 118 } /* seqPointIndex: 118 */,
	{ 57057, 6, 86, 91, 13, 15, 0, kSequencePointKind_Normal, 0, 119 } /* seqPointIndex: 119 */,
	{ 57057, 6, 86, 91, 13, 15, 18, kSequencePointKind_StepOut, 0, 120 } /* seqPointIndex: 120 */,
	{ 57057, 6, 92, 92, 13, 84, 40, kSequencePointKind_Normal, 0, 121 } /* seqPointIndex: 121 */,
	{ 57057, 6, 92, 92, 13, 84, 42, kSequencePointKind_StepOut, 0, 122 } /* seqPointIndex: 122 */,
	{ 57057, 6, 92, 92, 13, 84, 51, kSequencePointKind_StepOut, 0, 123 } /* seqPointIndex: 123 */,
	{ 57057, 6, 93, 93, 9, 10, 56, kSequencePointKind_Normal, 0, 124 } /* seqPointIndex: 124 */,
	{ 57058, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 125 } /* seqPointIndex: 125 */,
	{ 57058, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 126 } /* seqPointIndex: 126 */,
	{ 57058, 6, 106, 111, 13, 15, 0, kSequencePointKind_Normal, 0, 127 } /* seqPointIndex: 127 */,
	{ 57058, 6, 106, 111, 13, 15, 18, kSequencePointKind_StepOut, 0, 128 } /* seqPointIndex: 128 */,
	{ 57058, 6, 112, 112, 13, 84, 40, kSequencePointKind_Normal, 0, 129 } /* seqPointIndex: 129 */,
	{ 57058, 6, 112, 112, 13, 84, 42, kSequencePointKind_StepOut, 0, 130 } /* seqPointIndex: 130 */,
	{ 57058, 6, 112, 112, 13, 84, 51, kSequencePointKind_StepOut, 0, 131 } /* seqPointIndex: 131 */,
	{ 57058, 6, 113, 113, 9, 10, 56, kSequencePointKind_Normal, 0, 132 } /* seqPointIndex: 132 */,
	{ 57059, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 133 } /* seqPointIndex: 133 */,
	{ 57059, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 134 } /* seqPointIndex: 134 */,
	{ 57059, 6, 126, 131, 13, 15, 0, kSequencePointKind_Normal, 0, 135 } /* seqPointIndex: 135 */,
	{ 57059, 6, 126, 131, 13, 15, 18, kSequencePointKind_StepOut, 0, 136 } /* seqPointIndex: 136 */,
	{ 57059, 6, 132, 132, 13, 84, 40, kSequencePointKind_Normal, 0, 137 } /* seqPointIndex: 137 */,
	{ 57059, 6, 132, 132, 13, 84, 42, kSequencePointKind_StepOut, 0, 138 } /* seqPointIndex: 138 */,
	{ 57059, 6, 132, 132, 13, 84, 51, kSequencePointKind_StepOut, 0, 139 } /* seqPointIndex: 139 */,
	{ 57059, 6, 133, 133, 9, 10, 56, kSequencePointKind_Normal, 0, 140 } /* seqPointIndex: 140 */,
	{ 57060, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 141 } /* seqPointIndex: 141 */,
	{ 57060, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 142 } /* seqPointIndex: 142 */,
	{ 57060, 6, 146, 146, 13, 96, 0, kSequencePointKind_Normal, 0, 143 } /* seqPointIndex: 143 */,
	{ 57060, 6, 147, 147, 19, 37, 21, kSequencePointKind_Normal, 0, 144 } /* seqPointIndex: 144 */,
	{ 57060, 6, 147, 147, 19, 37, 28, kSequencePointKind_StepOut, 0, 145 } /* seqPointIndex: 145 */,
	{ 57060, 6, 149, 149, 17, 61, 35, kSequencePointKind_Normal, 0, 146 } /* seqPointIndex: 146 */,
	{ 57060, 6, 149, 149, 17, 61, 38, kSequencePointKind_StepOut, 0, 147 } /* seqPointIndex: 147 */,
	{ 57060, 6, 150, 150, 17, 30, 52, kSequencePointKind_Normal, 0, 148 } /* seqPointIndex: 148 */,
	{ 57060, 6, 151, 151, 17, 88, 60, kSequencePointKind_Normal, 0, 149 } /* seqPointIndex: 149 */,
	{ 57060, 6, 151, 151, 17, 88, 62, kSequencePointKind_StepOut, 0, 150 } /* seqPointIndex: 150 */,
	{ 57060, 6, 151, 151, 17, 88, 71, kSequencePointKind_StepOut, 0, 151 } /* seqPointIndex: 151 */,
	{ 57060, 6, 151, 151, 0, 0, 76, kSequencePointKind_Normal, 0, 152 } /* seqPointIndex: 152 */,
	{ 57060, 6, 153, 153, 9, 10, 78, kSequencePointKind_Normal, 0, 153 } /* seqPointIndex: 153 */,
	{ 57061, 0, 0, 0, 0, 0, -1, kSequencePointKind_Normal, 0, 154 } /* seqPointIndex: 154 */,
	{ 57061, 0, 0, 0, 0, 0, 16777215, kSequencePointKind_Normal, 0, 155 } /* seqPointIndex: 155 */,
	{ 57061, 7, 10, 10, 13, 49, 0, kSequencePointKind_Normal, 0, 156 } /* seqPointIndex: 156 */,
	{ 57061, 7, 10, 10, 13, 49, 5, kSequencePointKind_StepOut, 0, 157 } /* seqPointIndex: 157 */,
	{ 57061, 7, 10, 10, 13, 49, 10, kSequencePointKind_StepOut, 0, 158 } /* seqPointIndex: 158 */,
	{ 57061, 7, 10, 10, 0, 0, 16, kSequencePointKind_Normal, 0, 159 } /* seqPointIndex: 159 */,
	{ 57061, 7, 13, 13, 21, 63, 67, kSequencePointKind_Normal, 0, 160 } /* seqPointIndex: 160 */,
	{ 57061, 7, 15, 15, 21, 64, 69, kSequencePointKind_Normal, 0, 161 } /* seqPointIndex: 161 */,
	{ 57061, 7, 17, 17, 21, 63, 71, kSequencePointKind_Normal, 0, 162 } /* seqPointIndex: 162 */,
	{ 57061, 7, 19, 19, 21, 64, 73, kSequencePointKind_Normal, 0, 163 } /* seqPointIndex: 163 */,
	{ 57061, 7, 21, 21, 21, 63, 75, kSequencePointKind_Normal, 0, 164 } /* seqPointIndex: 164 */,
	{ 57061, 7, 23, 23, 21, 64, 77, kSequencePointKind_Normal, 0, 165 } /* seqPointIndex: 165 */,
	{ 57061, 7, 25, 25, 21, 66, 79, kSequencePointKind_Normal, 0, 166 } /* seqPointIndex: 166 */,
	{ 57061, 7, 27, 27, 21, 105, 82, kSequencePointKind_Normal, 0, 167 } /* seqPointIndex: 167 */,
	{ 57061, 7, 27, 27, 21, 105, 92, kSequencePointKind_StepOut, 0, 168 } /* seqPointIndex: 168 */,
	{ 57061, 7, 27, 27, 21, 105, 97, kSequencePointKind_StepOut, 0, 169 } /* seqPointIndex: 169 */,
	{ 57061, 7, 27, 27, 21, 105, 102, kSequencePointKind_StepOut, 0, 170 } /* seqPointIndex: 170 */,
};
#else
extern Il2CppSequencePoint g_sequencePointsUnity_Profiling_Core[];
Il2CppSequencePoint g_sequencePointsUnity_Profiling_Core[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[] = {
{ "", { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0} }, //0 
{ "D:\\unity projects\\unity projects\\FlutterAr\\Library\\PackageCache\\com.unity.profiling.core@1.0.2\\Runtime\\ProfilerCounter.cs", { 101, 63, 19, 206, 213, 102, 35, 7, 94, 0, 106, 113, 173, 168, 243, 225} }, //1 
{ "D:\\unity projects\\unity projects\\FlutterAr\\Library\\PackageCache\\com.unity.profiling.core@1.0.2\\Runtime\\ProfilerCounterValue.cs", { 216, 5, 127, 216, 193, 47, 103, 206, 153, 140, 255, 253, 110, 220, 177, 9} }, //2 
{ "D:\\unity projects\\unity projects\\FlutterAr\\Library\\PackageCache\\com.unity.profiling.core@1.0.2\\Runtime\\ProfilerMarker1Param.cs", { 168, 42, 119, 162, 111, 160, 193, 57, 126, 85, 185, 83, 51, 85, 131, 101} }, //3 
{ "D:\\unity projects\\unity projects\\FlutterAr\\Library\\PackageCache\\com.unity.profiling.core@1.0.2\\Runtime\\ProfilerMarker2Params.cs", { 29, 125, 220, 208, 18, 48, 40, 96, 190, 185, 162, 72, 164, 41, 207, 255} }, //4 
{ "D:\\unity projects\\unity projects\\FlutterAr\\Library\\PackageCache\\com.unity.profiling.core@1.0.2\\Runtime\\ProfilerMarker3Params.cs", { 59, 91, 245, 158, 191, 204, 68, 45, 26, 169, 135, 68, 208, 106, 178, 63} }, //5 
{ "D:\\unity projects\\unity projects\\FlutterAr\\Library\\PackageCache\\com.unity.profiling.core@1.0.2\\Runtime\\ProfilerMarkerExtensions.cs", { 71, 38, 203, 172, 63, 42, 163, 66, 193, 195, 185, 54, 241, 178, 110, 49} }, //6 
{ "D:\\unity projects\\unity projects\\FlutterAr\\Library\\PackageCache\\com.unity.profiling.core@1.0.2\\Runtime\\ProfilerUtility.cs", { 52, 211, 240, 23, 180, 120, 215, 185, 241, 173, 145, 11, 159, 63, 76, 158} }, //7 
};
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[10] = 
{
	{ 7742, 1 },
	{ 7743, 2 },
	{ 7745, 3 },
	{ 7744, 3 },
	{ 7747, 4 },
	{ 7746, 4 },
	{ 7749, 5 },
	{ 7748, 5 },
	{ 7750, 6 },
	{ 7751, 7 },
};
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[13] = 
{
	{ 0, 10 },
	{ 0, 10 },
	{ 0, 10 },
	{ 0, 10 },
	{ 0, 57 },
	{ 0, 57 },
	{ 0, 57 },
	{ 0, 57 },
	{ 0, 57 },
	{ 0, 57 },
	{ 0, 79 },
	{ 19, 78 },
	{ 0, 108 },
};
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[41] = 
{
	{ 0, 0, 0 } /* System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor() */,
	{ 0, 0, 0 } /* System.Void System.Runtime.CompilerServices.IsUnmanagedAttribute::.ctor() */,
	{ 0, 0, 0 } /* System.Void Unity.Profiling.ProfilerCounter`1::.ctor(Unity.Profiling.ProfilerCategory,System.String,Unity.Profiling.ProfilerMarkerDataUnit) */,
	{ 0, 0, 0 } /* System.Void Unity.Profiling.ProfilerCounter`1::Sample(T) */,
	{ 0, 0, 0 } /* System.Void Unity.Profiling.ProfilerCounterValue`1::.ctor(System.String) */,
	{ 0, 0, 0 } /* System.Void Unity.Profiling.ProfilerCounterValue`1::.ctor(System.String,Unity.Profiling.ProfilerMarkerDataUnit) */,
	{ 0, 0, 0 } /* System.Void Unity.Profiling.ProfilerCounterValue`1::.ctor(System.String,Unity.Profiling.ProfilerMarkerDataUnit,Unity.Profiling.ProfilerCounterOptions) */,
	{ 0, 0, 0 } /* System.Void Unity.Profiling.ProfilerCounterValue`1::.ctor(Unity.Profiling.ProfilerCategory,System.String,Unity.Profiling.ProfilerMarkerDataUnit) */,
	{ 0, 0, 0 } /* System.Void Unity.Profiling.ProfilerCounterValue`1::.ctor(Unity.Profiling.ProfilerCategory,System.String,Unity.Profiling.ProfilerMarkerDataUnit,Unity.Profiling.ProfilerCounterOptions) */,
	{ 10, 0, 1 } /* T Unity.Profiling.ProfilerCounterValue`1::get_Value() */,
	{ 0, 0, 0 } /* System.Void Unity.Profiling.ProfilerCounterValue`1::set_Value(T) */,
	{ 0, 0, 0 } /* System.Void Unity.Profiling.ProfilerCounterValue`1::Sample() */,
	{ 0, 0, 0 } /* System.Void Unity.Profiling.ProfilerMarker`1::.ctor(System.String,System.String) */,
	{ 0, 0, 0 } /* System.Void Unity.Profiling.ProfilerMarker`1::.ctor(Unity.Profiling.ProfilerCategory,System.String,System.String) */,
	{ 0, 0, 0 } /* System.Void Unity.Profiling.ProfilerMarker`1::Begin(TP1) */,
	{ 0, 0, 0 } /* System.Void Unity.Profiling.ProfilerMarker`1::End() */,
	{ 10, 1, 1 } /* Unity.Profiling.ProfilerMarker`1/AutoScope<TP1> Unity.Profiling.ProfilerMarker`1::Auto(TP1) */,
	{ 0, 0, 0 } /* System.Void Unity.Profiling.ProfilerMarker`1/AutoScope::.ctor(Unity.Profiling.ProfilerMarker`1<TP1>,TP1) */,
	{ 0, 0, 0 } /* System.Void Unity.Profiling.ProfilerMarker`1/AutoScope::Dispose() */,
	{ 0, 0, 0 } /* System.Void Unity.Profiling.ProfilerMarker`2::.ctor(System.String,System.String,System.String) */,
	{ 0, 0, 0 } /* System.Void Unity.Profiling.ProfilerMarker`2::.ctor(Unity.Profiling.ProfilerCategory,System.String,System.String,System.String) */,
	{ 0, 0, 0 } /* System.Void Unity.Profiling.ProfilerMarker`2::Begin(TP1,TP2) */,
	{ 0, 0, 0 } /* System.Void Unity.Profiling.ProfilerMarker`2::End() */,
	{ 10, 2, 1 } /* Unity.Profiling.ProfilerMarker`2/AutoScope<TP1,TP2> Unity.Profiling.ProfilerMarker`2::Auto(TP1,TP2) */,
	{ 0, 0, 0 } /* System.Void Unity.Profiling.ProfilerMarker`2/AutoScope::.ctor(Unity.Profiling.ProfilerMarker`2<TP1,TP2>,TP1,TP2) */,
	{ 0, 0, 0 } /* System.Void Unity.Profiling.ProfilerMarker`2/AutoScope::Dispose() */,
	{ 0, 0, 0 } /* System.Void Unity.Profiling.ProfilerMarker`3::.ctor(System.String,System.String,System.String,System.String) */,
	{ 0, 0, 0 } /* System.Void Unity.Profiling.ProfilerMarker`3::.ctor(Unity.Profiling.ProfilerCategory,System.String,System.String,System.String,System.String) */,
	{ 0, 0, 0 } /* System.Void Unity.Profiling.ProfilerMarker`3::Begin(TP1,TP2,TP3) */,
	{ 0, 0, 0 } /* System.Void Unity.Profiling.ProfilerMarker`3::End() */,
	{ 10, 3, 1 } /* Unity.Profiling.ProfilerMarker`3/AutoScope<TP1,TP2,TP3> Unity.Profiling.ProfilerMarker`3::Auto(TP1,TP2,TP3) */,
	{ 0, 0, 0 } /* System.Void Unity.Profiling.ProfilerMarker`3/AutoScope::.ctor(Unity.Profiling.ProfilerMarker`3<TP1,TP2,TP3>,TP1,TP2,TP3) */,
	{ 0, 0, 0 } /* System.Void Unity.Profiling.ProfilerMarker`3/AutoScope::Dispose() */,
	{ 57, 4, 1 } /* System.Void Unity.Profiling.ProfilerMarkerExtension::Begin(Unity.Profiling.ProfilerMarker,System.Int32) */,
	{ 57, 5, 1 } /* System.Void Unity.Profiling.ProfilerMarkerExtension::Begin(Unity.Profiling.ProfilerMarker,System.UInt32) */,
	{ 57, 6, 1 } /* System.Void Unity.Profiling.ProfilerMarkerExtension::Begin(Unity.Profiling.ProfilerMarker,System.Int64) */,
	{ 57, 7, 1 } /* System.Void Unity.Profiling.ProfilerMarkerExtension::Begin(Unity.Profiling.ProfilerMarker,System.UInt64) */,
	{ 57, 8, 1 } /* System.Void Unity.Profiling.ProfilerMarkerExtension::Begin(Unity.Profiling.ProfilerMarker,System.Single) */,
	{ 57, 9, 1 } /* System.Void Unity.Profiling.ProfilerMarkerExtension::Begin(Unity.Profiling.ProfilerMarker,System.Double) */,
	{ 79, 10, 2 } /* System.Void Unity.Profiling.ProfilerMarkerExtension::Begin(Unity.Profiling.ProfilerMarker,System.String) */,
	{ 108, 12, 1 } /* System.Byte Unity.Profiling.ProfilerUtility::GetProfilerMarkerDataType() */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnity_Profiling_Core;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationUnity_Profiling_Core = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	171,
	(Il2CppSequencePoint*)g_sequencePointsUnity_Profiling_Core,
	0,
	(Il2CppCatchPoint*)g_catchPoints,
	10,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
