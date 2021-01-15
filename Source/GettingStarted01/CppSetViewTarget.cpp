// Fill out your copyright notice in the Description page of Project Settings.


#include "CppSetViewTarget.h"

#include "Kismet/GameplayStatics.h"

// Sets default values
ACppSetViewTarget::ACppSetViewTarget()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACppSetViewTarget::BeginPlay()
{
	Super::BeginPlay();
	APlayerController* OurPlayer = UGameplayStatics::GetPlayerController(this, 0);
	OurPlayer->SetViewTarget(MyActor);
	
}

// Called every frame
void ACppSetViewTarget::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
