#include "PlayerPawn.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"

// Sets default values
APlayerPawn::APlayerPawn() 
	: 
	touchMoveSensitivity(1.f)
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	pawnCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("PawnCollision"));
	RootComponent = pawnCollision;

	pawnMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PawnMesh"));
	pawnMesh->SetupAttachment(RootComponent);

	pawnCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("PawnCamera"));

	shootComponent = CreateDefaultSubobject<UShootComponent>(TEXT("ShootComponent"));

}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindTouch(IE_Pressed, this, &APlayerPawn::onTouchPress);
	//PlayerInputComponent->BindTouch(IE_Released, this, &APlayerPawn::onTouchRelease);
	PlayerInputComponent->BindTouch(IE_Repeat, this, &APlayerPawn::onTouchMove);
}

void APlayerPawn::onTouchMove(ETouchIndex::Type index, FVector touchLocation)
{
	FVector2D touchDeltaMove = FVector2D(currentTouchLocation.X - touchLocation.X, currentTouchLocation.Y - touchLocation.Y);
	touchDeltaMove *= touchMoveSensitivity;
	FVector newActorLocation = GetActorLocation();
	newActorLocation.X = FMath::Clamp(newActorLocation.X + touchDeltaMove.Y, -100.f, 500.f);
	newActorLocation.Y = FMath::Clamp(newActorLocation.Y + touchDeltaMove.X *-1, -500.f, 500.f);
	SetActorLocation(newActorLocation);
	currentTouchLocation = FVector2D(touchLocation);
}

void APlayerPawn::onTouchPress(ETouchIndex::Type index, FVector touchLocation)
{
	currentTouchLocation = FVector2D(touchLocation);
	//UE_LOG(LogTemp, Log, TEXT("currentTouchLocation - %f - %f"), currentTouchLocation.X, currentTouchLocation.Y);
	touching = true;
}
