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
SLASH_PROJECT_API UEnum* Z_Construct_UEnum_Slash_Project_EDeathPose();
SLASH_PROJECT_API UEnum* Z_Construct_UEnum_Slash_Project_EEnemyState();
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
		{ "EAS_EquippingWeapon.DisplayName", "Equipping Weapon" },
		{ "EAS_EquippingWeapon.Name", "EActionState::EAS_EquippingWeapon" },
		{ "EAS_HitReaction.DisplayName", "HitReaction" },
		{ "EAS_HitReaction.Name", "EActionState::EAS_HitReaction" },
		{ "EAS_Unoccupied.DisplayName", "Unoccupied" },
		{ "EAS_Unoccupied.Name", "EActionState::EAS_Unoccupied" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EActionState::EAS_Unoccupied", (int64)EActionState::EAS_Unoccupied },
		{ "EActionState::EAS_HitReaction", (int64)EActionState::EAS_HitReaction },
		{ "EActionState::EAS_Attacking", (int64)EActionState::EAS_Attacking },
		{ "EActionState::EAS_EquippingWeapon", (int64)EActionState::EAS_EquippingWeapon },
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

// Begin Enum EDeathPose
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDeathPose;
static UEnum* EDeathPose_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDeathPose.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDeathPose.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Slash_Project_EDeathPose, (UObject*)Z_Construct_UPackage__Script_Slash_Project(), TEXT("EDeathPose"));
	}
	return Z_Registration_Info_UEnum_EDeathPose.OuterSingleton;
}
template<> SLASH_PROJECT_API UEnum* StaticEnum<EDeathPose>()
{
	return EDeathPose_StaticEnum();
}
struct Z_Construct_UEnum_Slash_Project_EDeathPose_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EDP_Death1.DisplayName", "Death1" },
		{ "EDP_Death1.Name", "EDP_Death1" },
		{ "EDP_Death2.DisplayName", "Death2" },
		{ "EDP_Death2.Name", "EDP_Death2" },
		{ "EDP_Death3.DisplayName", "Death3" },
		{ "EDP_Death3.Name", "EDP_Death3" },
		{ "EDP_Death4.DisplayName", "Death4" },
		{ "EDP_Death4.Name", "EDP_Death4" },
		{ "EDP_Death5.DisplayName", "Death5" },
		{ "EDP_Death5.Name", "EDP_Death5" },
		{ "EDP_Death6.DisplayName", "Death6" },
		{ "EDP_Death6.Name", "EDP_Death6" },
		{ "EDP_MAX.DisplayName", "DefaultMAX" },
		{ "EDP_MAX.Name", "EDP_MAX" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDP_Death1", (int64)EDP_Death1 },
		{ "EDP_Death2", (int64)EDP_Death2 },
		{ "EDP_Death3", (int64)EDP_Death3 },
		{ "EDP_Death4", (int64)EDP_Death4 },
		{ "EDP_Death5", (int64)EDP_Death5 },
		{ "EDP_Death6", (int64)EDP_Death6 },
		{ "EDP_MAX", (int64)EDP_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Slash_Project_EDeathPose_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Slash_Project,
	nullptr,
	"EDeathPose",
	"EDeathPose",
	Z_Construct_UEnum_Slash_Project_EDeathPose_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Slash_Project_EDeathPose_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Slash_Project_EDeathPose_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Slash_Project_EDeathPose_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Slash_Project_EDeathPose()
{
	if (!Z_Registration_Info_UEnum_EDeathPose.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDeathPose.InnerSingleton, Z_Construct_UEnum_Slash_Project_EDeathPose_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDeathPose.InnerSingleton;
}
// End Enum EDeathPose

// Begin Enum EEnemyState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnemyState;
static UEnum* EEnemyState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnemyState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnemyState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Slash_Project_EEnemyState, (UObject*)Z_Construct_UPackage__Script_Slash_Project(), TEXT("EEnemyState"));
	}
	return Z_Registration_Info_UEnum_EEnemyState.OuterSingleton;
}
template<> SLASH_PROJECT_API UEnum* StaticEnum<EEnemyState>()
{
	return EEnemyState_StaticEnum();
}
struct Z_Construct_UEnum_Slash_Project_EEnemyState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EES_Attacking.DisplayName", "Attacking" },
		{ "EES_Attacking.Name", "EEnemyState::EES_Attacking" },
		{ "EES_Chasing.DisplayName", "Chasing" },
		{ "EES_Chasing.Name", "EEnemyState::EES_Chasing" },
		{ "EES_Dead.DisplayName", "Dead" },
		{ "EES_Dead.Name", "EEnemyState::EES_Dead" },
		{ "EES_Engaged.DisplayName", "Engaged" },
		{ "EES_Engaged.Name", "EEnemyState::EES_Engaged" },
		{ "EES_NoState.DisplayName", "NoState" },
		{ "EES_NoState.Name", "EEnemyState::EES_NoState" },
		{ "EES_Patrolling.DisplayName", "Patrolling" },
		{ "EES_Patrolling.Name", "EEnemyState::EES_Patrolling" },
		{ "ModuleRelativePath", "Public/Characters/CharacterTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnemyState::EES_NoState", (int64)EEnemyState::EES_NoState },
		{ "EEnemyState::EES_Dead", (int64)EEnemyState::EES_Dead },
		{ "EEnemyState::EES_Patrolling", (int64)EEnemyState::EES_Patrolling },
		{ "EEnemyState::EES_Chasing", (int64)EEnemyState::EES_Chasing },
		{ "EEnemyState::EES_Attacking", (int64)EEnemyState::EES_Attacking },
		{ "EEnemyState::EES_Engaged", (int64)EEnemyState::EES_Engaged },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Slash_Project_EEnemyState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Slash_Project,
	nullptr,
	"EEnemyState",
	"EEnemyState",
	Z_Construct_UEnum_Slash_Project_EEnemyState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Slash_Project_EEnemyState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Slash_Project_EEnemyState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Slash_Project_EEnemyState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Slash_Project_EEnemyState()
{
	if (!Z_Registration_Info_UEnum_EEnemyState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnemyState.InnerSingleton, Z_Construct_UEnum_Slash_Project_EEnemyState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnemyState.InnerSingleton;
}
// End Enum EEnemyState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_CharacterTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECharacterState_StaticEnum, TEXT("ECharacterState"), &Z_Registration_Info_UEnum_ECharacterState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1933495170U) },
		{ EActionState_StaticEnum, TEXT("EActionState"), &Z_Registration_Info_UEnum_EActionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3298792575U) },
		{ EDeathPose_StaticEnum, TEXT("EDeathPose"), &Z_Registration_Info_UEnum_EDeathPose, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1086421595U) },
		{ EEnemyState_StaticEnum, TEXT("EEnemyState"), &Z_Registration_Info_UEnum_EEnemyState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 78447696U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_CharacterTypes_h_4143915845(TEXT("/Script/Slash_Project"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_CharacterTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_CharacterTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
