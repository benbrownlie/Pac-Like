#include "PursuePathBehavior.h"

MathLibrary::Vector2 PursuePathBehavior::findDestination(Agent* owner)
{
   /* MathLibrary::Vector2 targetPosition = getTarget()->getWorldPosition();
    MathLibrary::Vector2 targetVelocity = getTarget()->getVelocity();
    return targetPosition + targetVelocity;*/
    return getTarget()->getWorldPosition() + getTarget()->getVelocity();
}
