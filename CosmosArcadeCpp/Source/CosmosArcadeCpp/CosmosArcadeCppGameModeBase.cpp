// Copyright Epic Games, Inc. All Rights Reserved.


#include "CosmosArcadeCppGameModeBase.h"
#include "TimerManager.h"
#include "Kismet/GameplayStatics.h"

ACosmosArcadeCppGameModeBase::ACosmosArcadeCppGameModeBase() 
:
	playerRecoverTime(3.f)
{
	enemySpawnController = CreateDefaultSubobject<UEnemySpawnController>(TEXT("EnemySpawnController"));
	healthsComponent = CreateDefaultSubobject<UGameHealthComponent>(TEXT("HealthsComponent"));
}

void ACosmosArcadeCppGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	healthsComponent->onHealthsEnded.AddDynamic(this, &ACosmosArcadeCppGameModeBase::endGame);
	playerPawn = Cast<APlayerPawn>(UGameplayStatics::GetPlayerPawn(this, 0));

	playerPawn->onPawnDamaged.AddDynamic(this, &ACosmosArcadeCppGameModeBase::explodePawn);
}

void ACosmosArcadeCppGameModeBase::endGame()
{
	onGameOver.Broadcast();
	UE_LOG(LogTemp, Log, TEXT("Game Over!!!"));
}

void ACosmosArcadeCppGameModeBase::explodePawn_Implementation()
{
	playerPawn->explodePawn();
	healthsComponent->changeHealths(-1);
	GetWorld()->GetTimerManager().SetTimer(playerRecoverTimer, this, &ACosmosArcadeCppGameModeBase::recoverPawn, playerRecoverTime, false);
}

void ACosmosArcadeCppGameModeBase::recoverPawn_Implementation()
{
	playerPawn->recoverPawn();
}

