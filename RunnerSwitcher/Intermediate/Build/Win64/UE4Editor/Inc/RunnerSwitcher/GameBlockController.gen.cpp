// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RunnerSwitcher/GameBlockController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameBlockController() {}
// Cross Module References
	RUNNERSWITCHER_API UClass* Z_Construct_UClass_AGameBlockController_NoRegister();
	RUNNERSWITCHER_API UClass* Z_Construct_UClass_AGameBlockController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_RunnerSwitcher();
// End Cross Module References
	void AGameBlockController::StaticRegisterNativesAGameBlockController()
	{
	}
	UClass* Z_Construct_UClass_AGameBlockController_NoRegister()
	{
		return AGameBlockController::StaticClass();
	}
	struct Z_Construct_UClass_AGameBlockController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGameBlockController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_RunnerSwitcher,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameBlockController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameBlockController.h" },
		{ "ModuleRelativePath", "GameBlockController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGameBlockController_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "GameBlockController" },
		{ "ModuleRelativePath", "GameBlockController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameBlockController_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGameBlockController, Size), METADATA_PARAMS(Z_Construct_UClass_AGameBlockController_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGameBlockController_Statics::NewProp_Size_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameBlockController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameBlockController_Statics::NewProp_Size,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGameBlockController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameBlockController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGameBlockController_Statics::ClassParams = {
		&AGameBlockController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGameBlockController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGameBlockController_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGameBlockController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGameBlockController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGameBlockController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGameBlockController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGameBlockController, 3308776789);
	template<> RUNNERSWITCHER_API UClass* StaticClass<AGameBlockController>()
	{
		return AGameBlockController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGameBlockController(Z_Construct_UClass_AGameBlockController, &AGameBlockController::StaticClass, TEXT("/Script/RunnerSwitcher"), TEXT("AGameBlockController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGameBlockController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
