// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flocking/FlockingGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlockingGameMode() {}
// Cross Module References
	FLOCKING_API UClass* Z_Construct_UClass_AFlockingGameMode_NoRegister();
	FLOCKING_API UClass* Z_Construct_UClass_AFlockingGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Flocking();
// End Cross Module References
	void AFlockingGameMode::StaticRegisterNativesAFlockingGameMode()
	{
	}
	UClass* Z_Construct_UClass_AFlockingGameMode_NoRegister()
	{
		return AFlockingGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFlockingGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFlockingGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Flocking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFlockingGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FlockingGameMode.h" },
		{ "ModuleRelativePath", "FlockingGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFlockingGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlockingGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFlockingGameMode_Statics::ClassParams = {
		&AFlockingGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AFlockingGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFlockingGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFlockingGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFlockingGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFlockingGameMode, 1789247727);
	template<> FLOCKING_API UClass* StaticClass<AFlockingGameMode>()
	{
		return AFlockingGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFlockingGameMode(Z_Construct_UClass_AFlockingGameMode, &AFlockingGameMode::StaticClass, TEXT("/Script/Flocking"), TEXT("AFlockingGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFlockingGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
