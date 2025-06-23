// Copyright Epic Games, Inc. All Rights Reserved.

#include "Manduqueen_25GameMode.h"
#include "Manduqueen_25Character.h"
#include "UObject/ConstructorHelpers.h"

AManduqueen_25GameMode::AManduqueen_25GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
