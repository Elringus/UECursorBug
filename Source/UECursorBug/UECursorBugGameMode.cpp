#include "UECursorBug.h"
#include "UECursorBugGameMode.h"

void AUECursorBugGameMode::StartPlay()
{
	Super::StartPlay();

	UGameplayStatics::GetPlayerController(this, 0)->bShowMouseCursor = true;
}

void AUECursorBugGameMode::Tick(float deltaSeconds)
{
	Super::Tick(deltaSeconds);

	if (UGameplayStatics::GetPlayerController(this, 0)->WasInputKeyJustPressed(EKeys::LeftMouseButton))
	{
		GEngine->GameViewport->RemoveAllViewportWidgets(); // Cursors being wiped here.
		UGameplayStatics::OpenLevel(this, "Level2");
	}
}

