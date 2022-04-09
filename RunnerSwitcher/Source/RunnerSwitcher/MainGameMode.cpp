// Fill out your copyright notice in the Description page of Project Settings.

#include "MainGameMode.h"
#include "GameBlockController.h"

void AMainGameMode::BeginPlay()
{
	Super::BeginPlay();
}

void AMainGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UWorld* const World = GetWorld();

	if (World)
	{
		FVector PlayerLocation = World->GetFirstPlayerController()
			->GetPawn()->GetActorLocation();

		while (PointerScenarioBlocks < PlayerLocation.Y +
			FARTHEST_BLOCK_DISTANCE)
		{
			FVector Location = FVector(0.0f, PointerScenarioBlocks,
				0.0f);

			AGameBlockController* block = World->SpawnActor<
				AGameBlockController>(GrounddBlockBlueprint,
				Location, FRotator::ZeroRotator);

			PointerScenarioBlocks += block->Size;
		}
		while (PointerHazardBlocks < PlayerLocation.Y +
			FARTHEST_BLOCK_DISTANCE)
		{
			FVector Location = FVector(0.0f, PointerHazardBlocks,
				0.0f);

			AGameBlockController* block = World->SpawnActor
				<AGameBlockController>(FMath::RandBool() ?
					HazardBlock1Blueprint : HazardBlock2Blueprint,
					Location, FRotator::ZeroRotator);

			PointerHazardBlocks += block->Size;
		}
	}
}

void AMainGameMode::OnGameOver()
{

}
