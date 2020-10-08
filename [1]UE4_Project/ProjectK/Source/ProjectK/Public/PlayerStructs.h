// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "PK_BattlerAsset.h"
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PlayerStructs.generated.h"
/**
 * 
 */
USTRUCT(BlueprintType)
struct FBattler 
{
    GENERATED_BODY()

public: 
    UPROPERTY(EditAnywhere,BlueprintReadOnly)
    UPK_BattlerAsset* AssetRef;

    UPROPERTY(EditAnywhere,BlueprintReadOnly)
    FString Nickname;

    UPROPERTY(EditAnywhere,BlueprintReadOnly)
	int Level;
    UPROPERTY(EditAnywhere,BlueprintReadOnly)
    int Exp;
    UPROPERTY(EditAnywhere,BlueprintReadOnly)
    int CurrentHP;
    
};

USTRUCT()
struct FTeam
{
    GENERATED_BODY()
};
