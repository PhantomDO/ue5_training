#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CodeCommand.h"

#include "DropPod.generated.h"

UCLASS(BlueprintType, Blueprintable)
class UE5_TRAINING_API ADropPod : public AActor
{
	GENERATED_BODY()
	
public:
	// Sets default values for this actor's properties
	ADropPod();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FCodeCommand m_CodeCommand;
};
