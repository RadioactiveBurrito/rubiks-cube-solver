// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RubiksCubeSolver/RubiksCubeSolverGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRubiksCubeSolverGameModeBase() {}
// Cross Module References
	RUBIKSCUBESOLVER_API UClass* Z_Construct_UClass_ARubiksCubeSolverGameModeBase_NoRegister();
	RUBIKSCUBESOLVER_API UClass* Z_Construct_UClass_ARubiksCubeSolverGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_RubiksCubeSolver();
// End Cross Module References
	void ARubiksCubeSolverGameModeBase::StaticRegisterNativesARubiksCubeSolverGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ARubiksCubeSolverGameModeBase_NoRegister()
	{
		return ARubiksCubeSolverGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ARubiksCubeSolverGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARubiksCubeSolverGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_RubiksCubeSolver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARubiksCubeSolverGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "RubiksCubeSolverGameModeBase.h" },
		{ "ModuleRelativePath", "RubiksCubeSolverGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARubiksCubeSolverGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARubiksCubeSolverGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARubiksCubeSolverGameModeBase_Statics::ClassParams = {
		&ARubiksCubeSolverGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARubiksCubeSolverGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARubiksCubeSolverGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARubiksCubeSolverGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARubiksCubeSolverGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARubiksCubeSolverGameModeBase, 2640803024);
	template<> RUBIKSCUBESOLVER_API UClass* StaticClass<ARubiksCubeSolverGameModeBase>()
	{
		return ARubiksCubeSolverGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARubiksCubeSolverGameModeBase(Z_Construct_UClass_ARubiksCubeSolverGameModeBase, &ARubiksCubeSolverGameModeBase::StaticClass, TEXT("/Script/RubiksCubeSolver"), TEXT("ARubiksCubeSolverGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARubiksCubeSolverGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
