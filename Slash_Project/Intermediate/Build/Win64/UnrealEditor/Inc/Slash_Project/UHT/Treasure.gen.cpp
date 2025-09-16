// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slash_Project/Public/Items/Treasure.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTreasure() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
SLASH_PROJECT_API UClass* Z_Construct_UClass_AItem();
SLASH_PROJECT_API UClass* Z_Construct_UClass_ATreasure();
SLASH_PROJECT_API UClass* Z_Construct_UClass_ATreasure_NoRegister();
UPackage* Z_Construct_UPackage__Script_Slash_Project();
// End Cross Module References

// Begin Class ATreasure
void ATreasure::StaticRegisterNativesATreasure()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATreasure);
UClass* Z_Construct_UClass_ATreasure_NoRegister()
{
	return ATreasure::StaticClass();
}
struct Z_Construct_UClass_ATreasure_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Items/Treasure.h" },
		{ "ModuleRelativePath", "Public/Items/Treasure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PickupSound_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Public/Items/Treasure.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gold_MetaData[] = {
		{ "Category", "Treasure Properties" },
		{ "ModuleRelativePath", "Public/Items/Treasure.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupSound;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Gold;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATreasure>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATreasure_Statics::NewProp_PickupSound = { "PickupSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATreasure, PickupSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PickupSound_MetaData), NewProp_PickupSound_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATreasure_Statics::NewProp_Gold = { "Gold", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATreasure, Gold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gold_MetaData), NewProp_Gold_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATreasure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreasure_Statics::NewProp_PickupSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreasure_Statics::NewProp_Gold,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATreasure_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATreasure_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItem,
	(UObject* (*)())Z_Construct_UPackage__Script_Slash_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATreasure_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATreasure_Statics::ClassParams = {
	&ATreasure::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATreasure_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATreasure_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATreasure_Statics::Class_MetaDataParams), Z_Construct_UClass_ATreasure_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATreasure()
{
	if (!Z_Registration_Info_UClass_ATreasure.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATreasure.OuterSingleton, Z_Construct_UClass_ATreasure_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATreasure.OuterSingleton;
}
template<> SLASH_PROJECT_API UClass* StaticClass<ATreasure>()
{
	return ATreasure::StaticClass();
}
ATreasure::ATreasure() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATreasure);
ATreasure::~ATreasure() {}
// End Class ATreasure

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Items_Treasure_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATreasure, ATreasure::StaticClass, TEXT("ATreasure"), &Z_Registration_Info_UClass_ATreasure, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATreasure), 2323265249U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Items_Treasure_h_1265469401(TEXT("/Script/Slash_Project"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Items_Treasure_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Items_Treasure_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
