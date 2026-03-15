#include "balls.h"

int::Ball::getPosX(){
    return posX;
}
int::Ball::getPosY(){
    return posY;
}
int::Ball::getRadius(){
    return radius;
}
void::Ball::move(int dx, int dy){
    posX += dx;
    posY += dy;
}