// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTK_ProjectKCharacter_generated_h
#error "ProjectKCharacter.generated.h already included, missing '#pragma once' in ProjectKCharacter.h"
#endif
#define PROJECTK_ProjectKCharacter_generated_h

#define ProjectK_Source_ProjectK_ProjectKCharacter_h_12_SPARSE_DATA
#define ProjectK_Source_ProjectK_ProjectKCharacter_h_12_RPC_WRAPPERS
#define ProjectK_Source_ProjectK_ProjectKCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectK_Source_ProjectK_ProjectKCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectKCharacter(); \
	friend struct Z_Construct_UClass_AProjectKCharacter_Statics; \
public: \
	DECLARE_CLASS(AProjectKCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectK"), NO_API) \
	DECLARE_SERIALIZER(AProjectKCharacter)


#define ProjectK_Source_ProjectK_ProjectKCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAProjectKCharacter(); \
	friend struct Z_Construct_UClass_AProjectKCharacter_Statics; \
public: \
	DECLARE_CLASS(AProjectKCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectK"), NO_API) \
	DECLARE_SERIALIZER(AProjectKCharacter)


#define ProjectK_Source_ProjectK_ProjectKCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectKCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectKCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectKCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectKCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectKCharacter(AProjectKCharacter&&); \
	NO_API AProjectKCharacter(const AProjectKCharacter&); \
public:


#define ProjectK_Source_ProjectK_ProjectKCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectKCharacter(AProjectKCharacter&&); \
	NO_API AProjectKCharacter(const AProjectKCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectKCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectKCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectKCharacter)


#define ProjectK_Source_ProjectK_ProjectKCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TopDownCameraComponent() { return STRUCT_OFFSET(AProjectKCharacter, TopDownCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AProjectKCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__CursorToWorld() { return STRUCT_OFFSET(AProjectKCharacter, CursorToWorld); }


#define ProjectK_Source_ProjectK_ProjectKCharacter_h_9_PROLOG
#define ProjectK_Source_ProjectK_ProjectKCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectK_Source_ProjectK_ProjectKCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectK_Source_ProjectK_ProjectKCharacter_h_12_SPARSE_DATA \
	ProjectK_Source_ProjectK_ProjectKCharacter_h_12_RPC_WRAPPERS \
	ProjectK_Source_ProjectK_ProjectKCharacter_h_12_INCLASS \
	ProjectK_Source_ProjectK_ProjectKCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectK_Source_ProjectK_ProjectKCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectK_Source_ProjectK_ProjectKCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectK_Source_ProjectK_ProjectKCharacter_h_12_SPARSE_DATA \
	ProjectK_Source_ProjectK_ProjectKCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectK_Source_ProjectK_ProjectKCharacter_h_12_INCLASS_NO_PURE_DECLS \
	ProjectK_Source_ProjectK_ProjectKCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTK_API UClass* StaticClass<class AProjectKCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectK_Source_ProjectK_ProjectKCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
