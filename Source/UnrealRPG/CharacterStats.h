#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CharacterStats.generated.h"

UCLASS(BlueprintType)
class UNREALRPG_API UCharacterStats : public UDataAsset
{
	GENERATED_BODY()
	
public: 
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int HP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Strength;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int Defense;
};
