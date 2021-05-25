#include "PlayerPawn.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"

// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	pawnCollision = CreateAbstractDefaultSubobject<UBoxComponent>(TEXT("PawnCollision"));
	RootComponent = pawnCollision;

	pawnMesh = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("PawnMesh"));
	pawnMesh->SetupAttachment(RootComponent);

	//cameraSpringArm = CreateAbstractDefaultSubobject<USpringArmComponent>(TEXT("CameraSpringComponent"));
	//cameraSpringArm->SetupAttachment(RootComponent);

	pawnCamera = CreateAbstractDefaultSubobject<UCameraComponent>(TEXT("PawnCamera"));
	//pawnCamera->SetupAttachment(cameraSpringArm);
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

	playerController = Cast<APlayerController>(GetController());

	bool isCurrentlyTouched;
	float touchX, touchY;
	playerController->GetInputTouchState(ETouchIndex::Touch1, touchX, touchY, isCurrentlyTouched);

	if (isCurrentlyTouched) {
		FVector2D touchDeltaMove = FVector2D(touchX - currentTouchLocation.X, touchY - currentTouchLocation.Y);

		UE_LOG(LogTemp, Log, TEXT("Touch - %f - %f"), touchDeltaMove.X, touchDeltaMove.Y);

		AddActorLocalOffset(FVector(touchDeltaMove.Y * -1, touchDeltaMove.X, 0));

		currentTouchLocation = FVector2D(touchX, touchY);
	}
}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindTouch(IE_Pressed, this, &APlayerPawn::onTouchPress);
	PlayerInputComponent->BindTouch(IE_Released, this, &APlayerPawn::onTouchRelease);
}

void APlayerPawn::onTouchPress(ETouchIndex::Type index, FVector touchLocation)
{
	UE_LOG(LogTemp, Log, TEXT("Pressed"));
	currentTouchLocation = FVector2D(touchLocation);
	touching = true;
}

void APlayerPawn::onTouchRelease(ETouchIndex::Type index, FVector touchLocation)
{
	UE_LOG(LogTemp, Log, TEXT("Realsed"));
	touching = false;
}
