// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "View/SnapshotItem.h"

#ifdef BLUEPRINTREADER_SnapshotItem_generated_h
#error "SnapshotItem.generated.h already included, missing '#pragma once' in SnapshotItem.h"
#endif
#define BLUEPRINTREADER_SnapshotItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USnapshotItem ************************************************************
#define FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_SnapshotItem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleCheckBoxOnClick);


struct Z_Construct_UClass_USnapshotItem_Statics;
BLUEPRINTREADER_API UClass* Z_Construct_UClass_USnapshotItem_NoRegister();

#define FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_SnapshotItem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSnapshotItem(); \
	friend struct ::Z_Construct_UClass_USnapshotItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTREADER_API UClass* ::Z_Construct_UClass_USnapshotItem_NoRegister(); \
public: \
	DECLARE_CLASS2(USnapshotItem, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintReader"), Z_Construct_UClass_USnapshotItem_NoRegister) \
	DECLARE_SERIALIZER(USnapshotItem) \
	virtual UObject* _getUObject() const override { return const_cast<USnapshotItem*>(this); }


#define FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_SnapshotItem_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USnapshotItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USnapshotItem(USnapshotItem&&) = delete; \
	USnapshotItem(const USnapshotItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USnapshotItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USnapshotItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USnapshotItem) \
	NO_API virtual ~USnapshotItem();


#define FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_SnapshotItem_h_17_PROLOG
#define FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_SnapshotItem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_SnapshotItem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_SnapshotItem_h_20_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_SnapshotItem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USnapshotItem;

// ********** End Class USnapshotItem **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_SnapshotItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
