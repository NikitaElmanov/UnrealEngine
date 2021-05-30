// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameHealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHealthsEndedEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthsChangedEvent, int, changeValue);

UCLASS( ClassGroup(Custom), meta=(BlueprintSpawnableComponent) )
class COSMOSARCADECPP_API UGameHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	UGameHealthComponent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Game Health")
	int healths;

	//UFUNCTION()
	//void onPlayerDamage(AActor* damagedActor, float damage, const UDamageType* damageType, AController* instigetor, AActor* damageCauser);

public:

	UFUNCTION(BlueprintCallable, Category = "Game Health")
	void changeHealths(int byValue);

	UFUNCTION(BlueprintCallable, Category = "Game Health")
	int getHealths();

	UPROPERTY(BlueprintAssignable, Category = "Game Health")
	FHealthsEndedEvent onHealthsEnded;

	UPROPERTY(BlueprintAssignable, Category = "Game Health")
	FHealthsChangedEvent onHealthsChanged;
};
