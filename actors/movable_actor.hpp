#pragma once

#include "actor.hpp"

class MovableActor : public Actor
{
    protected:
        MovableActor(int posX, int posY) : Actor(posX, posY) {}
    public:
        MovableActor() : Actor() {}
        void MoveX(int movX);
        void MoveY(int movY);
};