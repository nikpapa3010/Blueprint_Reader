// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "SnapshotHandler.h"
#include "Modules/ModuleManager.h"

class UPopUPWindow;
class UEditorUtilityEditableText;

struct FSavedValue
{
	FString ValueName;
	FString Value;
};

struct FSnapshot
{
	FString SnapshotTitle;
	TArray<FSavedValue> ValueSnapshots;
	FGuid SnapshotID;
	// Defining this to satisfy TArray's search requirements
	bool operator==(const FSnapshot& Other) const
	{
		return SnapshotID == Other.SnapshotID;
	}
};
class NodeReading;
enum class E_SelectedOption : uint8;
class UBlueprintEditorToolMenuContext;

class FBlueprintReaderModule : public IModuleInterface
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
	FSnapshotHandler SnapshotHandler;

#pragma region BluepritnReadingExtention
	FToolMenuEntry& CreateGetNodesButtonEntry(FToolMenuSection& Section);


	void HandleNodeRead(E_SelectedOption SelectedOption, UBlueprintEditorToolMenuContext* Context);

#pragma  endregion

private:
#pragma region BluepritnReadingExtention

	void InitPBMenuExtention();

	TSharedPtr<FExtender> ToolbarExtender;

	NodeReading* ReadingHelper = nullptr;

#pragma  endregion
};
