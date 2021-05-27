// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EnemySpawnController.h"
#include "CosmosArcadeCppGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class COSMOSARCADECPP_API ACosmosArcadeCppGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

	ACosmosArcadeCppGameModeBase();

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Enemies")
	UEnemySpawnController* enemySpawnController;

};
