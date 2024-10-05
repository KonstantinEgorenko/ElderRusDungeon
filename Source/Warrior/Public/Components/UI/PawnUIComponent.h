// Konstantin Egorenko All Rights Reserved

#pragma once

#include "CoreMinimal.h"
#include "Components/PawnExtensioncomponentBase.h"
#include "PawnUIComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPercentChangedDelegate, float, NewPercent);
/**
 * 
 */
UCLASS()
class WARRIOR_API UPawnUIComponent : public UPawnExtensioncomponentBase
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintAssignable)
	FOnPercentChangedDelegate OnCurrentHealthChanged;
};
