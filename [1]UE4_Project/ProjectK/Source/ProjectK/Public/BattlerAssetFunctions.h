// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "PK_BattlerAsset.h"

#include "BattlerAssetFunctions.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTK_API UBattlerAssetFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	public:
	static int const MaxLevelValue = 50; 
	
	public:
	UFUNCTION(BlueprintCallable)
	static int GetStatAtLevel(FStat PStatToExam, int PLevel);
	UFUNCTION(BlueprintCallable,BlueprintPure)
    static int MaxLevel();
	
};
