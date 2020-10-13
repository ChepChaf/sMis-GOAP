#include "random_walk_action.hpp"

RandomWalkAction::RandomWalkAction()
{
    int walkWidth = World::screenWidth;
    int walkHeight = World::screenHeight;
    
    mDestination = (Vector2) { GetRandomValue(0, walkWidth), GetRandomValue(0, walkHeight) };
}

void RandomWalkAction::Do(Actor &actor)
{
    if (mIsCompleted)
        return;

    Vector2 direction = Vector2Subtract( mDestination, actor.GetPosVector2() );

    if (!mIsCompleted && Vector2Length(direction) == 0)
    {
        mIsCompleted = true;
    }
    else
    {
        Vector2 normalizedDirection = Vector2Normalize(direction);

        actor.MoveX(round(normalizedDirection.x));
        actor.MoveY(round(normalizedDirection.y));
    }
}