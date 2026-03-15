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
        DrawRingLines(circle.pos, circle.innerRadius, circle.outerRadius,  circle.startAngle, circle.endAngle, circle.segments, WHITE);
        DrawCircle(ball.getPosX(), ball.getPosY(), ball.getRadius(), WHITE);
        DrawCircleLines(ball.getPosX(), ball.getPosY(), ball.getRadius(), BLACK);
        ball.move(dx, dy);
        if(circle.pos.x + circle.pos.y + circle.innerRadius - ball.getPosX() + ball.getPosY() + ball.getRadius() >= 900 || circle.pos.x + circle.pos.y + circle.innerRadius - ball.getPosX() + ball.getPosY() + ball.getRadius() <= 150){
            std::cout << "Collision Detected!!! \n";
            dx = -dx;
            dy = -dy;
        }
        EndDrawing();
    }
    CloseWindow();
}