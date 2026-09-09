// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EditorUtilityWidget.h"
#include "Components/TextBlock.h"
#include "SnapshotTitlePopUp.generated.h"

class UEditorUtilityEditableText;
/**
 * 
 */
DECLARE_DELEGATE(FOnCompleted)

UCLASS()
class BLUEPRINTREADER_API USnapshotTitlePopUp : public UEditorUtilityWidget
{
	GENERATED_BODY()

public:
	UPROPERTY(meta = (BindWidget))
	UEditorUtilityEditableText* SnapshotTitle;

	FOnCompleted OnCompleted;

	UFUNCTION(BlueprintCallable, Category = "Delegate handling")
	void CallOnComplete() { OnCompleted.Execute(); }
};
