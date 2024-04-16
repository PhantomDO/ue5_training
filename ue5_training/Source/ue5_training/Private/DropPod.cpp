#include "DropPod.h"

// Sets default values
ADropPod::ADropPod()
{
	// Set this actor to call Tick() every frame. You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ADropPod::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ADropPod::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
