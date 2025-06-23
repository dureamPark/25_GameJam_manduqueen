// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterAI.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AMonsterAI::AMonsterAI()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	monsterHealth = 100;
	monsterSpeed = 200;
}

// Called when the game starts or when spawned
void AMonsterAI::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMonsterAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMonsterAI::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMonsterAI::UpdateMoveSpeed(float moveSpeed)
{
	GetCharacterMovement()->MaxWalkSpeed = moveSpeed;
}

