// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Model/USnapshotItemData.h"

#ifdef BLUEPRINTREADER_USnapshotItemData_generated_h
#error "USnapshotItemData.generated.h already included, missing '#pragma once' in USnapshotItemData.h"
#endif
#define BLUEPRINTREADER_USnapshotItemData_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USnapshotItemData ********************************************************
struct Z_Construct_UClass_USnapshotItemData_Statics;
BLUEPRINTREADER_API UClass* Z_Construct_UClass_USnapshotItemData_NoRegister();

#define FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_Model_USnapshotItemData_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSnapshotItemData(); \
	friend struct ::Z_Construct_UClass_USnapshotItemData_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTREADER_API UClass* ::Z_Construct_UClass_USnapshotItemData_NoRegister(); \
public: \
	DECLARE_CLASS2(USnapshotItemData, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintReader"), Z_Construct_UClass_USnapshotItemData_NoRegister) \
	DECLARE_SERIALIZER(USnapshotItemData)


#define FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_Model_USnapshotItemData_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USnapshotItemData(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USnapshotItemData(USnapshotItemData&&) = delete; \
	USnapshotItemData(const USnapshotItemData&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USnapshotItemData); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USnapshotItemData); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USnapshotItemData) \
	NO_API virtual ~USnapshotItemData();


#define FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_Model_USnapshotItemData_h_12_PROLOG
#define FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_Model_USnapshotItemData_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_Model_USnapshotItemData_h_15_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_Model_USnapshotItemData_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USnapshotItemData;

// ********** End Class USnapshotItemData **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_Model_USnapshotItemData_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
