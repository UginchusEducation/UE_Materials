// Copyright Epic Games, Inc. All Rights Reserved.

#include "MaterialEducationGameMode.h"
#include "MaterialEducationCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMaterialEducationGameMode::AMaterialEducationGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
