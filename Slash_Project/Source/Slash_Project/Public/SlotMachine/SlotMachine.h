// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/HitInterface.h"
#include "SlotMachine.generated.h"

class UCapsuleComponent;

UCLASS()
class SLASH_PROJECT_API ASlotMachine : public AActor, public IHitInterface
{
	GENERATED_BODY()
	
public:	
	ASlotMachine();
	virtual void Tick(float DeltaTime) override;
	virtual void GetHit_Implementation(const FVector& ImpactPoint, AActor* Hitter) override;

	UFUNCTION(BlueprintCallable, Category = "Slot Machine Properties")
	void SpinMachine();

protected:
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* SlotMachineMesh;

	UPROPERTY(VisibleAnywhere)
	UCapsuleComponent* Capsule;

	UPROPERTY(VisibleAnywhere, Category = "Slot Machine Properties")
	TArray<FString> Symbols;

	UPROPERTY(VisibleAnywhere, Category = "Slot Machine Properties")
	TArray<FString> CurrentSpin;

	UPROPERTY(VisibleAnywhere, Category = "Slot Machine Properties")
	int32 NumReels;

	UPROPERTY(VisibleAnywhere, Category = "Slot Machine Properties")
	int32 TotalSpins;

	UPROPERTY(VisibleAnywhere, Category = "Slot Machine Properties")
	int32 TotalPayout;

	UPROPERTY(VisibleAnywhere, Category = "Slot Machine Properties")
	int32 BetAmount;

	bool bIsSpining = false;
	bool CheckWin();
	void CalculateRTP();
	

};
