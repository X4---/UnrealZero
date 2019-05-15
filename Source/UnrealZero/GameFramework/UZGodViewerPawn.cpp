// Fill out your copyright notice in the Description page of Project Settings.


#include "UZGodViewerPawn.h"
#include "GameFramework/DefaultPawn.h"
#include "UObject/ConstructorHelpers.h"
#include "Engine/World.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/PlayerController.h"
#include "Engine/CollisionProfile.h"
#include "Engine/StaticMesh.h"
#include "Components/SphereComponent.h"
#include "GameFramework/PawnMovementComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "GameFramework/PlayerInput.h"

// Sets default values
AUZGodViewerPawn::AUZGodViewerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AUZGodViewerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AUZGodViewerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AUZGodViewerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveLeft", this, &AUZGodViewerPawn::MoveLeft);
	PlayerInputComponent->BindAxis("MoveRight", this, &AUZGodViewerPawn::MoveRight);
	PlayerInputComponent->BindAxis("MoveUp", this, &AUZGodViewerPawn::MoveUp);
	PlayerInputComponent->BindAxis("MoveDown", this, &AUZGodViewerPawn::MoveDown);

	PlayerInputComponent->BindAxis("MoveFar", this, &AUZGodViewerPawn::MoveFar);
	PlayerInputComponent->BindAxis("MoveCloser", this,&AUZGodViewerPawn::MoveCloser);
}

void AUZGodViewerPawn::MoveLeft(float val)
{
	if (val != 0.f)
	{
		UE_LOG(LogTemp, Log, TEXT("MoveLeft"));
	}
}

void AUZGodViewerPawn::MoveRight(float val)
{
	if (val != 0.f)
	{
		UE_LOG(LogTemp, Log, TEXT("MoveRight"));
	}
}

void AUZGodViewerPawn::MoveUp(float val)
{
	if (val != 0.f)
	{
		UE_LOG(LogTemp, Log, TEXT("MoveUp"));
	}
}

void AUZGodViewerPawn::MoveDown(float val)
{
	if (val != 0.f)
	{
		UE_LOG(LogTemp, Log, TEXT("MoveDown"));
	}
}

void AUZGodViewerPawn::MoveFar(float val)
{
	if (val != 0.f)
	{
		UE_LOG(LogTemp, Log, TEXT("MoveFar"));
	}
}

void AUZGodViewerPawn::MoveCloser(float val)
{
	if (val != 0.f)
	{
		UE_LOG(LogTemp, Log, TEXT("MoveCloser"));
	}
}

