// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slash_Project/Public/Breakable/BreakableActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBreakableActor() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();
SLASH_PROJECT_API UClass* Z_Construct_UClass_ABreakableActor();
SLASH_PROJECT_API UClass* Z_Construct_UClass_ABreakableActor_NoRegister();
SLASH_PROJECT_API UClass* Z_Construct_UClass_ATreasure_NoRegister();
SLASH_PROJECT_API UClass* Z_Construct_UClass_UHitInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Slash_Project();
// End Cross Module References

// Begin Class ABreakableActor
void ABreakableActor::StaticRegisterNativesABreakableActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABreakableActor);
UClass* Z_Construct_UClass_ABreakableActor_NoRegister()
{
	return ABreakableActor::StaticClass();
}
struct Z_Construct_UClass_ABreakableActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Breakable/BreakableActor.h" },
		{ "ModuleRelativePath", "Public/Breakable/BreakableActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCollection_MetaData[] = {
		{ "Category", "BreakableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Breakable/BreakableActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TreasureClass_MetaData[] = {
		{ "Category", "BreakableActor" },
		{ "ModuleRelativePath", "Public/Breakable/BreakableActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometryCollection;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TreasureClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABreakableActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABreakableActor_Statics::NewProp_GeometryCollection = { "GeometryCollection", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABreakableActor, GeometryCollection), Z_Construct_UClass_UGeometryCollectionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GeometryCollection_MetaData), NewProp_GeometryCollection_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABreakableActor_Statics::NewProp_TreasureClass = { "TreasureClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABreakableActor, TreasureClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ATreasure_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TreasureClass_MetaData), NewProp_TreasureClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABreakableActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableActor_Statics::NewProp_GeometryCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableActor_Statics::NewProp_TreasureClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABreakableActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Slash_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABreakableActor_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UHitInterface_NoRegister, (int32)VTABLE_OFFSET(ABreakableActor, IHitInterface), false },  // 1192690033
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABreakableActor_Statics::ClassParams = {
	&ABreakableActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABreakableActor_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableActor_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ABreakableActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABreakableActor()
{
	if (!Z_Registration_Info_UClass_ABreakableActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABreakableActor.OuterSingleton, Z_Construct_UClass_ABreakableActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABreakableActor.OuterSingleton;
}
template<> SLASH_PROJECT_API UClass* StaticClass<ABreakableActor>()
{
	return ABreakableActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABreakableActor);
ABreakableActor::~ABreakableActor() {}
// End Class ABreakableActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Breakable_BreakableActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABreakableActor, ABreakableActor::StaticClass, TEXT("ABreakableActor"), &Z_Registration_Info_UClass_ABreakableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABreakableActor), 3135459138U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Breakable_BreakableActor_h_54524558(TEXT("/Script/Slash_Project"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Breakable_BreakableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Breakable_BreakableActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
