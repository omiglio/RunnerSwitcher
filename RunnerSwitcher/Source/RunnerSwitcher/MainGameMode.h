// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MainGameMode.generated.h"

/**
 * 
 */
UCLASS()
class RUNNERSWITCHER_API AMainGameMode : public AGameModeBase
{
	GENERATED_BODY()

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaSeconds) override;

	void OnGameOver();

	int Score;

	float FARTHEST_BLOCK_DISTANCE = 2000.0f;

	float PointerScenarioBlocks = 1000.0f;
	float PointerHazardBlocks = 1000.0f;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	TSubclassOf<class AGameBlockController>GroundBlockBlueprint;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	TSubclassOf<class AGameBlockController>HazardBlock1Blueprint;

	UPROPERTY(EditAnywhere, Category = "Spawning")
	TSubclassOf<class AGameBlockController>HazardBlock2Blueprint;
	
};
