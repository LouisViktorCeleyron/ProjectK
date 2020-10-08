// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectK/Public/PK_BattlerAsset.h"
#include "ProjectK/Public/BattlerAssetFunctions.h"

void UPK_BattlerAsset::ReturnAllStatAtLevel(const int PLevel, int& RHp, int& RAttack, int& RDefense, int& RSpeed,
    int& RLuck)
{
    RAttack = UBattlerAssetFunctions::GetStatAtLevel(Attack,PLevel);
    RDefense = UBattlerAssetFunctions::GetStatAtLevel(Defense,PLevel);
    RHp = UBattlerAssetFunctions::GetStatAtLevel(HP,PLevel);
    RLuck = UBattlerAssetFunctions::GetStatAtLevel(Luck,PLevel);
    RSpeed = UBattlerAssetFunctions::GetStatAtLevel(Speed,PLevel);
}
