// Fill out your copyright notice in the Description page of Project Settings.


#include "CppHideDisableActor.h"

// Sets default values
ACppHideDisableActor::ACppHideDisableActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACppHideDisableActor::BeginPlay()
{
	Super::BeginPlay();

	if (HideInGame)
	{
		DisableActor(HideInGame); 
	}
	
	
}

// Called every frame
void ACppHideDisableActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ACppHideDisableActor::DisableActor(bool toHide){
	// Hides visible components
	SetActorHiddenInGame(toHide);

	// Disables collision components
	SetActorEnableCollision(false);

	// Stops the Actor from ticking
	SetActorTickEnabled(false);
}
