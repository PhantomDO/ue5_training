// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ue5_training/ue5_trainingGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeue5_trainingGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UE5_TRAINING_API UClass* Z_Construct_UClass_Aue5_trainingGameMode();
	UE5_TRAINING_API UClass* Z_Construct_UClass_Aue5_trainingGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ue5_training();
// End Cross Module References
	void Aue5_trainingGameMode::StaticRegisterNativesAue5_trainingGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Aue5_trainingGameMode);
	UClass* Z_Construct_UClass_Aue5_trainingGameMode_NoRegister()
	{
		return Aue5_trainingGameMode::StaticClass();
	}
	struct Z_Construct_UClass_Aue5_trainingGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aue5_trainingGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ue5_training,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Aue5_trainingGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aue5_trainingGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ue5_trainingGameMode.h" },
		{ "ModuleRelativePath", "ue5_trainingGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aue5_trainingGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aue5_trainingGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Aue5_trainingGameMode_Statics::ClassParams = {
		&Aue5_trainingGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Aue5_trainingGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_Aue5_trainingGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_Aue5_trainingGameMode()
	{
		if (!Z_Registration_Info_UClass_Aue5_trainingGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Aue5_trainingGameMode.OuterSingleton, Z_Construct_UClass_Aue5_trainingGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Aue5_trainingGameMode.OuterSingleton;
	}
	template<> UE5_TRAINING_API UClass* StaticClass<Aue5_trainingGameMode>()
	{
		return Aue5_trainingGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aue5_trainingGameMode);
	Aue5_trainingGameMode::~Aue5_trainingGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_donno_Documents_Projets_ue5_training_ue5_training_Source_ue5_training_ue5_trainingGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_donno_Documents_Projets_ue5_training_ue5_training_Source_ue5_training_ue5_trainingGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Aue5_trainingGameMode, Aue5_trainingGameMode::StaticClass, TEXT("Aue5_trainingGameMode"), &Z_Registration_Info_UClass_Aue5_trainingGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Aue5_trainingGameMode), 2552724613U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_donno_Documents_Projets_ue5_training_ue5_training_Source_ue5_training_ue5_trainingGameMode_h_4070030210(TEXT("/Script/ue5_training"),
		Z_CompiledInDeferFile_FID_Users_donno_Documents_Projets_ue5_training_ue5_training_Source_ue5_training_ue5_trainingGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_donno_Documents_Projets_ue5_training_ue5_training_Source_ue5_training_ue5_trainingGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
