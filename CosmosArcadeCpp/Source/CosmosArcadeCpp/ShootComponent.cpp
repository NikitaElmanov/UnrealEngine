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
	for (FShootInfo shootInfo : shootInfos)
	{
		FActorSpawnParameters spawnParameters;

		FVector spawnLocation = 
			GetOwner()->GetActorLocation()
			+
			GetOwner()->GetActorRotation().RotateVector(shootInfo.offset);

		FRotator spawnRotation = GetOwner()->GetActorRotation();
		spawnRotation.Add(0.f, shootInfo.angle, 0.f);

		GetWorld()->SpawnActor<AShootProjectile>(shootInfo.projectileClass, spawnLocation, spawnRotation, spawnParameters);
	}
}

void UShootComponent::startShooting()
{
	GetWorld()->GetTimerManager().SetTimer(shootingTimer, this, &UShootComponent::shoot, shootPeriod, true, shootPeriod);
}

void UShootComponent::stopShooting()
{
	GetWorld()->GetTimerManager().ClearTimer(shootingTimer);
}

