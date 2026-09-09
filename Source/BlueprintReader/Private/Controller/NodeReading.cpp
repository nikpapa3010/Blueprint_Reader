#include "Controller/NodeReading.h"

#include "SnapshotHandler.h"
#include "Helpers/DebugHeader.h"
#include "Kismet2/KismetDebugUtilities.h"


void NodeReading::NodeTraversal(UEdGraphNode* NodeInGraph)
{
	UEdGraphNode* NextNode = nullptr;
	UEdGraphPin* ExecOutputPin = nullptr;

	int NumOfExecPins = 0;

	for (UEdGraphPin* Pin : NodeInGraph->GetAllPins())
	{
		if (Pin->Direction == EGPD_Output && CheckPinType(Pin, "exec"))
		{
			NumOfExecPins++;
		}
	}

	for (UEdGraphPin* Pin : NodeInGraph->GetAllPins())
	{
		//Filter pins out that are not Inputs
		if (Pin->Direction != EGPD_Input) continue;

		for (UEdGraphPin* LinkedTo : Pin->LinkedTo)
		{
			FString Key = LinkedTo->PinId.ToString() + "_" + Pin->PinId.ToString();
			if (NodeConnections.Find(Key))
			{
				DebugHeader::PrintLog("key already exists");
				continue;
			}

			FString LinkedToCategory = LinkedTo->PinType.PinCategory.ToString().ToLower();

			UEdGraphNode* TargetNode = LinkedTo->GetOwningNode();

			// Check if TargetNode is a pure node (no exec pins at all)
			bool bIsPure = true;
			for (UEdGraphPin* TargetPin : TargetNode->GetAllPins())
			{
				if (CheckPinType(TargetPin, "exec"))
				{
					bIsPure = false;
					break;
				}
			}

			if (bIsPure)
				NodeTraversal(TargetNode);

			if (!CheckPinType(LinkedTo, "exec"))
			{
				FString line = GenerateNodeConnectionString(TargetNode, LinkedTo, NodeInGraph, Pin);
				NodeConnections.Add(Key, line);
			}
		}
	}

	for (UEdGraphPin* Pin : NodeInGraph->GetAllPins())
	{
		//Filter pins out that are not Outputs
		if (Pin->Direction != EGPD_Output) continue;

		for (UEdGraphPin* LinkedTo : Pin->LinkedTo)
		{
			FString PastKey = LinkedTo->PinId.ToString() + "_" + Pin->PinId.ToString();

			// we also check here if the connection already exists because of the possibility of looping through nodes.
			if (NodeConnections.Find(PastKey))
			{
				DebugHeader::PrintLog("key already exists");
				continue;
			}
			UEdGraphNode* TargetNode = LinkedTo->GetOwningNode();

			DebugHeader::PrintLog("Target Node Title: " + TargetNode->GetNodeTitle(ENodeTitleType::MenuTitle).ToString());


			FString nodeTitle = NodeInGraph->GetNodeTitle(ENodeTitleType::FullTitle).ToString();
			FString line = GenerateNodeConnectionString(NodeInGraph, Pin, TargetNode, LinkedTo);

			NodeConnections.Add(Pin->PinId.ToString() + "_" + LinkedTo->PinId.ToString(), line);


			// When the node has more then two execution pins, we need to traverse one after another to garantee full context (Branches, processes etc.)
			if (NumOfExecPins > 1 && CheckPinType(LinkedTo, "exec"))
			{
				DebugHeader::PrintLog("Target node name: " + TargetNode->GetNodeTitle(ENodeTitleType::MenuTitle).ToString());
				NodeTraversal(TargetNode);
				break;
			}


			if (CheckPinType(LinkedTo, "exec"))
				NextNode = TargetNode;
		}

		if (CheckPinType(Pin, "exec") || CheckPinType(Pin, "then"))
		{
			ExecOutputPin = Pin;
		}
	}

	if (NextNode != nullptr && ExecOutputPin != nullptr)
	{
		DebugHeader::PrintLog(NextNode->GetNodeTitle(ENodeTitleType::MenuTitle).ToString());

		NodeTraversal(NextNode);
	}
}

void NodeReading::NodeTraversalWithValueRead(UEdGraphNode* NodeInGraph, UBlueprint* BP, USnapshotItemData* ItemData)
{
	UEdGraphNode* NextNode = nullptr;
	UEdGraphPin* ExecOutputPin = nullptr;
	TArray<FSavedValue> Values = ItemData->GetValues();
	int NumOfExecPins = 0;
	DebugHeader::PrintLog("TRAVERSING WITH VALUE READING HAHA");
	for (UEdGraphPin* Pin : NodeInGraph->GetAllPins())
	{
		if (Pin->Direction == EGPD_Output && CheckPinType(Pin, "exec"))
		{
			NumOfExecPins++;
		}
	}

	for (UEdGraphPin* Pin : NodeInGraph->GetAllPins())
	{
		//Filter pins out that are not Inputs
		if (Pin->Direction != EGPD_Input) continue;

		for (UEdGraphPin* LinkedTo : Pin->LinkedTo)
		{
			FString Key = LinkedTo->PinId.ToString() + "_" + Pin->PinId.ToString();
			if (NodeConnections.Find(Key))
			{
				DebugHeader::PrintLog("key already exists");
				continue;
			}

			FString LinkedToCategory = LinkedTo->PinType.PinCategory.ToString().ToLower();

			UEdGraphNode* TargetNode = LinkedTo->GetOwningNode();

			// Check if TargetNode is a pure node (no exec pins at all)
			bool bIsPure = true;
			for (UEdGraphPin* TargetPin : TargetNode->GetAllPins())
			{
				if (CheckPinType(TargetPin, "exec"))
				{
					bIsPure = false;
					break;
				}
			}

			if (bIsPure)
				NodeTraversalWithValueRead(TargetNode, BP, ItemData);

			if (!CheckPinType(LinkedTo, "exec"))
			{
				FString line;
				for (FSavedValue SavedValue : Values)
				{
					if (LinkedTo->PinName.ToString() == SavedValue.ValueName)
					{
						line = GenerateNodeConnectionString(TargetNode, LinkedTo, SavedValue.Value, NodeInGraph, Pin);
						break;
					}
				}
				if (line.IsEmpty())
					line = GenerateNodeConnectionString(TargetNode, LinkedTo, NodeInGraph, Pin);
				NodeConnections.Add(Key, line);
			}
		}
	}

	for (UEdGraphPin* Pin : NodeInGraph->GetAllPins())
	{
		//Filter pins out that are not Outputs
		if (Pin->Direction != EGPD_Output) continue;

		for (UEdGraphPin* LinkedTo : Pin->LinkedTo)
		{
			FString PastKey = LinkedTo->PinId.ToString() + "_" + Pin->PinId.ToString();

			// we also check here if the connection already exists because of the possibility of looping through nodes.
			if (NodeConnections.Find(PastKey))
			{
				DebugHeader::PrintLog("key already exists");
				continue;
			}
			UEdGraphNode* TargetNode = LinkedTo->GetOwningNode();

			DebugHeader::PrintLog("Target Node Title: " + TargetNode->GetNodeTitle(ENodeTitleType::MenuTitle).ToString());


			FString nodeTitle = NodeInGraph->GetNodeTitle(ENodeTitleType::FullTitle).ToString();

			FString line;
			for (FSavedValue SavedValue : Values)
			{
				if (Pin->PinName.ToString() == SavedValue.ValueName)
				{
					line = GenerateNodeConnectionString(NodeInGraph, Pin, SavedValue.Value, TargetNode, LinkedTo);
					break;
				}
			}
			if (line.IsEmpty())
				line = GenerateNodeConnectionString(NodeInGraph, Pin, TargetNode, LinkedTo);


			NodeConnections.Add(Pin->PinId.ToString() + "_" + LinkedTo->PinId.ToString(), line);


			// When the node has more then two execution pins, we need to traverse one after another to garantee full context (Branches, processes etc.)
			if (NumOfExecPins > 1 && CheckPinType(LinkedTo, "exec"))
			{
				DebugHeader::PrintLog("Target node name: " + TargetNode->GetNodeTitle(ENodeTitleType::MenuTitle).ToString());
				NodeTraversalWithValueRead(TargetNode, BP, ItemData);
				break;
			}


			if (CheckPinType(LinkedTo, "exec"))
				NextNode = TargetNode;
		}

		if (CheckPinType(Pin, "exec") || CheckPinType(Pin, "then"))
		{
			ExecOutputPin = Pin;
		}
	}

	if (NextNode != nullptr && ExecOutputPin != nullptr)
	{
		DebugHeader::PrintLog(NextNode->GetNodeTitle(ENodeTitleType::MenuTitle).ToString());

		NodeTraversalWithValueRead(NextNode, BP, ItemData);
	}
}


FString NodeReading::GenerateNodeConnectionString(UEdGraphNode* CurrentNode, UEdGraphPin* CurrentPin, UEdGraphNode* NextNode, UEdGraphPin* NextPin)
{
	FString line = FString::Printf(
		TEXT("[%s | %s...].%s of value type %s --> [%s | %s...].%s of value type %s"),
		*CurrentNode->GetNodeTitle(ENodeTitleType::FullTitle).ToString(),
		*CurrentNode->NodeGuid.ToString().Left(3),
		*CurrentPin->PinName.ToString(),
		*CurrentPin->PinType.PinCategory.ToString(),
		*NextNode->GetNodeTitle(ENodeTitleType::FullTitle).ToString(),
		*NextNode->NodeGuid.ToString().Left(3),
		*NextPin->PinName.ToString(),
		*NextPin->PinType.PinCategory.ToString()
	);
	DebugHeader::PrintLog(FString::Printf(TEXT("Value of pin %s: %s"), *CurrentPin->PinName.ToString(), *CurrentPin->PinType.PinCategory.ToString()));
	return line;
}

FString NodeReading::GenerateNodeConnectionString(UEdGraphNode* CurrentNode, UEdGraphPin* CurrentPin, FString CurrentValue, UEdGraphNode* NextNode, UEdGraphPin* NextPin)
{
	FString line = FString::Printf(
		TEXT("[%s | %s...].%s of value %s --> [%s | %s...].%s"),
		*CurrentNode->GetNodeTitle(ENodeTitleType::FullTitle).ToString(),
		*CurrentNode->NodeGuid.ToString().Left(3),
		*CurrentPin->PinName.ToString(),
		*CurrentValue,
		*NextNode->GetNodeTitle(ENodeTitleType::FullTitle).ToString(),
		*NextNode->NodeGuid.ToString().Left(3),
		*NextPin->PinName.ToString()
	);
	DebugHeader::PrintLog(FString::Printf(TEXT("Value of pin %s: %s"), *CurrentPin->PinName.ToString(), *CurrentPin->PinType.PinCategory.ToString()));
	return line;
}

//
// void NodeReading::GetValueOfPin(UEdGraphPin* Pin, UBlueprint* BP)
// {
// 	FString OutText;
// 	FKismetDebugUtilities::GetWatchText(OutText, BP, BP, Pin);
//
// 	DebugHeader::PrintLog("Value of pin: " + OutText);
// }


bool NodeReading::CheckPinType(UEdGraphPin* PinToCheck, FString TypeName)
{
	return PinToCheck->PinType.PinCategory.ToString().ToLower().Contains(TypeName);
}
