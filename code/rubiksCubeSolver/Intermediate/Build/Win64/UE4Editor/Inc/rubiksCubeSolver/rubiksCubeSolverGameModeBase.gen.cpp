// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "rubiksCubeSolver/rubiksCubeSolverGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCoderubiksCubeSolverGameModeBase() {}
// Cross Module References
	RUBIKSCUBESOLVER_API UClass* Z_Construct_UClass_ArubiksCubeSolverGameModeBase_NoRegister();
	RUBIKSCUBESOLVER_API UClass* Z_Construct_UClass_ArubiksCubeSolverGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_rubiksCubeSolver();
// End Cross Module References
	void ArubiksCubeSolverGameModeBase::StaticRegisterNativesArubiksCubeSolverGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ArubiksCubeSolverGameModeBase_NoRegister()
	{
		return ArubiksCubeSolverGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ArubiksCubeSolverGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ArubiksCubeSolverGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_rubiksCubeSolver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ArubiksCubeSolverGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "rubiksCubeSolverGameModeBase.h" },
		{ "ModuleRelativePath", "rubiksCubeSolverGameModeBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ArubiksCubeSolverGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ArubiksCubeSolverGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ArubiksCubeSolverGameModeBase_Statics::ClassParams = {
		&ArubiksCubeSolverGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ArubiksCubeSolverGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ArubiksCubeSolverGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ArubiksCubeSolverGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ArubiksCubeSolverGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ArubiksCubeSolverGameModeBase, 1174288961);
	template<> RUBIKSCUBESOLVER_API UClass* StaticClass<ArubiksCubeSolverGameModeBase>()
	{
		return ArubiksCubeSolverGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ArubiksCubeSolverGameModeBase(Z_Construct_UClass_ArubiksCubeSolverGameModeBase, &ArubiksCubeSolverGameModeBase::StaticClass, TEXT("/Script/rubiksCubeSolver"), TEXT("ArubiksCubeSolverGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ArubiksCubeSolverGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
