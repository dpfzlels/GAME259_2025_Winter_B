// Fill out your copyright notice in the Description page of Project Settings.


#include "SplitScreenGamode.h"
#include "Blueprint/UserWidget.h"
#include "BTeamProjectTilde/Public/ScreenManager.h"
#include "BTeamProjectTilde/Public/ContainerWidget.h"
#include "BTeamProjectTilde/Public/CamWidget.h"
#include "BTeamProjectTilde/Public/ECMode.h"

void ASplitScreenGamode::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	if (pScreenManager)
	{
		pScreenManager->CleanUp();
		pScreenManager = nullptr;
	}
}

ASplitScreenGamode::ASplitScreenGamode()
{
	pScreenManager = nullptr;
	eCurrentmode = ECMode::OneCamera;
}

void ASplitScreenGamode::SetMode(ECMode mode)
{
	eCurrentmode = mode;
}

void ASplitScreenGamode::IniScreen()
{
	pScreenManager = NewObject<UScreenManager>(this, UScreenManager::StaticClass());
	if (pScreenManager) {
		pScreenManager->SetMode(eCurrentmode);
		pScreenManager->IniScreenManager(cCamWidget, cContainerWidegt);
		pScreenManager->UpdateLayout();
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Failed to Create the ScreenManager"));
	}
}

void ASplitScreenGamode::AddUIWidgetToScreen(UWidget* widget_, int Zorder, int viewPort)
{
	pScreenManager->AddUIWidgetToScreen(widget_, Zorder, viewPort);

}
