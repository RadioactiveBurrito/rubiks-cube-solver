#include "CubeSliceTriggerBox.h"

ACubeSliceTriggerBox::ACubeSliceTriggerBox()
{
	// TODO: CHECK HOW TO PUT PARAMETERS IN CONSTRUCTOR
}

void ACubeSliceTriggerBox::SetPosition(FVector Position)
{
	FTransform TranslationTransform = FTransform(Position);
	AddActorWorldTransform(TranslationTransform);
}

void ACubeSliceTriggerBox::SetDimensions(FVector Dimensions)
{
	FRotator Rotation = FRotator();
	FVector Translation = FVector::ZeroVector;
	FTransform ScaleTransform = FTransform(Rotation, Translation, Dimensions);
	AddActorWorldTransform(ScaleTransform);
}

void ACubeSliceTriggerBox::SetRotationAxis(FVector Axis)
{
	RotationAxis = Axis;
}

const FVector ACubeSliceTriggerBox::GetRotationAxis()
{
	return RotationAxis;
}