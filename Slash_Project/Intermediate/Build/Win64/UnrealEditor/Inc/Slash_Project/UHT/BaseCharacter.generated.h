// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Characters/BaseCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SLASH_PROJECT_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define SLASH_PROJECT_BaseCharacter_generated_h

#define FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_BaseCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAttackEnd); \
	DECLARE_FUNCTION(execSetWeaponCollisionEnabled);


#define FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_BaseCharacter_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Slash_Project"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ABaseCharacter*>(this); }


#define FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_BaseCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABaseCharacter(ABaseCharacter&&); \
	ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter) \
	NO_API virtual ~ABaseCharacter();


#define FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_BaseCharacter_h_14_PROLOG
#define FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_BaseCharacter_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_BaseCharacter_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_BaseCharacter_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_BaseCharacter_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLASH_PROJECT_API UClass* StaticClass<class ABaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Characters_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
