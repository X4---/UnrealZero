// Fill out your copyright notice in the Description page of Project Settings.


#include "UZGameModeBase.h"
#include "UZGodViewerPawn.h"
#include "UZPlayerController.h"

AUZGameModeBase::AUZGameModeBase()
{
	DefaultPawnClass = AUZGodViewerPawn::StaticClass();
	PlayerControllerClass = AUZPlayerController::StaticClass();


}
