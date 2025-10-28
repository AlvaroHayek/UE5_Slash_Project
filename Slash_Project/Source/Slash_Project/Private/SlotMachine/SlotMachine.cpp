// Fill out your copyright notice in the Description page of Project Settings.


#include "SlotMachine/SlotMachine.h"
#include "Math/UnrealMathUtility.h"

ASlotMachine::ASlotMachine()
{
	PrimaryActorTick.bCanEverTick = false;
	SlotMachineMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SlotMachineMesh"));
	SetRootComponent(SlotMachineMesh);

	Capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	Capsule->SetupAttachment(GetRootComponent());

	NumReels = 3;
	BetAmount = 10;
	TotalSpins = 0;
	TotalPayout = 0;

	Symbols = { TEXT("Watermelon"), TEXT("Orange"), TEXT("Seven"), TEXT("Clover"), TEXT("Spade") };

}

void ASlotMachine::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASlotMachine::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

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




