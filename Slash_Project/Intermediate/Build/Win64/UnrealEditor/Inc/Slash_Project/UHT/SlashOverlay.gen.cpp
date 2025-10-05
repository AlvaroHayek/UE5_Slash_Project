// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slash_Project/Public/HUD/SlashOverlay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlashOverlay() {}

// Begin Cross Module References
SLASH_PROJECT_API UClass* Z_Construct_UClass_USlashOverlay();
SLASH_PROJECT_API UClass* Z_Construct_UClass_USlashOverlay_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Slash_Project();
// End Cross Module References

// Begin Class USlashOverlay
void USlashOverlay::StaticRegisterNativesUSlashOverlay()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlashOverlay);
UClass* Z_Construct_UClass_USlashOverlay_NoRegister()
{
	return USlashOverlay::StaticClass();
}
struct Z_Construct_UClass_USlashOverlay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/SlashOverlay.h" },
		{ "ModuleRelativePath", "Public/HUD/SlashOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/SlashOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaminaProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/SlashOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GoldText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/SlashOverlay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoulsText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/SlashOverlay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthProgressBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaminaProgressBar;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GoldText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoulsText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlashOverlay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlashOverlay_Statics::NewProp_HealthProgressBar = { "HealthProgressBar", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlashOverlay, HealthProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthProgressBar_MetaData), NewProp_HealthProgressBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlashOverlay_Statics::NewProp_StaminaProgressBar = { "StaminaProgressBar", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlashOverlay, StaminaProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaminaProgressBar_MetaData), NewProp_StaminaProgressBar_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlashOverlay_Statics::NewProp_GoldText = { "GoldText", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlashOverlay, GoldText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GoldText_MetaData), NewProp_GoldText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlashOverlay_Statics::NewProp_SoulsText = { "SoulsText", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlashOverlay, SoulsText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoulsText_MetaData), NewProp_SoulsText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlashOverlay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlashOverlay_Statics::NewProp_HealthProgressBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlashOverlay_Statics::NewProp_StaminaProgressBar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlashOverlay_Statics::NewProp_GoldText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlashOverlay_Statics::NewProp_SoulsText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlashOverlay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USlashOverlay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Slash_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlashOverlay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USlashOverlay_Statics::ClassParams = {
	&USlashOverlay::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USlashOverlay_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USlashOverlay_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USlashOverlay_Statics::Class_MetaDataParams), Z_Construct_UClass_USlashOverlay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USlashOverlay()
{
	if (!Z_Registration_Info_UClass_USlashOverlay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlashOverlay.OuterSingleton, Z_Construct_UClass_USlashOverlay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USlashOverlay.OuterSingleton;
}
template<> SLASH_PROJECT_API UClass* StaticClass<USlashOverlay>()
{
	return USlashOverlay::StaticClass();
}
USlashOverlay::USlashOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USlashOverlay);
USlashOverlay::~USlashOverlay() {}
// End Class USlashOverlay

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_HUD_SlashOverlay_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USlashOverlay, USlashOverlay::StaticClass, TEXT("USlashOverlay"), &Z_Registration_Info_UClass_USlashOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlashOverlay), 1715684387U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_HUD_SlashOverlay_h_1565224007(TEXT("/Script/Slash_Project"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_HUD_SlashOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_HUD_SlashOverlay_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
