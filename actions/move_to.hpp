#pragma once

#include <raylib.h>
#include <raymath.h>
#include <cmath>

#include "../actors/actor.hpp"
#include "../actors/movable_actor.hpp"

#include "actor_action.hpp"

class MoveTo : public ActorAction
{
    Vector2 mDestination;

    public:
        MoveTo() : ActorAction() {}
        MoveTo(Vector2 destination) : mDestination(destination) {}
        
        void Do(Actor &actor) override; // Inherited from ActorAction
};