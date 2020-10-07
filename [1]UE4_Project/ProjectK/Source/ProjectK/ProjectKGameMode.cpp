// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectKGameMode.h"
#include "ProjectKPlayerController.h"
#include "ProjectKPawn.h"

AProjectKGameMode::AProjectKGameMode()
{
	// no pawn by default
	DefaultPawnClass = AProjectKPawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = AProjectKPlayerController::StaticClass();
}
