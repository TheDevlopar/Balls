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
void::Ball::move(float dx, float dy){
    posX += dx;
    posY += dy;
}