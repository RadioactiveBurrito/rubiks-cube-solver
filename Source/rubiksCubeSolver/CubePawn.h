// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Camera/CameraComponent.h"
#include "CoreMinimal.h"

#include "GameFramework/Pawn.h"
#include "CubePawn.generated.h"

UCLASS()
class RUBIKSCUBESOLVER_API ACubePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACubePawn();

	void Right();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//UPROPERTY()//EditAnywhere) // allows to also edit in the editor, we assign a static mesh through the editor
	//UStaticMeshComponent* VisibleTestCube;

	UPROPERTY()
	TArray<UStaticMeshComponent*> Cubies;

private:
	const uint8 CUBE_SIZE_SIDE = 3;

	const float SPACE_SIZE_CUBIES = 0.5f;

	const uint8 CUBIE_SIZE_CM = 10;

	// FRotator RightRotation;

	void InitializeVisualCubeLayout(uint8 CubeSizeSide, ConstructorHelpers::FObjectFinder<UStaticMesh> CubieMesh);
};
