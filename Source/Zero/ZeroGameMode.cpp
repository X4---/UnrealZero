// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ZeroGameMode.h"
#include "ZeroCharacter.h"
#include "UObject/ConstructorHelpers.h"

AZeroGameMode::AZeroGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Characters/MainCharacter/BP_MainCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
