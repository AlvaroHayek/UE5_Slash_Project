// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/HitInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef SLASH_PROJECT_HitInterface_generated_h
#error "HitInterface.generated.h already included, missing '#pragma once' in HitInterface.h"
#endif
#define SLASH_PROJECT_HitInterface_generated_h

#define FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Interfaces_HitInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GetHit_Implementation(FVector const& ImpactPoint, AActor* Hitter) {}; \
	DECLARE_FUNCTION(execGetHit);


#define FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Interfaces_HitInterface_h_13_CALLBACK_WRAPPERS
#define FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Interfaces_HitInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SLASH_PROJECT_API UHitInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UHitInterface(UHitInterface&&); \
	UHitInterface(const UHitInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SLASH_PROJECT_API, UHitInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHitInterface) \
	SLASH_PROJECT_API virtual ~UHitInterface();


#define FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Interfaces_HitInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHitInterface(); \
	friend struct Z_Construct_UClass_UHitInterface_Statics; \
public: \
	DECLARE_CLASS(UHitInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Slash_Project"), SLASH_PROJECT_API) \
	DECLARE_SERIALIZER(UHitInterface)


#define FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Interfaces_HitInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Interfaces_HitInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Interfaces_HitInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Interfaces_HitInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHitInterface() {} \
public: \
	typedef UHitInterface UClassType; \
	typedef IHitInterface ThisClass; \
	static void Execute_GetHit(UObject* O, FVector const& ImpactPoint, AActor* Hitter); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Interfaces_HitInterface_h_10_PROLOG
#define FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Interfaces_HitInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Interfaces_HitInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Interfaces_HitInterface_h_13_CALLBACK_WRAPPERS \
	FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Interfaces_HitInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SLASH_PROJECT_API UClass* StaticClass<class UHitInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Interfaces_HitInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
