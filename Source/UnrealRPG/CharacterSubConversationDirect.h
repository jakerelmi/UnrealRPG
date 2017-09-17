#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "CharacterSubConversationDirect.generated.h"

USTRUCT(BlueprintType)
struct FSubConversationMap
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TMap<int, UDataTable*> SubConversations;
};

UCLASS(BlueprintType)
class UNREALRPG_API UCharacterSubConversationDirect : public UDataAsset
{
	GENERATED_BODY()

public:
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TMap<UDataTable*, FSubConversationMap> SubConversationDirectory;
};
