#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BoardGenerator.generated.h"

class USplineComponent;

UCLASS()
class ZZPARTY_API ABoardGenerator : public AActor
{
	GENERATED_BODY()

public:
	ABoardGenerator();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="ZZ Party | Architecture")
	USplineComponent* CheminPlateau;
};
