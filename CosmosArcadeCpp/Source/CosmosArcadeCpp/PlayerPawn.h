#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/BoxComponent.h"
#include "ShootComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Actor.h"

#include "PlayerPawn.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPawnDamagedEvent);

UCLASS()
class COSMOSARCADECPP_API APlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerPawn();

private:
	FVector2D currentTouchLocation;

	bool touching;

protected:
	APlayerController* playerController;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void onTouchPress(ETouchIndex::Type index, FVector touchLocation);
	void onTouchRelease(ETouchIndex::Type index, FVector touchLocation);
	void onTouchMove(ETouchIndex::Type index, FVector touchLocation);

	UFUNCTION(BlueprintCallable, Category = "Pawn")
	virtual float TakeDamage(float damage, const FDamageEvent& damageEvent, AController* instigetor, AActor* damageCauser) override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pawn")
	UBoxComponent* pawnCollision;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pawn")
	UStaticMeshComponent* pawnMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pawn")
	UCameraComponent* pawnCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Shooting")
	UShootComponent* shootComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Controls")
	float touchMoveSensitivity;

	UPROPERTY(BlueprintAssignable, Category = "Healths")
	FPawnDamagedEvent onPawnDamaged;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Healths")
	void explodePawn();
	void explodePawn_Implementation();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Healths")
	void recoverPawn();
	void recoverPawn_Implementation();

	UFUNCTION(BlueprinPure, BlueprintNativeEvent, Category = "Healths")
	bool canBeDamaged();
	bool canBeDamaged_Implementation();

};
