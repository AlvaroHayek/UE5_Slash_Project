// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slash_Project/Public/HUD/HealthBarComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthBarComponent() {}

// Begin Cross Module References
SLASH_PROJECT_API UClass* Z_Construct_UClass_UHealthBarComponent();
SLASH_PROJECT_API UClass* Z_Construct_UClass_UHealthBarComponent_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
UPackage* Z_Construct_UPackage__Script_Slash_Project();
// End Cross Module References

// Begin Class UHealthBarComponent
void UHealthBarComponent::StaticRegisterNativesUHealthBarComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealthBarComponent);
UClass* Z_Construct_UClass_UHealthBarComponent_NoRegister()
{
	return UHealthBarComponent::StaticClass();
}
struct Z_Construct_UClass_UHealthBarComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "HUD/HealthBarComponent.h" },
		{ "ModuleRelativePath", "Public/HUD/HealthBarComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthBarComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHealthBarComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Slash_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBarComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthBarComponent_Statics::ClassParams = {
	&UHealthBarComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBarComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UHealthBarComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHealthBarComponent()
{
	if (!Z_Registration_Info_UClass_UHealthBarComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthBarComponent.OuterSingleton, Z_Construct_UClass_UHealthBarComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHealthBarComponent.OuterSingleton;
}
template<> SLASH_PROJECT_API UClass* StaticClass<UHealthBarComponent>()
{
	return UHealthBarComponent::StaticClass();
}
UHealthBarComponent::UHealthBarComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthBarComponent);
UHealthBarComponent::~UHealthBarComponent() {}
// End Class UHealthBarComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_HUD_HealthBarComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHealthBarComponent, UHealthBarComponent::StaticClass, TEXT("UHealthBarComponent"), &Z_Registration_Info_UClass_UHealthBarComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthBarComponent), 935536991U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_HUD_HealthBarComponent_h_2096634368(TEXT("/Script/Slash_Project"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_HUD_HealthBarComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_HUD_HealthBarComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
