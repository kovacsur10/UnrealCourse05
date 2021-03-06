// Copyright to Máté Kovács.

#pragma once

#include "CoreMinimal.h"
#include "UnrealCourse05GameMode.h"
#include "InfiniteTerrainGameMode.generated.h"

class UActorPool;

/**
 * 
 */
UCLASS()
class UNREALCOURSE05_API AInfiniteTerrainGameMode : public AUnrealCourse05GameMode
{
	GENERATED_BODY()
	
public:
	AInfiniteTerrainGameMode();

	UFUNCTION(BlueprintCallable, Category = "Bounds Pool")
	void PopulateBoundsVolumePool();

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pool")
	UActorPool* NavMeshBoundsVolumePool;

private:
	void AddToPool(class ANavMeshBoundsVolume *VolumeToAdd);
	
	
};
