// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "View/PopUPWindow.h"

#ifdef BLUEPRINTREADER_PopUPWindow_generated_h
#error "PopUPWindow.generated.h already included, missing '#pragma once' in PopUPWindow.h"
#endif
#define BLUEPRINTREADER_PopUPWindow_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class E_SelectedOption : uint8;

// ********** Begin Class UPopUPWindow *************************************************************
#define FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_PopUPWindow_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExecuteOnDeleteSelectedSnapshots); \
	DECLARE_FUNCTION(execExecuteOnDeleteAllSnapshots); \
	DECLARE_FUNCTION(execStartTraversal); \
	DECLARE_FUNCTION(execSetSelectedOption);


struct Z_Construct_UClass_UPopUPWindow_Statics;
BLUEPRINTREADER_API UClass* Z_Construct_UClass_UPopUPWindow_NoRegister();

#define FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_PopUPWindow_h_36_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPopUPWindow(); \
	friend struct ::Z_Construct_UClass_UPopUPWindow_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend BLUEPRINTREADER_API UClass* ::Z_Construct_UClass_UPopUPWindow_NoRegister(); \
public: \
	DECLARE_CLASS2(UPopUPWindow, UEditorUtilityWidget, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BlueprintReader"), Z_Construct_UClass_UPopUPWindow_NoRegister) \
	DECLARE_SERIALIZER(UPopUPWindow)


#define FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_PopUPWindow_h_36_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPopUPWindow(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UPopUPWindow(UPopUPWindow&&) = delete; \
	UPopUPWindow(const UPopUPWindow&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPopUPWindow); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPopUPWindow); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPopUPWindow) \
	NO_API virtual ~UPopUPWindow();


#define FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_PopUPWindow_h_33_PROLOG
#define FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_PopUPWindow_h_36_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_PopUPWindow_h_36_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_PopUPWindow_h_36_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_PopUPWindow_h_36_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UPopUPWindow;

// ********** End Class UPopUPWindow ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_BlueprintReader_Source_BlueprintReader_Public_View_PopUPWindow_h

// ********** Begin Enum E_SelectedOption **********************************************************
#define FOREACH_ENUM_E_SELECTEDOPTION(op) \
	op(E_SelectedOption::ESP_SelectedNode) \
	op(E_SelectedOption::ESP_MultipleNodes) \
	op(E_SelectedOption::ESP_EventNodes) \
	op(E_SelectedOption::ESP_Max) 

enum class E_SelectedOption : uint8;
template<> struct TIsUEnumClass<E_SelectedOption> { enum { Value = true }; };
template<> BLUEPRINTREADER_NON_ATTRIBUTED_API UEnum* StaticEnum<E_SelectedOption>();
// ********** End Enum E_SelectedOption ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
