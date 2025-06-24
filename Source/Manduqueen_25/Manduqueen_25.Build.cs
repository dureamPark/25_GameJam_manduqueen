// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Manduqueen_25 : ModuleRules
{
	public Manduqueen_25(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "OnlineSubsystem", "OnlineSubsystemUtils", "OnlineSubsystemSteam", "AdvancedSteamSessions" });
	}
}
