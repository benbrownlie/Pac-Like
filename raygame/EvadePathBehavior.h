#pragma once
#include "PathfindBehavior.h"
class EvadePathBehavior : public PathfindBehavior
{
public:
	EvadePathBehavior(Maze* maze) :PathfindBehavior(maze) {}

protected:
	virtual MathLibrary::Vector2 findDestination(Agent* owner) override;
};

