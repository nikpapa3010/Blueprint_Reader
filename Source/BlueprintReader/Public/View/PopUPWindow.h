// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EditorUtilityWidget.h"
#include "SnapshotHandler.h"
#include "PopUPWindow.generated.h"


class FSnapshotHandler;
class UEditorUtilityListView;

UENUM()
enum class E_SelectedOption: uint8
{
	ESP_SelectedNode UMETA(DisplayName = "Read from selected Node"),

	ESP_MultipleNodes UMETA(DisplayName = "Read from all selected Nodes (experimental)"),

	ESP_EventNodes UMETA(DisplayName ="All Event Nodes"),

	ESP_Max UMETA(DisplayName ="DefaultMAX")
};

DECLARE_DELEGATE_OneParam(FOnOptionSelected, E_SelectedOption);
DECLARE_DELEGATE(FOnDeleteAllSnapshots);
DECLARE_DELEGATE(FOnDeleteSelectedSnapshots);

/**
 * 
 */
UCLASS()
class BLUEPRINTREADER_API UPopUPWindow : public UEditorUtilityWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category="OptionSelect")
	inline void SetSelectedOption(E_SelectedOption var) { SelectedOption = var; }

	UFUNCTION(BlueprintCallable, Category="OptionSelect")
	void StartTraversal();

	UFUNCTION(BlueprintCallable, Category="OptionSelect")
	void ExecuteOnDeleteAllSnapshots();

	UFUNCTION(BlueprintCallable, Category="OptionSelect")
	void ExecuteOnDeleteSelectedSnapshots();


	FOnOptionSelected OnOptionSelected;

	FOnDeleteAllSnapshots OnDeleteAllSnapshots;

	FOnDeleteSelectedSnapshots OnDeleteSelectedSnapshots;

	


	FSnapshotHandler* SnapshotHandler;
virtual void NativeConstruct() override;
private:
	E_SelectedOption SelectedOption;
};
