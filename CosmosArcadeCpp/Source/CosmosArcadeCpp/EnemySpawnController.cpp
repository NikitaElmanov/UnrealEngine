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

	spawnStage = FEnemySpawnInfo();
	spawnStage.numOfEnemies = 10;
	spawnStage.spawnDelay = 1.f;

	startSpawnStage();
	
}

void UEnemySpawnController::startSpawnStage()
{
	GetWorld()->GetTimerManager().SetTimer(enemySpawnTimer, this, &UEnemySpawnController::spawnEnemy, spawnStage.spawnDelay, true);

}

void UEnemySpawnController::spawnEnemy()
{
	UE_LOG(LogTemp, Log, TEXT("spawnEnemy"));

	enemiesSpawned++;
	if (enemiesSpawned >= spawnStage.numOfEnemies) {
		GetWorld()->GetTimerManager().ClearTimer(enemySpawnTimer);
		UE_LOG(LogTemp, Log, TEXT("spawnEnemy ClearTimer"));
	}
}

