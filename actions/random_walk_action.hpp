#pragma once

#include <raylib.h>
#include <raymath.h>
#include <cmath>

#include "../commons/world.hpp"

#include "../actors/actor.hpp"
#include "../actors/movable_actor.hpp"

#include "actor_action.hpp"
#include "move_to.hpp"

class RandomWalkAction : public ActorAction
{
    Vector2 mDestination;
    MoveTo *moveToAction;

    public:
        RandomWalkAction();
        void Do(Actor &actor) override; // Inherited from ActorAction
};