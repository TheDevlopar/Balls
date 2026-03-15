#pragma once

class Ball{
    private: 
        int radius = 10;
        int posX = 450;
        int posY = 300;
    public:
        int getPosX();
        int getPosY();
        int getRadius();
        void move(int dx, int dy);
};