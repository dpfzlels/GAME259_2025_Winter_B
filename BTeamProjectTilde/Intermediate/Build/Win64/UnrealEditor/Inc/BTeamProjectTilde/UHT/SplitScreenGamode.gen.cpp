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
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_UCamWidget_NoRegister();
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_UContainerWidget_NoRegister();
BTEAMPROJECTTILDE_API UClass* Z_Construct_UClass_UScreenManager_NoRegister();
BTEAMPROJECTTILDE_API UEnum* Z_Construct_UEnum_BTeamProjectTilde_ECMode();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_BTeamProjectTilde();
// End Cross Module References

// Begin Class ASplitScreenGamode Function AddUIWidgetToScreen
struct Z_Construct_UFunction_ASplitScreenGamode_AddUIWidgetToScreen_Statics
{
	struct SplitScreenGamode_eventAddUIWidgetToScreen_Parms
	{
		UWidget* widget_;
		int32 Zorder;
		int32 viewPort;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spilt Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Wrapper Function to add a UI Widget to the screen\n" },
#endif
		{ "ModuleRelativePath", "Public/SplitScreenGamode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wrapper Function to add a UI Widget to the screen" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_widget__MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_widget_;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Zorder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_viewPort;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASplitScreenGamode_AddUIWidgetToScreen_Statics::NewProp_widget_ = { "widget_", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplitScreenGamode_eventAddUIWidgetToScreen_Parms, widget_), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_widget__MetaData), NewProp_widget__MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASplitScreenGamode_AddUIWidgetToScreen_Statics::NewProp_Zorder = { "Zorder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplitScreenGamode_eventAddUIWidgetToScreen_Parms, Zorder), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ASplitScreenGamode_AddUIWidgetToScreen_Statics::NewProp_viewPort = { "viewPort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplitScreenGamode_eventAddUIWidgetToScreen_Parms, viewPort), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASplitScreenGamode_AddUIWidgetToScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplitScreenGamode_AddUIWidgetToScreen_Statics::NewProp_widget_,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplitScreenGamode_AddUIWidgetToScreen_Statics::NewProp_Zorder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplitScreenGamode_AddUIWidgetToScreen_Statics::NewProp_viewPort,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASplitScreenGamode_AddUIWidgetToScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplitScreenGamode_AddUIWidgetToScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplitScreenGamode, nullptr, "AddUIWidgetToScreen", nullptr, nullptr, Z_Construct_UFunction_ASplitScreenGamode_AddUIWidgetToScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASplitScreenGamode_AddUIWidgetToScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASplitScreenGamode_AddUIWidgetToScreen_Statics::SplitScreenGamode_eventAddUIWidgetToScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASplitScreenGamode_AddUIWidgetToScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASplitScreenGamode_AddUIWidgetToScreen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASplitScreenGamode_AddUIWidgetToScreen_Statics::SplitScreenGamode_eventAddUIWidgetToScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASplitScreenGamode_AddUIWidgetToScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASplitScreenGamode_AddUIWidgetToScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASplitScreenGamode::execAddUIWidgetToScreen)
{
	P_GET_OBJECT(UWidget,Z_Param_widget_);
	P_GET_PROPERTY(FIntProperty,Z_Param_Zorder);
	P_GET_PROPERTY(FIntProperty,Z_Param_viewPort);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddUIWidgetToScreen(Z_Param_widget_,Z_Param_Zorder,Z_Param_viewPort);
	P_NATIVE_END;
}
// End Class ASplitScreenGamode Function AddUIWidgetToScreen

// Begin Class ASplitScreenGamode Function IniScreen
struct Z_Construct_UFunction_ASplitScreenGamode_IniScreen_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spilt Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Initilizing function for the ScreenManager\n" },
#endif
		{ "ModuleRelativePath", "Public/SplitScreenGamode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initilizing function for the ScreenManager" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplitScreenGamode_IniScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplitScreenGamode, nullptr, "IniScreen", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASplitScreenGamode_IniScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASplitScreenGamode_IniScreen_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ASplitScreenGamode_IniScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASplitScreenGamode_IniScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASplitScreenGamode::execIniScreen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->IniScreen();
	P_NATIVE_END;
}
// End Class ASplitScreenGamode Function IniScreen

// Begin Class ASplitScreenGamode Function SetMode
struct Z_Construct_UFunction_ASplitScreenGamode_SetMode_Statics
{
	struct SplitScreenGamode_eventSetMode_Parms
	{
		ECMode mode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Spilt Screen" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Setter for to change current mode\n" },
#endif
		{ "ModuleRelativePath", "Public/SplitScreenGamode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Setter for to change current mode" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_mode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_mode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASplitScreenGamode_SetMode_Statics::NewProp_mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASplitScreenGamode_SetMode_Statics::NewProp_mode = { "mode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SplitScreenGamode_eventSetMode_Parms, mode), Z_Construct_UEnum_BTeamProjectTilde_ECMode, METADATA_PARAMS(0, nullptr) }; // 3806085766
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASplitScreenGamode_SetMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplitScreenGamode_SetMode_Statics::NewProp_mode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplitScreenGamode_SetMode_Statics::NewProp_mode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ASplitScreenGamode_SetMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplitScreenGamode_SetMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplitScreenGamode, nullptr, "SetMode", nullptr, nullptr, Z_Construct_UFunction_ASplitScreenGamode_SetMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASplitScreenGamode_SetMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_ASplitScreenGamode_SetMode_Statics::SplitScreenGamode_eventSetMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ASplitScreenGamode_SetMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_ASplitScreenGamode_SetMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ASplitScreenGamode_SetMode_Statics::SplitScreenGamode_eventSetMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ASplitScreenGamode_SetMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASplitScreenGamode_SetMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ASplitScreenGamode::execSetMode)
{
	P_GET_ENUM(ECMode,Z_Param_mode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMode(ECMode(Z_Param_mode));
	P_NATIVE_END;
}
// End Class ASplitScreenGamode Function SetMode

// Begin Class ASplitScreenGamode
void ASplitScreenGamode::StaticRegisterNativesASplitScreenGamode()
{
	UClass* Class = ASplitScreenGamode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddUIWidgetToScreen", &ASplitScreenGamode::execAddUIWidgetToScreen },
		{ "IniScreen", &ASplitScreenGamode::execIniScreen },
		{ "SetMode", &ASplitScreenGamode::execSetMode },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SplitScreenGamode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SplitScreenGamode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pScreenManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/SplitScreenGamode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cCamWidget_MetaData[] = {
		{ "Category", "Spilt Screen" },
		{ "ModuleRelativePath", "Public/SplitScreenGamode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_cContainerWidegt_MetaData[] = {
		{ "Category", "Spilt Screen" },
		{ "ModuleRelativePath", "Public/SplitScreenGamode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_eCurrentmode_MetaData[] = {
		{ "Category", "Split Screen" },
		{ "ModuleRelativePath", "Public/SplitScreenGamode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_pScreenManager;
	static const UECodeGen_Private::FClassPropertyParams NewProp_cCamWidget;
	static const UECodeGen_Private::FClassPropertyParams NewProp_cContainerWidegt;
	static const UECodeGen_Private::FBytePropertyParams NewProp_eCurrentmode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_eCurrentmode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ASplitScreenGamode_AddUIWidgetToScreen, "AddUIWidgetToScreen" }, // 2858426862
		{ &Z_Construct_UFunction_ASplitScreenGamode_IniScreen, "IniScreen" }, // 2071581617
		{ &Z_Construct_UFunction_ASplitScreenGamode_SetMode, "SetMode" }, // 2212606762
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASplitScreenGamode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplitScreenGamode_Statics::NewProp_pScreenManager = { "pScreenManager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASplitScreenGamode, pScreenManager), Z_Construct_UClass_UScreenManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pScreenManager_MetaData), NewProp_pScreenManager_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASplitScreenGamode_Statics::NewProp_cCamWidget = { "cCamWidget", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASplitScreenGamode, cCamWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UCamWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cCamWidget_MetaData), NewProp_cCamWidget_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASplitScreenGamode_Statics::NewProp_cContainerWidegt = { "cContainerWidegt", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASplitScreenGamode, cContainerWidegt), Z_Construct_UClass_UClass, Z_Construct_UClass_UContainerWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_cContainerWidegt_MetaData), NewProp_cContainerWidegt_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASplitScreenGamode_Statics::NewProp_eCurrentmode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASplitScreenGamode_Statics::NewProp_eCurrentmode = { "eCurrentmode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASplitScreenGamode, eCurrentmode), Z_Construct_UEnum_BTeamProjectTilde_ECMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_eCurrentmode_MetaData), NewProp_eCurrentmode_MetaData) }; // 3806085766
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASplitScreenGamode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplitScreenGamode_Statics::NewProp_pScreenManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplitScreenGamode_Statics::NewProp_cCamWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplitScreenGamode_Statics::NewProp_cContainerWidegt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplitScreenGamode_Statics::NewProp_eCurrentmode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplitScreenGamode_Statics::NewProp_eCurrentmode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASplitScreenGamode_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_ASplitScreenGamode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ASplitScreenGamode_Statics::PropPointers),
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
DEFINE_VTABLE_PTR_HELPER_CTOR(ASplitScreenGamode);
ASplitScreenGamode::~ASplitScreenGamode() {}
// End Class ASplitScreenGamode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_kevin_Documents_Notes_Semester_4_GAME_PRODUCTON_REPO_BTeamProjectTilde_Source_BTeamProjectTilde_Public_SplitScreenGamode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASplitScreenGamode, ASplitScreenGamode::StaticClass, TEXT("ASplitScreenGamode"), &Z_Registration_Info_UClass_ASplitScreenGamode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASplitScreenGamode), 3863859370U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kevin_Documents_Notes_Semester_4_GAME_PRODUCTON_REPO_BTeamProjectTilde_Source_BTeamProjectTilde_Public_SplitScreenGamode_h_1105240108(TEXT("/Script/BTeamProjectTilde"),
	Z_CompiledInDeferFile_FID_Users_kevin_Documents_Notes_Semester_4_GAME_PRODUCTON_REPO_BTeamProjectTilde_Source_BTeamProjectTilde_Public_SplitScreenGamode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kevin_Documents_Notes_Semester_4_GAME_PRODUCTON_REPO_BTeamProjectTilde_Source_BTeamProjectTilde_Public_SplitScreenGamode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
