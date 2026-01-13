#include "FPSPlayerController.h"

AFPSPlayerController::AFPSPlayerController()
{
}

void AFPSPlayerController::PostProcessInput(const float DeltaTime, const bool bGamePaused)
{
	Super::PostProcessInput(DeltaTime, bGamePaused);
}
