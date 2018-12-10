// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "ZeroGameMode.h"
#include "ZeroCharacter.h"
#include "UObject/ConstructorHelpers.h"

AZeroGameMode::AZeroGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Characters/MainCharacter/BP_MainCharacter"));

	static ConstructorHelpers::FClassFinder<APlayerController> TPlayerControllerClass(TEXT("/Game/Base/BP_CharacterController"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	if (TPlayerControllerClass.Class != NULL)
	{
		PlayerControllerClass = TPlayerControllerClass.Class;
	}
}
