#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "EnemySpawnController.h"
#include "GameHealthComponent.h"
#include "PlayerPawn.h"

#include "CosmosArcadeCppGameModeBase.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGameOverEvent);

UCLASS()
class COSMOSARCADECPP_API ACosmosArcadeCppGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

	ACosmosArcadeCppGameModeBase();

	virtual void BeginPlay() override;

protected:

	FTimerHandle playerRecoverTimer;

	UPROPERTY(BlueprintReadOnly, Category = "Game")
	APlayerPawn* playerPawn;

	UFUNCTION(BlueprintNativeEvent, Category="Game")
	void explodePawn();
	void explodePawn_Implementation();

	UFUNCTION(BlueprintNativeEvent, Category="Game")
	void recoverPawn();
	void recoverPawn_Implementation();

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Enemies")
	UEnemySpawnController* enemySpawnController;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Game Healths")
	UGameHealthComponent* healthsComponent;

	UPROPERTY(BlueprintAssignable, Category = "Game")
	FGameOverEvent onGameOver;

	UFUNCTION(BlueprintCallable, Category="Game")
	void endGame();

	UPROPERTY(BlueprintReadOnly, Category = "Game")
	float playerRecoverTime;

};
