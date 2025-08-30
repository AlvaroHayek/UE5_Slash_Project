// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slash_Project/Public/Characters/SlashAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlashAnimInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
SLASH_PROJECT_API UClass* Z_Construct_UClass_USlashAnimInstance();
SLASH_PROJECT_API UClass* Z_Construct_UClass_USlashAnimInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Slash_Project();
// End Cross Module References

// Begin Class USlashAnimInstance
void USlashAnimInstance::StaticRegisterNativesUSlashAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlashAnimInstance);
UClass* Z_Construct_UClass_USlashAnimInstance_NoRegister()
{
	return USlashAnimInstance::StaticClass();
}
struct Z_Construct_UClass_USlashAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Characters/SlashAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Characters/SlashAnimInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlashAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USlashAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Slash_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlashAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USlashAnimInstance_Statics::ClassParams = {
	&USlashAnimInstance::StaticClass,
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
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USlashAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_USlashAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USlashAnimInstance()
{
	if (!Z_Registration_Info_UClass_USlashAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlashAnimInstance.OuterSingleton, Z_Construct_UClass_USlashAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USlashAnimInstance.OuterSingleton;
}
template<> SLASH_PROJECT_API UClass* StaticClass<USlashAnimInstance>()
{
	return USlashAnimInstance::StaticClass();
}
USlashAnimInstance::USlashAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USlashAnimInstance);
USlashAnimInstance::~USlashAnimInstance() {}
// End Class USlashAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_SlashAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USlashAnimInstance, USlashAnimInstance::StaticClass, TEXT("USlashAnimInstance"), &Z_Registration_Info_UClass_USlashAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlashAnimInstance), 1843313823U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_SlashAnimInstance_h_2995306445(TEXT("/Script/Slash_Project"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_SlashAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_SlashAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
