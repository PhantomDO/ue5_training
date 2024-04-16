// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ue5_training : ModuleRules
{
	public ue5_training(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
