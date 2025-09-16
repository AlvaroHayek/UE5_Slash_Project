// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slash_Project/Public/Interfaces/HitInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
SLASH_PROJECT_API UClass* Z_Construct_UClass_UHitInterface();
SLASH_PROJECT_API UClass* Z_Construct_UClass_UHitInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Slash_Project();
// End Cross Module References

// Begin Interface UHitInterface Function GetHit
struct HitInterface_eventGetHit_Parms
{
	FVector ImpactPoint;
};
void IHitInterface::GetHit(FVector const& ImpactPoint)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHit instead.");
}
static FName NAME_UHitInterface_GetHit = FName(TEXT("GetHit"));
void IHitInterface::Execute_GetHit(UObject* O, FVector const& ImpactPoint)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UHitInterface::StaticClass()));
	HitInterface_eventGetHit_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UHitInterface_GetHit);
	if (Func)
	{
		Parms.ImpactPoint=ImpactPoint;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IHitInterface*)(O->GetNativeInterfaceAddress(UHitInterface::StaticClass())))
	{
		I->GetHit_Implementation(ImpactPoint);
	}
}
struct Z_Construct_UFunction_UHitInterface_GetHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/HitInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactPoint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitInterface_GetHit_Statics::NewProp_ImpactPoint = { "ImpactPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HitInterface_eventGetHit_Parms, ImpactPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactPoint_MetaData), NewProp_ImpactPoint_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHitInterface_GetHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitInterface_GetHit_Statics::NewProp_ImpactPoint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitInterface_GetHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitInterface_GetHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHitInterface, nullptr, "GetHit", nullptr, nullptr, Z_Construct_UFunction_UHitInterface_GetHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitInterface_GetHit_Statics::PropPointers), sizeof(HitInterface_eventGetHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHitInterface_GetHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHitInterface_GetHit_Statics::Function_MetaDataParams) };
static_assert(sizeof(HitInterface_eventGetHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHitInterface_GetHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHitInterface_GetHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IHitInterface::execGetHit)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ImpactPoint);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetHit_Implementation(Z_Param_Out_ImpactPoint);
	P_NATIVE_END;
}
// End Interface UHitInterface Function GetHit

// Begin Interface UHitInterface
void UHitInterface::StaticRegisterNativesUHitInterface()
{
	UClass* Class = UHitInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHit", &IHitInterface::execGetHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHitInterface);
UClass* Z_Construct_UClass_UHitInterface_NoRegister()
{
	return UHitInterface::StaticClass();
}
struct Z_Construct_UClass_UHitInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/HitInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHitInterface_GetHit, "GetHit" }, // 2257207183
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHitInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHitInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Slash_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHitInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHitInterface_Statics::ClassParams = {
	&UHitInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHitInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UHitInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHitInterface()
{
	if (!Z_Registration_Info_UClass_UHitInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHitInterface.OuterSingleton, Z_Construct_UClass_UHitInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHitInterface.OuterSingleton;
}
template<> SLASH_PROJECT_API UClass* StaticClass<UHitInterface>()
{
	return UHitInterface::StaticClass();
}
UHitInterface::UHitInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHitInterface);
UHitInterface::~UHitInterface() {}
// End Interface UHitInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Interfaces_HitInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHitInterface, UHitInterface::StaticClass, TEXT("UHitInterface"), &Z_Registration_Info_UClass_UHitInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHitInterface), 1192690033U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Interfaces_HitInterface_h_3354407729(TEXT("/Script/Slash_Project"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Interfaces_HitInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Interfaces_HitInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
