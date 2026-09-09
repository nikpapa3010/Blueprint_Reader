// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SnapshotTitlePopUp.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSnapshotTitlePopUp() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTREADER_API UClass* Z_Construct_UClass_USnapshotTitlePopUp();
BLUEPRINTREADER_API UClass* Z_Construct_UClass_USnapshotTitlePopUp_NoRegister();
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityEditableText_NoRegister();
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget();
UPackage* Z_Construct_UPackage__Script_BlueprintReader();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USnapshotTitlePopUp Function CallOnComplete ******************************
struct Z_Construct_UFunction_USnapshotTitlePopUp_CallOnComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Delegate handling" },
		{ "ModuleRelativePath", "Public/View/SnapshotTitlePopUp.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function CallOnComplete constinit property declarations ************************
// ********** End Function CallOnComplete constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USnapshotTitlePopUp_CallOnComplete_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USnapshotTitlePopUp, nullptr, "CallOnComplete", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USnapshotTitlePopUp_CallOnComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_USnapshotTitlePopUp_CallOnComplete_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USnapshotTitlePopUp_CallOnComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USnapshotTitlePopUp_CallOnComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USnapshotTitlePopUp::execCallOnComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CallOnComplete();
	P_NATIVE_END;
}
// ********** End Class USnapshotTitlePopUp Function CallOnComplete ********************************

// ********** Begin Class USnapshotTitlePopUp ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USnapshotTitlePopUp;
UClass* USnapshotTitlePopUp::GetPrivateStaticClass()
{
	using TClass = USnapshotTitlePopUp;
	if (!Z_Registration_Info_UClass_USnapshotTitlePopUp.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SnapshotTitlePopUp"),
			Z_Registration_Info_UClass_USnapshotTitlePopUp.InnerSingleton,
			StaticRegisterNativesUSnapshotTitlePopUp,
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
	return Z_Registration_Info_UClass_USnapshotTitlePopUp.InnerSingleton;
}
UClass* Z_Construct_UClass_USnapshotTitlePopUp_NoRegister()
{
	return USnapshotTitlePopUp::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USnapshotTitlePopUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "View/SnapshotTitlePopUp.h" },
		{ "ModuleRelativePath", "Public/View/SnapshotTitlePopUp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotTitle_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/View/SnapshotTitlePopUp.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USnapshotTitlePopUp constinit property declarations **********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SnapshotTitle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USnapshotTitlePopUp constinit property declarations ************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("CallOnComplete"), .Pointer = &USnapshotTitlePopUp::execCallOnComplete },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USnapshotTitlePopUp_CallOnComplete, "CallOnComplete" }, // 3929502454
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapshotTitlePopUp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USnapshotTitlePopUp_Statics

// ********** Begin Class USnapshotTitlePopUp Property Definitions *********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapshotTitlePopUp_Statics::NewProp_SnapshotTitle = { "SnapshotTitle", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapshotTitlePopUp, SnapshotTitle), Z_Construct_UClass_UEditorUtilityEditableText_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapshotTitle_MetaData), NewProp_SnapshotTitle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapshotTitlePopUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapshotTitlePopUp_Statics::NewProp_SnapshotTitle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapshotTitlePopUp_Statics::PropPointers) < 2048);
// ********** End Class USnapshotTitlePopUp Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_USnapshotTitlePopUp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorUtilityWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintReader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapshotTitlePopUp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapshotTitlePopUp_Statics::ClassParams = {
	&USnapshotTitlePopUp::StaticClass,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USnapshotTitlePopUp_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USnapshotTitlePopUp_Statics::PropPointers),
	0,
	0x00B010A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapshotTitlePopUp_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapshotTitlePopUp_Statics::Class_MetaDataParams)
};
void USnapshotTitlePopUp::StaticRegisterNativesUSnapshotTitlePopUp()
{
	UClass* Class = USnapshotTitlePopUp::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_USnapshotTitlePopUp_Statics::Funcs));
}
UClass* Z_Construct_UClass_USnapshotTitlePopUp()
{
	if (!Z_Registration_Info_UClass_USnapshotTitlePopUp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapshotTitlePopUp.OuterSingleton, Z_Construct_UClass_USnapshotTitlePopUp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapshotTitlePopUp.OuterSingleton;
}
USnapshotTitlePopUp::USnapshotTitlePopUp(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USnapshotTitlePopUp);
USnapshotTitlePopUp::~USnapshotTitlePopUp() {}
// ********** End Class USnapshotTitlePopUp ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_SnapshotTitlePopUp_h__Script_BlueprintReader_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapshotTitlePopUp, USnapshotTitlePopUp::StaticClass, TEXT("USnapshotTitlePopUp"), &Z_Registration_Info_UClass_USnapshotTitlePopUp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapshotTitlePopUp), 3953786063U) },
	};
}; // Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_SnapshotTitlePopUp_h__Script_BlueprintReader_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_SnapshotTitlePopUp_h__Script_BlueprintReader_3829969109{
	TEXT("/Script/BlueprintReader"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_SnapshotTitlePopUp_h__Script_BlueprintReader_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_SnapshotTitlePopUp_h__Script_BlueprintReader_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
