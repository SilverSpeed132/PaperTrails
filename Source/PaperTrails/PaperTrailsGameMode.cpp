// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "PaperTrailsGameMode.h"
#include "PaperTrailsCharacter.h"

APaperTrailsGameMode::APaperTrailsGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = APaperTrailsCharacter::StaticClass();	
}
