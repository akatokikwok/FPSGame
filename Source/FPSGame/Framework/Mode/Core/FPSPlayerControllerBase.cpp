#include "FPSPlayerControllerBase.h"

AFPSPlayerControllerBase::AFPSPlayerControllerBase()
{
}

void AFPSPlayerControllerBase::PostProcessInput(const float DeltaTime, const bool bGamePaused)
{
	Super::PostProcessInput(DeltaTime, bGamePaused);
}