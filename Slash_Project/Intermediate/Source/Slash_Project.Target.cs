using UnrealBuildTool;

public class Slash_ProjectTarget : TargetRules
{
	public Slash_ProjectTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Game;
		ExtraModuleNames.Add("Slash_Project");
	}
}
