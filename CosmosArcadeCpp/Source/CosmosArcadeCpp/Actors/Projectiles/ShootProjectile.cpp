#include "ShootProjectile.h"
#include "Components/StaticMeshComponent.h"

// Sets default values
AShootProjectile::AShootProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	collision = CreateAbstractDefaultSubobject<USphereComponent>(TEXT("ProjectileCollision"));
	RootComponent = collision;

	mesh = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	mesh->SetupAttachment(RootComponent);
	mesh->SetCollisionProfileName("NoCollision");
}

// Called when the game starts or when spawned
void AShootProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AShootProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

