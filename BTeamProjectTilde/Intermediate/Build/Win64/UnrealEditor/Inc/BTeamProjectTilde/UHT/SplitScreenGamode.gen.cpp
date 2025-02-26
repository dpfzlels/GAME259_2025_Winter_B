// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTeamProjectTilde/Public/SplitScreenGamode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplitScreenGamode() {}

// Begin Cross Module References
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_ASplitScreenGamode();
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_ASplitScreenGamode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_BTeamProjectTilde();
// End Cross Module References

// Begin Class ASplitScreenGamode
void ASplitScreenGamode::StaticRegisterNativesASplitScreenGamode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASplitScreenGamode);
UClass* Z_Construct_UClass_ASplitScreenGamode_NoRegister()
{
	return ASplitScreenGamode::StaticClass();
}
struct Z_Construct_UClass_ASplitScreenGamode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SplitScreenGamode.h" },
		{ "ModuleRelativePath", "Public/SplitScreenGamode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASplitScreenGamode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASplitScreenGamode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_BTeamProjectTilde,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASplitScreenGamode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASplitScreenGamode_Statics::ClassParams = {
	&ASplitScreenGamode::StaticClass,
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
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASplitScreenGamode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASplitScreenGamode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASplitScreenGamode()
{
	if (!Z_Registration_Info_UClass_ASplitScreenGamode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASplitScreenGamode.OuterSingleton, Z_Construct_UClass_ASplitScreenGamode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASplitScreenGamode.OuterSingleton;
}
template<> BTEAMPROJECTTILDE_API UClass* StaticClass<ASplitScreenGamode>()
{
	return ASplitScreenGamode::StaticClass();
}
ASplitScreenGamode::ASplitScreenGamode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASplitScreenGamode);
ASplitScreenGamode::~ASplitScreenGamode() {}
// End Class ASplitScreenGamode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Humber_Sem_4_Game_Production_2_GAME259_2025_Winter_B_BTeamProjectTilde_Source_BTeamProjectTilde_Public_SplitScreenGamode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASplitScreenGamode, ASplitScreenGamode::StaticClass, TEXT("ASplitScreenGamode"), &Z_Registration_Info_UClass_ASplitScreenGamode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASplitScreenGamode), 1599580794U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Humber_Sem_4_Game_Production_2_GAME259_2025_Winter_B_BTeamProjectTilde_Source_BTeamProjectTilde_Public_SplitScreenGamode_h_3912740985(TEXT("/Script/BTeamProjectTilde"),
	Z_CompiledInDeferFile_FID_Humber_Sem_4_Game_Production_2_GAME259_2025_Winter_B_BTeamProjectTilde_Source_BTeamProjectTilde_Public_SplitScreenGamode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Humber_Sem_4_Game_Production_2_GAME259_2025_Winter_B_BTeamProjectTilde_Source_BTeamProjectTilde_Public_SplitScreenGamode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
