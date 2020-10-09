// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PK_ProcessedBattler.h"
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PK_Capacity.generated.h"

/**
 * 
 */


UCLASS(Abstract)
class PROJECTK_API UPK_Capacity : public UDataAsset
{
	GENERATED_BODY()

	public:
};


UCLASS(Abstract,Blueprintable)
class PROJECTK_API UPK_Passive : public UPK_Capacity
{
	GENERATED_BODY()
	
	public:
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	void EffectOnBattleStart(const TArray<UPK_ProcessedBattler*>& Targets);

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	void EffectOnBattleEnd(const TArray<UPK_ProcessedBattler*>& Targets);

	UFUNCTION(BlueprintNativeEvent,BlueprintCallable)
	void PermaEffect(const TArray<UPK_ProcessedBattler*>& Targets);
};
