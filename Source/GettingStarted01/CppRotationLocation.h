// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CppRotationLocation.generated.h"

UCLASS()
class GETTINGSTARTED01_API ACppRotationLocation : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACppRotationLocation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, Category = "Location")
	FVector NewLocation = {130.f, -370.f, 140.f};

	UPROPERTY(EditAnywhere, Category = "Location")
	FQuat NewRotation= {0.f, 45.f, 45.f, 45.f};

};
