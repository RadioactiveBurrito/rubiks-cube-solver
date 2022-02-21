// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Camera/CameraComponent.h"
#include "CoreMinimal.h"
//#include "CubeSliceTriggerBox.h"
#include "Components/BoxComponent.h"

#include "GameFramework/Pawn.h"
#include "CubePawn.generated.h"

UCLASS()
class RUBIKSCUBESOLVER_API ACubePawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ACubePawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// TODO: MAYBE CHANGE THE EDITANYWHERE SPECIFIER TO SOMETHING ELSE
	UPROPERTY(EditAnywhere)
	TArray<UStaticMeshComponent*> Cubies;

	// TODO: MAYBE CHANGE THE EDITANYWHERE SPECIFIER TO SOMETHING ELSE
	UPROPERTY(EditAnywhere)
	TArray<UBoxComponent*> CubeSlices;

private:
	const uint8 NB_CUBIES = 3;

	const float SPACE_LENGTH_CUBIES = 10.f;

	const float CUBIE_LENGTH = 100;

	// The size of a side of the cube taking into account the space between the cubies
	float TotalCubeSideLength;

	void InitializeVisualCubeLayout(uint8 NbCubies, ConstructorHelpers::FObjectFinder<UStaticMesh> CubieMesh);

	void InitializeCubeSlices(uint8 NbCubies);

	void InitializeCamera();

	void ColorCubie(int X, int Y, int Z, UStaticMesh* Cubie);

	bool IsValidCubie(int X, int Y, int Z, const int MinCoord, const int MaxCoord);
};
