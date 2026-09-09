#pragma once

class FReadingBlueprintStyle
{
public:
	static void InitializeIcons();

	static void ShutDown();

	static FName GetStyleSetName() { return StyleSetName; }

	static TSharedRef<FSlateStyleSet> CreateSlateStyleSet();

	static TSharedPtr<FSlateStyleSet> CreatedSlateStyleSet;

public:
	static FName StyleSetName;

	static TSharedRef<FSlateStyleSet> GetCreatedSlateStyleSet() { return CreatedSlateStyleSet.ToSharedRef(); }	
};
