// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slash_Project/Public/Interfaces/PickupInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
SLASH_PROJECT_API UClass* Z_Construct_UClass_UPickupInterface();
SLASH_PROJECT_API UClass* Z_Construct_UClass_UPickupInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Slash_Project();
// End Cross Module References

// Begin Interface UPickupInterface
void UPickupInterface::StaticRegisterNativesUPickupInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPickupInterface);
UClass* Z_Construct_UClass_UPickupInterface_NoRegister()
{
	return UPickupInterface::StaticClass();
}
struct Z_Construct_UClass_UPickupInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/PickupInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPickupInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UPickupInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Slash_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPickupInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPickupInterface_Statics::ClassParams = {
	&UPickupInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPickupInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UPickupInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPickupInterface()
{
	if (!Z_Registration_Info_UClass_UPickupInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPickupInterface.OuterSingleton, Z_Construct_UClass_UPickupInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPickupInterface.OuterSingleton;
}
template<> SLASH_PROJECT_API UClass* StaticClass<UPickupInterface>()
{
	return UPickupInterface::StaticClass();
}
UPickupInterface::UPickupInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPickupInterface);
UPickupInterface::~UPickupInterface() {}
// End Interface UPickupInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Interfaces_PickupInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPickupInterface, UPickupInterface::StaticClass, TEXT("UPickupInterface"), &Z_Registration_Info_UClass_UPickupInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPickupInterface), 401179013U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Interfaces_PickupInterface_h_3574993741(TEXT("/Script/Slash_Project"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Interfaces_PickupInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Interfaces_PickupInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
