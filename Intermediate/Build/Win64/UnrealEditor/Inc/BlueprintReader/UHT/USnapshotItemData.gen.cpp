// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Model/USnapshotItemData.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeUSnapshotItemData() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTREADER_API UClass* Z_Construct_UClass_UPopUPWindow_NoRegister();
BLUEPRINTREADER_API UClass* Z_Construct_UClass_USnapshotItemData();
BLUEPRINTREADER_API UClass* Z_Construct_UClass_USnapshotItemData_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BlueprintReader();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USnapshotItemData ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_USnapshotItemData;
UClass* USnapshotItemData::GetPrivateStaticClass()
{
	using TClass = USnapshotItemData;
	if (!Z_Registration_Info_UClass_USnapshotItemData.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("SnapshotItemData"),
			Z_Registration_Info_UClass_USnapshotItemData.InnerSingleton,
			StaticRegisterNativesUSnapshotItemData,
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
	return Z_Registration_Info_UClass_USnapshotItemData.InnerSingleton;
}
UClass* Z_Construct_UClass_USnapshotItemData_NoRegister()
{
	return USnapshotItemData::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USnapshotItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Model/USnapshotItemData.h" },
		{ "ModuleRelativePath", "Public/Model/USnapshotItemData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerWindow_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Model/USnapshotItemData.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class USnapshotItemData constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerWindow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class USnapshotItemData constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USnapshotItemData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_USnapshotItemData_Statics

// ********** Begin Class USnapshotItemData Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USnapshotItemData_Statics::NewProp_OwnerWindow = { "OwnerWindow", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USnapshotItemData, OwnerWindow), Z_Construct_UClass_UPopUPWindow_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerWindow_MetaData), NewProp_OwnerWindow_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USnapshotItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USnapshotItemData_Statics::NewProp_OwnerWindow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapshotItemData_Statics::PropPointers) < 2048);
// ********** End Class USnapshotItemData Property Definitions *************************************
UObject* (*const Z_Construct_UClass_USnapshotItemData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BlueprintReader,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USnapshotItemData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USnapshotItemData_Statics::ClassParams = {
	&USnapshotItemData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USnapshotItemData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USnapshotItemData_Statics::PropPointers),
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USnapshotItemData_Statics::Class_MetaDataParams), Z_Construct_UClass_USnapshotItemData_Statics::Class_MetaDataParams)
};
void USnapshotItemData::StaticRegisterNativesUSnapshotItemData()
{
}
UClass* Z_Construct_UClass_USnapshotItemData()
{
	if (!Z_Registration_Info_UClass_USnapshotItemData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USnapshotItemData.OuterSingleton, Z_Construct_UClass_USnapshotItemData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USnapshotItemData.OuterSingleton;
}
USnapshotItemData::USnapshotItemData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, USnapshotItemData);
USnapshotItemData::~USnapshotItemData() {}
// ********** End Class USnapshotItemData **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_Model_USnapshotItemData_h__Script_BlueprintReader_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USnapshotItemData, USnapshotItemData::StaticClass, TEXT("USnapshotItemData"), &Z_Registration_Info_UClass_USnapshotItemData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USnapshotItemData), 898529480U) },
	};
}; // Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_Model_USnapshotItemData_h__Script_BlueprintReader_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_Model_USnapshotItemData_h__Script_BlueprintReader_2859657426{
	TEXT("/Script/BlueprintReader"),
	Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_Model_USnapshotItemData_h__Script_BlueprintReader_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_Model_USnapshotItemData_h__Script_BlueprintReader_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
