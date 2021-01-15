// Fill out your copyright notice in the Description page of Project Settings.


#include "CppRotationLocation.h"

// Sets default values
ACppRotationLocation::ACppRotationLocation()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACppRotationLocation::BeginPlay()
{
	Super::BeginPlay();

	SetActorLocationAndRotation(NewLocation, NewRotation, false, 0, ETeleportType::None);
	
}

// Called every frame
void ACppRotationLocation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

