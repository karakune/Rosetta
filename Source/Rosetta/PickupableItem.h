// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractableActor.h"
#include "PickupableItem.generated.h"

/**
 * 
 */
UCLASS()
class ROSETTA_API APickupableItem : public AInteractableActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
		UStaticMeshComponent* PickupMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName ItemID;

public:
	APickupableItem();

	virtual void Interact() override;

	virtual FText GetActionDescription() override;
	
private:
	virtual void OnPickup() {  }
};
