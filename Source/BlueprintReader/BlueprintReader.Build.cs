// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BlueprintReader : ModuleRules
{
	public BlueprintReader(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.AddRange(
			new string[]
			{
				// ... add public include paths required here ...
			}
		);


		PrivateIncludePaths.AddRange(
			new string[]
			{
				System.IO.Path.GetFullPath(Target.RelativeEnginePath) + "/Source/Editor/Blutility/Private",
				"BlueprintReader/Public",
				"BlueprintReader/Public/View",
				"BlueprintReader/Public/Controller",
			}
		);


		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"Kismet",
				"KismetCompiler",
				"Blutility",
				"EditorScriptingUtilities",
				"UMG",
				"Niagara",
				"UnrealEd",
				"AssetTools",
				"InputCore",
				"AppFramework",
				"Projects",
				"SceneOutliner",
				"ToolMenus",
				"BlueprintGraph",
				"UMGEditor"
				// ... add other public dependencies that you statically link with here ...
			}
		);


		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore", "Kismet"
				// ... add private dependencies that you statically link with here ...	
			}
		);


		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
		);
	}
}