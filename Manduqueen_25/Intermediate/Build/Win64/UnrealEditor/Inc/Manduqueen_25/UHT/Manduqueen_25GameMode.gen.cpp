// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Manduqueen_25/Manduqueen_25GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManduqueen_25GameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MANDUQUEEN_25_API UClass* Z_Construct_UClass_AManduqueen_25GameMode();
	MANDUQUEEN_25_API UClass* Z_Construct_UClass_AManduqueen_25GameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Manduqueen_25();
// End Cross Module References
	void AManduqueen_25GameMode::StaticRegisterNativesAManduqueen_25GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AManduqueen_25GameMode);
	UClass* Z_Construct_UClass_AManduqueen_25GameMode_NoRegister()
	{
		return AManduqueen_25GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AManduqueen_25GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AManduqueen_25GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Manduqueen_25,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AManduqueen_25GameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManduqueen_25GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Manduqueen_25GameMode.h" },
		{ "ModuleRelativePath", "Manduqueen_25GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AManduqueen_25GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AManduqueen_25GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AManduqueen_25GameMode_Statics::ClassParams = {
		&AManduqueen_25GameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AManduqueen_25GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AManduqueen_25GameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AManduqueen_25GameMode()
	{
		if (!Z_Registration_Info_UClass_AManduqueen_25GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AManduqueen_25GameMode.OuterSingleton, Z_Construct_UClass_AManduqueen_25GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AManduqueen_25GameMode.OuterSingleton;
	}
	template<> MANDUQUEEN_25_API UClass* StaticClass<AManduqueen_25GameMode>()
	{
		return AManduqueen_25GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AManduqueen_25GameMode);
	AManduqueen_25GameMode::~AManduqueen_25GameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Develop_Unreal_Project_25_GameJam_manduqueen_Manduqueen_25_Source_Manduqueen_25_Manduqueen_25GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Develop_Unreal_Project_25_GameJam_manduqueen_Manduqueen_25_Source_Manduqueen_25_Manduqueen_25GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AManduqueen_25GameMode, AManduqueen_25GameMode::StaticClass, TEXT("AManduqueen_25GameMode"), &Z_Registration_Info_UClass_AManduqueen_25GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AManduqueen_25GameMode), 2064259457U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Develop_Unreal_Project_25_GameJam_manduqueen_Manduqueen_25_Source_Manduqueen_25_Manduqueen_25GameMode_h_2537800496(TEXT("/Script/Manduqueen_25"),
		Z_CompiledInDeferFile_FID_Users_Develop_Unreal_Project_25_GameJam_manduqueen_Manduqueen_25_Source_Manduqueen_25_Manduqueen_25GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Develop_Unreal_Project_25_GameJam_manduqueen_Manduqueen_25_Source_Manduqueen_25_Manduqueen_25GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
