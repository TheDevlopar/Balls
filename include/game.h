#pragma once
#include <raylib.h>
#include <vector>
class Game{
    private:
        static constexpr int sHeight = 600;
        static constexpr int sWidth = 900;
        struct Circle{
            static constexpr float innerRadius = 150.0f;
            static constexpr float outerRadius = 151.0f;
            static constexpr int segments = 1;
            static constexpr float startAngle = 0.0f;
            static constexpr float endAngle = 340.0f;
            Vector2 pos = {sWidth / 2, sHeight / 2};
        };
    public:
    void run();
};
