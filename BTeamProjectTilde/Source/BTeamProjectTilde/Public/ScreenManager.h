// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ScreenManager.generated.h"

class UCamWidget;
class UContainerWidget;
enum class ECMode : uint8;

/**
 *
 */
UCLASS(Blueprintable)
class BTEAMPROJECTTILDE_API UScreenManager : public UObject
{
	GENERATED_BODY()


private:
	//ScreenManger keeps refernce to all the objects it creats.
	UPROPERTY()
	TArray<UTextureRenderTarget2D*> ArrRenderTargets;

	UPROPERTY()
	TArray<UCamWidget*> ArrCamerasArray;

	UPROPERTY()
	UContainerWidget* pContainer;

	UPROPERTY() // Map to keep Track and look up cameras to their render targets
		TMap<AActor*, UTextureRenderTarget2D*> CameraTargetMap;

	UPROPERTY()// Map to keep Track and look up Camera Widegts to player Ids
		TMap<int, UCamWidget*> PlayerToWidgetMap;

	UPROPERTY() // Map to keep track of multiple camera switches.
		TMap<int, UTextureRenderTarget2D*> PreviousTargets;
public:
	UScreenManager();

	UPROPERTY()
	ECMode Currentmode;

	UPROPERTY()
	TSubclassOf<UUserWidget> cCameraTemplate;

	UPROPERTY()
	TSubclassOf<UContainerWidget> cContainterTemplate;


	UFUNCTION(BlueprintCallable, Category = "Spilt Screen")
	void SetMode(ECMode mode);

	//Initilizer Function
	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	void IniScreenManager(TSubclassOf<UUserWidget> InWidgetBP, TSubclassOf<UContainerWidget> InWidgetBP2);

	//Function to Update the Player ViewPorts
	UFUNCTION(BlueprintCallable, Category = "Gameplay")
	void UpdateLayout();

	//Adds widget to screen given a zorder and viewport 
	UFUNCTION(BlueprintCallable, Category = "Spilt Screen")
	void AddUIWidgetToScreen(UWidget* widget_, int Zorder, int viewPort);

	//Memory clean Up in case it is needed
	UFUNCTION()
	void CleanUp();

	UFUNCTION(BlueprintCallable, Category = "Spilt Screen")
	void SwitchInCamera(AActor* Camera, int playerId);

	UFUNCTION(BlueprintCallable, Category = "Spilt Screen")
	void SwitchBackCamera(int playerId);



};
