// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Tank.h"
#include "TankAIController.generated.h"

class UWorld;

UCLASS()
class BATTLETANKS_API ATankAIController : public AAIController
{
	GENERATED_BODY()

public:
	virtual void BeginPlay() override;
	
private:
	virtual void Tick(float DeltaTime);

	
};
