// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnrealCPlus3GameMode.h"
#include "UnrealCPlus3Character.h"
#include "UObject/ConstructorHelpers.h"

AUnrealCPlus3GameMode::AUnrealCPlus3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
