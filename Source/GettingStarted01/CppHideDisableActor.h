// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CppHideDisableActor.generated.h"

UCLASS()
class GETTINGSTARTED01_API ACppHideDisableActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACppHideDisableActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Disable")
	bool HideInGame;

	UFUNCTION(BlueprintCallable, Category = "Disable")
	void DisableActor(bool toHide);

};
