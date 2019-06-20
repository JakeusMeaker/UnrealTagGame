// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "reeeeeeee/reeeeeeeeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodereeeeeeeeGameMode() {}
// Cross Module References
	REEEEEEEE_API UClass* Z_Construct_UClass_AreeeeeeeeGameMode_NoRegister();
	REEEEEEEE_API UClass* Z_Construct_UClass_AreeeeeeeeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_reeeeeeee();
// End Cross Module References
	void AreeeeeeeeGameMode::StaticRegisterNativesAreeeeeeeeGameMode()
	{
	}
	UClass* Z_Construct_UClass_AreeeeeeeeGameMode_NoRegister()
	{
		return AreeeeeeeeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AreeeeeeeeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AreeeeeeeeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_reeeeeeee,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AreeeeeeeeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "reeeeeeeeGameMode.h" },
		{ "ModuleRelativePath", "reeeeeeeeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AreeeeeeeeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AreeeeeeeeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AreeeeeeeeGameMode_Statics::ClassParams = {
		&AreeeeeeeeGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AreeeeeeeeGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AreeeeeeeeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AreeeeeeeeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AreeeeeeeeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AreeeeeeeeGameMode, 3328148907);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AreeeeeeeeGameMode(Z_Construct_UClass_AreeeeeeeeGameMode, &AreeeeeeeeGameMode::StaticClass, TEXT("/Script/reeeeeeee"), TEXT("AreeeeeeeeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AreeeeeeeeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
