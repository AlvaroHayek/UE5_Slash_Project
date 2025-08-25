// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slash_Project/Public/Characters/SlashCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlashCharacter() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
SLASH_PROJECT_API UClass* Z_Construct_UClass_ASlashCharacter();
SLASH_PROJECT_API UClass* Z_Construct_UClass_ASlashCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_Slash_Project();
// End Cross Module References

// Begin Class ASlashCharacter
void ASlashCharacter::StaticRegisterNativesASlashCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASlashCharacter);
UClass* Z_Construct_UClass_ASlashCharacter_NoRegister()
{
	return ASlashCharacter::StaticClass();
}
struct Z_Construct_UClass_ASlashCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Characters/SlashCharacter.h" },
		{ "ModuleRelativePath", "Public/Characters/SlashCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASlashCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASlashCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Slash_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASlashCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASlashCharacter_Statics::ClassParams = {
	&ASlashCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASlashCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASlashCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASlashCharacter()
{
	if (!Z_Registration_Info_UClass_ASlashCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASlashCharacter.OuterSingleton, Z_Construct_UClass_ASlashCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASlashCharacter.OuterSingleton;
}
template<> SLASH_PROJECT_API UClass* StaticClass<ASlashCharacter>()
{
	return ASlashCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASlashCharacter);
ASlashCharacter::~ASlashCharacter() {}
// End Class ASlashCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_SlashCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASlashCharacter, ASlashCharacter::StaticClass, TEXT("ASlashCharacter"), &Z_Registration_Info_UClass_ASlashCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASlashCharacter), 2373065956U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_SlashCharacter_h_3268668377(TEXT("/Script/Slash_Project"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_SlashCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_SlashCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
