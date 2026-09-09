#include "SnapshotHandler.h"

#include "EditorUtilityWidgetComponents.h"
#include "Components/ListView.h"
#include "Helpers/DebugHeader.h"
#include "Model/USnapshotItemData.h"

void FSnapshotHandler::HandleNewSelectedItem()
{
	if (CurrentSelectedItem.IsValid())
	{
		CurrentSelectedItem->SnapshotCheckBox->SetCheckedState(ECheckBoxState::Unchecked);
		CurrentSelectedItem->SnapshotData->SetIsSelected(false);
		CurrentSelectedItem = NewSelectedItem;
		CurrentSelectedItem->SnapshotData->SetIsSelected(true);

		NewSelectedItem = nullptr;
	}
}

void FSnapshotHandler::CheckSelectedItem(USnapshotItem* Item)
{
	if (CurrentSelectedItem.IsValid())
	{
		DebugHeader::PrintLog("Current exists, switching selection");
		NewSelectedItem = Item;
		HandleNewSelectedItem();
	}
	else
	{
		DebugHeader::PrintLog("No current, setting first selection");
		CurrentSelectedItem = Item;
		CurrentSelectedItem->SnapshotData->SetIsSelected(false);
		DebugHeader::PrintLog("bIsSelected set to: " + FString(CurrentSelectedItem->SnapshotData->GetIsSelected() ? "true" : "false"));
	}

	if (OwnerList.IsValid())
	{
		DebugHeader::PrintLog("Requesting refresh");
		OwnerList->RequestRefresh();
	}
	else
	{
		DebugHeader::PrintLog("OwnerList is null!");
	}
}
