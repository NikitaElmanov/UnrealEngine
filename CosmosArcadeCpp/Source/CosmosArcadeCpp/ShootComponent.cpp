// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootComponent.h"
#include "Engine/World.h"
#include "TimerManager.h"

// Sets default values for this component's properties
UShootComponent::UShootComponent()
	:
	shootPeriod(1.f)
{

}


// Called when the game starts
void UShootComponent::BeginPlay()
{
	Super::BeginPlay();

	startShooting();
	
}

void UShootComponent::shoot()
{
	//UE_LOG(LogTemp, Log, TEXT("Shoot"));

	FActorSpawnParameters spawnParameters;

	FTransform spawnTransform;
	spawnTransform.SetLocation(GetOwner()->GetActorLocation());

	GetWorld()->SpawnActor<AShootProjectile>(projectileClass, spawnTransform, spawnParameters);
}

void UShootComponent::startShooting()
{
	GetWorld()->GetTimerManager().SetTimer(shootingTimer, this, &UShootComponent::shoot, shootPeriod, true, shootPeriod);
}

void UShootComponent::stopShooting()
{
	GetWorld()->GetTimerManager().ClearTimer(shootingTimer);
}

