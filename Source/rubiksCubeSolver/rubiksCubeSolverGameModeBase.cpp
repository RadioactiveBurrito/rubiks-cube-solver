// Copyright Epic Games, Inc. All Rights Reserved.


#include "rubiksCubeSolverGameModeBase.h"
#include "CubePawn.h"

ArubiksCubeSolverGameModeBase::ArubiksCubeSolverGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	// set default pawn, player controller, and HUD
	// these can be read-only viewed in the editor:
	// Edit >> Project Settings >> Maps & Modes >> Default Modes
	//DefaultPawnClass = ACubePawn::StaticClass();
	//PlayerControllerClass = APrimaryPlayerController::StaticClass();
	//HUDClass = APrimaryHUD::StaticClass();
}