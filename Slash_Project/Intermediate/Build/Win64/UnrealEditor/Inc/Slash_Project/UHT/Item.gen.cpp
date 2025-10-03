// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slash_Project/Public/Items/Item.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
SLASH_PROJECT_API UClass* Z_Construct_UClass_AItem();
SLASH_PROJECT_API UClass* Z_Construct_UClass_AItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_Slash_Project();
// End Cross Module References

// Begin Class AItem Function OnSphereEndOverlap
struct Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics
{
	struct Item_eventOnSphereEndOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventOnSphereEndOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventOnSphereEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventOnSphereEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventOnSphereEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "OnSphereEndOverlap", nullptr, nullptr, Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::Item_eventOnSphereEndOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::Item_eventOnSphereEndOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItem_OnSphereEndOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItem_OnSphereEndOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItem::execOnSphereEndOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSphereEndOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class AItem Function OnSphereEndOverlap

// Begin Class AItem Function OnSphereOverlap
struct Z_Construct_UFunction_AItem_OnSphereOverlap_Statics
{
	struct Item_eventOnSphereOverlap_Parms
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
		{ "ModuleRelativePath", "Public/Items/Item.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventOnSphereOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventOnSphereOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventOnSphereOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventOnSphereOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Item_eventOnSphereOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Item_eventOnSphereOverlap_Parms), &Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventOnSphereOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "OnSphereOverlap", nullptr, nullptr, Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::Item_eventOnSphereOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::Item_eventOnSphereOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItem_OnSphereOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItem_OnSphereOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItem::execOnSphereOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSphereOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AItem Function OnSphereOverlap

// Begin Class AItem Function TransformedCos
struct Z_Construct_UFunction_AItem_TransformedCos_Statics
{
	struct Item_eventTransformedCos_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/Item.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AItem_TransformedCos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventTransformedCos_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_TransformedCos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_TransformedCos_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_TransformedCos_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_TransformedCos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "TransformedCos", nullptr, nullptr, Z_Construct_UFunction_AItem_TransformedCos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_TransformedCos_Statics::PropPointers), sizeof(Z_Construct_UFunction_AItem_TransformedCos_Statics::Item_eventTransformedCos_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_TransformedCos_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItem_TransformedCos_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AItem_TransformedCos_Statics::Item_eventTransformedCos_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItem_TransformedCos()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItem_TransformedCos_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItem::execTransformedCos)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->TransformedCos();
	P_NATIVE_END;
}
// End Class AItem Function TransformedCos

// Begin Class AItem Function TransformedSin
struct Z_Construct_UFunction_AItem_TransformedSin_Statics
{
	struct Item_eventTransformedSin_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Items/Item.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AItem_TransformedSin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Item_eventTransformedSin_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItem_TransformedSin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItem_TransformedSin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_TransformedSin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItem_TransformedSin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItem, nullptr, "TransformedSin", nullptr, nullptr, Z_Construct_UFunction_AItem_TransformedSin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_TransformedSin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AItem_TransformedSin_Statics::Item_eventTransformedSin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItem_TransformedSin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItem_TransformedSin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AItem_TransformedSin_Statics::Item_eventTransformedSin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItem_TransformedSin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItem_TransformedSin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItem::execTransformedSin)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->TransformedSin();
	P_NATIVE_END;
}
// End Class AItem Function TransformedSin

// Begin Class AItem
void AItem::StaticRegisterNativesAItem()
{
	UClass* Class = AItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnSphereEndOverlap", &AItem::execOnSphereEndOverlap },
		{ "OnSphereOverlap", &AItem::execOnSphereOverlap },
		{ "TransformedCos", &AItem::execTransformedCos },
		{ "TransformedSin", &AItem::execTransformedSin },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItem);
UClass* Z_Construct_UClass_AItem_NoRegister()
{
	return AItem::StaticClass();
}
struct Z_Construct_UClass_AItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Items/Item.h" },
		{ "ModuleRelativePath", "Public/Items/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
		{ "Category", "Sine Parameters" },
		{ "ModuleRelativePath", "Public/Items/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeConstant_MetaData[] = {
		{ "Category", "Sine Parameters" },
		{ "ModuleRelativePath", "Public/Items/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[] = {
		{ "Category", "Item" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sphere_MetaData[] = {
		{ "Category", "Item" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmbersEffect_MetaData[] = {
		{ "Category", "Item" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Items/Item.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunningTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/Items/Item.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeConstant;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EmbersEffect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RunningTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AItem_OnSphereEndOverlap, "OnSphereEndOverlap" }, // 2122641771
		{ &Z_Construct_UFunction_AItem_OnSphereOverlap, "OnSphereOverlap" }, // 1924860853
		{ &Z_Construct_UFunction_AItem_TransformedCos, "TransformedCos" }, // 592039219
		{ &Z_Construct_UFunction_AItem_TransformedSin, "TransformedSin" }, // 2022333891
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItem, Amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_MetaData), NewProp_Amplitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_TimeConstant = { "TimeConstant", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItem, TimeConstant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeConstant_MetaData), NewProp_TimeConstant_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItem, ItemMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMesh_MetaData), NewProp_ItemMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_Sphere = { "Sphere", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItem, Sphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sphere_MetaData), NewProp_Sphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_EmbersEffect = { "EmbersEffect", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItem, EmbersEffect), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmbersEffect_MetaData), NewProp_EmbersEffect_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AItem_Statics::NewProp_RunningTime = { "RunningTime", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItem, RunningTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunningTime_MetaData), NewProp_RunningTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_Amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_TimeConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_ItemMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_Sphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_EmbersEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItem_Statics::NewProp_RunningTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Slash_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItem_Statics::ClassParams = {
	&AItem::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AItem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItem_Statics::Class_MetaDataParams), Z_Construct_UClass_AItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItem()
{
	if (!Z_Registration_Info_UClass_AItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItem.OuterSingleton, Z_Construct_UClass_AItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItem.OuterSingleton;
}
template<> SLASH_PROJECT_API UClass* StaticClass<AItem>()
{
	return AItem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItem);
AItem::~AItem() {}
// End Class AItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Items_Item_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItem, AItem::StaticClass, TEXT("AItem"), &Z_Registration_Info_UClass_AItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItem), 1402329083U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Items_Item_h_80839079(TEXT("/Script/Slash_Project"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Items_Item_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Items_Item_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
