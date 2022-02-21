// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "CubeSliceTriggerBox.generated.h"

/**
 * 
 */
UCLASS()
class RUBIKSCUBESOLVER_API ACubeSliceTriggerBox : public ATriggerBox
{
	GENERATED_BODY()

public:
	ACubeSliceTriggerBox();
	// -Which slice it is on. (axis of rotation and sign)
	// -The position of the box.
	// -The dimensions of the box.

	void SetPosition(FVector Position);

	void SetDimensions(FVector Dimensions);

	void SetRotationAxis(FVector RotationAxis);

	const FVector GetRotationAxis();

private:
	FVector RotationAxis;
};
