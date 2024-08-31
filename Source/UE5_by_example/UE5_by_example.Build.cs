// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE5_by_example : ModuleRules
{
	public UE5_by_example(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
