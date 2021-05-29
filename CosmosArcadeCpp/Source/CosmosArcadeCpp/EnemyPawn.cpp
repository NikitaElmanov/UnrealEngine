// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyPawn.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AEnemyPawn::AEnemyPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	pawnCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("PawnCollision"));
	RootComponent = pawnCollision;
	pawnCollision->SetCollisionProfileName("Pawn");

	pawnMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PawnMesh"));
	pawnMesh->SetupAttachment(pawnCollision, NAME_None);
	pawnMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	shootComponent = CreateDefaultSubobject<UShootComponent>(TEXT("ShootComponent"));
	healthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
}

// Called when the game starts or when spawned
void AEnemyPawn::BeginPlay()
{
	Super::BeginPlay();
	healthComponent->onHealthEnded.AddDynamic(this, &AEnemyPawn::destroyPawn);
}

void AEnemyPawn::destroyPawn()
{
	Destroy();
}

// Called every frame
void AEnemyPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	this->AddActorLocalOffset(FVector(0.f, 2.f, 0.f));

}

// Called to bind functionality to input
void AEnemyPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

