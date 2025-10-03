using UnrealBuildTool;

public class Slash_Project : ModuleRules
{
	public Slash_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.Add("Core");
	}
}
