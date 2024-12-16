// Copyright Epic Games, Inc. All Rights Reserved.

#include "UE_ExplosionDemoGameMode.h"
#include "UE_ExplosionDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUE_ExplosionDemoGameMode::AUE_ExplosionDemoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
