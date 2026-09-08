#include "BoardGenerator.h"
#include "Components/SplineComponent.h"

ABoardGenerator::ABoardGenerator()
{
	PrimaryActorTick.bCanEverTick = false;

	CheminPlateau = CreateDefaultSubobject<USplineComponent>(TEXT("CheminPlateau"));
	RootComponent = CheminPlateau;
}
