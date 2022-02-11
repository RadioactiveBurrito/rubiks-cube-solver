// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rubiksCubeSolver/CubePawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubePawn() {}
// Cross Module References
	RUBIKSCUBESOLVER_API UClass* Z_Construct_UClass_ACubePawn_NoRegister();
	RUBIKSCUBESOLVER_API UClass* Z_Construct_UClass_ACubePawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_rubiksCubeSolver();
// End Cross Module References
	void ACubePawn::StaticRegisterNativesACubePawn()
	{
	}
	UClass* Z_Construct_UClass_ACubePawn_NoRegister()
	{
		return ACubePawn::StaticClass();
	}
	struct Z_Construct_UClass_ACubePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACubePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_rubiksCubeSolver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CubePawn.h" },
		{ "ModuleRelativePath", "CubePawn.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACubePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACubePawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACubePawn_Statics::ClassParams = {
		&ACubePawn::StaticClass,
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
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACubePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACubePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACubePawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACubePawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACubePawn, 2313374351);
	template<> RUBIKSCUBESOLVER_API UClass* StaticClass<ACubePawn>()
	{
		return ACubePawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACubePawn(Z_Construct_UClass_ACubePawn, &ACubePawn::StaticClass, TEXT("/Script/rubiksCubeSolver"), TEXT("ACubePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACubePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
