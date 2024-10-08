// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE5_by_exampleGameMode.h"
#include "UE5_by_exampleCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE5_by_exampleGameMode::AUE5_by_exampleGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
