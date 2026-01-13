#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "FPSPlayerControllerBase.generated.h"

UCLASS()
class AFPSPlayerControllerBase : public APlayerController
{
	GENERATED_BODY()

public:
	AFPSPlayerControllerBase();

	/** 当接管输入后 会调用此覆写方法.*/
	virtual void PostProcessInput(const float DeltaTime, const bool bGamePaused) override;
};
