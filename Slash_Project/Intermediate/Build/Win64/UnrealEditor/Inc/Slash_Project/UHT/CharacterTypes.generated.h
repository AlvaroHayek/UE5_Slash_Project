// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/CharacterTypes.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLASH_PROJECT_CharacterTypes_generated_h
#error "CharacterTypes.generated.h already included, missing '#pragma once' in CharacterTypes.h"
#endif
#define SLASH_PROJECT_CharacterTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_CharacterTypes_h


#define FOREACH_ENUM_ECHARACTERSTATE(op) \
	op(ECharacterState::ECS_Unequipped) \
	op(ECharacterState::ECS_EquippedOneHandedWeapon) \
	op(ECharacterState::ECS_EquippedTwoHandedWeapon) 

enum class ECharacterState : uint8;
template<> struct TIsUEnumClass<ECharacterState> { enum { Value = true }; };
template<> SLASH_PROJECT_API UEnum* StaticEnum<ECharacterState>();

#define FOREACH_ENUM_EACTIONSTATE(op) \
	op(EActionState::EAS_Unoccupied) \
	op(EActionState::EAS_HitReaction) \
	op(EActionState::EAS_Attacking) \
	op(EActionState::EAS_EquippingWeapon) \
	op(EActionState::EAS_Dodge) \
	op(EActionState::EAS_Dead) 

enum class EActionState : uint8;
template<> struct TIsUEnumClass<EActionState> { enum { Value = true }; };
template<> SLASH_PROJECT_API UEnum* StaticEnum<EActionState>();

#define FOREACH_ENUM_EDEATHPOSE(op) \
	op(EDP_Death1) \
	op(EDP_Death2) \
	op(EDP_Death3) \
	op(EDP_Death4) \
	op(EDP_Death5) \
	op(EDP_Death6) 
#define FOREACH_ENUM_EENEMYSTATE(op) \
	op(EEnemyState::EES_NoState) \
	op(EEnemyState::EES_Dead) \
	op(EEnemyState::EES_Patrolling) \
	op(EEnemyState::EES_Chasing) \
	op(EEnemyState::EES_Attacking) \
	op(EEnemyState::EES_Engaged) 

enum class EEnemyState : uint8;
template<> struct TIsUEnumClass<EEnemyState> { enum { Value = true }; };
template<> SLASH_PROJECT_API UEnum* StaticEnum<EEnemyState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
