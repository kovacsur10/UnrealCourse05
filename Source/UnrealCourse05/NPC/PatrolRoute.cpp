// Copyright to Máté Kovács.

#include "UnrealCourse05.h"
#include "PatrolRoute.h"

TArray<AActor*> UPatrolRoute::GetPatrolPoints() const {
	return PatrolPoints;
}