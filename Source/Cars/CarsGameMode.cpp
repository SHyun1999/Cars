// Copyright Epic Games, Inc. All Rights Reserved.

#include "CarsGameMode.h"
#include "CarsPawn.h"
#include "CarsHud.h"

ACarsGameMode::ACarsGameMode()
{
	DefaultPawnClass = ACarsPawn::StaticClass();
	HUDClass = ACarsHud::StaticClass();
}
