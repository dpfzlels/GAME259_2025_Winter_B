// Fill out your copyright notice in the Description page of Project Settings.


#include "ContainerWidget.h"
#include "BTeamProjectTilde/Public/CamWidget.h"
#include "BTeamProjectTilde/Public/ECMode.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"

void UContainerWidget::SetMode(ECMode mode_)
{
    eMode = mode_;
}

void UContainerWidget::AddCameraWidget(UCamWidget* camWidget_)
{
    if (camWidget_) {
        UE_LOG(LogTemp, Warning, TEXT("CameraWidgets added to UContainerWidget"));
        ArrCameraWidgets.Add(camWidget_);

    }
}

void UContainerWidget::ClearCameraWidgets()
{
    if (pCameraContainer) {
        for (auto cam : ArrCameraWidgets) {

            if (cam)
                cam->RemoveFromParent();
        }
    }
}

void UContainerWidget::UpdateLayout()
{
    if (ArrCameraWidgets.Num() <= 0) {
        UE_LOG(LogTemp, Warning, TEXT("No camera widgets to process, returning early."));
        return;
    }
    if (!pCameraContainer) {
        UE_LOG(LogTemp, Warning, TEXT("CameraContainer null in Updatelayout"));
        return;
    }

    //Current work around to delay for one game tick so the parent's widegt geometry chache updates
    FTimerHandle TimerHandle;
    ECMode temp = eMode;
    GetWorld()->GetTimerManager().SetTimer(TimerHandle, [this, temp]()
        {

            UE_LOG(LogTemp, Warning, TEXT("Adding  Cam widgets to layout"));
            switch (temp) {
            case ECMode::OneCamera:
                // First Vector determiens the position, the second Vector determines the size. the values are nomalized
                AddCameraWidgetToLayout(ArrCameraWidgets[0], FVector2D(0.0f, 0.0f), FVector2D(1.0f, 1.0f));
                break;
            case ECMode::TwoCameras:
                AddCameraWidgetToLayout(ArrCameraWidgets[0], FVector2D(0.0f, 0.0f), FVector2D(0.5f, 1.0f));
                AddCameraWidgetToLayout(ArrCameraWidgets[1], FVector2D(0.5f, 0.0f), FVector2D(0.5f, 1.0f));
                break;
            case ECMode::FourCameras:
                AddCameraWidgetToLayout(ArrCameraWidgets[0], FVector2D(0.0f, 0.0f), FVector2D(0.5f, 0.5f));
                AddCameraWidgetToLayout(ArrCameraWidgets[1], FVector2D(0.5f, 0.0f), FVector2D(0.5f, 0.5f));
                AddCameraWidgetToLayout(ArrCameraWidgets[2], FVector2D(0.0f, 0.5f), FVector2D(0.5f, 0.5f));
                AddCameraWidgetToLayout(ArrCameraWidgets[3], FVector2D(0.5f, 0.5f), FVector2D(0.5f, 0.5f));
                break;
            }
        }, 0.01f, false);

}

void UContainerWidget::AddUIWidgetToContainer(UWidget* widget_, int Zorder_, int viewPort)
{

    if (!pCameraContainer) {
        UE_LOG(LogTemp, Warning, TEXT("Container was a null reference"));
        return;
    }

    UCanvasPanelSlot* CanvasSlot = pCameraContainer->AddChildToCanvas(widget_);
    if (!CanvasSlot) {
        UE_LOG(LogTemp, Warning, TEXT("Failed to AddChildToCanvas "));
        return;
    }
    CanvasSlot->SetZOrder(Zorder_); // set the z layer order

    switch (eMode)
    {
    case ECMode::OneCamera:
        CanvasSlot->SetPosition(FVector2D(0.0f, 0.0f));
        CanvasSlot->SetSize(GetCachedGeometry().GetLocalSize());
        break;

    case ECMode::TwoCameras:
        switch (viewPort) {
        case 0:
            CanvasSlot->SetPosition(FVector2D(0.0f, 0.0f));
            CanvasSlot->SetSize(GetCachedGeometry().GetLocalSize());
            break;
        case 1:
            CanvasSlot->SetPosition(FVector2D(0.0f, 0.0f));
            CanvasSlot->SetSize(GetCachedGeometry().GetLocalSize() * FVector2D(0.5f, 1.0f));
            break;
        case 2:
            CanvasSlot->SetPosition(GetCachedGeometry().GetLocalSize() * FVector2D(0.5f, 0.0f));
            CanvasSlot->SetSize(GetCachedGeometry().GetLocalSize() * FVector2D(0.5f, 1.0f));
            break;
        }
        break;

    case ECMode::FourCameras:
        switch (viewPort) {
        case 0:
            CanvasSlot->SetPosition(FVector2D(0.0f, 0.0f));
            CanvasSlot->SetSize(GetCachedGeometry().GetLocalSize());
            break;
        case 1:
            CanvasSlot->SetPosition(FVector2D(0.0f, 0.0f));
            CanvasSlot->SetSize(GetCachedGeometry().GetLocalSize() * FVector2D(0.5f, 0.5f));
            break;
        case 2:
            CanvasSlot->SetPosition(GetCachedGeometry().GetLocalSize() * FVector2D(0.5f, 0.0f));
            CanvasSlot->SetSize(GetCachedGeometry().GetLocalSize() * FVector2D(0.5f, 0.5f));
            break;
        case 3:
            CanvasSlot->SetPosition(GetCachedGeometry().GetLocalSize() * FVector2D(0.0f, 0.5f));
            CanvasSlot->SetSize(GetCachedGeometry().GetLocalSize() * FVector2D(0.5f, 0.5f));
            break;
        case 4:
            CanvasSlot->SetPosition(GetCachedGeometry().GetLocalSize() * FVector2D(0.5f, 0.5f));
            CanvasSlot->SetSize(GetCachedGeometry().GetLocalSize() * FVector2D(0.5f, 0.5f));
            break;
        }
        break;
    }
}

void UContainerWidget::NativeConstruct()
{
    Super::NativeConstruct();

    if (!IsValid(pCameraContainer))
    {
        UE_LOG(LogTemp, Error, TEXT("CameraContainer is not valid!"));
        return;
    }
}

void UContainerWidget::AddCameraWidgetToLayout(UCamWidget* CameraWidget, FVector2D Position, FVector2D Size)
{
    if (!pCameraContainer) {
        UE_LOG(LogTemp, Warning, TEXT("CameraContainer null in Updatelayout"));
        return;
    }
    //CameraContainer->AddChild(CameraWidget);
    UCanvasPanelSlot* CanvasSlot = pCameraContainer->AddChildToCanvas(CameraWidget);

    if (CanvasSlot)
    {
        //CameraContainer->get
        CanvasSlot->SetPosition(Position * GetCachedGeometry().GetLocalSize());
        CanvasSlot->SetSize(Size * GetCachedGeometry().GetLocalSize());
        CanvasSlot->SetZOrder(-1);


    }
}
