// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Slash_Project/Public/Items/Soul.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoul() {}

// Begin Cross Module References
SLASH_PROJECT_API UClass* Z_Construct_UClass_AItem();
SLASH_PROJECT_API UClass* Z_Construct_UClass_ASoul();
SLASH_PROJECT_API UClass* Z_Construct_UClass_ASoul_NoRegister();
UPackage* Z_Construct_UPackage__Script_Slash_Project();
// End Cross Module References

// Begin Class ASoul
void ASoul::StaticRegisterNativesASoul()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASoul);
UClass* Z_Construct_UClass_ASoul_NoRegister()
{
	return ASoul::StaticClass();
}
struct Z_Construct_UClass_ASoul_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Items/Soul.h" },
		{ "ModuleRelativePath", "Public/Items/Soul.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Souls_MetaData[] = {
		{ "Category", "Soul Properties" },
		{ "ModuleRelativePath", "Public/Items/Soul.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriftRate_MetaData[] = {
		{ "Category", "Soul" },
		{ "ModuleRelativePath", "Public/Items/Soul.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Souls;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DriftRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoul>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ASoul_Statics::NewProp_Souls = { "Souls", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASoul, Souls), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Souls_MetaData), NewProp_Souls_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASoul_Statics::NewProp_DriftRate = { "DriftRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASoul, DriftRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriftRate_MetaData), NewProp_DriftRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASoul_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoul_Statics::NewProp_Souls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASoul_Statics::NewProp_DriftRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoul_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASoul_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AItem,
	(UObject* (*)())Z_Construct_UPackage__Script_Slash_Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASoul_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASoul_Statics::ClassParams = {
	&ASoul::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASoul_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASoul_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASoul_Statics::Class_MetaDataParams), Z_Construct_UClass_ASoul_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASoul()
{
	if (!Z_Registration_Info_UClass_ASoul.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASoul.OuterSingleton, Z_Construct_UClass_ASoul_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASoul.OuterSingleton;
}
template<> SLASH_PROJECT_API UClass* StaticClass<ASoul>()
{
	return ASoul::StaticClass();
}
ASoul::ASoul() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASoul);
ASoul::~ASoul() {}
// End Class ASoul

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Items_Soul_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASoul, ASoul::StaticClass, TEXT("ASoul"), &Z_Registration_Info_UClass_ASoul, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASoul), 2489352732U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Items_Soul_h_56480792(TEXT("/Script/Slash_Project"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Items_Soul_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Items_Soul_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
