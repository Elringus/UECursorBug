#pragma once

#include "GameFramework/GameMode.h"
#include "UECursorBugGameMode.generated.h"

UCLASS()
class UECURSORBUG_API AUECursorBugGameMode : public AGameMode
{
	GENERATED_BODY()
	
public:
	virtual void StartPlay() override;
	virtual void Tick(float deltaSeconds) override;
	
};
