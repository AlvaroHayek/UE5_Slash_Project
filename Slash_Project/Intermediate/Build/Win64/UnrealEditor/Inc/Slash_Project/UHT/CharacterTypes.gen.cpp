// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slash_Project/Public/Characters/CharacterTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterTypes() {}

// Begin Cross Module References
SLASH_PROJECT_API UEnum* Z_Construct_UEnum_Slash_Project_EActionState();
SLASH_PROJECT_API UEnum* Z_Construct_UEnum_Slash_Project_ECharacterState();
UPackage* Z_Construct_UPackage__Script_Slash_Project();
// End Cross Module References

// Begin Enum ECharacterState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterState;
static UEnum* ECharacterState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECharacterState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECharacterState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Slash_Project_ECharacterState, (UObject*)Z_Construct_UPackage__Script_Slash_Project(), TEXT("ECharacterState"));
	}
	return Z_Registration_Info_UEnum_ECharacterState.OuterSingleton;
}
template<> SLASH_PROJECT_API UEnum* StaticEnum<ECharacterState>()
{
	return ECharacterState_StaticEnum();
}
struct Z_Construct_UEnum_Slash_Project_ECharacterState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ECS_EquippedOneHandedWeapon.DisplayName", "Equipped One-Handed Weapon" },
		{ "ECS_EquippedOneHandedWeapon.Name", "ECharacterState::ECS_EquippedOneHandedWeapon" },
		{ "ECS_EquippedTwoHandedWeapon.DisplayName", "Equipped Two-Handed Weapon" },
		{ "ECS_EquippedTwoHandedWeapon.Name", "ECharacterState::ECS_EquippedTwoHandedWeapon" },
		{ "ECS_Unequipped.DisplayName", "Unequipped" },
		{ "ECS_Unequipped.Name", "ECharacterState::ECS_Unequipped" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECharacterState::ECS_Unequipped", (int64)ECharacterState::ECS_Unequipped },
		{ "ECharacterState::ECS_EquippedOneHandedWeapon", (int64)ECharacterState::ECS_EquippedOneHandedWeapon },
		{ "ECharacterState::ECS_EquippedTwoHandedWeapon", (int64)ECharacterState::ECS_EquippedTwoHandedWeapon },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Slash_Project_ECharacterState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Slash_Project,
	nullptr,
	"ECharacterState",
	"ECharacterState",
	Z_Construct_UEnum_Slash_Project_ECharacterState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Slash_Project_ECharacterState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Slash_Project_ECharacterState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Slash_Project_ECharacterState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Slash_Project_ECharacterState()
{
	if (!Z_Registration_Info_UEnum_ECharacterState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterState.InnerSingleton, Z_Construct_UEnum_Slash_Project_ECharacterState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECharacterState.InnerSingleton;
}
// End Enum ECharacterState

// Begin Enum EActionState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EActionState;
static UEnum* EActionState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EActionState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EActionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Slash_Project_EActionState, (UObject*)Z_Construct_UPackage__Script_Slash_Project(), TEXT("EActionState"));
	}
	return Z_Registration_Info_UEnum_EActionState.OuterSingleton;
}
template<> SLASH_PROJECT_API UEnum* StaticEnum<EActionState>()
{
	return EActionState_StaticEnum();
}
struct Z_Construct_UEnum_Slash_Project_EActionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EAS_Attacking.DisplayName", "Attacking" },
		{ "EAS_Attacking.Name", "EActionState::EAS_Attacking" },
		{ "EAS_Unoccupied.DisplayName", "Unoccupied" },
		{ "EAS_Unoccupied.Name", "EActionState::EAS_Unoccupied" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EActionState::EAS_Unoccupied", (int64)EActionState::EAS_Unoccupied },
		{ "EActionState::EAS_Attacking", (int64)EActionState::EAS_Attacking },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Slash_Project_EActionState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Slash_Project,
	nullptr,
	"EActionState",
	"EActionState",
	Z_Construct_UEnum_Slash_Project_EActionState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Slash_Project_EActionState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Slash_Project_EActionState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Slash_Project_EActionState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Slash_Project_EActionState()
{
	if (!Z_Registration_Info_UEnum_EActionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EActionState.InnerSingleton, Z_Construct_UEnum_Slash_Project_EActionState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EActionState.InnerSingleton;
}
// End Enum EActionState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_CharacterTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECharacterState_StaticEnum, TEXT("ECharacterState"), &Z_Registration_Info_UEnum_ECharacterState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1933495170U) },
		{ EActionState_StaticEnum, TEXT("EActionState"), &Z_Registration_Info_UEnum_EActionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4155281062U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_CharacterTypes_h_2756232219(TEXT("/Script/Slash_Project"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_CharacterTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_CharacterTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
