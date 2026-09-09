// Fill out your copyright notice in the Description page of Project Settings.


#include "View/PopUPWindow.h"

#include "BlueprintReader.h"
#include "EditorUtilityWidgetComponents.h"


class FBlueprintReaderModule;

void UPopUPWindow::StartTraversal()
{
	OnOptionSelected.Execute(SelectedOption);
}

void UPopUPWindow::ExecuteOnDeleteAllSnapshots()
{
	OnDeleteAllSnapshots.Execute();
}

void UPopUPWindow::ExecuteOnDeleteSelectedSnapshots()
{
	OnDeleteSelectedSnapshots.Execute();
}

void UPopUPWindow::NativeConstruct()
{
	Super::NativeConstruct();
	
	FBlueprintReaderModule& Module = FModuleManager::GetModuleChecked<FBlueprintReaderModule>("BlueprintReader");
	SnapshotHandler = &Module.SnapshotHandler;
}
