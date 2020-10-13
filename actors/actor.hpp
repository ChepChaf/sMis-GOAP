#pragma once

#include <raylib.h>
#include <iostream>

class Actor
{
    protected:
        int posX { 0 };
        int posY { 0 };

        Actor(int posX, int posY) : posX(posX), posY(posY) {}

    public:
        Vector2 GetPosVector2();
        void MoveX(int movX);
        void MoveY(int movY);
};