// Fill out your copyright notice in the Description page of Project Settings.


#include "CubePawn.h"
#include "Components/StaticMeshComponent.h"
#include <string>

// Sets default values
ACubePawn::ACubePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	// VisibleTestCube = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisibleTestCube"));

	// TODO REMOVE
	//static ConstructorHelpers::FObjectFinder<UStaticMesh> StaticMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	//UStaticMesh* Cubie = StaticMesh.Object;
	//VisibleTestCube->SetStaticMesh(Cubie);
	// TODO REMOVE

	// Create a camera and a visible object
	UCameraComponent* OurCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("CubeCamera"));
	OurCamera->SetupAttachment(RootComponent);
	OurCamera->SetRelativeLocation(FVector(-250.0f, 0.0f, 250.0f));
	OurCamera->SetRelativeRotation(FRotator(-45.0f, 0.0f, 0.0f));

	//VisibleTestCube->SetupAttachment(RootComponent);

	//RightRotation = FRotator(0, 0, 90.f);

	InitializeVisualCubeLayout(CUBE_SIZE_SIDE, CubieMesh);

	UE_LOG(LogTemp, Warning, TEXT("CubePawn constructor called"));
}

// Called when the game starts or when spawned
void ACubePawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACubePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACubePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Right", IE_Pressed, this, &ACubePawn::Right);
	UE_LOG(LogTemp, Warning, TEXT("SetupInput called"));
}

void ACubePawn::Right()
{
	// VisibleTestCube->AddLocalRotation(RightRotation);
	UE_LOG(LogTemp, Warning, TEXT("Right called"));
}

void ACubePawn::InitializeVisualCubeLayout(uint8 CubeSizeSide, ConstructorHelpers::FObjectFinder<UStaticMesh> CubieMesh)
{
	std::string CubieIdentifier;
	for (uint8 X = 0; X < CubeSizeSide; ++X)
	{
		for (uint8 Y = 0; Y < CubeSizeSide; ++Y)
		{
			for (uint8 Z = 0; Z < CubeSizeSide; ++Z)
			{
				CubieIdentifier = std::to_string(X) + std::to_string(Y) + std::to_string(Z);

				UStaticMesh* Cubie = CubieMesh.Object;
				UStaticMeshComponent* CubieComponent = CreateDefaultSubobject<UStaticMeshComponent>(CubieIdentifier.c_str());
				CubieComponent->SetStaticMesh(Cubie);
				CubieComponent->SetRelativeLocation(FVector(X * (float(CUBIE_SIZE_CM) / CubeSizeSide + SPACE_SIZE_CUBIES),
					Y * (float(CUBIE_SIZE_CM) / CubeSizeSide + SPACE_SIZE_CUBIES),
					Z * (float(CUBIE_SIZE_CM) / CubeSizeSide + SPACE_SIZE_CUBIES)));

				CubieComponent->SetupAttachment(RootComponent);
				Cubies.Emplace(CubieComponent);
			}
		}
	}
}