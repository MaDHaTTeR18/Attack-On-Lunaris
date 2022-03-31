// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyFPSGameModeBase.h"
#include "KillEmAllGameMode.generated.h"

/**
 * 
 */
UCLASS()
class MYFPS_API AKillEmAllGameMode : public AMyFPSGameModeBase
{
	GENERATED_BODY()

public:
	virtual void PawnKilled(APawn* PawnKilled) override;

private:
	void EndGame(bool bIsPlayerWinner);
	float StartDelay = 4.5f;
	class AShooterCharacter* ShooterCharacter;
	class AShooterPlayerController* ShooterPlayerController;

protected:
	virtual void BeginPlay() override;
	
};
