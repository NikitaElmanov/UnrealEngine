// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"
#include "GameFramework/Actor.h"


// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
	:
	health(100)
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

}

// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();
		
	GetOwner()->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::onOwnerDamage);
	
}

float UHealthComponent::getHealth()
{
	return health;
}

void UHealthComponent::changeHealth(float value)
{
	health += value;
	if (health <= 0.f) {
		GetOwner()->OnTakeAnyDamage.RemoveDynamic(this, &UHealthComponent::onOwnerDamage);
		onHealthEnded.Broadcast();
		//GetOwner()->Destroy();
	}
}

void UHealthComponent::onOwnerDamage(AActor* damagedActor, float damage, const UDamageType* damageType, AController* instigetor, AActor* damageCauser)
{
	changeHealth(-damage);
}