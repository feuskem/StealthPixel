// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StealthPixel/MyAISenseConfig2_Sight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyAISenseConfig2_Sight() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight();
STEALTHPIXEL_API UClass* Z_Construct_UClass_UMyAISenseConfig2_Sight();
STEALTHPIXEL_API UClass* Z_Construct_UClass_UMyAISenseConfig2_Sight_NoRegister();
UPackage* Z_Construct_UPackage__Script_StealthPixel();
// End Cross Module References

// Begin Class UMyAISenseConfig2_Sight
void UMyAISenseConfig2_Sight::StaticRegisterNativesUMyAISenseConfig2_Sight()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyAISenseConfig2_Sight);
UClass* Z_Construct_UClass_UMyAISenseConfig2_Sight_NoRegister()
{
	return UMyAISenseConfig2_Sight::StaticClass();
}
struct Z_Construct_UClass_UMyAISenseConfig2_Sight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyAISenseConfig2_Sight.h" },
		{ "ModuleRelativePath", "MyAISenseConfig2_Sight.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyAISenseConfig2_Sight>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMyAISenseConfig2_Sight_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAISenseConfig_Sight,
	(UObject* (*)())Z_Construct_UPackage__Script_StealthPixel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAISenseConfig2_Sight_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyAISenseConfig2_Sight_Statics::ClassParams = {
	&UMyAISenseConfig2_Sight::StaticClass,
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
	0x001010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyAISenseConfig2_Sight_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyAISenseConfig2_Sight_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyAISenseConfig2_Sight()
{
	if (!Z_Registration_Info_UClass_UMyAISenseConfig2_Sight.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyAISenseConfig2_Sight.OuterSingleton, Z_Construct_UClass_UMyAISenseConfig2_Sight_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyAISenseConfig2_Sight.OuterSingleton;
}
template<> STEALTHPIXEL_API UClass* StaticClass<UMyAISenseConfig2_Sight>()
{
	return UMyAISenseConfig2_Sight::StaticClass();
}
UMyAISenseConfig2_Sight::UMyAISenseConfig2_Sight(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyAISenseConfig2_Sight);
UMyAISenseConfig2_Sight::~UMyAISenseConfig2_Sight() {}
// End Class UMyAISenseConfig2_Sight

// Begin Registration
struct Z_CompiledInDeferFile_FID_UnrealProject_StealthPixelGithub_StealthPixel_StealthPixel_Source_StealthPixel_MyAISenseConfig2_Sight_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyAISenseConfig2_Sight, UMyAISenseConfig2_Sight::StaticClass, TEXT("UMyAISenseConfig2_Sight"), &Z_Registration_Info_UClass_UMyAISenseConfig2_Sight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyAISenseConfig2_Sight), 3499211784U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealProject_StealthPixelGithub_StealthPixel_StealthPixel_Source_StealthPixel_MyAISenseConfig2_Sight_h_917316765(TEXT("/Script/StealthPixel"),
	Z_CompiledInDeferFile_FID_UnrealProject_StealthPixelGithub_StealthPixel_StealthPixel_Source_StealthPixel_MyAISenseConfig2_Sight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealProject_StealthPixelGithub_StealthPixel_StealthPixel_Source_StealthPixel_MyAISenseConfig2_Sight_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
