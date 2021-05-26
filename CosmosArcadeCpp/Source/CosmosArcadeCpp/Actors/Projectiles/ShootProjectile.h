#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SphereComponent.h"
#include "ShootProjectile.generated.h"

UCLASS()
class COSMOSARCADECPP_API AShootProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AShootProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Shooting")
	USphereComponent* collision;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Shooting")
	UStaticMeshComponent* mesh;

};
