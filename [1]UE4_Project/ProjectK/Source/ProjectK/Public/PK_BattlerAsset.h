// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"

#include "PK_BattlerAsset.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FStat
{
    GENERATED_BODY()

public:
    UPROPERTY(BlueprintReadOnly,EditAnywhere)
    int BaseValue;
    UPROPERTY(EditAnywhere,BlueprintReadOnly)
    int LvMaxAdditionValue;

    
    UPROPERTY(BlueprintReadOnly,EditAnywhere)
    UCurveFloat* Evolution;
//public: 
};

UCLASS(Blueprintable)
class PROJECTK_API UPK_BattlerAsset : public UDataAsset
{
	GENERATED_BODY()

    public:
    
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category=Stats)
    FStat Attack;
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category=Stats)
    FStat Defense;
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category=Stats)
    FStat HP;
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category=Stats)
    FStat Speed;
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category=Stats)
    FStat Luck;


    public:
    UPROPERTY(EditAnywhere,BlueprintReadOnly,Category=Appearance)
    UTexture2D* SpriteInGame;
    
    public:

    UFUNCTION(Category=Stats, BlueprintCallable)
    void ReturnAllStatAtLevel(
        UPARAM(DisplayName = "Level")
            const int PLevel,
        UPARAM(DisplayName = "HealthPoints")
            int& RHp,
        UPARAM(DisplayName = "Attack")
            int& RAttack,
        UPARAM(DisplayName = "Defense")
            int& RDefense,
        UPARAM(DisplayName = "Speed")
            int& RSpeed,
        UPARAM(DisplayName = "Luck")
            int& RLuck);
};


