#include "bullets.h"
#include "objects.h"
#include "raylib.h"

bullet::bullet(int x, int y, float speed, float direction): object(x, y, speed) {
    this->x = x;
    this->y = y;
    this->speed = speed;
    this->direction = direction;
}

bullet::~bullet(){}

void::bullet::Draw(int x, int y){
    DrawRectangle(x, y, 10, 10, GRAY);
}

//x and y would be the ship's coordinates
void createBullets(int x, int y, float shipDirection){
    bullet* newBullet = new bullet(x, y, 7, shipDirection);
}

bool bullet::Update(){
    if(!object::Update()){
        return false;
    }
    if(x > 800 || y > 450){
        return false;
    }
    else {
        return true;
    }
}