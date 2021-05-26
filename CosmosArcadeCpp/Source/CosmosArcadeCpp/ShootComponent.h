#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ShootComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COSMOSARCADECPP_API UShootComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UShootComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void shoot();

	FTimerHandle shootingTimer;

public:	
	
	UFUNCTION(BlueprintCallable, Category = "Shooting")
	void startShooting();

	UFUNCTION(BlueprintCallable, Category = "Shooting")
	void stopShooting();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Shooting")
	float shootPeriod;
		
};
