// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootComponent.h"
#include "Engine/World.h"
#include "TimeManager.h"

// Sets default values for this component's properties
UShootComponent::UShootComponent()
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
}

void UShootComponent::startShooting()
{
	GetWorld()->GetTimerManager().SetTimer(shootingTimer, this, &UShootComponent::shoot, shootPeriod, true, shootPeriod);
}

void UShootComponent::stopShooting()
{
	GetWorld()->GetTimerManager().ClearTimer(shootingTimer);
}

