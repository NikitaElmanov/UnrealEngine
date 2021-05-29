// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemySpawnController.h"
#include "Engine/World.h"
#include "TimerManager.h"

// Sets default values for this component's properties
UEnemySpawnController::UEnemySpawnController()
{
	
}

// Called when the game starts
void UEnemySpawnController::BeginPlay()
{
	Super::BeginPlay();

	random.GenerateNewSeed();

	startSpawnStage();
}

void UEnemySpawnController::startSpawnStage()
{
	spawnStage = spawnStages[random.RandRange(0, spawnStages.Num() - 1)];

	enemiesSpawned = 0;

	spawnEnemy();
	//UE_LOG(LogTemp, Log, TEXT("startSpawnStage"));

	GetWorld()->GetTimerManager().SetTimer(
		changeStageTimer,
		this,
		&UEnemySpawnController::startSpawnStage,
		random.RandRange(stageDelayMin, stageDelayMax),
		true);
	
}

void UEnemySpawnController::spawnEnemy()
{
	//UE_LOG(LogTemp, Log, TEXT("spawnEnemy"));

	FActorSpawnParameters actorSpawnParameters;
	GetWorld()->SpawnActor<AEnemyPawn>(spawnStage.enemyClass, spawnStage.spawnTransform, actorSpawnParameters);

	enemiesSpawned++;
	if (enemiesSpawned < spawnStage.numOfEnemies) {
		//UE_LOG(LogTemp, Log, TEXT("spawnEnemy_if"));
		GetWorld()->GetTimerManager().SetTimer(enemySpawnTimer, this, &UEnemySpawnController::spawnEnemy, spawnStage.spawnDelay, false);
	}
}

