// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RunnerSwitcher/MainGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainGameMode() {}
// Cross Module References
	RUNNERSWITCHER_API UClass* Z_Construct_UClass_AMainGameMode_NoRegister();
	RUNNERSWITCHER_API UClass* Z_Construct_UClass_AMainGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RunnerSwitcher();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	RUNNERSWITCHER_API UClass* Z_Construct_UClass_AGameBlockController_NoRegister();
// End Cross Module References
	void AMainGameMode::StaticRegisterNativesAMainGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMainGameMode_NoRegister()
	{
		return AMainGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMainGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GrounddBlockBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GrounddBlockBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HazardBlock1Blueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HazardBlock1Blueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HazardBlock2Blueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HazardBlock2Blueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMainGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RunnerSwitcher,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MainGameMode.h" },
		{ "ModuleRelativePath", "MainGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGameMode_Statics::NewProp_GrounddBlockBlueprint_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "MainGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainGameMode_Statics::NewProp_GrounddBlockBlueprint = { "GrounddBlockBlueprint", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainGameMode, GrounddBlockBlueprint), Z_Construct_UClass_AGameBlockController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMainGameMode_Statics::NewProp_GrounddBlockBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameMode_Statics::NewProp_GrounddBlockBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGameMode_Statics::NewProp_HazardBlock1Blueprint_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "MainGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainGameMode_Statics::NewProp_HazardBlock1Blueprint = { "HazardBlock1Blueprint", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainGameMode, HazardBlock1Blueprint), Z_Construct_UClass_AGameBlockController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMainGameMode_Statics::NewProp_HazardBlock1Blueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameMode_Statics::NewProp_HazardBlock1Blueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMainGameMode_Statics::NewProp_HazardBlock2Blueprint_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "MainGameMode.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMainGameMode_Statics::NewProp_HazardBlock2Blueprint = { "HazardBlock2Blueprint", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMainGameMode, HazardBlock2Blueprint), Z_Construct_UClass_AGameBlockController_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMainGameMode_Statics::NewProp_HazardBlock2Blueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameMode_Statics::NewProp_HazardBlock2Blueprint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMainGameMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameMode_Statics::NewProp_GrounddBlockBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameMode_Statics::NewProp_HazardBlock1Blueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMainGameMode_Statics::NewProp_HazardBlock2Blueprint,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMainGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMainGameMode_Statics::ClassParams = {
		&AMainGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMainGameMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameMode_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMainGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMainGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMainGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMainGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMainGameMode, 1600055037);
	template<> RUNNERSWITCHER_API UClass* StaticClass<AMainGameMode>()
	{
		return AMainGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMainGameMode(Z_Construct_UClass_AMainGameMode, &AMainGameMode::StaticClass, TEXT("/Script/RunnerSwitcher"), TEXT("AMainGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMainGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
