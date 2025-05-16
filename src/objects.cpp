#include "objects.h"
#include <math.h>

object::object(int x, int y, float speed){
    this->x = x;
    this->y = y;
    this->dx = dx;
    this->dy = dy;
    this->direction = direction;
    this->speed = speed;
}

object::~object(){}

bool object::Update(){
    int dx = speed * sin(direction);
    int dy = -speed * cos(direction);
    x+=dx;
    y+=dy;
    return true;
}