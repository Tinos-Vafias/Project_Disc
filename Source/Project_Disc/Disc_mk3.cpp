// Fill out your copyright notice in the Description page of Project Settings.


#include "Disc_mk3.h"

// Sets default values
ADisc_mk3::ADisc_mk3()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADisc_mk3::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADisc_mk3::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ADisc_mk3::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

