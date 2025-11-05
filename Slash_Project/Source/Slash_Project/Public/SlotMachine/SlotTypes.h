#pragma once

UENUM(BlueprintType)
enum class ESlotState : uint8
{
	ESS_Idle UMETA(DisplayName = "Idle"),
	ESS_Moving UMETA(DisplayName = "Moving")
};


UENUM(BlueprintType)
enum ESlotResult
{
	ESR_SlotResult1 UMETA(DisplayName = "SlotResult1"),
	ESR_SlotResult2 UMETA(DisplayName = "SlotResult2"),
	ESR_SlotResult3 UMETA(DisplayName = "SlotResult3"),

	ESR_MAX UMETA(DisplayName = "DefaultMax")
};

UENUM(BlueprintType)
enum class ESlotSymbol : uint8
{
	ESSY_Watermelon UMETA(DisplayName = "Watermelon"),
	ESSY_Orange UMETA(DisplayName = "Orange"),
	ESSY_Seven UMETA(DisplayName = "Seven"),
	ESSY_Clover UMETA(DisplayName = "Clover"),
	ESSY_Spade UMETA(DisplayName = "Spade")
};

//Symbols = { TEXT("Watermelon"), TEXT("Orange"), TEXT("Seven"), TEXT("Clover"), TEXT("Spade")