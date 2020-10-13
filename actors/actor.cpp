#include "actor.hpp"

Vector2 Actor::GetPosVector2()
{
    return (Vector2) { posX, posY };
}

void Actor::MoveX(int movX)
{
    posX += movX;
}

void Actor::MoveY(int movY)
{
    posY += movY;
}