// Fill out your copyright notice in the Description page of Project Settings.


#include "ScreenManager.h"
#include "BTeamProjectTilde/Public/ECMode.h"
#include "Blueprint/UserWidget.h"
#include "BTeamProjectTilde/Public/ContainerWidget.h"
#include "BTeamProjectTilde/Public/CamWidget.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Components/SceneCaptureComponent2D.h"
#include "Camera/CameraComponent.h"


UScreenManager::UScreenManager()
{
	pContainer = nullptr;
	Currentmode = ECMode::OneCamera;
}

void UScreenManager::SetMode(ECMode mode)
{
	Currentmode = mode;
}

void UScreenManager::IniScreenManager(TSubclassOf<UUserWidget> InWidgetBP, TSubclassOf<UContainerWidget> InWidgetBP2)
{
	cCameraTemplate = InWidgetBP;
	cContainterTemplate = InWidgetBP2;
	UE_LOG(LogTemp, Warning, TEXT("UScreenManager Start"));

	pContainer = CreateWidget<UContainerWidget>(GetWorld(), cContainterTemplate);
	if (pContainer) {
		UE_LOG(LogTemp, Warning, TEXT("UContainerWidget was Created"));

	}


	switch (Currentmode)
	{
	case ECMode::OneCamera:
	case ECMode::TwoCameras:
		UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), AActor::StaticClass(), FName("StaticCam"), ArrCameras);
		for (auto actor : ArrCameras) {
			USceneCaptureComponent2D* SceneCapture = actor->FindComponentByClass<USceneCaptureComponent2D>();

			if (SceneCapture) {
				UTextureRenderTarget2D* target = NewObject<UTextureRenderTarget2D>(this);
				SceneCapture->TextureTarget = target;
				target->InitAutoFormat(2024, 2024);
				target->UpdateResource();

				UCamWidget* CameraWidget = CreateWidget<UCamWidget>(GetWorld(), cCameraTemplate);
				if (CameraWidget) {
					CameraWidget->SetRenderTarget(target);

					ArrCamerasArray.Add(CameraWidget);
					ArrRenderTargets.Add(target);

					pContainer->AddCameraWidget(CameraWidget);
				}
			}
		}
		break;
	case ECMode::FourCameras:

		UGameplayStatics::GetAllActorsOfClassWithTag(GetWorld(), AActor::StaticClass(), FName("Player"), ArrCameras);
		for (auto actor : ArrCameras) {

			UCameraComponent* CameraComp = actor->FindComponentByClass<UCameraComponent>();

			USceneCaptureComponent2D* SceneCapture = nullptr;

			for (USceneComponent* Child : CameraComp->GetAttachChildren())
			{
				SceneCapture = Cast<USceneCaptureComponent2D>(Child);
				if (SceneCapture)
				{
					break;
				}
			}


			if (SceneCapture) {
				UTextureRenderTarget2D* target = NewObject<UTextureRenderTarget2D>(this);
				SceneCapture->TextureTarget = target;
				target->InitAutoFormat(1024, 1024);
				target->UpdateResource();

				UCamWidget* CameraWidget = CreateWidget<UCamWidget>(GetWorld(), cCameraTemplate);
				if (CameraWidget) {
					CameraWidget->SetRenderTarget(target);

					ArrCamerasArray.Add(CameraWidget);
					ArrRenderTargets.Add(target);

					pContainer->AddCameraWidget(CameraWidget);
				}
			}
		}
		break;

	}
}

void UScreenManager::UpdateLayout()
{
	if (pContainer) {

		UE_LOG(LogTemp, Warning, TEXT("UContainerWidget adding to viewport"));

		pContainer->SetMode(Currentmode);
		pContainer->UpdateLayout();
		pContainer->AddToViewport();

	}
}

void UScreenManager::AddUIWidgetToScreen(UWidget* widget_, int Zorder, int viewPort)
{
	if (!widget_) {
		UE_LOG(LogTemp, Warning, TEXT("Widget was a null reference"));
		return;
	}
	if (Zorder <= 0) {
		UE_LOG(LogTemp, Warning, TEXT("NotValid Z value for this Widget"));
		return;
	}


	//maybe check here assuming there going to give me a player id?

	pContainer->AddUIWidgetToContainer(widget_, Zorder, viewPort);
}

void UScreenManager::CleanUp()
{
	ArrRenderTargets.Empty();

	for (int32 i = 0; i < ArrCamerasArray.Num(); ++i)
	{
		UCamWidget* CameraWidget = ArrCamerasArray[i];
		if (CameraWidget)
		{
			CameraWidget->RemoveFromParent();  // Removes the widget from the UI
			ArrCamerasArray[i] = nullptr;  // Nullify the reference in the array for GC
		}
	}

	ArrCamerasArray.Empty();

	if (pContainer)
	{
		pContainer->RemoveFromParent();
		pContainer = nullptr;
	}
}
