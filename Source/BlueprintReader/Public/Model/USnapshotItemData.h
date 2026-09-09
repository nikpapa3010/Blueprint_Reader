// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BlueprintReader.h"
#include "UObject/Object.h"
#include "USnapshotItemData.generated.h"

class UPopUPWindow;

UCLASS(BlueprintType)
class USnapshotItemData : public UObject
{
	GENERATED_BODY()

public:
#pragma region Getters & Setters
	FGuid GetSnapshotID() { return SnapshotID; }
	void SetSnapshotID(FGuid var) { SnapshotID = var; }

	FString GetSnapshotTitle() { return SnapshotTitle; }
	void SetSnapshotTitle(FString var) { SnapshotTitle = var; }


	UPopUPWindow* GetOwnerWindow() { return OwnerWindow; }
	void SetOwnerWindow(UPopUPWindow* var) { OwnerWindow = var; }

	bool GetIsSelected() { return bIsSelected; }
	void SetIsSelected(bool var) { bIsSelected = var; }

	TArray<FSavedValue> GetValues() { return ValueSnapshots; }
	void SetValues(TArray<FSavedValue> var) { ValueSnapshots = var; }
	
#pragma endregion

private:
	FString SnapshotTitle;

	FGuid SnapshotID;

	TArray<FSavedValue> ValueSnapshots;

	UPROPERTY()
	UPopUPWindow* OwnerWindow;

	bool bIsSelected;
};
