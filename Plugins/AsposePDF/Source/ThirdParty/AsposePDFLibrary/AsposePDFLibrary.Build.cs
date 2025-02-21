// Fill out your copyright notice in the Description page of Project Settings.

using System.IO;
using UnrealBuildTool;

public class AsposePDFLibrary : ModuleRules
{
	public AsposePDFLibrary(ReadOnlyTargetRules Target) : base(Target)
	{
		Type = ModuleType.External;

		PublicAdditionalLibraries.Add(Path.Combine(ModuleDirectory, "x64", "Release", "AsposeHelper.lib"));
		
		PublicDelayLoadDLLs.Add("AsposeHelper.dll");
		RuntimeDependencies.Add(Path.Combine(ModuleDirectory, "x64", "Release", "AsposeHelper.dll"));
		
		PublicDelayLoadDLLs.Add("codeporting.translator.cs2cpp.framework_vc14x64.dll");
		RuntimeDependencies.Add(Path.Combine(ModuleDirectory, "x64", "Release", "codeporting.translator.cs2cpp.framework_vc14x64.dll"));
		
		PublicDelayLoadDLLs.Add("aspose_cpp_vc14x64.dll");
		RuntimeDependencies.Add(Path.Combine(ModuleDirectory, "x64", "Release", "aspose_cpp_vc14x64.dll"));
		
		PublicDelayLoadDLLs.Add("Aspose.Pdf.Cpp_vc14x64.dll");
		RuntimeDependencies.Add(Path.Combine(ModuleDirectory, "x64", "Release", "Aspose.Pdf.Cpp_vc14x64.dll"));
	}
}
