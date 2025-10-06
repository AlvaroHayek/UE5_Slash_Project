// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slash_Project/Public/Items/Weapons/Weapon.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeapon() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
SLASH_PROJECT_API UClass* Z_Construct_UClass_AItem();
SLASH_PROJECT_API UClass* Z_Construct_UClass_AWeapon();
SLASH_PROJECT_API UClass* Z_Construct_UClass_AWeapon_NoRegister();
UPackage* Z_Construct_UPackage__Script_Slash_Project();
// End Cross Module References

// Begin Class AWeapon Function CreateFields
struct Weapon_eventCreateFields_Parms
{
	FVector FieldLocation;
};
static const FName NAME_AWeapon_CreateFields = FName(TEXT("CreateFields"));
void AWeapon::CreateFields(FVector const& FieldLocation)
{
	Weapon_eventCreateFields_Parms Parms;
	Parms.FieldLocation=FieldLocation;
	UFunction* Func = FindFunctionChecked(NAME_AWeapon_CreateFields);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AWeapon_CreateFields_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FieldLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeapon_CreateFields_Statics::NewProp_FieldLocation = { "FieldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_eventCreateFields_Parms, FieldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldLocation_MetaData), NewProp_FieldLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_CreateFields_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_CreateFields_Statics::NewProp_FieldLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_CreateFields_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_CreateFields_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "CreateFields", nullptr, nullptr, Z_Construct_UFunction_AWeapon_CreateFields_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_CreateFields_Statics::PropPointers), sizeof(Weapon_eventCreateFields_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C80800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_CreateFields_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapon_CreateFields_Statics::Function_MetaDataParams) };
static_assert(sizeof(Weapon_eventCreateFields_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeapon_CreateFields()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_CreateFields_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AWeapon Function CreateFields

// Begin Class AWeapon Function OnBoxOverlap
struct Z_Construct_UFunction_AWeapon_OnBoxOverlap_Statics
{
	struct Weapon_eventOnBoxOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeapon_OnBoxOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_eventOnBoxOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeapon_OnBoxOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_eventOnBoxOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWeapon_OnBoxOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_eventOnBoxOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWeapon_OnBoxOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_eventOnBoxOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AWeapon_OnBoxOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Weapon_eventOnBoxOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWeapon_OnBoxOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Weapon_eventOnBoxOverlap_Parms), &Z_Construct_UFunction_AWeapon_OnBoxOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWeapon_OnBoxOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Weapon_eventOnBoxOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWeapon_OnBoxOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_OnBoxOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_OnBoxOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_OnBoxOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_OnBoxOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_OnBoxOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWeapon_OnBoxOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_OnBoxOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeapon_OnBoxOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeapon, nullptr, "OnBoxOverlap", nullptr, nullptr, Z_Construct_UFunction_AWeapon_OnBoxOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_OnBoxOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWeapon_OnBoxOverlap_Statics::Weapon_eventOnBoxOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWeapon_OnBoxOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWeapon_OnBoxOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWeapon_OnBoxOverlap_Statics::Weapon_eventOnBoxOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWeapon_OnBoxOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWeapon_OnBoxOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWeapon::execOnBoxOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBoxOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AWeapon Function OnBoxOverlap

// Begin Class AWeapon
void AWeapon::StaticRegisterNativesAWeapon()
{
	UClass* Class = AWeapon::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBoxOverlap", &AWeapon::execOnBoxOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWeapon);
UClass* Z_Construct_UClass_AWeapon_NoRegister()
{
	return AWeapon::StaticClass();
}
struct Z_Construct_UClass_AWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Items/Weapons/Weapon.h" },
		{ "ModuleRelativePath", "Public/Items/Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxTraceExtent_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Public/Items/Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowBoxDebug_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Public/Items/Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EquipSound_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Public/Items/Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponBox_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxTraceStart_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxTraceEnd_MetaData[] = {
		{ "Category", "Weapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/Weapons/Weapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Public/Items/Weapons/Weapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxTraceExtent;
	static void NewProp_bShowBoxDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowBoxDebug;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxTraceStart;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxTraceEnd;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeapon_CreateFields, "CreateFields" }, // 3558384815
		{ &Z_Construct_UFunction_AWeapon_OnBoxOverlap, "OnBoxOverlap" }, // 2676665737
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_BoxTraceExtent = { "BoxTraceExtent", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, BoxTraceExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxTraceExtent_MetaData), NewProp_BoxTraceExtent_MetaData) };
void Z_Construct_UClass_AWeapon_Statics::NewProp_bShowBoxDebug_SetBit(void* Obj)
{
	((AWeapon*)Obj)->bShowBoxDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_bShowBoxDebug = { "bShowBoxDebug", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWeapon), &Z_Construct_UClass_AWeapon_Statics::NewProp_bShowBoxDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowBoxDebug_MetaData), NewProp_bShowBoxDebug_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_EquipSound = { "EquipSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, EquipSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EquipSound_MetaData), NewProp_EquipSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponBox = { "WeaponBox", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, WeaponBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponBox_MetaData), NewProp_WeaponBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_BoxTraceStart = { "BoxTraceStart", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, BoxTraceStart), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxTraceStart_MetaData), NewProp_BoxTraceStart_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_BoxTraceEnd = { "BoxTraceEnd", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, BoxTraceEnd), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxTraceEnd_MetaData), NewProp_BoxTraceEnd_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWeapon_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWeapon, Damage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_BoxTraceExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_bShowBoxDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_EquipSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_WeaponBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_BoxTraceStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_BoxTraceEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeapon_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItem,
	(UObject* (*)())Z_Construct_UPackage__Script_Slash_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWeapon_Statics::ClassParams = {
	&AWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWeapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_AWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWeapon()
{
	if (!Z_Registration_Info_UClass_AWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWeapon.OuterSingleton, Z_Construct_UClass_AWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWeapon.OuterSingleton;
}
template<> SLASH_PROJECT_API UClass* StaticClass<AWeapon>()
{
	return AWeapon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWeapon);
AWeapon::~AWeapon() {}
// End Class AWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Items_Weapons_Weapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWeapon, AWeapon::StaticClass, TEXT("AWeapon"), &Z_Registration_Info_UClass_AWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWeapon), 3263598920U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Items_Weapons_Weapon_h_3953439288(TEXT("/Script/Slash_Project"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Items_Weapons_Weapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Items_Weapons_Weapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
