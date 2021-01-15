// Fill out your copyright notice in the Description page of Project Settings.


#include "CppTutorBilboardComp.h"
#include "Components/BillboardComponent.h"

// Sets default values
ACppTutorBilboardComp::ACppTutorBilboardComp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mnBillboardComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("My BB"));
	mnBillboardComponent -> SetHiddenInGame(false);
	RootComponent = mnBillboardComponent;

}

// Called when the game starts or when spawned
void ACppTutorBilboardComp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACppTutorBilboardComp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

