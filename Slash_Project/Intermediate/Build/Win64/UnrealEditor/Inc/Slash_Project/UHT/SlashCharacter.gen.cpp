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
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomComponent_NoRegister();
SLASH_PROJECT_API UClass* Z_Construct_UClass_AItem_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
		{ "Category", "SlashCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/SlashCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewCamera_MetaData[] = {
		{ "Category", "SlashCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/SlashCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hair_MetaData[] = {
		{ "Category", "Hair" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/SlashCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Eyebrows_MetaData[] = {
		{ "Category", "Hair" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/SlashCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingItem_MetaData[] = {
		{ "Category", "SlashCharacter" },
		{ "ModuleRelativePath", "Public/Characters/SlashCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[] = {
		{ "Category", "Montages" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09*  Animation montages\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Characters/SlashCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*  Animation montages" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Hair;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Eyebrows;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASlashCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlashCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlashCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraBoom_MetaData), NewProp_CameraBoom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlashCharacter_Statics::NewProp_ViewCamera = { "ViewCamera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlashCharacter, ViewCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewCamera_MetaData), NewProp_ViewCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlashCharacter_Statics::NewProp_Hair = { "Hair", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlashCharacter, Hair), Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hair_MetaData), NewProp_Hair_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlashCharacter_Statics::NewProp_Eyebrows = { "Eyebrows", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlashCharacter, Eyebrows), Z_Construct_UClass_UGroomComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Eyebrows_MetaData), NewProp_Eyebrows_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlashCharacter_Statics::NewProp_OverlappingItem = { "OverlappingItem", nullptr, (EPropertyFlags)0x0040000000020801, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlashCharacter, OverlappingItem), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappingItem_MetaData), NewProp_OverlappingItem_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlashCharacter_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlashCharacter, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackMontage_MetaData), NewProp_AttackMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASlashCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlashCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlashCharacter_Statics::NewProp_ViewCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlashCharacter_Statics::NewProp_Hair,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlashCharacter_Statics::NewProp_Eyebrows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlashCharacter_Statics::NewProp_OverlappingItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlashCharacter_Statics::NewProp_AttackMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASlashCharacter_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_ASlashCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASlashCharacter_Statics::PropPointers),
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
		{ Z_Construct_UClass_ASlashCharacter, ASlashCharacter::StaticClass, TEXT("ASlashCharacter"), &Z_Registration_Info_UClass_ASlashCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASlashCharacter), 2217607331U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_SlashCharacter_h_1842651387(TEXT("/Script/Slash_Project"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_SlashCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_SlashCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
