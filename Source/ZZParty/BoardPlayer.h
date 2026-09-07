#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ZZPartyTypes.h"
#include "BoardPlayer.generated.h"

UCLASS()
class ZZPARTY_API ABoardPlayer : public APawn
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ZZ Party | Données Joueur")
	EPartyCharacter PersonnageActuel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ZZ Party | Données Joueur")
	EPartyColor CouleurActuelle;
};
