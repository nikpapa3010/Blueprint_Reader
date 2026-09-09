// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnapshotItem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSnapshotItem() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTREADER_API UClass* Z_Construct_UClass_USnapshotItem();
BLUEPRINTREADER_API UClass* Z_Construct_UClass_USnapshotItem_NoRegister();
BLUEPRINTREADER_API UClass* Z_Construct_UClass_USnapshotItemData_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCheckBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_BlueprintReader();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USnapshotItem Function HandleCheckBoxOnClick *****************************
struct Z_Construct_UFunction_USnapshotItem_HandleCheckBoxOnClick_Statics
{
	struct SnapshotItem_eventHandleCheckBoxOnClick_Parms
	{
		bool State;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Logic handling" },
		{ "ModuleRelativePath", "Public/View/SnapshotItem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function HandleCheckBoxOnClick constinit property declarations *****************
	static void NewProp_State_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function HandleCheckBoxOnClick constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function HandleCheckBoxOnClick Property Definitions ****************************
void Z_Construct_UFunction_USnapshotItem_HandleCheckBoxOnClick_Statics::NewProp_State_SetBit(void* Obj)
{
	((SnapshotItem_eventHandleCheckBoxOnClick_Parms*)Obj)->State = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USnapshotItem_HandleCheckBoxOnClick_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SnapshotItem_eventHandleCheckBoxOnClick_Parms), &Z_Construct_UFunction_USnapshotItem_HandleCheckBoxOnClick_Statics::NewProp_State_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USnapshotItem_HandleCheckBoxOnClick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USnapshotItem_HandleCheckBoxOnClick_Statics::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USnapshotItem_HandleCheckBoxOnClick_Statics::PropPointers) < 2048);
// ********** End Function HandleCheckBoxOnClick Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapshotItem_HandleCheckBoxOnClick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USnapshotItem, nullptr, "HandleCheckBoxOnClick", 	Z_Construct_UFunction_USnapshotItem_HandleCheckBoxOnClick_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_USnapshotItem_HandleCheckBoxOnClick_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_USnapshotItem_HandleCheckBoxOnClick_Statics::SnapshotItem_eventHandleCheckBoxOnClick_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USnapshotItem_HandleCheckBoxOnClick_Statics::Function_MetaDataParams), Z_Construct_UFunction_USnapshotItem_HandleCheckBoxOnClick_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_USnapshotItem_HandleCheckBoxOnClick_Statics::SnapshotItem_eventHandleCheckBoxOnClick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USnapshotItem_HandleCheckBoxOnClick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapshotItem_HandleCheckBoxOnClick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USnapshotItem::execHandleCheckBoxOnClick)
{
	P_GET_UBOOL(Z_Param_State);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleCheckBoxOnClick(Z_Param_State);
	P_NATIVE_END;
}
// ********** End Class USnapshotItem Function HandleCheckBoxOnClick *******************************

// ********** Begin Class USnapshotItem ************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USnapshotItem;
UClass* USnapshotItem::GetPrivateStaticClass()
{
	using TClass = USnapshotItem;
	if (!Z_Registration_Info_UClass_USnapshotItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SnapshotItem"),
			Z_Registration_Info_UClass_USnapshotItem.InnerSingleton,
			StaticRegisterNativesUSnapshotItem,
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
	return Z_Registration_Info_UClass_USnapshotItem.InnerSingleton;
}
UClass* Z_Construct_UClass_USnapshotItem_NoRegister()
{
	return USnapshotItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USnapshotItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "View/SnapshotItem.h" },
		{ "ModuleRelativePath", "Public/View/SnapshotItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotTitle_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/View/SnapshotItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotCheckBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/View/SnapshotItem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotData_MetaData[] = {
		{ "ModuleRelativePath", "Public/View/SnapshotItem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USnapshotItem constinit property declarations ****************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SnapshotTitle;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SnapshotCheckBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SnapshotData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USnapshotItem constinit property declarations ******************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("HandleCheckBoxOnClick"), .Pointer = &USnapshotItem::execHandleCheckBoxOnClick },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USnapshotItem_HandleCheckBoxOnClick, "HandleCheckBoxOnClick" }, // 749037244
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapshotItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USnapshotItem_Statics

// ********** Begin Class USnapshotItem Property Definitions ***************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapshotItem_Statics::NewProp_SnapshotTitle = { "SnapshotTitle", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapshotItem, SnapshotTitle), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapshotTitle_MetaData), NewProp_SnapshotTitle_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapshotItem_Statics::NewProp_SnapshotCheckBox = { "SnapshotCheckBox", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapshotItem, SnapshotCheckBox), Z_Construct_UClass_UCheckBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapshotCheckBox_MetaData), NewProp_SnapshotCheckBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapshotItem_Statics::NewProp_SnapshotData = { "SnapshotData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapshotItem, SnapshotData), Z_Construct_UClass_USnapshotItemData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapshotData_MetaData), NewProp_SnapshotData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapshotItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapshotItem_Statics::NewProp_SnapshotTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapshotItem_Statics::NewProp_SnapshotCheckBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapshotItem_Statics::NewProp_SnapshotData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapshotItem_Statics::PropPointers) < 2048);
// ********** End Class USnapshotItem Property Definitions *****************************************
UObject* (*const Z_Construct_UClass_USnapshotItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintReader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapshotItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USnapshotItem_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUserObjectListEntry_NoRegister, (int32)VTABLE_OFFSET(USnapshotItem, IUserObjectListEntry), false },  // 1012633399
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapshotItem_Statics::ClassParams = {
	&USnapshotItem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USnapshotItem_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USnapshotItem_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapshotItem_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapshotItem_Statics::Class_MetaDataParams)
};
void USnapshotItem::StaticRegisterNativesUSnapshotItem()
{
	UClass* Class = USnapshotItem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USnapshotItem_Statics::Funcs));
}
UClass* Z_Construct_UClass_USnapshotItem()
{
	if (!Z_Registration_Info_UClass_USnapshotItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapshotItem.OuterSingleton, Z_Construct_UClass_USnapshotItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapshotItem.OuterSingleton;
}
USnapshotItem::USnapshotItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USnapshotItem);
USnapshotItem::~USnapshotItem() {}
// ********** End Class USnapshotItem **************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_SnapshotItem_h__Script_BlueprintReader_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapshotItem, USnapshotItem::StaticClass, TEXT("USnapshotItem"), &Z_Registration_Info_UClass_USnapshotItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapshotItem), 2869914743U) },
	};
}; // Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_SnapshotItem_h__Script_BlueprintReader_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_SnapshotItem_h__Script_BlueprintReader_3462852886{
	TEXT("/Script/BlueprintReader"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_SnapshotItem_h__Script_BlueprintReader_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_SnapshotItem_h__Script_BlueprintReader_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
