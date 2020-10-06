// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectK/ProjectKPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectKPlayerController() {}
// Cross Module References
	PROJECTK_API UClass* Z_Construct_UClass_AProjectKPlayerController_NoRegister();
	PROJECTK_API UClass* Z_Construct_UClass_AProjectKPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ProjectK();
// End Cross Module References
	void AProjectKPlayerController::StaticRegisterNativesAProjectKPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AProjectKPlayerController_NoRegister()
	{
		return AProjectKPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AProjectKPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectKPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectK,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectKPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ProjectKPlayerController.h" },
		{ "ModuleRelativePath", "ProjectKPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectKPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectKPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectKPlayerController_Statics::ClassParams = {
		&AProjectKPlayerController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AProjectKPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AProjectKPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectKPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectKPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectKPlayerController, 131714743);
	template<> PROJECTK_API UClass* StaticClass<AProjectKPlayerController>()
	{
		return AProjectKPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectKPlayerController(Z_Construct_UClass_AProjectKPlayerController, &AProjectKPlayerController::StaticClass, TEXT("/Script/ProjectK"), TEXT("AProjectKPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectKPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
