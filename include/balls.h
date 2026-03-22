#pragma once

class Ball{
    private: 
        float radius = 10.0f;
        float posX = 450.0f;
        float posY = 300.0f;
    public:
        int getPosX();
        int getPosY();
        int getRadius();
        void move(float dx, float dy);
};