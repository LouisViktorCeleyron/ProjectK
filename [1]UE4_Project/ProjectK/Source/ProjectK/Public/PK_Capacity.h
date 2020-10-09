// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PK_Capacity.generated.h"

/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE()

UCLASS(Abstract,MinimalAPI)
class PROJECTK_API UPK_Capacity : public UDataAsset
{
	GENERATED_BODY()
	
};

UCLASS(Abstract,MinimalAPI,Blueprintable)
class PROJECTK_API UPK_Passive : public UPK_Capacity
{
	
	GENERATED_BODY()
};
