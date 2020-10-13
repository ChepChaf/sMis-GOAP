#ifndef SMIS_HPP
#define SMIS_HPP

#include <raylib.h>

#include "actor.hpp"
#include "../actions/actions.hpp"

class SMis : public Actor
{
    static const int height = 10;
    static const int width = 10;

    ActorAction *currentAction {nullptr};

    public:
        SMis(int posX, int posY) : Actor(posX, posY) {}
        void draw();
        void decideNextAction();
        void act();
};

#endif