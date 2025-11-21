#include "SynthCharacter.h"

ASynthCharacter::ASynthCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ASynthCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void ASynthCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void ASynthCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

