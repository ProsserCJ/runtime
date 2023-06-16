// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.

//----------------------------------------------------------
// lwmlist.h - List of all LightWeightMap in MethodContext.
// To use, #define LWM(map, key, value) to something.
// If you need to distinguish DenseLightWeightMap, #define DENSELWM(map, value) as well.
//----------------------------------------------------------

#ifndef LWM
#error Define LWM before including this file.
#endif

// If the key is needed, then DENSELWM must be defined.
#ifndef DENSELWM
#define DENSELWM(map, value) LWM(map, this_is_an_error, value)
#endif

LWM(AllocPgoInstrumentationBySchema, DWORDLONG, Agnostic_AllocPgoInstrumentationBySchema)
LWM(GetPgoInstrumentationResults, DWORDLONG, Agnostic_GetPgoInstrumentationResults)
LWM(AsCorInfoType, DWORDLONG, DWORD)
LWM(CanAccessClass, Agnostic_CanAccessClassIn, Agnostic_CanAccessClassOut)
LWM(CanCast, DLDL, DWORD)
LWM(CanGetCookieForPInvokeCalliSig, CanGetCookieForPInvokeCalliSigValue, DWORD)
LWM(CanGetVarArgsHandle, CanGetVarArgsHandleValue, DWORD)
LWM(CanInline, DLDL, Agnostic_CanInline)
LWM(CanInlineTypeCheck, DLD, DWORD)
LWM(CanTailCall, Agnostic_CanTailCall, DWORD)
LWM(CheckMethodModifier, Agnostic_CheckMethodModifier, DWORD)
LWM(CompareTypesForCast, DLDL, DWORD)
LWM(CompareTypesForEquality, DLDL, DWORD)
LWM(CompileMethod, DWORD, Agnostic_CompileMethod)
LWM(ConstructStringLiteral, DLD, DLD)
LWM(ConvertPInvokeCalliToCall, DLD, DWORDLONG)
LWM(EmbedClassHandle, DWORDLONG, DLDL)
LWM(EmbedFieldHandle, DWORDLONG, DLDL)
LWM(EmbedGenericHandle, Agnostic_EmbedGenericHandle, Agnostic_CORINFO_GENERICHANDLE_RESULT)
LWM(EmbedMethodHandle, DWORDLONG, DLDL)
LWM(EmbedModuleHandle, DWORDLONG, DLDL)
LWM(GetThreadLocalFieldInfo, DLD, DWORD)
LWM(GetThreadLocalStaticBlocksInfo, DWORD, Agnostic_GetThreadLocalStaticBlocksInfo)
DENSELWM(EmptyStringLiteral, DLD)
DENSELWM(ErrorList, DWORD)
LWM(FindCallSiteSig, Agnostic_FindCallSiteSig, Agnostic_CORINFO_SIG_INFO)
LWM(FindSig, Agnostic_FindSig, Agnostic_CORINFO_SIG_INFO)
LWM(GetAddressOfPInvokeTarget, DWORDLONG, DLD)
LWM(GetAddrOfCaptureThreadGlobal, DWORD, DLDL)
LWM(GetArgClass, Agnostic_GetArgClass_Key, Agnostic_GetArgClass_Value)
LWM(GetArgNext, DWORDLONG, DWORDLONG)
LWM(GetArgType, Agnostic_GetArgType_Key, Agnostic_GetArgType_Value)
LWM(GetExactClasses, DLD, DLD)
LWM(GetArrayInitializationData, DLD, DWORDLONG)
LWM(GetArrayRank, DWORDLONG, DWORD)
LWM(GetArrayIntrinsicID, DWORDLONG, DWORD)
LWM(GetBoundaries, DWORDLONG, Agnostic_GetBoundaries)
LWM(GetBoxHelper, DWORDLONG, DWORD)
LWM(GetBuiltinClass, DWORD, DWORDLONG)
LWM(GetCallInfo, Agnostic_GetCallInfo, Agnostic_CORINFO_CALL_INFO)
LWM(GetCastingHelper, Agnostic_GetCastingHelper, DWORD)
LWM(GetChildType, DWORDLONG, DLD)
LWM(GetClassAlignmentRequirement, DLD, DWORD)
LWM(GetClassAttribs, DWORDLONG, DWORD)
LWM(GetClassDomainID, DWORDLONG, DLD)
LWM(GetClassGClayout, DWORDLONG, Agnostic_GetClassGClayout)
LWM(GetClassModuleIdForStatics, DWORDLONG, Agnostic_GetClassModuleIdForStatics)
LWM(GetIsClassInitedFlagAddress, DWORDLONG, Agnostic_GetIsClassInitedFlagAddress)
LWM(GetStaticBaseAddress, DLD, Agnostic_GetStaticBaseAddress)
LWM(GetClassNameFromMetadata, DLD, DD)
LWM(GetTypeInstantiationArgument, DLD, DWORDLONG)
LWM(GetClassNumInstanceFields, DWORDLONG, DWORD)
LWM(GetClassSize, DWORDLONG, DWORD)
LWM(GetHeapClassSize, DWORDLONG, DWORD)
LWM(CanAllocateOnStack, DWORDLONG, DWORD)
LWM(GetCookieForPInvokeCalliSig, GetCookieForPInvokeCalliSigValue, DLDL)
LWM(GetDefaultComparerClass, DWORDLONG, DWORDLONG)
LWM(GetDefaultEqualityComparerClass, DWORDLONG, DWORDLONG)
LWM(GetDelegateCtor, Agnostic_GetDelegateCtorIn, Agnostic_GetDelegateCtorOut)
LWM(GetEEInfo, DWORD, Agnostic_CORINFO_EE_INFO)
LWM(GetEHinfo, DLD, Agnostic_CORINFO_EH_CLAUSE)
LWM(GetStaticFieldContent, DLDDD, DD)
LWM(GetObjectContent, DLDD, DD)
LWM(GetStaticFieldCurrentClass, DLD, Agnostic_GetStaticFieldCurrentClass)
LWM(GetFieldClass, DWORDLONG, DWORDLONG)
LWM(GetFieldInClass, DLD, DWORDLONG)
LWM(GetFieldInfo, Agnostic_GetFieldInfo, Agnostic_CORINFO_FIELD_INFO)
LWM(GetFieldOffset, DWORDLONG, DWORD)
LWM(GetFieldThreadLocalStoreID, DWORDLONG, DLD)
LWM(GetFieldType, DLDL, DLD)
LWM(GetFunctionEntryPoint, DLD, DLD)
LWM(GetFunctionFixedEntryPoint, DWORDLONG, Agnostic_CORINFO_CONST_LOOKUP)
LWM(GetGSCookie, DWORD, DLDL)
LWM(GetHelperFtn, DWORD, DLDL)
LWM(GetHFAType, DWORDLONG, DWORD)
LWM(GetIntConfigValue, Agnostic_ConfigIntInfo, DWORD)
LWM(GetJitFlags, DWORD, DD)
LWM(GetJitTimeLogFilename, DWORD, DWORD)
LWM(GetJustMyCodeHandle, DWORDLONG, DLDL)
LWM(GetLazyStringLiteralHelper, DWORDLONG, DWORD)
LWM(GetLocationOfThisType, DWORDLONG, Agnostic_CORINFO_LOOKUP_KIND)
LWM(IsIntrinsic, DWORDLONG, DWORD)
LWM(GetMethodAttribs, DWORDLONG, DWORD)
LWM(GetClassModule, DWORDLONG, DWORDLONG)
LWM(GetModuleAssembly, DWORDLONG, DWORDLONG)
LWM(GetAssemblyName, DWORDLONG, DWORD)
LWM(GetMethodClass, DWORDLONG, DWORDLONG)
LWM(GetMethodModule, DWORDLONG, DWORDLONG)
LWM(GetMethodDefFromMethod, DWORDLONG, DWORD)
LWM(GetMethodHash, DWORDLONG, DWORD)
LWM(GetMethodInfo, DWORDLONG, Agnostic_GetMethodInfo)
LWM(GetMethodNameFromMetadata, Agnostic_CORINFO_METHODNAME_TOKENin, Agnostic_CORINFO_METHODNAME_TOKENout)
LWM(GetMethodSig, DLDL, Agnostic_CORINFO_SIG_INFO)
LWM(GetMethodSync, DWORDLONG, DLDL)
LWM(GetMethodVTableOffset, DWORDLONG, DDD)
LWM(GetNewArrHelper, DWORDLONG, DWORD)
LWM(GetNewHelper, Agnostic_GetNewHelper, DD)
LWM(GetOSRInfo, DWORD, Agnostic_GetOSRInfo)
LWM(GetParentType, DWORDLONG, DWORDLONG)
LWM(GetProfilingHandle, DWORD, Agnostic_GetProfilingHandle)
LWM(GetReadyToRunHelper, GetReadyToRunHelper_TOKENin, GetReadyToRunHelper_TOKENout)
LWM(GetReadyToRunDelegateCtorHelper, GetReadyToRunDelegateCtorHelper_TOKENIn, Agnostic_CORINFO_LOOKUP)
LWM(GetRelocTypeHint, DWORDLONG, DWORD)
LWM(GetExpectedTargetArchitecture, DWORD, DWORD)
LWM(GetSharedCCtorHelper, DWORDLONG, DWORD)
LWM(GetStringConfigValue, DWORD, DWORD)
LWM(GetSystemVAmd64PassStructInRegisterDescriptor, DWORDLONG, Agnostic_GetSystemVAmd64PassStructInRegisterDescriptor)
LWM(GetLoongArch64PassStructInRegisterFlags, DWORDLONG, DWORD)
LWM(GetRISCV64PassStructInRegisterFlags, DWORDLONG, DWORD)
LWM(GetTailCallHelpers, Agnostic_GetTailCallHelpers, Agnostic_CORINFO_TAILCALL_HELPERS)
LWM(UpdateEntryPointForTailCall, Agnostic_CORINFO_CONST_LOOKUP, Agnostic_CORINFO_CONST_LOOKUP)
LWM(GetThreadTLSIndex, DWORD, DLD)
LWM(GetTokenTypeAsHandle, GetTokenTypeAsHandleValue, DWORDLONG)
LWM(GetTypeForBox, DWORDLONG, DWORDLONG)
LWM(GetTypeForPrimitiveValueClass, DWORDLONG, DWORD)
LWM(GetTypeForPrimitiveNumericClass, DWORDLONG, DWORD)
LWM(GetUnboxedEntry, DWORDLONG, DLD);
LWM(GetUnBoxHelper, DWORDLONG, DWORD)
LWM(GetRuntimeTypePointer, DWORDLONG, DWORDLONG)
LWM(IsObjectImmutable, DWORDLONG, DWORD)
LWM(GetStringChar, DLD, DD)
LWM(GetObjectType, DWORDLONG, DWORDLONG)
LWM(GetVarArgsHandle, GetVarArgsHandleValue, DLDL)
LWM(GetVars, DWORDLONG, Agnostic_GetVars)
LWM(InitClass, Agnostic_InitClass, DWORD)
LWM(IsDelegateCreationAllowed, DLDL, DWORD)
LWM(IsFieldStatic, DWORDLONG, DWORD)
LWM(GetArrayOrStringLength, DWORDLONG, DWORD)
LWM(ExpandRawHandleIntrinsic, Agnostic_CORINFO_RESOLVED_TOKENin, Agnostic_CORINFO_GENERICHANDLE_RESULT)
LWM(IsIntrinsicType, DWORDLONG, DWORD)
LWM(IsSDArray, DWORDLONG, DWORD)
LWM(GetStringLiteral, DLDDD, DD)
LWM(PrintObjectDescription, DWORDLONG, Agnostic_PrintResult)
LWM(PrintClassName, DWORDLONG, Agnostic_PrintResult)
LWM(PrintFieldName, DWORDLONG, Agnostic_PrintResult)
LWM(PrintMethodName, DWORDLONG, Agnostic_PrintResult)
LWM(IsValueClass, DWORDLONG, DWORD)
LWM(IsMoreSpecificType, DLDL, DWORD)
LWM(IsEnum, DWORDLONG, DLD)
LWM(PInvokeMarshalingRequired, MethodOrSigInfoValue, DWORD)
LWM(ResolveToken, Agnostic_CORINFO_RESOLVED_TOKENin, ResolveTokenValue)
LWM(ResolveVirtualMethod, Agnostic_ResolveVirtualMethodKey, Agnostic_ResolveVirtualMethodResult)
LWM(SatisfiesMethodConstraints, DLDL, DWORD)
LWM(GetUnmanagedCallConv, MethodOrSigInfoValue, DD)
LWM(DoesFieldBelongToClass, DLDL, DWORD)
DENSELWM(SigInstHandleMap, DWORDLONG)

#undef LWM
#undef DENSELWM
