// Fill out your copyright notice in the Description page of Project Settings.


#include "CubePawn.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
ACubePawn::ACubePawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	RootComponent = Root; // transform applied to the pawn
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	Mesh->AttachTo(Root); // todo: remove compile warning as this method will be deprecated soon

	RightRotation = FRotator(0, 0, 3.141593f / 2);


	AutoPossessPlayer = EAutoReceiveInput::Player0;
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
	Mesh->AddWorldRotation(RightRotation);
	UE_LOG(LogTemp, Warning, TEXT("Right called"));
}

