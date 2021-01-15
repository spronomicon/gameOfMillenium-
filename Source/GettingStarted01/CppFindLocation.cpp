// Fill out your copyright notice in the Description page of Project Settings.


#include "CppFindLocation.h"

// Sets default values
ACppFindLocation::ACppFindLocation()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACppFindLocation::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACppFindLocation::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector MyCharacter = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Blue, FString::Printf(TEXT("Location %s"), *MyCharacter.ToString()));
	}

}

