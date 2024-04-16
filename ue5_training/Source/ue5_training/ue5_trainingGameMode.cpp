// Copyright Epic Games, Inc. All Rights Reserved.

#include "ue5_trainingGameMode.h"
#include "ue5_trainingCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aue5_trainingGameMode::Aue5_trainingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
