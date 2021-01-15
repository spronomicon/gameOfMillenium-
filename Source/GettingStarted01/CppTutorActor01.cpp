// Fill out your copyright notice in the Description page of Project Settings.


#include "CppTutorActor01.h"

// Sets default values
ACppTutorActor01::ACppTutorActor01()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Add static mesh component to actor
	SuperMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("My Super Mesh"));

}

// Called when the game starts or when spawned
void ACppTutorActor01::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACppTutorActor01::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

