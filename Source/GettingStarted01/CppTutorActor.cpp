// Fill out your copyright notice in the Description page of Project Settings.


#include "CppTutorActor.h"

// Sets default values
ACppTutorActor::ACppTutorActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mnMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("My New Mesh"));

}

// Called when the game starts or when spawned
void ACppTutorActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACppTutorActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	

}

