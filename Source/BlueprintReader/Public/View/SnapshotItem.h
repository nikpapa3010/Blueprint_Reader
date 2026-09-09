// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "Blueprint/UserWidget.h"
#include "Components/CheckBox.h"
#include "SnapshotItem.generated.h"

class USnapshotItemData;
class FSnapshotHandler;
class UTextBlock;
/**
 * 
 */
UCLASS()
class BLUEPRINTREADER_API USnapshotItem : public UUserWidget, public IUserObjectListEntry
{
	GENERATED_BODY()

public:
	UPROPERTY(meta =(BindWidget))
	UTextBlock* SnapshotTitle;

	UPROPERTY(meta =(BindWidget))
	UCheckBox* SnapshotCheckBox;
	
	UFUNCTION(BlueprintCallable, Category = "Logic handling")
	void HandleCheckBoxOnClick(bool State);

	UPROPERTY()
	USnapshotItemData* SnapshotData;

protected:
	virtual void NativeOnListItemObjectSet(UObject* ListItemObject) override;
	virtual void NativeConstruct() override;

private:
	FSnapshotHandler* SnapshotHandler;
};
