// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Actor.h"
#include "Public/Tank.h"
#include "TankAIController.generated.h" //Must be the last include



/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankAIController : public AAIController
{
	GENERATED_BODY()
	
public:
	ATank* GetControlledTank() const;

	virtual void BeginPlay() override;
	
	
};