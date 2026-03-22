#include "game.h"
#include <iostream>
void::Game::run(){
    Circle circle;
    SetConfigFlags(FLAG_MSAA_4X_HINT);
    InitWindow(sWidth, sHeight, "BALLS");
    SetTargetFPS(60);

    while(!WindowShouldClose()){
    
        BeginDrawing();
        ClearBackground(backgroundColor);

        DrawRingLines(circle.pos, circle.innerRadius, circle.outerRadius,  circle.startAngle, circle.endAngle, circle.segments, WHITE); // Outer Circle 
        DrawCircle(ball.getPosX(), ball.getPosY(), ball.getRadius(), WHITE); // Inner Balls
        DrawCircleLines(ball.getPosX(), ball.getPosY(), ball.getRadius(), BLACK); // Outline

        ball.move(dx, dy);
        float disx = ball.getPosX() - circle.pos.x;
        float disy = ball.getPosY() - circle.pos.y;

        distance = disx * disx + disy * disy;
        float allowed = circle.innerRadius - ball.getRadius();

        if (distance >= allowed * allowed) {
            dx = -dx;
            dy = -dy;
        }
        EndDrawing();
    }
    CloseWindow();
}