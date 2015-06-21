// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "UnrealGame.h"
#include "UnrealGameGameMode.h"
#include "UnrealGameCharacter.h"

AUnrealGameGameMode::AUnrealGameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScroller/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
