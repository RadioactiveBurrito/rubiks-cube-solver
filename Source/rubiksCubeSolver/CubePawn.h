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

	UPROPERTY(EditAnywhere)
	TArray<UStaticMeshComponent*> Cubies;

private:
	const uint8 NB_CUBIES = 3;

	const float SPACE_SIZE_CUBIES = 10.f;

	const float CUBIE_SIZE = 100;

	void InitializeVisualCubeLayout(uint8 NbCubies, ConstructorHelpers::FObjectFinder<UStaticMesh> CubieMesh);

	void InitializeCubeSlices();

	void InitializeCamera();

	void ColorCubie(int X, int Y, int Z, UStaticMesh* Cubie);

	bool IsValidCubie(int X, int Y, int Z, const int MIN_COORD, const int MAX_COORD);
};
