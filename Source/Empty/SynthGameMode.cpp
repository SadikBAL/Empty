#include "SynthGameMode.h"
#include "SynthGameState.h"
#include "SynthHUD.h"
#include "SynthPlayerController.h"
#include "SynthPlayerState.h"

ASynthGameMode::ASynthGameMode(const FObjectInitializer& ObjectInitializer)
{
	DefaultPawnClass		= ASynthPlayerController::StaticClass();
	HUDClass				= ASynthHUD::StaticClass();
	PlayerControllerClass	= ASynthPlayerController::StaticClass();
	GameStateClass			= ASynthGameState::StaticClass();
	PlayerStateClass		= ASynthPlayerState::StaticClass();
}
