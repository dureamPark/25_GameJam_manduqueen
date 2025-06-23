// Fill out your copyright notice in the Description page of Project Settings.


#include "ChasePlayerBTTaskNode.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/Actor.h"

UChasePlayerBTTaskNode::UChasePlayerBTTaskNode()
{
	NodeName = TEXT("Chase Player");
}

EBTNodeResult::Type UChasePlayerBTTaskNode::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	if (!AIController) {
		return EBTNodeResult::Failed;
	}

	APawn* AIPawn = AIController->GetPawn();
	if (!AIPawn) {
		return EBTNodeResult::Failed;
	}

	AActor* TargetPlayer = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject("TargetPlayer"));
	if (!TargetPlayer) {
		return EBTNodeResult::Failed;
	}

	AIController->MoveToActor(TargetPlayer, 10.0f, true);

	return EBTNodeResult::Succeeded;
}

