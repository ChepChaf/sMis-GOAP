#pragma once

#include "../actors/actor.hpp"

class ActorAction
{
    protected:
        bool mIsCompleted { false };
    public:
        virtual void Do(Actor &actor) = 0;
        bool isCompleted();
};
