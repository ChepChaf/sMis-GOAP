#ifndef SMIS_HPP
#define SMIS_HPP

#include <raylib.h>

#include "movable_actor.hpp"
#include "../actions/actions.hpp"

class SMis : public MovableActor
{
    static const int height = 10;
    static const int width = 10;

    ActorAction *currentAction {nullptr};

    public:
        SMis(int posX, int posY) : MovableActor(posX, posY) {}
        void draw();
        void decideNextAction();
        void act();
};

#endif