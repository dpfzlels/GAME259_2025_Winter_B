// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTeamProjectTilde/Public/CamWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCamWidget() {}

// Begin Cross Module References
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_UCamWidget();
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_UCamWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_BTeamProjectTilde();
// End Cross Module References

// Begin Class UCamWidget
void UCamWidget::StaticRegisterNativesUCamWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCamWidget);
UClass* Z_Construct_UClass_UCamWidget_NoRegister()
{
	return UCamWidget::StaticClass();
}
struct Z_Construct_UClass_UCamWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CamWidget.h" },
		{ "ModuleRelativePath", "Public/CamWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCamWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCamWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BTeamProjectTilde,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCamWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCamWidget_Statics::ClassParams = {
	&UCamWidget::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCamWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UCamWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCamWidget()
{
	if (!Z_Registration_Info_UClass_UCamWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCamWidget.OuterSingleton, Z_Construct_UClass_UCamWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCamWidget.OuterSingleton;
}
template<> BTEAMPROJECTTILDE_API UClass* StaticClass<UCamWidget>()
{
	return UCamWidget::StaticClass();
}
UCamWidget::UCamWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCamWidget);
UCamWidget::~UCamWidget() {}
// End Class UCamWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Humber_Sem_4_Game_Production_2_GAME259_2025_Winter_B_BTeamProjectTilde_Source_BTeamProjectTilde_Public_CamWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCamWidget, UCamWidget::StaticClass, TEXT("UCamWidget"), &Z_Registration_Info_UClass_UCamWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCamWidget), 1350836898U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Humber_Sem_4_Game_Production_2_GAME259_2025_Winter_B_BTeamProjectTilde_Source_BTeamProjectTilde_Public_CamWidget_h_2370987523(TEXT("/Script/BTeamProjectTilde"),
	Z_CompiledInDeferFile_FID_Humber_Sem_4_Game_Production_2_GAME259_2025_Winter_B_BTeamProjectTilde_Source_BTeamProjectTilde_Public_CamWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Humber_Sem_4_Game_Production_2_GAME259_2025_Winter_B_BTeamProjectTilde_Source_BTeamProjectTilde_Public_CamWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
