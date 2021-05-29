// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHealthEndedEvent);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COSMOSARCADECPP_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UHealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	float health;

	UFUNCTION(BlueprintCallable, Category = "Health")
	void onOwnerDamage(AActor* damagedActor, float damage, const UDamageType* damageType, AController* instigetor, AActor* damageCauser);

public:

	UFUNCTION(BlueprintCallable, Category = "Health")
	void changeHealth(float value);

	UFUNCTION(BlueprintPure, Category = "Health")
	float getHealth();
		
	UPROPERTY(BlueprintAssignable, Category = "Health")
	FHealthEndedEvent onHealthEnded;
};
