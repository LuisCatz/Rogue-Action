// Fill out your copyright notice in the Description page of Project Settings.


#include "RACharacter.h"

// Sets default values
ARACharacter::ARACharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ARACharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARACharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ARACharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

