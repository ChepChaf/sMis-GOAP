#include <iostream>
#include <raylib.h>
#include <string>


#include "commons/world.hpp"

#include "actors/smis.hpp"

const std::string VERSION="0.0.1";

const int NumberOfSMis = 15;

int main()
{
    std::string windowName = "sMis G.O.A.P " + VERSION;
    InitWindow(World::screenWidth, World::screenHeight, windowName.c_str());

    SetTargetFPS(60);

    SMis *sMis[NumberOfSMis] {};

    for(int i = 0; i < NumberOfSMis; i++)
    {
        sMis[i] = new SMis(GetRandomValue(0, World::screenWidth), GetRandomValue(0, World::screenHeight));
    }

    while(!WindowShouldClose())
    {
        if (IsKeyPressed(KEY_F))
        {
            ToggleFullscreen();
        }

        BeginDrawing();
            ClearBackground(BLACK);

            for(auto s : sMis)
            {   
                s->draw();
                s->decideNextAction();
                s->act();
            }
        EndDrawing();
    }

    CloseWindow();

    return 0;
}