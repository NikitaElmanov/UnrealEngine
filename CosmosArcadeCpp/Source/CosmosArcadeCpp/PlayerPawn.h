// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/BoxComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"

#include "PlayerPawn.generated.h"

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
	USpringArmComponent* cameraSpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pawn")
	UCameraComponent* pawnCamera;

};
