// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectK/Public/BattlerAssetFunctions.h"

int UBattlerAssetFunctions::GetStatAtLevel(const FStat PStatToExam, const int PLevel)
{
    const auto V_LevelRatio = static_cast<float>(PLevel)/MaxLevel();
    const auto V_StatEvolutionOnCurve = PStatToExam.Evolution->GetFloatValue(V_LevelRatio);

 
    return
    PStatToExam.BaseValue+
    FMath::TruncToInt(V_StatEvolutionOnCurve*PStatToExam.LvMaxAdditionValue);    
}

int UBattlerAssetFunctions::MaxLevel()
{
    return FMath::Max(1,MaxLevelValue);
}

UPK_ProcessedBattler* UBattlerAssetFunctions::CreateProcessedBattler(FBattler POrigin)
{
    const auto VReturn = StaticConstructObject_Internal(UPK_ProcessedBattler::StaticClass());
    return Cast<UPK_ProcessedBattler>(VReturn);
}
