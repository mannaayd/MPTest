// Copyright Epic Games, Inc. All Rights Reserved.

#include "MPTestGameMode.h"
#include "MPTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMPTestGameMode::AMPTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		UE_LOG(LogTemp, Log, TEXT("hello1"));
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
