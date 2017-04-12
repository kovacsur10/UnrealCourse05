// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "UnrealCourse05.h"
#include "UnrealCourse05GameMode.h"
#include "UnrealCourse05HUD.h"
#include "UnrealCourse05Character.h"

AUnrealCourse05GameMode::AUnrealCourse05GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUnrealCourse05HUD::StaticClass();
}
