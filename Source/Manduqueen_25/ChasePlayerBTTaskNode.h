// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MonsterBTTaskNode.h"
#include "ChasePlayerBTTaskNode.generated.h"

/**
 * 
 */
UCLASS()
class MANDUQUEEN_25_API UChasePlayerBTTaskNode : public UMonsterBTTaskNode
{
	GENERATED_BODY()
	
public:
	UChasePlayerBTTaskNode();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

};
