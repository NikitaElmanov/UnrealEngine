// Copyright Epic Games, Inc. All Rights Reserved.


#include "CosmosArcadeCppGameModeBase.h"

ACosmosArcadeCppGameModeBase::ACosmosArcadeCppGameModeBase() {
	enemySpawnController = CreateDefaultSubobject<UEnemySpawnController>(TEXT("EnemySpawnController"));
}