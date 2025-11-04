#pragma once

UENUM(BlueprintType)
enum class ESlotState : uint8
{
	ESS_Idle UMETA(DisplayName = "Idle"),
	ESS_Moving UMETA(DisplayName = "Moving")
};


UENUM(BlueprintType)
enum class ESlotResult : uint8
{
	ESR_SlotResult1 UMETA(DisplayName = "SlotResult1"),
	ESR_SlotResult2 UMETA(DisplayName = "SlotResult2"),
	ESR_SlotResult3 UMETA(DisplayName = "SlotResult3")
};