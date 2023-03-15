// Copyright Epic Games, Inc. All Rights Reserved.

#include "FroggerettaGameMode.h"
#include "FroggerettaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFroggerettaGameMode::AFroggerettaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
