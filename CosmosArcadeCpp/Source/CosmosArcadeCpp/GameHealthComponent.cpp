// Fill out your copyright notice in the Description page of Project Settings.


#include "GameHealthComponent.h"
#include "GameFramework/Pawn.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
UGameHealthComponent::UGameHealthComponent()
	:
	healths(3)
{
}

// Called when the game starts or when spawned
void UGameHealthComponent::BeginPlay()
{
	Super::BeginPlay();
	
	APawn* playerPawn = UGameplayStatics::GetPlayerPawn(this, 0);
	if (!playerPawn) {
		UE_LOG(LogTemp, Log, TEXT("UGameHealthComponent->!playerPawn"));
		return;
	}

	//playerPawn->OnTakeAnyDamage.AddDynamic(this, &UGameHealthComponent::onPlayerDamage);
}

//void UGameHealthComponent::onPlayerDamage(AActor* damagedActor, float damage, const UDamageType* damageType, AController* instigetor, AActor* damageCauser)
//{
//	changeHealths(-1);
//}

void UGameHealthComponent::changeHealths(int byValue)
{
	healths += byValue;

	onHealthsChanged.Broadcast(byValue);

	if (healths <= 0) {
		onHealthsEnded.Broadcast();
	}
	UE_LOG(LogTemp, Log, TEXT("changeHealths: %d"), healths);
}

int UGameHealthComponent::getHealths()
{
	return healths;
}

