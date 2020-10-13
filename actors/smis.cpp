#include "smis.hpp"

void SMis::draw()
{
    DrawRectangle(posX, posY, width, height, LIGHTGRAY);
}

void SMis::decideNextAction()
{
    if (!currentAction)
        currentAction = new RandomWalkAction();
}

void SMis::act()
{
    currentAction->Do(*this);
}