// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StealthPixel/AISense2_Sight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense2_Sight() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAISense_Sight();
STEALTHPIXEL_API UClass* Z_Construct_UClass_UAISense2_Sight();
STEALTHPIXEL_API UClass* Z_Construct_UClass_UAISense2_Sight_NoRegister();
UPackage* Z_Construct_UPackage__Script_StealthPixel();
// End Cross Module References

// Begin Class UAISense2_Sight
void UAISense2_Sight::StaticRegisterNativesUAISense2_Sight()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISense2_Sight);
UClass* Z_Construct_UClass_UAISense2_Sight_NoRegister()
{
	return UAISense2_Sight::StaticClass();
}
struct Z_Construct_UClass_UAISense2_Sight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "AISense2_Sight.h" },
		{ "ModuleRelativePath", "AISense2_Sight.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense2_Sight>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAISense2_Sight_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAISense_Sight,
	(UObject* (*)())Z_Construct_UPackage__Script_StealthPixel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense2_Sight_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISense2_Sight_Statics::ClassParams = {
	&UAISense2_Sight::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense2_Sight_Statics::Class_MetaDataParams), Z_Construct_UClass_UAISense2_Sight_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAISense2_Sight()
{
	if (!Z_Registration_Info_UClass_UAISense2_Sight.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISense2_Sight.OuterSingleton, Z_Construct_UClass_UAISense2_Sight_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAISense2_Sight.OuterSingleton;
}
template<> STEALTHPIXEL_API UClass* StaticClass<UAISense2_Sight>()
{
	return UAISense2_Sight::StaticClass();
}
UAISense2_Sight::UAISense2_Sight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense2_Sight);
UAISense2_Sight::~UAISense2_Sight() {}
// End Class UAISense2_Sight

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProject_StealthPixelGithub_StealthPixel_StealthPixel_Source_StealthPixel_AISense2_Sight_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAISense2_Sight, UAISense2_Sight::StaticClass, TEXT("UAISense2_Sight"), &Z_Registration_Info_UClass_UAISense2_Sight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISense2_Sight), 1783572556U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_StealthPixelGithub_StealthPixel_StealthPixel_Source_StealthPixel_AISense2_Sight_h_3645275030(TEXT("/Script/StealthPixel"),
	Z_CompiledInDeferFile_FID_UnrealProject_StealthPixelGithub_StealthPixel_StealthPixel_Source_StealthPixel_AISense2_Sight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_StealthPixelGithub_StealthPixel_StealthPixel_Source_StealthPixel_AISense2_Sight_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
