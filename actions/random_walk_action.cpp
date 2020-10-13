#include "random_walk_action.hpp"

RandomWalkAction::RandomWalkAction()
{
    int walkWidth = World::screenWidth;
    int walkHeight = World::screenHeight;
    
    mDestination = (Vector2) { GetRandomValue(0, walkWidth), GetRandomValue(0, walkHeight) };

    moveToAction = new MoveTo(mDestination);
}

void RandomWalkAction::Do(Actor &actor)
{
    if (!mIsCompleted && moveToAction->isCompleted())
        mIsCompleted = true;

    if (mIsCompleted)
        return;

    moveToAction->Do(actor);
}