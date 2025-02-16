// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BTeamProjectTilde/Public/ContainerWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeContainerWidget() {}

// Begin Cross Module References
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_UContainerWidget();
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_UContainerWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_BTeamProjectTilde();
// End Cross Module References

// Begin Class UContainerWidget
void UContainerWidget::StaticRegisterNativesUContainerWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UContainerWidget);
UClass* Z_Construct_UClass_UContainerWidget_NoRegister()
{
	return UContainerWidget::StaticClass();
}
struct Z_Construct_UClass_UContainerWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ContainerWidget.h" },
		{ "ModuleRelativePath", "Public/ContainerWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UContainerWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UContainerWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BTeamProjectTilde,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UContainerWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UContainerWidget_Statics::ClassParams = {
	&UContainerWidget::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UContainerWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UContainerWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UContainerWidget()
{
	if (!Z_Registration_Info_UClass_UContainerWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UContainerWidget.OuterSingleton, Z_Construct_UClass_UContainerWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UContainerWidget.OuterSingleton;
}
template<> BTEAMPROJECTTILDE_API UClass* StaticClass<UContainerWidget>()
{
	return UContainerWidget::StaticClass();
}
UContainerWidget::UContainerWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UContainerWidget);
UContainerWidget::~UContainerWidget() {}
// End Class UContainerWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_Humber_Sem_4_Game_Production_2_GAME259_2025_Winter_B_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ContainerWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UContainerWidget, UContainerWidget::StaticClass, TEXT("UContainerWidget"), &Z_Registration_Info_UClass_UContainerWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UContainerWidget), 108492346U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Humber_Sem_4_Game_Production_2_GAME259_2025_Winter_B_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ContainerWidget_h_2756493658(TEXT("/Script/BTeamProjectTilde"),
	Z_CompiledInDeferFile_FID_Humber_Sem_4_Game_Production_2_GAME259_2025_Winter_B_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ContainerWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Humber_Sem_4_Game_Production_2_GAME259_2025_Winter_B_BTeamProjectTilde_Source_BTeamProjectTilde_Public_ContainerWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
