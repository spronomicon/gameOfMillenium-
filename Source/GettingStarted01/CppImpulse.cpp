// Fill out your copyright notice in the Description page of Project Settings.


#include "CppImpulse.h"
#include "DrawDebugHelpers.h"

// Sets default values
ACppImpulse::ACppImpulse()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACppImpulse::BeginPlay()
{
	Super::BeginPlay();
	
	TArray<FHitResult> OutHits;
	FVector MyLocation = GetActorLocation();
	FCollisionShape MyColSphere = FCollisionShape::MakeSphere(200.f);
	DrawDebugSphere(GetWorld(), MyLocation, MyColSphere.GetSphereRadius(), 50, FColor::Cyan, true);

	bool isHit = GetWorld()->SweepMultiByChannel(OutHits, MyLocation, MyLocation, FQuat::Identity, ECC_WorldStatic, MyColSphere);

	if (isHit)
	{
		for (auto& Hit : OutHits)
		{
			UStaticMeshComponent* MeshComp = Cast<UStaticMeshComponent>((Hit.GetActor()->GetRootComponent()));
			if (MeshComp)
			{
				MeshComp->AddRadialImpulse(MyLocation, 500.f, 2000.f, ERadialImpulseFalloff::RIF_Constant, true);
			}
			
		}
		
	}
	
	
}

// Called every frame
void ACppImpulse::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

