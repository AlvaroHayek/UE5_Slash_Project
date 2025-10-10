using UnrealBuildTool;

public class Slash_ProjectClientTarget : TargetRules
{
	public Slash_ProjectClientTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Client;
		ExtraModuleNames.Add("Slash_Project");
	}
}
