#pragma once

#include <raylib.h>
#include <raymath.h>
#include <cmath>

#include "../commons/world.hpp"


#include "actor_action.hpp"

class RandomWalkAction : public ActorAction
{
    Vector2 mDestination;

    public:
        RandomWalkAction();
        void Do(Actor &actor) override; // Inherited from ActorAction
};