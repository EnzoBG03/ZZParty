// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ZZPartyGameMode.generated.h"

/**
 *
 */
UCLASS()
class ZZPARTY_API AZZPartyGameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ZZ Party | Classes")
	TSubclassOf<APawn> ClassePionJoueur;

	UFUNCTION(BlueprintCallable)
	void SpawnJoueurs();

};
