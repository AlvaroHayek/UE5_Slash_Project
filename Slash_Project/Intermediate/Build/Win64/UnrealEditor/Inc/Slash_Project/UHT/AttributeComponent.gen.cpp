// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slash_Project/Public/Components/AttributeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
SLASH_PROJECT_API UClass* Z_Construct_UClass_UAttributeComponent();
SLASH_PROJECT_API UClass* Z_Construct_UClass_UAttributeComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Slash_Project();
// End Cross Module References

// Begin Class UAttributeComponent
void UAttributeComponent::StaticRegisterNativesUAttributeComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeComponent);
UClass* Z_Construct_UClass_UAttributeComponent_NoRegister()
{
	return UAttributeComponent::StaticClass();
}
struct Z_Construct_UClass_UAttributeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/AttributeComponent.h" },
		{ "ModuleRelativePath", "Public/Components/AttributeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Actor Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Current Health\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/AttributeComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current Health" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Actor Attributes" },
		{ "ModuleRelativePath", "Public/Components/AttributeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeComponent, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAttributeComponent, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAttributeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Slash_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeComponent_Statics::ClassParams = {
	&UAttributeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAttributeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAttributeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAttributeComponent()
{
	if (!Z_Registration_Info_UClass_UAttributeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeComponent.OuterSingleton, Z_Construct_UClass_UAttributeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAttributeComponent.OuterSingleton;
}
template<> SLASH_PROJECT_API UClass* StaticClass<UAttributeComponent>()
{
	return UAttributeComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeComponent);
UAttributeComponent::~UAttributeComponent() {}
// End Class UAttributeComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Components_AttributeComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeComponent, UAttributeComponent::StaticClass, TEXT("UAttributeComponent"), &Z_Registration_Info_UClass_UAttributeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeComponent), 2553211690U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Components_AttributeComponent_h_3712805679(TEXT("/Script/Slash_Project"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Components_AttributeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Components_AttributeComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
