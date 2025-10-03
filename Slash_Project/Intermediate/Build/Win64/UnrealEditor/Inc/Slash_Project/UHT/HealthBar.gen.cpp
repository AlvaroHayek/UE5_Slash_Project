// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slash_Project/Public/HUD/HealthBar.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthBar() {}

// Begin Cross Module References
SLASH_PROJECT_API UClass* Z_Construct_UClass_UHealthBar();
SLASH_PROJECT_API UClass* Z_Construct_UClass_UHealthBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Slash_Project();
// End Cross Module References

// Begin Class UHealthBar
void UHealthBar::StaticRegisterNativesUHealthBar()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealthBar);
UClass* Z_Construct_UClass_UHealthBar_NoRegister()
{
	return UHealthBar::StaticClass();
}
struct Z_Construct_UClass_UHealthBar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "HUD/HealthBar.h" },
		{ "ModuleRelativePath", "Public/HUD/HealthBar.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/HealthBar.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthBar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHealthBar_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHealthBar, HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealthBar_MetaData), NewProp_HealthBar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthBar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthBar_Statics::NewProp_HealthBar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHealthBar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Slash_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthBar_Statics::ClassParams = {
	&UHealthBar::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHealthBar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBar_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBar_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealthBar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHealthBar()
{
	if (!Z_Registration_Info_UClass_UHealthBar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthBar.OuterSingleton, Z_Construct_UClass_UHealthBar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHealthBar.OuterSingleton;
}
template<> SLASH_PROJECT_API UClass* StaticClass<UHealthBar>()
{
	return UHealthBar::StaticClass();
}
UHealthBar::UHealthBar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthBar);
UHealthBar::~UHealthBar() {}
// End Class UHealthBar

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_HUD_HealthBar_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHealthBar, UHealthBar::StaticClass, TEXT("UHealthBar"), &Z_Registration_Info_UClass_UHealthBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthBar), 689833572U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_HUD_HealthBar_h_2568464357(TEXT("/Script/Slash_Project"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_HUD_HealthBar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_HUD_HealthBar_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
