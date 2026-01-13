#pragma once

#include "CoreMinimal.h"
#include "FPSGame/Framework/Mode/Core/FPSPlayerControllerBase.h"
#include "FPSPlayerController.generated.h"

UCLASS()
class AFPSPlayerController : public AFPSPlayerControllerBase
{
	GENERATED_BODY()

public:
	AFPSPlayerController();

	/** 当接管输入后 会调用此覆写方法.*/
	virtual void PostProcessInput(const float DeltaTime, const bool bGamePaused) override;
};
