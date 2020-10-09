// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PK_ProcessedBattler.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTK_API UPK_ProcessedBattler : public UObject
{
	GENERATED_BODY()

	public:
	UPROPERTY(BlueprintReadOnly)
	int Level;
	UPROPERTY(BlueprintReadOnly)
	int Exp;
	
	UPROPERTY(BlueprintReadOnly)
	int HP;
	UPROPERTY(BlueprintReadOnly)
	int Attack;
	UPROPERTY(BlueprintReadOnly)
	int Defense;
	UPROPERTY(BlueprintReadOnly)
	int Speed;
	UPROPERTY(BlueprintReadOnly)
	int Luck;
	
	public:
	UFUNCTION(BlueprintCallable)
	void ProcessOrigin();
};
