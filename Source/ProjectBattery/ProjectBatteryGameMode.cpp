// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProjectBatteryGameMode.h"
#include "ProjectBatteryCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProjectBatteryGameMode::AProjectBatteryGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
