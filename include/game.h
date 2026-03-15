#pragma once
#include <raylib.h>
#include <vector>
#include "balls.h"
class Game{
    private:
        static constexpr int sHeight = 600;
        static constexpr int sWidth = 900;
        struct Circle{
            static constexpr float innerRadius = 150.0f;
            static constexpr float outerRadius = 151.0f;
            static constexpr int segments = 1;
            static constexpr float startAngle = -20.0f;
            static constexpr float endAngle = 320.0f;
            Vector2 pos = {sWidth / 2, sHeight / 2};
        };
        bool running = true;
        Color backgroundColor = {15, 18, 32, 255};
        int dx = 0;
        int dy = 5;
        Ball ball;
    public:
    void run();
};
