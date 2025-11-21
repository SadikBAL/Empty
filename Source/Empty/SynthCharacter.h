// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "SynthCharacter.generated.h"

UCLASS()
class EMPTY_API ASynthCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	
	ASynthCharacter();

protected:

	virtual void BeginPlay() override;

public:	

	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
