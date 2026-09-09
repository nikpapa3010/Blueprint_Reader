#pragma once
#include "SnapshotItem.h"


class UEditorUtilityListView;
class UListView;

class FSnapshotHandler
{
public:
	void HandleNewSelectedItem();

	void CheckSelectedItem(USnapshotItem* Item);

	TWeakObjectPtr<UEditorUtilityListView> OwnerList;

private:
	TWeakObjectPtr<USnapshotItem> CurrentSelectedItem = nullptr;
	TWeakObjectPtr<USnapshotItem> NewSelectedItem = nullptr;

#pragma region Getters & Setters

public:
	[[nodiscard]] USnapshotItem* GetCurrentSelectedItem() const
	{
		return CurrentSelectedItem.IsValid() ? CurrentSelectedItem.Get() : nullptr;
	}

	void SetCurrentSelectedItem(USnapshotItem* var)
	{
		this->CurrentSelectedItem = var;
	}

#pragma endregion
};
