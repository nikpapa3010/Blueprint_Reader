// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PopUPWindow.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodePopUPWindow() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTREADER_API UClass* Z_Construct_UClass_UPopUPWindow();
BLUEPRINTREADER_API UClass* Z_Construct_UClass_UPopUPWindow_NoRegister();
BLUEPRINTREADER_API UEnum* Z_Construct_UEnum_BlueprintReader_E_SelectedOption();
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
UPackage* Z_Construct_UPackage__Script_BlueprintReader();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum E_SelectedOption **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_E_SelectedOption;
static UEnum* E_SelectedOption_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_E_SelectedOption.OuterSingleton)
	{
		Z_Registration_Info_UEnum_E_SelectedOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintReader_E_SelectedOption, (UObject*)Z_Construct_UPackage__Script_BlueprintReader(), TEXT("E_SelectedOption"));
	}
	return Z_Registration_Info_UEnum_E_SelectedOption.OuterSingleton;
}
template<> BLUEPRINTREADER_NON_ATTRIBUTED_API UEnum* StaticEnum<E_SelectedOption>()
{
	return E_SelectedOption_StaticEnum();
}
struct Z_Construct_UEnum_BlueprintReader_E_SelectedOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ESP_EventNodes.DisplayName", "All Event Nodes" },
		{ "ESP_EventNodes.Name", "E_SelectedOption::ESP_EventNodes" },
		{ "ESP_Max.DisplayName", "DefaultMAX" },
		{ "ESP_Max.Name", "E_SelectedOption::ESP_Max" },
		{ "ESP_MultipleNodes.DisplayName", "Read from all selected Nodes (experimental)" },
		{ "ESP_MultipleNodes.Name", "E_SelectedOption::ESP_MultipleNodes" },
		{ "ESP_SelectedNode.DisplayName", "Read from selected Node" },
		{ "ESP_SelectedNode.Name", "E_SelectedOption::ESP_SelectedNode" },
		{ "ModuleRelativePath", "Public/View/PopUPWindow.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "E_SelectedOption::ESP_SelectedNode", (int64)E_SelectedOption::ESP_SelectedNode },
		{ "E_SelectedOption::ESP_MultipleNodes", (int64)E_SelectedOption::ESP_MultipleNodes },
		{ "E_SelectedOption::ESP_EventNodes", (int64)E_SelectedOption::ESP_EventNodes },
		{ "E_SelectedOption::ESP_Max", (int64)E_SelectedOption::ESP_Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_BlueprintReader_E_SelectedOption_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintReader_E_SelectedOption_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BlueprintReader,
	nullptr,
	"E_SelectedOption",
	"E_SelectedOption",
	Z_Construct_UEnum_BlueprintReader_E_SelectedOption_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintReader_E_SelectedOption_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintReader_E_SelectedOption_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BlueprintReader_E_SelectedOption_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BlueprintReader_E_SelectedOption()
{
	if (!Z_Registration_Info_UEnum_E_SelectedOption.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_E_SelectedOption.InnerSingleton, Z_Construct_UEnum_BlueprintReader_E_SelectedOption_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_E_SelectedOption.InnerSingleton;
}
// ********** End Enum E_SelectedOption ************************************************************

// ********** Begin Class UPopUPWindow Function ExecuteOnDeleteAllSnapshots ************************
struct Z_Construct_UFunction_UPopUPWindow_ExecuteOnDeleteAllSnapshots_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OptionSelect" },
		{ "ModuleRelativePath", "Public/View/PopUPWindow.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ExecuteOnDeleteAllSnapshots constinit property declarations ***********
// ********** End Function ExecuteOnDeleteAllSnapshots constinit property declarations *************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPopUPWindow_ExecuteOnDeleteAllSnapshots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPopUPWindow, nullptr, "ExecuteOnDeleteAllSnapshots", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPopUPWindow_ExecuteOnDeleteAllSnapshots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPopUPWindow_ExecuteOnDeleteAllSnapshots_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPopUPWindow_ExecuteOnDeleteAllSnapshots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPopUPWindow_ExecuteOnDeleteAllSnapshots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPopUPWindow::execExecuteOnDeleteAllSnapshots)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteOnDeleteAllSnapshots();
	P_NATIVE_END;
}
// ********** End Class UPopUPWindow Function ExecuteOnDeleteAllSnapshots **************************

// ********** Begin Class UPopUPWindow Function ExecuteOnDeleteSelectedSnapshots *******************
struct Z_Construct_UFunction_UPopUPWindow_ExecuteOnDeleteSelectedSnapshots_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OptionSelect" },
		{ "ModuleRelativePath", "Public/View/PopUPWindow.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function ExecuteOnDeleteSelectedSnapshots constinit property declarations ******
// ********** End Function ExecuteOnDeleteSelectedSnapshots constinit property declarations ********
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPopUPWindow_ExecuteOnDeleteSelectedSnapshots_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPopUPWindow, nullptr, "ExecuteOnDeleteSelectedSnapshots", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPopUPWindow_ExecuteOnDeleteSelectedSnapshots_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPopUPWindow_ExecuteOnDeleteSelectedSnapshots_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPopUPWindow_ExecuteOnDeleteSelectedSnapshots()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPopUPWindow_ExecuteOnDeleteSelectedSnapshots_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPopUPWindow::execExecuteOnDeleteSelectedSnapshots)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteOnDeleteSelectedSnapshots();
	P_NATIVE_END;
}
// ********** End Class UPopUPWindow Function ExecuteOnDeleteSelectedSnapshots *********************

// ********** Begin Class UPopUPWindow Function SetSelectedOption **********************************
struct Z_Construct_UFunction_UPopUPWindow_SetSelectedOption_Statics
{
	struct PopUPWindow_eventSetSelectedOption_Parms
	{
		E_SelectedOption var;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OptionSelect" },
		{ "ModuleRelativePath", "Public/View/PopUPWindow.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetSelectedOption constinit property declarations *********************
	static const UECodeGen_Private::FBytePropertyParams NewProp_var_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_var;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetSelectedOption constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetSelectedOption Property Definitions ********************************
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPopUPWindow_SetSelectedOption_Statics::NewProp_var_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UPopUPWindow_SetSelectedOption_Statics::NewProp_var = { "var", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PopUPWindow_eventSetSelectedOption_Parms, var), Z_Construct_UEnum_BlueprintReader_E_SelectedOption, METADATA_PARAMS(0, nullptr) }; // 913861500
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPopUPWindow_SetSelectedOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPopUPWindow_SetSelectedOption_Statics::NewProp_var_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPopUPWindow_SetSelectedOption_Statics::NewProp_var,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPopUPWindow_SetSelectedOption_Statics::PropPointers) < 2048);
// ********** End Function SetSelectedOption Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPopUPWindow_SetSelectedOption_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPopUPWindow, nullptr, "SetSelectedOption", 	Z_Construct_UFunction_UPopUPWindow_SetSelectedOption_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UPopUPWindow_SetSelectedOption_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UPopUPWindow_SetSelectedOption_Statics::PopUPWindow_eventSetSelectedOption_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPopUPWindow_SetSelectedOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPopUPWindow_SetSelectedOption_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UPopUPWindow_SetSelectedOption_Statics::PopUPWindow_eventSetSelectedOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPopUPWindow_SetSelectedOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPopUPWindow_SetSelectedOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPopUPWindow::execSetSelectedOption)
{
	P_GET_ENUM(E_SelectedOption,Z_Param_var);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSelectedOption(E_SelectedOption(Z_Param_var));
	P_NATIVE_END;
}
// ********** End Class UPopUPWindow Function SetSelectedOption ************************************

// ********** Begin Class UPopUPWindow Function StartTraversal *************************************
struct Z_Construct_UFunction_UPopUPWindow_StartTraversal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "OptionSelect" },
		{ "ModuleRelativePath", "Public/View/PopUPWindow.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartTraversal constinit property declarations ************************
// ********** End Function StartTraversal constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPopUPWindow_StartTraversal_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UPopUPWindow, nullptr, "StartTraversal", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPopUPWindow_StartTraversal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPopUPWindow_StartTraversal_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UPopUPWindow_StartTraversal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPopUPWindow_StartTraversal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPopUPWindow::execStartTraversal)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartTraversal();
	P_NATIVE_END;
}
// ********** End Class UPopUPWindow Function StartTraversal ***************************************

// ********** Begin Class UPopUPWindow *************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UPopUPWindow;
UClass* UPopUPWindow::GetPrivateStaticClass()
{
	using TClass = UPopUPWindow;
	if (!Z_Registration_Info_UClass_UPopUPWindow.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("PopUPWindow"),
			Z_Registration_Info_UClass_UPopUPWindow.InnerSingleton,
			StaticRegisterNativesUPopUPWindow,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UPopUPWindow.InnerSingleton;
}
UClass* Z_Construct_UClass_UPopUPWindow_NoRegister()
{
	return UPopUPWindow::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UPopUPWindow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "View/PopUPWindow.h" },
		{ "ModuleRelativePath", "Public/View/PopUPWindow.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UPopUPWindow constinit property declarations *****************************
// ********** End Class UPopUPWindow constinit property declarations *******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ExecuteOnDeleteAllSnapshots"), .Pointer = &UPopUPWindow::execExecuteOnDeleteAllSnapshots },
		{ .NameUTF8 = UTF8TEXT("ExecuteOnDeleteSelectedSnapshots"), .Pointer = &UPopUPWindow::execExecuteOnDeleteSelectedSnapshots },
		{ .NameUTF8 = UTF8TEXT("SetSelectedOption"), .Pointer = &UPopUPWindow::execSetSelectedOption },
		{ .NameUTF8 = UTF8TEXT("StartTraversal"), .Pointer = &UPopUPWindow::execStartTraversal },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPopUPWindow_ExecuteOnDeleteAllSnapshots, "ExecuteOnDeleteAllSnapshots" }, // 3621734120
		{ &Z_Construct_UFunction_UPopUPWindow_ExecuteOnDeleteSelectedSnapshots, "ExecuteOnDeleteSelectedSnapshots" }, // 1056197359
		{ &Z_Construct_UFunction_UPopUPWindow_SetSelectedOption, "SetSelectedOption" }, // 3868657325
		{ &Z_Construct_UFunction_UPopUPWindow_StartTraversal, "StartTraversal" }, // 1400208400
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPopUPWindow>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UPopUPWindow_Statics
UObject* (*const Z_Construct_UClass_UPopUPWindow_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintReader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPopUPWindow_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPopUPWindow_Statics::ClassParams = {
	&UPopUPWindow::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPopUPWindow_Statics::Class_MetaDataParams), Z_Construct_UClass_UPopUPWindow_Statics::Class_MetaDataParams)
};
void UPopUPWindow::StaticRegisterNativesUPopUPWindow()
{
	UClass* Class = UPopUPWindow::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UPopUPWindow_Statics::Funcs));
}
UClass* Z_Construct_UClass_UPopUPWindow()
{
	if (!Z_Registration_Info_UClass_UPopUPWindow.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPopUPWindow.OuterSingleton, Z_Construct_UClass_UPopUPWindow_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPopUPWindow.OuterSingleton;
}
UPopUPWindow::UPopUPWindow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UPopUPWindow);
UPopUPWindow::~UPopUPWindow() {}
// ********** End Class UPopUPWindow ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_PopUPWindow_h__Script_BlueprintReader_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ E_SelectedOption_StaticEnum, TEXT("E_SelectedOption"), &Z_Registration_Info_UEnum_E_SelectedOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 913861500U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPopUPWindow, UPopUPWindow::StaticClass, TEXT("UPopUPWindow"), &Z_Registration_Info_UClass_UPopUPWindow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPopUPWindow), 2829433302U) },
	};
}; // Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_PopUPWindow_h__Script_BlueprintReader_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_PopUPWindow_h__Script_BlueprintReader_1802654346{
	TEXT("/Script/BlueprintReader"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_PopUPWindow_h__Script_BlueprintReader_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_PopUPWindow_h__Script_BlueprintReader_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_PopUPWindow_h__Script_BlueprintReader_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_PopUPWindow_h__Script_BlueprintReader_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
