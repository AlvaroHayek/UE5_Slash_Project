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
	op(EActionState::EAS_Attacking) \
	op(EActionState::EAS_EquippingWeapon) 

enum class EActionState : uint8;
template<> struct TIsUEnumClass<EActionState> { enum { Value = true }; };
template<> SLASH_PROJECT_API UEnum* StaticEnum<EActionState>();

#define FOREACH_ENUM_EDEATHPOSE(op) \
	op(EDeathPose::EDP_Alive) \
	op(EDeathPose::EDP_Death1) \
	op(EDeathPose::EDP_Death2) \
	op(EDeathPose::EDP_Death3) \
	op(EDeathPose::EDP_Death4) \
	op(EDeathPose::EDP_Death5) \
	op(EDeathPose::EDP_Death6) 

enum class EDeathPose : uint8;
template<> struct TIsUEnumClass<EDeathPose> { enum { Value = true }; };
template<> SLASH_PROJECT_API UEnum* StaticEnum<EDeathPose>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
