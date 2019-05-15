// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "UZGodViewerPawn.generated.h"

UCLASS()
class UNREALZERO_API AUZGodViewerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AUZGodViewerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//Move Functions
	virtual void MoveLeft(float val);
	virtual void MoveRight(float val);
	virtual void MoveUp(float val);
	virtual void MoveDown(float val);
	virtual void MoveFar(float val);
	virtual void MoveCloser(float val);
};
