// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ue5_training/Public/DropPod.h"
#include "ue5_training/Public/CodeCommand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDropPod() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UE5_TRAINING_API UClass* Z_Construct_UClass_ADropPod();
	UE5_TRAINING_API UClass* Z_Construct_UClass_ADropPod_NoRegister();
	UE5_TRAINING_API UScriptStruct* Z_Construct_UScriptStruct_FCodeCommand();
	UPackage* Z_Construct_UPackage__Script_ue5_training();
// End Cross Module References
	void ADropPod::StaticRegisterNativesADropPod()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADropPod);
	UClass* Z_Construct_UClass_ADropPod_NoRegister()
	{
		return ADropPod::StaticClass();
	}
	struct Z_Construct_UClass_ADropPod_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_CodeCommand_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_m_CodeCommand;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADropPod_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ue5_training,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADropPod_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADropPod_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DropPod.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DropPod.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADropPod_Statics::NewProp_m_CodeCommand_MetaData[] = {
		{ "Category", "DropPod" },
		{ "ModuleRelativePath", "Public/DropPod.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADropPod_Statics::NewProp_m_CodeCommand = { "m_CodeCommand", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADropPod, m_CodeCommand), Z_Construct_UScriptStruct_FCodeCommand, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADropPod_Statics::NewProp_m_CodeCommand_MetaData), Z_Construct_UClass_ADropPod_Statics::NewProp_m_CodeCommand_MetaData) }; // 2028478787
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADropPod_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADropPod_Statics::NewProp_m_CodeCommand,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADropPod_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADropPod>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADropPod_Statics::ClassParams = {
		&ADropPod::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADropPod_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADropPod_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADropPod_Statics::Class_MetaDataParams), Z_Construct_UClass_ADropPod_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADropPod_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ADropPod()
	{
		if (!Z_Registration_Info_UClass_ADropPod.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADropPod.OuterSingleton, Z_Construct_UClass_ADropPod_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADropPod.OuterSingleton;
	}
	template<> UE5_TRAINING_API UClass* StaticClass<ADropPod>()
	{
		return ADropPod::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADropPod);
	ADropPod::~ADropPod() {}
	struct Z_CompiledInDeferFile_FID_Users_donno_Documents_Projets_ue5_training_ue5_training_Source_ue5_training_Public_DropPod_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_donno_Documents_Projets_ue5_training_ue5_training_Source_ue5_training_Public_DropPod_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADropPod, ADropPod::StaticClass, TEXT("ADropPod"), &Z_Registration_Info_UClass_ADropPod, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADropPod), 2569875862U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_donno_Documents_Projets_ue5_training_ue5_training_Source_ue5_training_Public_DropPod_h_3931642795(TEXT("/Script/ue5_training"),
		Z_CompiledInDeferFile_FID_Users_donno_Documents_Projets_ue5_training_ue5_training_Source_ue5_training_Public_DropPod_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_donno_Documents_Projets_ue5_training_ue5_training_Source_ue5_training_Public_DropPod_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
