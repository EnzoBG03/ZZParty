#pragma once

#include "CoreMinimal.h"
#include "ZZPartyTypes.generated.h"

UENUM(BlueprintType)
enum class EPartyCharacter : uint8
{
    Aucun UMETA(DisplayName = "Aucun"),
    SourisA UMETA(DisplayName = "SourisA"),
    SourisB UMETA(DisplayName = "SourisB")
};

UENUM(BlueprintType)
enum class EPartyColor : uint8
{
    Aucun UMETA(DisplayName = "Aucun"),
    Rouge UMETA(DisplayName = "Rouge"),
    Bleu UMETA(DisplayName = "Bleu"),
    Jaune UMETA(DisplayName = "Jaune"),
    Vert UMETA(DisplayName = "Vert")
};

UENUM(BlueprintType)
enum class EPartyBoard : uint8
{
    Aucun UMETA(DisplayName = "Aucun"),
    Vallee UMETA(DisplayName = "Vallee"),
    Matrice UMETA(DisplayName = "Matrice"),
    Voxelgard UMETA(DisplayName = "Voxelgard"),
    CyberArcadia UMETA(DisplayName = "CyberArcadia")
};
