// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "PlayerStructs.h"
#include "PK_ProcessedBattler.h"
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PK_BattleMode.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class PROJECTK_API APK_BattleMode : public AGameModeBase
{
	GENERATED_BODY()
    public:
    
    UPROPERTY(EditAnywhere)
    TArray<FBattler> TempBattlersStructs;
    
    UPROPERTY(VisibleAnywhere,BlueprintReadOnly)
    TArray<UPK_ProcessedBattler*> AllBattlers;
    
public:
    virtual void InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage) override;
};
