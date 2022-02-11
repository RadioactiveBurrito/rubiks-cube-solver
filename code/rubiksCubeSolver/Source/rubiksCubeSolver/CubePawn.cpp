// Fill out your copyright notice in the Description page of Project Settings.


#include "CubePawn.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ACubePawn::ACubePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	VisibleCube = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("VisibleCube"));

	// Create a camera and a visible object
	UCameraComponent* OurCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("CubeCamera"));
	OurCamera->SetupAttachment(RootComponent);
	OurCamera->SetRelativeLocation(FVector(-250.0f, 0.0f, 250.0f));
	OurCamera->SetRelativeRotation(FRotator(-45.0f, 0.0f, 0.0f));

	VisibleCube->SetupAttachment(RootComponent);

	RightRotation = FRotator(0, 0, 90.f);

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
	VisibleCube->AddLocalRotation(RightRotation);
	UE_LOG(LogTemp, Warning, TEXT("Right called"));
}

