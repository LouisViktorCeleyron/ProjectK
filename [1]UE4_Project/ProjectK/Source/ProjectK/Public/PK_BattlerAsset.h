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
    int Lv1;
    UPROPERTY(EditAnywhere,BlueprintReadOnly)
    int Lv50;

    
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
    
};


