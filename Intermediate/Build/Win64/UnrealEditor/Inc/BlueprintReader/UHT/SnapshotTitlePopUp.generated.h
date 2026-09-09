// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "View/SnapshotTitlePopUp.h"

#ifdef BLUEPRINTREADER_SnapshotTitlePopUp_generated_h
#error "SnapshotTitlePopUp.generated.h already included, missing '#pragma once' in SnapshotTitlePopUp.h"
#endif
#define BLUEPRINTREADER_SnapshotTitlePopUp_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USnapshotTitlePopUp ******************************************************
#define FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_SnapshotTitlePopUp_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCallOnComplete);


struct Z_Construct_UClass_USnapshotTitlePopUp_Statics;
BLUEPRINTREADER_API UClass* Z_Construct_UClass_USnapshotTitlePopUp_NoRegister();

#define FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_SnapshotTitlePopUp_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSnapshotTitlePopUp(); \
	friend struct ::Z_Construct_UClass_USnapshotTitlePopUp_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTREADER_API UClass* ::Z_Construct_UClass_USnapshotTitlePopUp_NoRegister(); \
public: \
	DECLARE_CLASS2(USnapshotTitlePopUp, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlueprintReader"), Z_Construct_UClass_USnapshotTitlePopUp_NoRegister) \
	DECLARE_SERIALIZER(USnapshotTitlePopUp)


#define FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_SnapshotTitlePopUp_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USnapshotTitlePopUp(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USnapshotTitlePopUp(USnapshotTitlePopUp&&) = delete; \
	USnapshotTitlePopUp(const USnapshotTitlePopUp&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USnapshotTitlePopUp); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USnapshotTitlePopUp); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USnapshotTitlePopUp) \
	NO_API virtual ~USnapshotTitlePopUp();


#define FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_SnapshotTitlePopUp_h_16_PROLOG
#define FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_SnapshotTitlePopUp_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_SnapshotTitlePopUp_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_SnapshotTitlePopUp_h_19_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_SnapshotTitlePopUp_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USnapshotTitlePopUp;

// ********** End Class USnapshotTitlePopUp ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_SnapshotTitlePopUp_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
