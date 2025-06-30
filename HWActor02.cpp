// Fill out your copyright notice in the Description page of Project Settings.


#include "HWActor02.h"

// Sets default values
AHWActor02::AHWActor02()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AHWActor02::BeginPlay()
{
	Super::BeginPlay();
	
	Move();
}

// Called every frame
void AHWActor02::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


double AHWActor02::Step()
{
	return FMath::RandBool() ? 1.0 : 0.0;
}

void AHWActor02::Move()
{
	FVector Location = FVector::ZeroVector;
	UE_LOG(LogTemp, Warning, TEXT(Informat "Start Location: (%.2f, %.2f)"), Location.X, Location.Y);

	for (int32 i = 0; i < 10; ++i)
	{
		Location += FVector(InX Step(), InY Step(), InZ 0.0);
		UE_LOG(LogTemp, Warning, TEXT(Informat "Location %d: (%.2f, %.2f)"), i+1, Location.X, Location.Y);
	}
}