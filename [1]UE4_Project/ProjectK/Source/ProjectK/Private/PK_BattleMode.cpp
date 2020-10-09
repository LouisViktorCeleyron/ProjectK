// Fill out your copyright notice in the Description page of Project Settings.


#include "PK_BattleMode.h"

#include "BattlerAssetFunctions.h"

void APK_BattleMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
    Super::InitGame(MapName, Options, ErrorMessage);
    for (FBattler bat : TempBattlersStructs)
    {
        AllBattlers.Add(UBattlerAssetFunctions::CreateProcessedBattler(bat));
    }
}
