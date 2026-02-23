// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/EnergyOrb.h"

AEnergyOrb::AEnergyOrb()
{
	PrimaryActorTick.bCanEverTick = true;

	Attractor = CreateDefaultSubobject<USphereComponent>(TEXT("Attractor"));
	Attractor->SetupAttachment(GetRootComponent());
}

void AEnergyOrb::Tick(float DeltaTime)
{
}

void AEnergyOrb::BeginPlay()
{
}
