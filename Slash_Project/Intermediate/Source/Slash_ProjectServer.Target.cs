using UnrealBuildTool;

public class Slash_ProjectServerTarget : TargetRules
{
	public Slash_ProjectServerTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Server;
		ExtraModuleNames.Add("Slash_Project");
	}
}
