// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectKGameMode.h"
#include "ProjectKPlayerController.h"
#include "ProjectKCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectKGameMode::AProjectKGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AProjectKPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}