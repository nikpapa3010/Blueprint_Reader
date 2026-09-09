#pragma once
#include "Model/USnapshotItemData.h"

class NodeReading
{
public:
	// Traverses the NodeGraph
	void NodeTraversal(UEdGraphNode* NodeInGraph);
	// Traverses the NodeGraph while also reading the values in it.
	void NodeTraversalWithValueRead(UEdGraphNode* NodeInGraph, UBlueprint* BP, USnapshotItemData* ItemData);

	/**
	 * 
	 * @param CurrentNode Current Node we are traversing from
	 * @param CurrentPin Current Pin from Current Node
	 * @param NextNode Next Node to traverse to
	 * @param NextPin The pin our @CurrentPin is connecting to
	 * @return Returns the line with the connection
	 */
	FString GenerateNodeConnectionString(UEdGraphNode* CurrentNode, UEdGraphPin* CurrentPin, UEdGraphNode* NextNode, UEdGraphPin* NextPin);

	/**
	 * 
	 * @param CurrentNode Current Node we are traversing from
	 * @param CurrentPin Current Pin from Current Node
	 * @param CurrentValue Current Value from our current pin (e.g. from a variable)
	 * @param NextNode Next Node to traverse to
	* @param NextPin The pin our @CurrentPin is connecting to
	 * @return Returns the line with the connection
	 */
	FString GenerateNodeConnectionString(UEdGraphNode* CurrentNode, UEdGraphPin* CurrentPin, FString CurrentValue, UEdGraphNode* NextNode, UEdGraphPin* NextPin);


	// void GetValueOfPin(UEdGraphPin* Pin, UBlueprint* BP);

	bool CheckPinType(UEdGraphPin* PinToCheck, FString TypeName);

	//KEy: NodeName, Value: Line
	TMap<FString, FString> NodeConnections;

	USnapshotItemData* SnapshotItemData;
};
