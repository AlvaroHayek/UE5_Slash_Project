// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/Item.h"
#include "Slash_Project/DebugMacros.h"
#include "Components/SphereComponent.h"
#include "Interfaces/PickupInterface.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"

# define THIRTY 30


// Sets default values
AItem::AItem()
{
	PrimaryActorTick.bCanEverTick = true;

	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ItemMeshComponent"));
	ItemMesh->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	ItemMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	RootComponent = ItemMesh;

	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	Sphere->SetupAttachment(GetRootComponent());

	ItemEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("Embers"));
	ItemEffect->SetupAttachment(GetRootComponent());
}

void AItem::BeginPlay()
{
	Super::BeginPlay();
	
	Sphere->OnComponentBeginOverlap.AddDynamic(this, &AItem::OnSphereOverlap);
	Sphere->OnComponentEndOverlap.AddDynamic(this, &AItem::OnSphereEndOverlap);

	//int32 AvgInt = Avg<int32>(1, 3);
	//UE_LOG(LogTemp, Warning, TEXT("Avg of 1 and 3: %d"), AvgInt);
	//
	//float AvgFloat = Avg<float>(3.45f, 7.86f);
	//UE_LOG(LogTemp, Warning, TEXT("Avg of 3.44 and 7.86: %f"), AvgFloat);

	//UE_LOG(LogTemp, Warning, TEXT("Begin Play called in C+++++++ hella!"));
	
	//if (GEngine) 
	//{
	//	GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, FString("Item OnScreen Message!"));
	//}

	//UWorld* World = GetWorld();

	//SetActorLocation(FVector(0.f, 0.f, 50.f));
	//SetActorRotation(FRotator(0.f, 45.f, 0.f));
	//FVector Location = GetActorLocation();
	//FVector Forward = GetActorForwardVector();
	//if (World)
	//{
		//FVector Forward = GetActorForwardVector();
		//DrawDebugLine(World, Location, Location + Forward * 100.f, FColor::Red, true, -1.f, 0, 1.f);
	//}

	//DRAW_SPHERE(Location);
	//DRAW_LINE(Location, Location + Forward * 100.f);
	//DRAW_POINT(Location + Forward * 100.f);
	//DRAW_VECTOR(Location, Location + Forward * 100.f);
	//if (World)
	//{
	//	DrawDebugPoint(World, Location + Forward * 100.f, 15.f, FColor::Red, true);
	//}
}

float AItem::TransformedSin()
{
	return Amplitude * FMath::Sin(RunningTime * TimeConstant);
}

float AItem::TransformedCos()
{
	return Amplitude * FMath::Cos(RunningTime * TimeConstant);
}

void AItem::OnSphereOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	IPickupInterface* PickupInterface = Cast<IPickupInterface>(OtherActor);
	if (PickupInterface)
	{
		PickupInterface->SetOverlappingItem(this);
	}
	//const FString OtherActorName = OtherActor->GetName();
	//if (GEngine)
	//{
	//	GEngine->AddOnScreenDebugMessage(1, 30.f, FColor::Red, OtherActorName);
	//}
}

void AItem::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	//const FString OtherActorName = FString("Ending Overlap with: ") + OtherActor->GetName();
	//if (GEngine)
	//{
	//	GEngine->AddOnScreenDebugMessage(1, 30.f, FColor::Blue, OtherActorName);
	//}
	IPickupInterface* PickupInterface = Cast<IPickupInterface>(OtherActor);
	if (PickupInterface)
	{
		PickupInterface->SetOverlappingItem(nullptr);
	}
}

void AItem::SpawnPickupSystem()
{
	if (PickupEffect)
	{
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(
			this,
			PickupEffect,
			GetActorLocation()
		);
	}
}

void AItem::SpawnPickupSound()
{
	if (PickupSound)
	{
		UGameplayStatics::SpawnSoundAtLocation(
			this,
			PickupSound,
			GetActorLocation()
		);
	}
}

void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	RunningTime += DeltaTime;

	// Movement rate in units of cm/s
	//float MovementRate = 50.f;
	//float RotationRate = 45.f;

	//float DeltaZ = Amplitude * FMath::Sin(RunningTime * TimeConstant); // period = 2*pi/K

	//AddActorWorldOffset(FVector(0.f, 0.f, DeltaZ));

	// MovementRate * DeltaTime (cm/s) * (s/frame) = (cm/frame)
	//AddActorWorldOffset(FVector(MovementRate*DeltaTime, 0.f, 0.f));
	//AddActorWorldRotation(FRotator(0.f, RotationRate * DeltaTime, 0.f));
	//DRAW_SPHERE_SingleFrame(GetActorLocation());
	//DRAW_VECTOR_SingleFrame(GetActorLocation(), GetActorLocation() + GetActorForwardVector() * 100.f);
	//UE_LOG(LogTemp, Warning, TEXT("DeltaTime: %f"), DeltaTime);

	//if (GEngine)
	//{
	//	FString Name = GetName();
	//	FString Message = FString::Printf(TEXT("Item Name: %s"), *Name);
	//	GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, Message);

	//	UE_LOG(LogTemp, Warning, TEXT("Item Name: %s"), *Name);
	//}

	//FVector AvgVector = Avg<FVector>(GetActorLocation(), FVector::ZeroVector);
	//DRAW_POINT_SingleFrame(AvgVector);
	//FRotator AvgRotator = Avg<FRotator>(GetActorRotation(), FRotator::ZeroRotator);

	const float Z = TransformedSin();
	if (ItemState == EItemState::EIS_Hovering)
	{
		AddActorWorldOffset(FVector(0.f, 0.f, TransformedSin()));
	}
}

