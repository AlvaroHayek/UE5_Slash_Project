// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"

// Sets default values
AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AItem::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogMyActor, Warning, TEXT("Begin Play called in C++!"));
	
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

