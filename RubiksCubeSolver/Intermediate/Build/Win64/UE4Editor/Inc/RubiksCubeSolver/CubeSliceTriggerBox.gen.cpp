// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RubiksCubeSolver/CubeSliceTriggerBox.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCubeSliceTriggerBox() {}
// Cross Module References
	RUBIKSCUBESOLVER_API UClass* Z_Construct_UClass_ACubeSliceTriggerBox_NoRegister();
	RUBIKSCUBESOLVER_API UClass* Z_Construct_UClass_ACubeSliceTriggerBox();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UPackage* Z_Construct_UPackage__Script_RubiksCubeSolver();
// End Cross Module References
	void ACubeSliceTriggerBox::StaticRegisterNativesACubeSliceTriggerBox()
	{
	}
	UClass* Z_Construct_UClass_ACubeSliceTriggerBox_NoRegister()
	{
		return ACubeSliceTriggerBox::StaticClass();
	}
	struct Z_Construct_UClass_ACubeSliceTriggerBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACubeSliceTriggerBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_RubiksCubeSolver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACubeSliceTriggerBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CubeSliceTriggerBox.h" },
		{ "ModuleRelativePath", "CubeSliceTriggerBox.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACubeSliceTriggerBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACubeSliceTriggerBox>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACubeSliceTriggerBox_Statics::ClassParams = {
		&ACubeSliceTriggerBox::StaticClass,
		"Engine",
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
		METADATA_PARAMS(Z_Construct_UClass_ACubeSliceTriggerBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACubeSliceTriggerBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACubeSliceTriggerBox()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACubeSliceTriggerBox_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACubeSliceTriggerBox, 2201602136);
	template<> RUBIKSCUBESOLVER_API UClass* StaticClass<ACubeSliceTriggerBox>()
	{
		return ACubeSliceTriggerBox::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACubeSliceTriggerBox(Z_Construct_UClass_ACubeSliceTriggerBox, &ACubeSliceTriggerBox::StaticClass, TEXT("/Script/RubiksCubeSolver"), TEXT("ACubeSliceTriggerBox"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACubeSliceTriggerBox);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
