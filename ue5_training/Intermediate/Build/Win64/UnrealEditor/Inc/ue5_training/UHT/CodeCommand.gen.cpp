// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ue5_training/Public/CodeCommand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCodeCommand() {}
// Cross Module References
	UE5_TRAINING_API UScriptStruct* Z_Construct_UScriptStruct_FCodeCommand();
	UPackage* Z_Construct_UPackage__Script_ue5_training();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CodeCommand;
class UScriptStruct* FCodeCommand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CodeCommand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CodeCommand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCodeCommand, (UObject*)Z_Construct_UPackage__Script_ue5_training(), TEXT("CodeCommand"));
	}
	return Z_Registration_Info_UScriptStruct_CodeCommand.OuterSingleton;
}
template<> UE5_TRAINING_API UScriptStruct* StaticStruct<FCodeCommand>()
{
	return FCodeCommand::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCodeCommand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCodeCommand_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CodeCommand.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCodeCommand_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCodeCommand>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCodeCommand_Statics::NewProp_Command_MetaData[] = {
		{ "Category", "CodeCommand Struct" },
		{ "ModuleRelativePath", "Public/CodeCommand.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCodeCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCodeCommand, Command), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCodeCommand_Statics::NewProp_Command_MetaData), Z_Construct_UScriptStruct_FCodeCommand_Statics::NewProp_Command_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCodeCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCodeCommand_Statics::NewProp_Command,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCodeCommand_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ue5_training,
		nullptr,
		&NewStructOps,
		"CodeCommand",
		Z_Construct_UScriptStruct_FCodeCommand_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCodeCommand_Statics::PropPointers),
		sizeof(FCodeCommand),
		alignof(FCodeCommand),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCodeCommand_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCodeCommand_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCodeCommand_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FCodeCommand()
	{
		if (!Z_Registration_Info_UScriptStruct_CodeCommand.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CodeCommand.InnerSingleton, Z_Construct_UScriptStruct_FCodeCommand_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CodeCommand.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Users_donno_Documents_Projets_ue5_training_ue5_training_Source_ue5_training_Public_CodeCommand_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_donno_Documents_Projets_ue5_training_ue5_training_Source_ue5_training_Public_CodeCommand_h_Statics::ScriptStructInfo[] = {
		{ FCodeCommand::StaticStruct, Z_Construct_UScriptStruct_FCodeCommand_Statics::NewStructOps, TEXT("CodeCommand"), &Z_Registration_Info_UScriptStruct_CodeCommand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCodeCommand), 2028478787U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_donno_Documents_Projets_ue5_training_ue5_training_Source_ue5_training_Public_CodeCommand_h_1907703972(TEXT("/Script/ue5_training"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_donno_Documents_Projets_ue5_training_ue5_training_Source_ue5_training_Public_CodeCommand_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_donno_Documents_Projets_ue5_training_ue5_training_Source_ue5_training_Public_CodeCommand_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
