// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CamWidget.generated.h"

class UImage;
/**
 *
 */
UCLASS(Blueprintable)
class BTEAMPROJECTTILDE_API UCamWidget : public UUserWidget
{
	GENERATED_BODY()

	UPROPERTY(meta = (BindWidget))
	UImage* pRenderTargetImage;

	UPROPERTY()
	UMaterialInstanceDynamic* pRenderTargetMaterial;

	UPROPERTY()
	UTextureRenderTarget2D* pRenderTarget;

protected:
	virtual void NativeConstruct() override;

public:

	UFUNCTION()
	void SetRenderTarget(UTextureRenderTarget2D* renderTarget_);
};
