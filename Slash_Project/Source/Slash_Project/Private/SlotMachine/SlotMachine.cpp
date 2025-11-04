// Fill out your copyright notice in the Description page of Project Settings.


#include "SlotMachine/SlotMachine.h"
#include "Math/UnrealMathUtility.h"
#include "Components/CapsuleComponent.h"
#include "Engine/GameEngine.h"
#include "SlotMachine/SlotTypes.h"

ASlotMachine::ASlotMachine()
{
	PrimaryActorTick.bCanEverTick = false;
	SlotMachineMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SlotMachineMesh"));
	SetRootComponent(SlotMachineMesh);
	SlotMachineMesh->SetGenerateOverlapEvents(true);
	SlotMachineMesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Camera, ECollisionResponse::ECR_Ignore);
	SlotMachineMesh->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Ignore);


	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	Capsule->SetupAttachment(GetRootComponent());
	Capsule->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	Capsule->SetCollisionResponseToChannel(ECollisionChannel::ECC_Pawn, ECollisionResponse::ECR_Block);

	NumReels = 3;
	BetAmount = 10;
	TotalSpins = 0;
	TotalPayout = 0;

	Symbols = { TEXT("Watermelon"), TEXT("Orange"), TEXT("Seven"), TEXT("Clover"), TEXT("Spade") };

}

void ASlotMachine::BeginPlay()
{
	Super::BeginPlay();
	if (GEngine) 
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Spinning!"));
	}
}

void ASlotMachine::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASlotMachine::GetHit_Implementation(const FVector& ImpactPoint, AActor* Hitter)
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Spinning!"));
	}
	if (bIsSpining) return;
	bIsSpining = true;
	UWorld* World = GetWorld();
	if (World)
	{
		SpinMachine();
	}
}

void ASlotMachine::SpinMachine()
{
// Delete previous spin
	CurrentSpin.Empty();

	for (int32 i = 0; i < NumReels; i++)
	{
		int32 Index = FMath::RandRange(0, Symbols.Num() - 1);
		CurrentSpin.Add(Symbols[Index]);
	}

	UE_LOG(LogTemp, Warning, TEXT("Spin Result: %s | %s | %s"),
		*CurrentSpin[0], *CurrentSpin[1], *CurrentSpin[2]);
	TotalSpins++;

	if (CheckWin())
	{
		int32 WinAmount = 100;
		TotalPayout += WinAmount;

		UE_LOG(LogTemp, Warning, TEXT("You won %d credits!"), WinAmount);
	}

	else
	{
		UE_LOG(LogTemp, Warning, TEXT("You lost. "));
	}

	CalculateRTP();
	bIsSpining = false;
}

bool ASlotMachine::CheckWin()
{
	return CurrentSpin[0] == CurrentSpin[1] && CurrentSpin[1] == CurrentSpin[2];
}

void ASlotMachine::CalculateRTP()
{
	float RTP = (TotalPayout * 1.0f) / (TotalSpins * BetAmount) * 100.0f;
	UE_LOG(LogTemp, Warning, TEXT("Current RTP: %.2f%%"), RTP);
}




