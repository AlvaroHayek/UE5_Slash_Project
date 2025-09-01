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
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
SLASH_PROJECT_API UClass* Z_Construct_UClass_ASlashCharacter_NoRegister();
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlashCharacter_MetaData[] = {
		{ "Category", "SlashAnimInstance" },
		{ "ModuleRelativePath", "Public/Characters/SlashAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlashCharacterMovement_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/SlashAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Characters/SlashAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsFalling_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Characters/SlashAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlashCharacter;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlashCharacterMovement;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundSpeed;
	static void NewProp_IsFalling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFalling;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlashAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlashAnimInstance_Statics::NewProp_SlashCharacter = { "SlashCharacter", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlashAnimInstance, SlashCharacter), Z_Construct_UClass_ASlashCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlashCharacter_MetaData), NewProp_SlashCharacter_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlashAnimInstance_Statics::NewProp_SlashCharacterMovement = { "SlashCharacterMovement", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlashAnimInstance, SlashCharacterMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlashCharacterMovement_MetaData), NewProp_SlashCharacterMovement_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USlashAnimInstance_Statics::NewProp_GroundSpeed = { "GroundSpeed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlashAnimInstance, GroundSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundSpeed_MetaData), NewProp_GroundSpeed_MetaData) };
void Z_Construct_UClass_USlashAnimInstance_Statics::NewProp_IsFalling_SetBit(void* Obj)
{
	((USlashAnimInstance*)Obj)->IsFalling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USlashAnimInstance_Statics::NewProp_IsFalling = { "IsFalling", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USlashAnimInstance), &Z_Construct_UClass_USlashAnimInstance_Statics::NewProp_IsFalling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsFalling_MetaData), NewProp_IsFalling_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlashAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlashAnimInstance_Statics::NewProp_SlashCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlashAnimInstance_Statics::NewProp_SlashCharacterMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlashAnimInstance_Statics::NewProp_GroundSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlashAnimInstance_Statics::NewProp_IsFalling,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlashAnimInstance_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_USlashAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USlashAnimInstance_Statics::PropPointers),
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
		{ Z_Construct_UClass_USlashAnimInstance, USlashAnimInstance::StaticClass, TEXT("USlashAnimInstance"), &Z_Registration_Info_UClass_USlashAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlashAnimInstance), 3810471740U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_SlashAnimInstance_h_2504932240(TEXT("/Script/Slash_Project"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_SlashAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_SlashAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
