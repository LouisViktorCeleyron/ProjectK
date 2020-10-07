// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectKPlayerController.h"

AProjectKPlayerController::AProjectKPlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
