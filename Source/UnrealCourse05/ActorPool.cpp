// Copyright to Máté Kovács.

#include "UnrealCourse05.h"
#include "ActorPool.h"


// Sets default values for this component's properties
UActorPool::UActorPool()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

AActor* UActorPool::Checkout(){
	return Pool.Num() == 0 ? nullptr : Pool.Pop();
}

void UActorPool::Return(AActor* ActorToReturn){
	Pool.Push(ActorToReturn);
}

void UActorPool::Add(AActor* ActorToAdd){
	Return(ActorToAdd);
}