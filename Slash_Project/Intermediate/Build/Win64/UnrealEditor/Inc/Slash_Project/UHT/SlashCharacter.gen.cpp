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
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
HAIRSTRANDSCORE_API UClass* Z_Construct_UClass_UGroomComponent_NoRegister();
SLASH_PROJECT_API UClass* Z_Construct_UClass_ABaseCharacter();
SLASH_PROJECT_API UClass* Z_Construct_UClass_AItem_NoRegister();
SLASH_PROJECT_API UClass* Z_Construct_UClass_ASlashCharacter();
SLASH_PROJECT_API UClass* Z_Construct_UClass_ASlashCharacter_NoRegister();
SLASH_PROJECT_API UClass* Z_Construct_UClass_UPickupInterface_NoRegister();
SLASH_PROJECT_API UClass* Z_Construct_UClass_USlashOverlay_NoRegister();
SLASH_PROJECT_API UEnum* Z_Construct_UEnum_Slash_Project_EActionState();
UPackage* Z_Construct_UPackage__Script_Slash_Project();
// End Cross Module References

// Begin Class ASlashCharacter Function AttachWeaponToBack
struct Z_Construct_UFunction_ASlashCharacter_AttachWeaponToBack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/SlashCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASlashCharacter_AttachWeaponToBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASlashCharacter, nullptr, "AttachWeaponToBack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASlashCharacter_AttachWeaponToBack_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASlashCharacter_AttachWeaponToBack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASlashCharacter_AttachWeaponToBack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASlashCharacter_AttachWeaponToBack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASlashCharacter::execAttachWeaponToBack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttachWeaponToBack();
	P_NATIVE_END;
}
// End Class ASlashCharacter Function AttachWeaponToBack

// Begin Class ASlashCharacter Function AttachWeaponToHand
struct Z_Construct_UFunction_ASlashCharacter_AttachWeaponToHand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/SlashCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASlashCharacter_AttachWeaponToHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASlashCharacter, nullptr, "AttachWeaponToHand", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASlashCharacter_AttachWeaponToHand_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASlashCharacter_AttachWeaponToHand_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASlashCharacter_AttachWeaponToHand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASlashCharacter_AttachWeaponToHand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASlashCharacter::execAttachWeaponToHand)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AttachWeaponToHand();
	P_NATIVE_END;
}
// End Class ASlashCharacter Function AttachWeaponToHand

// Begin Class ASlashCharacter Function FinishEquipping
struct Z_Construct_UFunction_ASlashCharacter_FinishEquipping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/SlashCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASlashCharacter_FinishEquipping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASlashCharacter, nullptr, "FinishEquipping", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASlashCharacter_FinishEquipping_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASlashCharacter_FinishEquipping_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASlashCharacter_FinishEquipping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASlashCharacter_FinishEquipping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASlashCharacter::execFinishEquipping)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishEquipping();
	P_NATIVE_END;
}
// End Class ASlashCharacter Function FinishEquipping

// Begin Class ASlashCharacter Function HitReactEnd
struct Z_Construct_UFunction_ASlashCharacter_HitReactEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Characters/SlashCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASlashCharacter_HitReactEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASlashCharacter, nullptr, "HitReactEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASlashCharacter_HitReactEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASlashCharacter_HitReactEnd_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASlashCharacter_HitReactEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASlashCharacter_HitReactEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASlashCharacter::execHitReactEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HitReactEnd();
	P_NATIVE_END;
}
// End Class ASlashCharacter Function HitReactEnd

// Begin Class ASlashCharacter
void ASlashCharacter::StaticRegisterNativesASlashCharacter()
{
	UClass* Class = ASlashCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AttachWeaponToBack", &ASlashCharacter::execAttachWeaponToBack },
		{ "AttachWeaponToHand", &ASlashCharacter::execAttachWeaponToHand },
		{ "FinishEquipping", &ASlashCharacter::execFinishEquipping },
		{ "HitReactEnd", &ASlashCharacter::execHitReactEnd },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Character Components*/" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/SlashCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Character Components" },
#endif
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipMontage_MetaData[] = {
		{ "Category", "Montages" },
		{ "ModuleRelativePath", "Public/Characters/SlashCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SlashCharacter" },
		{ "ModuleRelativePath", "Public/Characters/SlashCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlashOverlay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Characters/SlashCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Hair;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Eyebrows;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingItem;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipMontage;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ActionState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SlashOverlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASlashCharacter_AttachWeaponToBack, "AttachWeaponToBack" }, // 3490989052
		{ &Z_Construct_UFunction_ASlashCharacter_AttachWeaponToHand, "AttachWeaponToHand" }, // 2796122144
		{ &Z_Construct_UFunction_ASlashCharacter_FinishEquipping, "FinishEquipping" }, // 1291965759
		{ &Z_Construct_UFunction_ASlashCharacter_HitReactEnd, "HitReactEnd" }, // 105052294
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlashCharacter_Statics::NewProp_EquipMontage = { "EquipMontage", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlashCharacter, EquipMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipMontage_MetaData), NewProp_EquipMontage_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASlashCharacter_Statics::NewProp_ActionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASlashCharacter_Statics::NewProp_ActionState = { "ActionState", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlashCharacter, ActionState), Z_Construct_UEnum_Slash_Project_EActionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionState_MetaData), NewProp_ActionState_MetaData) }; // 1588003733
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASlashCharacter_Statics::NewProp_SlashOverlay = { "SlashOverlay", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASlashCharacter, SlashOverlay), Z_Construct_UClass_USlashOverlay_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlashOverlay_MetaData), NewProp_SlashOverlay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASlashCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlashCharacter_Statics::NewProp_CameraBoom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlashCharacter_Statics::NewProp_ViewCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlashCharacter_Statics::NewProp_Hair,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlashCharacter_Statics::NewProp_Eyebrows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlashCharacter_Statics::NewProp_OverlappingItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlashCharacter_Statics::NewProp_EquipMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlashCharacter_Statics::NewProp_ActionState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlashCharacter_Statics::NewProp_ActionState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASlashCharacter_Statics::NewProp_SlashOverlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASlashCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASlashCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Slash_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASlashCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ASlashCharacter_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UPickupInterface_NoRegister, (int32)VTABLE_OFFSET(ASlashCharacter, IPickupInterface), false },  // 401179013
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASlashCharacter_Statics::ClassParams = {
	&ASlashCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ASlashCharacter_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASlashCharacter_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
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
		{ Z_Construct_UClass_ASlashCharacter, ASlashCharacter::StaticClass, TEXT("ASlashCharacter"), &Z_Registration_Info_UClass_ASlashCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASlashCharacter), 686364715U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_SlashCharacter_h_1914834339(TEXT("/Script/Slash_Project"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_SlashCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_SlashCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
