#include "CubePawn.h"
#include "Components/StaticMeshComponent.h"
//#include "CubeSliceTriggerBox.h"
#include "Components/BoxComponent.h"

#include <stdlib.h>
#include <string>

#pragma region Game loop related


// Called every frame
void ACubePawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ACubePawn::Right()
{
	// VisibleTestCube->AddLocalRotation(RightRotation);
	UBoxComponent* RightSlice = CubeSlices[0];
	for (UStaticMeshComponent* Cubie : Cubies)
	{
		//if (Cubie->OverlapComponent(, , RightSlice->GetCollisionShape()))
		//{
		// TODO
		//}
	}
	UE_LOG(LogTemp, Warning, TEXT("Right called"));
}

#pragma endregion



#pragma region Initialization

// Sets default values
ACubePawn::ACubePawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AutoPossessPlayer = EAutoReceiveInput::Player0;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> CubieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	// TODO: PASS NB_CUBIES IN CONSTRUCTOR
	TotalCubeSideLength = CUBIE_LENGTH * NB_CUBIES + (NB_CUBIES - 1)*SPACE_LENGTH_CUBIES;

	InitializeCamera();

	InitializeVisualCubeLayout(NB_CUBIES, CubieMesh);

	InitializeCubeSlices(NB_CUBIES);

	// So that the cubies are truly centered around the actor's position
	// int MAX_COORD = NB_CUBIES / 2;
	// SetPivotOffset(FVector(0, 0, MAX_COORD * CUBIE_LENGTH / 2));

	UE_LOG(LogTemp, Warning, TEXT("CubePawn constructor called"));
}

// Called when the game starts or when spawned
void ACubePawn::BeginPlay()
{
	Super::BeginPlay();

}

// Called to bind functionality to input
void ACubePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Right", IE_Pressed, this, &ACubePawn::Right);
	UE_LOG(LogTemp, Warning, TEXT("SetupInput called"));
}

void ACubePawn::InitializeVisualCubeLayout(uint8 NbCubies, ConstructorHelpers::FObjectFinder<UStaticMesh> CubieMesh)
{
	std::string CubieIdentifier;

	int MAX_COORD = NbCubies / 2;
	int MIN_COORD = -MAX_COORD;

	for (int X = MIN_COORD; X <= MAX_COORD; ++X)
	{
		for (int Y = MIN_COORD; Y <= MAX_COORD; ++Y)
		{
			for (int Z = MIN_COORD; Z <= MAX_COORD; ++Z)
			{
				if (IsValidCubie(X, Y, Z, MIN_COORD, MAX_COORD))
				{
					CubieIdentifier = std::to_string(X) + std::to_string(Y) + std::to_string(Z);

					// TODO: MARK THE CUBIES IN A CERTAIN ENCODING SO THEY ARE RECOGNIZABLE LATER ON

					UStaticMesh* Cubie = CubieMesh.Object;

					ColorCubie(X, Y, Z, Cubie);
					UStaticMeshComponent* CubieComponent = CreateDefaultSubobject<UStaticMeshComponent>(CubieIdentifier.c_str());
					CubieComponent->SetStaticMesh(Cubie);

					FVector CubiePosition = FVector(X * (CUBIE_LENGTH / NbCubies + SPACE_LENGTH_CUBIES + CUBIE_LENGTH),
						Y * (CUBIE_LENGTH / NbCubies + SPACE_LENGTH_CUBIES + CUBIE_LENGTH),
						Z * (CUBIE_LENGTH / NbCubies + SPACE_LENGTH_CUBIES + CUBIE_LENGTH)-(CUBIE_LENGTH/2)); // TODO, MAYBE PUT THIS IN METHOD. DUPLICATE IN SLICE INIT

					CubieComponent->SetupAttachment(RootComponent);
					CubieComponent->SetRelativeLocation(CubiePosition);

					Cubies.Emplace(CubieComponent);
				}
			}
		}
	}
}

void ACubePawn::InitializeCubeSlices(uint8 NbCubies)
{
	//TotalCubeSideLength
	const int NB_DIMENSIONS = 3;
	const std::string DIMENSION_IDENTIFIER = "XYZ";
	FVector POSITION_SELECTOR[] = { FVector(1, 0, 0), FVector(0, 1, 0), FVector(0, 0, 1) };
	FVector DIMENSIONS_SELECTOR[] = { FVector(0, 1, 1), FVector(1, 0, 1), FVector(1, 1, 0) };

	// maybe put as attributes
	int MAX_COORD = NbCubies / 2;
	int MIN_COORD = -MAX_COORD;

	std::string SliceIdentifier;

	for (int i = 0; i < NB_DIMENSIONS; ++i)
	{
		for (int Coord = MIN_COORD; Coord <= MAX_COORD; ++Coord)
		{
			SliceIdentifier = DIMENSION_IDENTIFIER[i] + std::to_string(Coord);
			//ACubeSliceTriggerBox* CubeSlice = CreateDefaultSubobject<ACubeSliceTriggerBox>(SliceIdentifier.c_str());
			UBoxComponent* CubeSliceComponent = CreateDefaultSubobject<UBoxComponent>(SliceIdentifier.c_str());

			// CubeSliceComponent->SetBoxExtent(FVector(CUBIE_LENGTH, CUBIE_LENGTH, CUBIE_LENGTH), true);

			// TODO: GIVE ROTATION AXIS AND BIND OVERLAP EVENT
			// CubeSliceComponent->OnComponentBeginOverlap.AddDynamic(this, &ACubePawn::Machin); do Machin
			FVector SlicePosition = POSITION_SELECTOR[i] * (Coord * (CUBIE_LENGTH / NbCubies + SPACE_LENGTH_CUBIES + CUBIE_LENGTH));

			
			CubeSliceComponent->SetupAttachment(RootComponent);
			CubeSliceComponent->SetRelativeLocation(SlicePosition);
			//CubeSliceComponent->SetBoxExtent(FVector(10, 10, 10));
			CubeSliceComponent->SetBoxExtent(DIMENSIONS_SELECTOR[i] * TotalCubeSideLength/2
				+ POSITION_SELECTOR[i]*CUBIE_LENGTH/2, true); // sets the dimensions*/

			CubeSlices.Emplace(CubeSliceComponent);
		}
	}



	/*UCameraComponent* OurCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("CubeCamera"));
	OurCamera->SetupAttachment(RootComponent);
	OurCamera->SetRelativeLocation(FVector(-500.0f, 0.0f, 500.0f));
	OurCamera->SetRelativeRotation(FRotator(-45.0f, 0.0f, 0.0f));*/
}

void ACubePawn::ColorCubie(int X, int Y, int Z, UStaticMesh* Cubie)
{
	// TODO: COLOR THE CUBIES
	if (Cubie == NULL)
		return;

	TMap<FVector, FColor> VertexColorData;
	Cubie->GetVertexColorData(VertexColorData);

	//for (auto key : VertexColorData.CreateConstKeyIterator())
	//{

	//}

	//Cubie->SetVertexColorData();

}

void ACubePawn::InitializeCamera()
{
	// Create a camera and a visible object
	UCameraComponent* Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("CubeCamera"));
	Camera->SetupAttachment(RootComponent);
	Camera->SetRelativeLocation(FVector(-500.0f, 0.0f, 500.0f));
	Camera->SetRelativeRotation(FRotator(-45.0f, 0.0f, 0.0f));
}

#pragma endregion



#pragma region Utilities

bool ACubePawn::IsValidCubie(int X, int Y, int Z, const int MinCoord, const int MaxCoord)
{
	return X == MinCoord || X == MaxCoord ||
		Y == MinCoord || Y == MaxCoord ||
		Z == MinCoord || Z == MaxCoord;
}

#pragma endregion

