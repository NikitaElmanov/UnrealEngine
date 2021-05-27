// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EnemySpawnController.generated.h"

USTRUCT(BlueprintType)
struct FEnemySpawnInfo
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Enemies")
	TSubclassOf<APawn> enemyClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemies")
	FTransform spawnTransform;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemies")
	int numOfEnemies;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemies")
	float spawnDelay;

};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COSMOSARCADECPP_API UEnemySpawnController : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEnemySpawnController();

protected:
	FTimerHandle changeStageTimer;
	FTimerHandle enemySpawnTimer;
	FEnemySpawnInfo spawnStage;
	int enemiesSpawned;

	// Called when the game starts
	virtual void BeginPlay() override;

	void spawnEnemy();

	void startSpawnStage();


public:	

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Enemies")
	TArray<FEnemySpawnInfo> spawnStages;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Enemies")
	float stageDelayMin;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Enemies")
	float stageDelayMax;

	

};
