// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SlotMachine.generated.h"

UCLASS()
class SLASH_PROJECT_API ASlotMachine : public AActor
{
	GENERATED_BODY()
	
public:	
	ASlotMachine();
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "SlotMachine")
	void SpinMachine();

protected:
	virtual void BeginPlay() override;

private:
	TArray<FString> Symbols;
	TArray<FString> CurrentSpin;
	int32 NumReels;

	int32 TotalSpins;
	int32 TotalPayout;
	int32 BetAmount;

	bool CheckWin();
	void CalculateRTP();
	

};
