// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "UnrealCourse05HUD.generated.h"

UCLASS()
class AUnrealCourse05HUD : public AHUD
{
	GENERATED_BODY()

public:
	AUnrealCourse05HUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

