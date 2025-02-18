// Fill out your copyright notice in the Description page of Project Settings.

#include "RobotAIController.h"
#include "BTeamProjectTilde.h"
#include "Navigation/PathFollowingComponent.h"
#include "GameFramework/NavMovementComponent.h"


ARobotAIController::ARobotAIController()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ARobotAIController::BeginPlay()
{
    Super::BeginPlay();

    // Disable automatic movement
    bIsMovementDisabled = true;
    GetPawn()->SetActorTickEnabled(false);
}

FVector ARobotAIController::GetDesiredMovementDirection() const
{
    if (!GetPawn())
        return FVector::ZeroVector;

    // Calculate intended movement direction without actually moving
    const FVector CurrentLocation = GetPawn()->GetActorLocation();
    const FVector TargetLocation = GetPathFollowingComponent()->GetCurrentTargetLocation();

    return (TargetLocation - CurrentLocation).GetSafeNormal();
}

FRotator ARobotAIController::GetDesiredRotation()
{
    const FVector Direction = GetDesiredMovementDirection();
    if (Direction.IsNearlyZero())
        return FRotator::ZeroRotator;

    return FRotationMatrix::MakeFromX(Direction).Rotator();
}

void ARobotAIController::SetMovementEnabled(bool bEnable)
{
    bIsMovementDisabled = !bEnable;

    if (!GetPawn())
        return;

    GetPawn()->SetActorTickEnabled(bEnable);

    // Notify Blueprint graph of movement intent changes
    OnCalculateMovementIntent(
        GetDesiredMovementDirection(),
        GetDesiredRotation()
    );
}