// Fill out your copyright notice in the Description page of Project Settings.


#include "RLACharacter.h"

// Sets default values
ARLACharacter::ARLACharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARLACharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARLACharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARLACharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

