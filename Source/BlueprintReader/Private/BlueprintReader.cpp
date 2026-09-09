// Copyright Epic Games, Inc. All Rights Reserved.

#include "BlueprintReader.h"

#include "BlueprintEditor.h"
#include "BlueprintEditorContext.h"
#include "Helpers/DebugHeader.h"
#include "EditorUtilitySubsystem.h"
#include "EditorUtilityWidgetBlueprint.h"
#include "EditorUtilityWidgetComponents.h"
#include "Controller/NodeReading.h"
#include "Helpers/FReadingBlueprintStyle.h"
#include "Model/USnapshotItemData.h"
#include "View/PopUPWindow.h"
#include "View/SnapshotTitlePopUp.h"


#define LOCTEXT_NAMESPACE "FReadingBlueprintTestModule"

class UEditorUtilitySubsystem;

void FBlueprintReaderModule::StartupModule()
{
	FReadingBlueprintStyle::InitializeIcons();

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(
		this, &FBlueprintReaderModule::InitPBMenuExtention));
}

#pragma region BluepritnReadingExtention


void FBlueprintReaderModule::InitPBMenuExtention()
{
	ReadingHelper = new NodeReading();
	UToolMenus* ToolMenus = UToolMenus::Get();
	if (!ToolMenus) return;

	// Menu name for Blueprint Editor Toolbar
	UToolMenu* ToolBarMenu = ToolMenus->ExtendMenu("AssetEditorToolbar.CommonActions");
	if (!ToolBarMenu) return;


	FToolMenuSection& Section = ToolBarMenu->FindOrAddSection("CommonActions");

	FToolMenuEntry& NodeReadEntry = CreateGetNodesButtonEntry(Section);

	Section.AddEntry(NodeReadEntry);
}


FToolMenuEntry& FBlueprintReaderModule::CreateGetNodesButtonEntry(FToolMenuSection& Section)
{
	FToolMenuEntry& Entry = Section.AddDynamicEntry("GetNodesButton", FNewToolMenuSectionDelegate::CreateLambda([this](FToolMenuSection& InSection)
	{
		//this context means that i can get data from it, e.g. Blueprint editor, this can be like the content and maybe even debug window.
		UBlueprintEditorToolMenuContext* Context = InSection.FindContext<UBlueprintEditorToolMenuContext>();
		if (Context)
		{
			//Creates an execution action for the button to do. 
			FToolUIActionChoice NodeAction(FExecuteAction::CreateLambda([Context, this]()
			{
				UEditorUtilityWidgetBlueprint* WidgetBP = LoadObject<UEditorUtilityWidgetBlueprint>(nullptr, TEXT("/BlueprintReader/UI/BlueprintReaderSettings"));


				if (!WidgetBP) return;

				UEditorUtilitySubsystem* EUS = GEditor->GetEditorSubsystem<UEditorUtilitySubsystem>();
				EUS->SpawnAndRegisterTab(WidgetBP);

				UEditorUtilityWidget* WidgetInstance = EUS->FindUtilityWidgetFromBlueprint(WidgetBP);

				UPopUPWindow* PopUp = Cast<UPopUPWindow>(WidgetInstance);
				if (PopUp)
				{
					PopUp->OnOptionSelected.BindRaw(this, &FBlueprintReaderModule::HandleNodeRead, Context);
				}
			}));

			InSection.AddEntry(FToolMenuEntry::InitMenuEntry(FName("GetNodesButton"),
			                                                 FText::FromString("Get Nodes"),
			                                                 FText::FromString("Gets nodes from this BP"),
			                                                 FSlateIcon(FAppStyle::GetAppStyleSetName(),
			                                                            "Icons.Toolbar.Settings"),
			                                                 NodeAction)
			);
		}
	}));
	Entry.InsertPosition = FToolMenuInsert("FindInContentBrowser", EToolMenuInsertType::After);

	return Entry;
}



void FBlueprintReaderModule::HandleNodeRead(E_SelectedOption SelectedOption, UBlueprintEditorToolMenuContext* Context)
{
	//The blueprint we are in.
	UBlueprint* Blueprint = Context->GetBlueprintObj();
	ReadingHelper->NodeConnections.Empty();


	if (!Blueprint)
	{
		DebugHeader::ShowNotifyInfo(TEXT("No Blueprint found"));
		return;
	}
	TSharedPtr<FBlueprintEditor> BlueprintEditorPtr = Context->BlueprintEditor.Pin();

	FString FinalOutput;
	//Variable to store all nodes.
	TArray<UEdGraphNode*> NodesInGraph;

	// Get nodes from current graph.
	if (BlueprintEditorPtr->GetFocusedGraph())
		BlueprintEditorPtr->GetFocusedGraph()->GetNodesOfClass(NodesInGraph);
	else return;
	USnapshotItemData* ItemData = nullptr;
	USnapshotItem* CurrentSelectedItem = SnapshotHandler.GetCurrentSelectedItem();
	if (CurrentSelectedItem)
		ItemData = CurrentSelectedItem->SnapshotData;
	switch (SelectedOption)
	{
	case E_SelectedOption::ESP_SelectedNode:
		if (BlueprintEditorPtr->GetSingleSelectedNode())
		{
			if (CurrentSelectedItem == nullptr)
				ReadingHelper->NodeTraversal(BlueprintEditorPtr->GetSingleSelectedNode());
			else
				ReadingHelper->NodeTraversalWithValueRead(BlueprintEditorPtr->GetSingleSelectedNode(), Blueprint, ItemData);

			for (auto& Elem : ReadingHelper->NodeConnections)
			{
				if (!Elem.Value.IsEmpty())
					FinalOutput.Append(Elem.Value + "\n");
			}
		}
		else if (BlueprintEditorPtr->GetSelectedNodes().Num() > 1)
		{
			DebugHeader::ShowMsgDialog(EAppMsgType::Ok, "Mulitple Nodes selected");
			return;
		}
		else
		{
			DebugHeader::ShowMsgDialog(EAppMsgType::Ok, "No Node selected!");
			return;
		}
		break;
	case E_SelectedOption::ESP_MultipleNodes:
		{
			FGraphPanelSelectionSet Nodes = BlueprintEditorPtr->GetSelectedNodes();

			for (UObject* SelectedNode : Nodes)
			{
				UEdGraphNode* EdGraphNode = Cast<UEdGraphNode>(SelectedNode);
				if (EdGraphNode == nullptr)
				{
					DebugHeader::PrintLog("Cast to graph node failed");
					continue;
				}
				if (CurrentSelectedItem == nullptr)
					ReadingHelper->NodeTraversal(EdGraphNode);
				else
					ReadingHelper->NodeTraversalWithValueRead(EdGraphNode, Blueprint, ItemData);
			}
			for (auto& Elem : ReadingHelper->NodeConnections)
			{
				if (!Elem.Value.IsEmpty())
					FinalOutput.Append(Elem.Value + "\n");
			}
			break;
		}
	case E_SelectedOption::ESP_EventNodes:
		for (UEdGraphNode* EdGraphNode : NodesInGraph)
		{
			FString OriginalNodeName = EdGraphNode->GetNodeTitle(ENodeTitleType::FullTitle).ToString();
			if (OriginalNodeName.Contains("event"))
			{
				// NodeNames.Add(OriginalNodeName);
				if (CurrentSelectedItem == nullptr)
					ReadingHelper->NodeTraversal(EdGraphNode);
				else
					ReadingHelper->NodeTraversalWithValueRead(EdGraphNode, Blueprint, ItemData);
			}
		}

		for (auto& Elem : ReadingHelper->NodeConnections)
		{
			if (!Elem.Value.IsEmpty())
				FinalOutput.Append(Elem.Value + "\n");
		}
		break;
	case E_SelectedOption::ESP_Max:
		break;
	default: ;
	}

	DebugHeader::ShowMsgDialog(EAppMsgType::Ok, "Found Nodes \n" + FinalOutput);
}

#pragma endregion


void FBlueprintReaderModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
	FReadingBlueprintStyle::ShutDown();
}


#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FBlueprintReaderModule, BlueprintReader)
