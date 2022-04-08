// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RunnerSwitcher/RunnerSwitcherGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRunnerSwitcherGameModeBase() {}
// Cross Module References
	RUNNERSWITCHER_API UClass* Z_Construct_UClass_ARunnerSwitcherGameModeBase_NoRegister();
	RUNNERSWITCHER_API UClass* Z_Construct_UClass_ARunnerSwitcherGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RunnerSwitcher();
// End Cross Module References
	void ARunnerSwitcherGameModeBase::StaticRegisterNativesARunnerSwitcherGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ARunnerSwitcherGameModeBase_NoRegister()
	{
		return ARunnerSwitcherGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARunnerSwitcherGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARunnerSwitcherGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RunnerSwitcher,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARunnerSwitcherGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RunnerSwitcherGameModeBase.h" },
		{ "ModuleRelativePath", "RunnerSwitcherGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARunnerSwitcherGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARunnerSwitcherGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARunnerSwitcherGameModeBase_Statics::ClassParams = {
		&ARunnerSwitcherGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARunnerSwitcherGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARunnerSwitcherGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARunnerSwitcherGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARunnerSwitcherGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARunnerSwitcherGameModeBase, 381137224);
	template<> RUNNERSWITCHER_API UClass* StaticClass<ARunnerSwitcherGameModeBase>()
	{
		return ARunnerSwitcherGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARunnerSwitcherGameModeBase(Z_Construct_UClass_ARunnerSwitcherGameModeBase, &ARunnerSwitcherGameModeBase::StaticClass, TEXT("/Script/RunnerSwitcher"), TEXT("ARunnerSwitcherGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARunnerSwitcherGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
