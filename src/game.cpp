#include "game.h"

void::Game::run(){
    Circle circle;
    SetConfigFlags(FLAG_MSAA_4X_HINT);
    InitWindow(sWidth, sHeight, "BALLS");
    SetTargetFPS(60);

    while(!WindowShouldClose()){
        BeginDrawing();
        DrawRingLines(circle.pos, circle.innerRadius, circle.outerRadius,  circle.startAngle, circle.endAngle, circle.segments, WHITE);
        EndDrawing();
    }
    CloseWindow();
}