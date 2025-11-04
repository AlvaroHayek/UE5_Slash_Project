// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interfaces/HitInterface.h"
#include "SlotMachine/SlotTypes.h"
#include "SlotMachine.generated.h"

class UCapsuleComponent;
class UAnimMontage;

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

	UPROPERTY(BlueprintReadOnly)
	TEnumAsByte<ESlotResult> SlotResult;

private:
	void PlayMontageSection(UAnimMontage* Montage, const FName& SectionName);
	int32 PlayRandomMontageSection(UAnimMontage* Montage, const TArray<FName>& SectionNames);

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

	UPROPERTY(EditDefaultsOnly, Category = "Slot Machine Properties")
	UAnimMontage* SlotSpinMontage;

	UPROPERTY(EditAnywhere, Category = "Slot Machine Properties")
	TArray<FName> SlotResultSections;

	bool bIsSpining = false;
	bool CheckWin();
	void CalculateRTP();
	
public:
	FORCEINLINE TEnumAsByte<ESlotResult> GetSlotResult() const { return SlotResult; }
};
