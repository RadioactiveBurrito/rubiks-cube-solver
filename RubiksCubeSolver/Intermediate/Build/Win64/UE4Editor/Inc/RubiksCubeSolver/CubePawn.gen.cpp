// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RubiksCubeSolver/CubePawn.h"
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
	UPackage* Z_Construct_UPackage__Script_RubiksCubeSolver();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
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
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Cubies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cubies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Cubies;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CubeSlices_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CubeSlices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CubeSlices;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACubePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_RubiksCubeSolver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CubePawn.h" },
		{ "ModuleRelativePath", "CubePawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubePawn_Statics::NewProp_Cubies_Inner = { "Cubies", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubePawn_Statics::NewProp_Cubies_MetaData[] = {
		{ "Category", "CubePawn" },
		{ "Comment", "// TODO: MAYBE CHANGE THE EDITANYWHERE SPECIFIER TO SOMETHING ELSE\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CubePawn.h" },
		{ "ToolTip", "TODO: MAYBE CHANGE THE EDITANYWHERE SPECIFIER TO SOMETHING ELSE" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACubePawn_Statics::NewProp_Cubies = { "Cubies", nullptr, (EPropertyFlags)0x0010008000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACubePawn, Cubies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACubePawn_Statics::NewProp_Cubies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACubePawn_Statics::NewProp_Cubies_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubePawn_Statics::NewProp_CubeSlices_Inner = { "CubeSlices", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubePawn_Statics::NewProp_CubeSlices_MetaData[] = {
		{ "Category", "CubePawn" },
		{ "Comment", "// TODO: MAYBE CHANGE THE EDITANYWHERE SPECIFIER TO SOMETHING ELSE\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CubePawn.h" },
		{ "ToolTip", "TODO: MAYBE CHANGE THE EDITANYWHERE SPECIFIER TO SOMETHING ELSE" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACubePawn_Statics::NewProp_CubeSlices = { "CubeSlices", nullptr, (EPropertyFlags)0x0010008000000009, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACubePawn, CubeSlices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACubePawn_Statics::NewProp_CubeSlices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACubePawn_Statics::NewProp_CubeSlices_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACubePawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubePawn_Statics::NewProp_Cubies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubePawn_Statics::NewProp_Cubies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubePawn_Statics::NewProp_CubeSlices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubePawn_Statics::NewProp_CubeSlices,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACubePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACubePawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACubePawn_Statics::ClassParams = {
		&ACubePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACubePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACubePawn_Statics::PropPointers),
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
	IMPLEMENT_CLASS(ACubePawn, 3758522542);
	template<> RUBIKSCUBESOLVER_API UClass* StaticClass<ACubePawn>()
	{
		return ACubePawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACubePawn(Z_Construct_UClass_ACubePawn, &ACubePawn::StaticClass, TEXT("/Script/RubiksCubeSolver"), TEXT("ACubePawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACubePawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
