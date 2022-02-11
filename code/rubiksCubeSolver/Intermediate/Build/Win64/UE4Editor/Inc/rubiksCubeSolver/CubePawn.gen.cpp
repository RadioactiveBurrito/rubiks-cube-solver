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
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisibleCube_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VisibleCube;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubePawn_Statics::NewProp_VisibleCube_MetaData[] = {
		{ "Category", "CubePawn" },
		{ "Comment", "// allows to also edit in the editor, we assign a static mesh through the editor\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CubePawn.h" },
		{ "ToolTip", "allows to also edit in the editor, we assign a static mesh through the editor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACubePawn_Statics::NewProp_VisibleCube = { "VisibleCube", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACubePawn, VisibleCube), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACubePawn_Statics::NewProp_VisibleCube_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACubePawn_Statics::NewProp_VisibleCube_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACubePawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACubePawn_Statics::NewProp_VisibleCube,
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
	IMPLEMENT_CLASS(ACubePawn, 3220713193);
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
