#include "ShootProjectile.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/DamageType.h"
#include "GameFramework/Pawn.h"

// Sets default values
AShootProjectile::AShootProjectile()
	:
	projectileSpeed(1000.f)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	collision = CreateDefaultSubobject<USphereComponent>(TEXT("ProjectileCollision"));
	RootComponent = collision;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	mesh->SetupAttachment(collision, NAME_None);
	mesh->SetCollisionProfileName("NoCollision");
}

// Called when the game starts or when spawned
void AShootProjectile::BeginPlay()
{
	Super::BeginPlay();
	
	if (GetOwner()) {
		collision->IgnoreActorWhenMoving(GetOwner(), true);
	}

	collision->OnComponentBeginOverlap.AddDynamic(this, &AShootProjectile::onProjectileOverlap);
}

void AShootProjectile::onProjectileOverlap(UPrimitiveComponent* overlappedComp, AActor* otherActor, UPrimitiveComponent* otherComp, int32 bodyIndex, bool sweep, const FHitResult& hit)
{
	if (!GetOwner()) {
		return;
	}

	APawn* pawnOwner = Cast<APawn>(GetOwner());
	if (!pawnOwner) {
		return;
	}

	AController* instigator = pawnOwner->GetController();
	if (instigator) {
		UGameplayStatics::ApplyDamage(otherActor, damage, instigator, this, UDamageType::StaticClass());
		Destroy();
	}
}

// Called every frame
void AShootProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AddActorLocalOffset(FVector(projectileSpeed * DeltaTime, 0.f, 0.f));
}