// Fill out your copyright notice in the Description page of Project Settings.


#include "CppHitRegister.h"

#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ACppHitRegister::ACppHitRegister()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MyComp = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxComp"));
	MyComp->SetSimulatePhysics(true);
	MyComp->SetNotifyRigidBodyCollision(true);
	MyComp->BodyInstance.SetCollisionProfileName("BlockAll");
	

	RootComponent = MyComp;
}

// Called when the game starts or when spawned
void ACppHitRegister::BeginPlay()
{
	Super::BeginPlay();
	// MyComp->OnComponentHit.AddDynamic(this, &AOnComponentHit::OnCompHit);
	
}

// Called every frame
void ACppHitRegister::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



// void AOnComponentHit::OnCompHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
// {
// 	if ((OtherActor != NULL) && (OtherActor != this) && (OtherComponent != NULL))
// 	{
// 		if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("I Hit: %s"), *OtherActor->GetName()));
// 	}
// }
