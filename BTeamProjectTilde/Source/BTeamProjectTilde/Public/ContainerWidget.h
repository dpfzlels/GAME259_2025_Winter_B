// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ContainerWidget.generated.h"

class UCanvasPanel;
class UCamWidget;
enum class ECMode : uint8;
/**
 *
 */
UCLASS(Blueprintable)
class BTEAMPROJECTTILDE_API UContainerWidget : public UUserWidget
{
    GENERATED_BODY()


public:

    void SetMode(ECMode mode_);

    UFUNCTION()
    void AddCameraWidget(UCamWidget* camWidget_);


    UFUNCTION()
    void ClearCameraWidgets();

    UFUNCTION()
    void UpdateLayout();

    UFUNCTION()
    void AddUIWidgetToContainer(UWidget* widget_, int Zorder_, int viewPort);

protected:

    virtual void NativeConstruct() override;



private:

    ECMode eMode;

    UPROPERTY(meta = (BindWidget))
    UCanvasPanel* pCameraContainer;

    UPROPERTY()
    TArray<UCamWidget*> ArrCameraWidgets;

    UFUNCTION()
    void AddCameraWidgetToLayout(UCamWidget* CameraWidget, FVector2D Position, FVector2D Size);

};