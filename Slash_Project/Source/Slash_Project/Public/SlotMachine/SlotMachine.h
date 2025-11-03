// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/CapsuleComponent.h"
#include "Interfaces/HitInterface.h"
#include "SlotMachine.generated.h"

UCLASS()
class SLASH_PROJECT_API ASlotMachine : public AActor, public IHitInterface
{
	GENERATED_BODY()
	
public:	
	ASlotMachine();
	virtual void Tick(float DeltaTime) override;
	virtual void GetHit_Implementation(const FVector& ImpactPoint, AActor* Hitter) override;

	UFUNCTION(BlueprintCallable, Category = "SlotMachine")
	void SpinMachine();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* SlotMachineMesh;

	UPROPERTY(VisibleAnywhere)
	UCapsuleComponent* Capsule;

	UPROPERTY(VisibleAnywhere)
	TArray<FString> Symbols;

	UPROPERTY(VisibleAnywhere)
	TArray<FString> CurrentSpin;

	UPROPERTY(VisibleAnywhere)
	int32 NumReels;

	UPROPERTY(VisibleAnywhere)
	int32 TotalSpins;

	UPROPERTY(VisibleAnywhere)
	int32 TotalPayout;

	UPROPERTY(VisibleAnywhere)
	int32 BetAmount;

	bool IsSpining();
	bool CheckWin();
	void CalculateRTP();
	

};
