// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTeamProjectTilde/Public/ScreenManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScreenManager() {}

// Begin Cross Module References
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_UScreenManager();
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_UScreenManager_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BTeamProjectTilde();
// End Cross Module References

// Begin Class UScreenManager
void UScreenManager::StaticRegisterNativesUScreenManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScreenManager);
UClass* Z_Construct_UClass_UScreenManager_NoRegister()
{
	return UScreenManager::StaticClass();
}
struct Z_Construct_UClass_UScreenManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ScreenManager.h" },
		{ "ModuleRelativePath", "Public/ScreenManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScreenManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UScreenManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BTeamProjectTilde,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UScreenManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UScreenManager_Statics::ClassParams = {
	&UScreenManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UScreenManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UScreenManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UScreenManager()
{
	if (!Z_Registration_Info_UClass_UScreenManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScreenManager.OuterSingleton, Z_Construct_UClass_UScreenManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UScreenManager.OuterSingleton;
}
template<> BTEAMPROJECTTILDE_API UClass* StaticClass<UScreenManager>()
{
	return UScreenManager::StaticClass();
}
UScreenManager::UScreenManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UScreenManager);
UScreenManager::~UScreenManager() {}
// End Class UScreenManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Humber_Sem_4_Game_Production_2_GAME259_2025_Winter_B_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ScreenManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UScreenManager, UScreenManager::StaticClass, TEXT("UScreenManager"), &Z_Registration_Info_UClass_UScreenManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScreenManager), 3045435591U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Humber_Sem_4_Game_Production_2_GAME259_2025_Winter_B_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ScreenManager_h_3593862016(TEXT("/Script/BTeamProjectTilde"),
	Z_CompiledInDeferFile_FID_Humber_Sem_4_Game_Production_2_GAME259_2025_Winter_B_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ScreenManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Humber_Sem_4_Game_Production_2_GAME259_2025_Winter_B_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ScreenManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
