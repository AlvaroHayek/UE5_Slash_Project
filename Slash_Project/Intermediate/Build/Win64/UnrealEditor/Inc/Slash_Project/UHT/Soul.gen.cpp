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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASoul>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_ASoul, ASoul::StaticClass, TEXT("ASoul"), &Z_Registration_Info_UClass_ASoul, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASoul), 2490318975U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Items_Soul_h_2266537936(TEXT("/Script/Slash_Project"),
	Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Items_Soul_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Usuario_Desktop_UnrealEngineUnity_UE5_Slash_Project_Slash_Project_Source_Slash_Project_Public_Items_Soul_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
