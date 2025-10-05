// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slash_Project/Public/HUD/SlashHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlashHUD() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
SLASH_PROJECT_API UClass* Z_Construct_UClass_ASlashHUD();
SLASH_PROJECT_API UClass* Z_Construct_UClass_ASlashHUD_NoRegister();
SLASH_PROJECT_API UClass* Z_Construct_UClass_USlashOverlay_NoRegister();
UPackage* Z_Construct_UPackage__Script_Slash_Project();
// End Cross Module References

// Begin Class ASlashHUD
void ASlashHUD::StaticRegisterNativesASlashHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASlashHUD);
UClass* Z_Construct_UClass_ASlashHUD_NoRegister()
{
	return ASlashHUD::StaticClass();
}
struct Z_Construct_UClass_ASlashHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/SlashHUD.h" },
		{ "ModuleRelativePath", "Public/HUD/SlashHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlashOverlayClass_MetaData[] = {
		{ "Category", "Slash" },
		{ "ModuleRelativePath", "Public/HUD/SlashHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlashOverlay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/SlashHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SlashOverlayClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlashOverlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASlashHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASlashHUD_Statics::NewProp_SlashOverlayClass = { "SlashOverlayClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlashHUD, SlashOverlayClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USlashOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlashOverlayClass_MetaData), NewProp_SlashOverlayClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlashHUD_Statics::NewProp_SlashOverlay = { "SlashOverlay", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlashHUD, SlashOverlay), Z_Construct_UClass_USlashOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlashOverlay_MetaData), NewProp_SlashOverlay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASlashHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlashHUD_Statics::NewProp_SlashOverlayClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlashHUD_Statics::NewProp_SlashOverlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASlashHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASlashHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_Slash_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASlashHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASlashHUD_Statics::ClassParams = {
	&ASlashHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASlashHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASlashHUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASlashHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_ASlashHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASlashHUD()
{
	if (!Z_Registration_Info_UClass_ASlashHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASlashHUD.OuterSingleton, Z_Construct_UClass_ASlashHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASlashHUD.OuterSingleton;
}
template<> SLASH_PROJECT_API UClass* StaticClass<ASlashHUD>()
{
	return ASlashHUD::StaticClass();
}
ASlashHUD::ASlashHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASlashHUD);
ASlashHUD::~ASlashHUD() {}
// End Class ASlashHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_HUD_SlashHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASlashHUD, ASlashHUD::StaticClass, TEXT("ASlashHUD"), &Z_Registration_Info_UClass_ASlashHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASlashHUD), 1264834529U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_HUD_SlashHUD_h_2308980848(TEXT("/Script/Slash_Project"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_HUD_SlashHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_HUD_SlashHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
