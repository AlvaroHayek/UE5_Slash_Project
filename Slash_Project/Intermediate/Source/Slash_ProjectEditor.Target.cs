using UnrealBuildTool;

public class Slash_ProjectEditorTarget : TargetRules
{
	public Slash_ProjectEditorTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.Latest;
		IncludeOrderVersion = EngineIncludeOrderVersion.Latest;
		Type = TargetType.Editor;
		ExtraModuleNames.Add("Slash_Project");
	}
}
