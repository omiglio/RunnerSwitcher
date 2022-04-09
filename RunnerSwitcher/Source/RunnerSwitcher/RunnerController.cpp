// Fill out your copyright notice in the Description page of Project Settings.


#include "RunnerController.h"
#include "Components/BoxComponent.h"

// Sets default values
ARunnerController::ARunnerController()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CollisionBox = CreateDefaultSubobject<
		UBoxComponent>(TEXT("Root"));
	CollisionBox->SetGenerateOverlapEvents(true);

	AutoPossessPlayer = EAutoReceiveInput::Player0;
}

// Called when the game starts or when spawned
void ARunnerController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARunnerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector NewLocation = GetActorLocation();
	NewLocation.Y += Speed * DeltaTime;
	NewLocation.Z += SwitchSpeed * DeltaTime *
		(Switched ? 1 : -1);

	if (NewLocation.Z < 70.0f) NewLocation.Z =
		70.f;
	else if (NewLocation.Z > 420.0f) NewLocation.Z = 
		420.0f;

	SetActorLocation(NewLocation);
}

// Called to bind functionality to input
void ARunnerController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	InputComponent->BindAction("Switched", IE_Pressed
	, this, &ARunnerController::OnSwitch);
}

void ARunnerController::OnSwitch()
{
	Switched = !Switched;
}
