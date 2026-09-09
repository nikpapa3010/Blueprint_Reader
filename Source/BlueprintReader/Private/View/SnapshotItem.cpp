// Fill out your copyright notice in the Description page of Project Settings.


#include "View/SnapshotItem.h"

#include "BlueprintReader.h"
#include "PopUPWindow.h"
#include "SnapshotHandler.h"
#include "Components/ListView.h"
#include "Model/USnapshotItemData.h"
#include "Components/TextBlock.h"
#include "Helpers/DebugHeader.h"


void USnapshotItem::HandleCheckBoxOnClick(bool State)
{
	if (State)
	{
		if (SnapshotHandler)
			SnapshotHandler->CheckSelectedItem(this);
	}
	else
	{
		if (SnapshotHandler)
			SnapshotHandler->SetCurrentSelectedItem(nullptr);
	}
}


void USnapshotItem::NativeOnListItemObjectSet(UObject* ListItemObject)
{
	IUserObjectListEntry::NativeOnListItemObjectSet(ListItemObject);
	SnapshotData = Cast<USnapshotItemData>(ListItemObject);
	if (SnapshotData && SnapshotTitle)
	{
		SnapshotTitle->SetText(FText::FromString(SnapshotData->GetSnapshotTitle()));
		SnapshotHandler = SnapshotData->GetOwnerWindow()->SnapshotHandler;
		SnapshotCheckBox->SetCheckedState(
			SnapshotData->GetIsSelected() ? ECheckBoxState::Checked : ECheckBoxState::Unchecked
		);
	}
}

void USnapshotItem::NativeConstruct()
{
	Super::NativeConstruct();
	//reinject the Snapshothandler from Module aftger live coding...
	FBlueprintReaderModule& Module = FModuleManager::GetModuleChecked<FBlueprintReaderModule>("BlueprintReader");
	SnapshotHandler = &Module.SnapshotHandler;
}
