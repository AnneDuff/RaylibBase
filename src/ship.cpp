#include "ship.h"
#include "math.h"
#include "objects.h"
#include <iostream>

ship::ship(int x, int y, float speed): object(x, y, speed) {
    this->speed = speed;
    this->direction = direction;
    this->acceleration = acceleration;
    this->points = points;
    this->lives = lives;
    this->dx = dx;
    this->dy = dy;
    this->x = x;
    this->y = y;
    this->h = h;
    this->w = w;
};

ship::~ship(){};

void ship::Draw(){
    Vector2 tip = { x + 20 * sinf(direction), y - 20 * cosf(direction) };
    Vector2 left = { x + 15 * sinf(direction + 2.5f), y - 15 * cosf(direction + 2.5f) };
    Vector2 right = { x + 15 * sinf(direction - 2.5f), y - 15 * cosf(direction - 2.5f) };

    DrawTriangle(tip, right, left, WHITE);
}

void ship::rotateLeft(const float delta) {
    this->direction -= delta;
}

void ship::rotateRight(const float delta) {
    this->direction += delta;
}

void ship::accelerate(const float delta) {
    acceleration += delta;
    if(acceleration > 3){
        acceleration = 3;
    }
}

void ship::deccelerate(const float delta) {
    acceleration -= delta;
    if(acceleration < -3){
        acceleration = -3;
    }
}

bullet* ship::Fire(){
    bullet* blast = new bullet(x + 20 * sin(direction), y - 20 * cos(direction), 7, direction);
    return blast;
}

void ship::shipLosesLife(){
    //if collision with asteroid/soucoupe/missile soucoupe
    lives-=1;
}

void ship::shipGainsLife(){
    int temp = points - 10000;
    if(points > temp){
        lives+=1;
        temp += 10000;    
    }
}

void createShip(){
    ship* newShip = new ship(400, 225, 2);
}

//teleports the ship at a random place on the screen
void hyperspace(){
    int randx = rand() % 800;
    int randy = rand() % 450;
    ship* newShip = new ship(randx, randy, 2);
}

bool ship::Update(){
    speed+=acceleration;
    if(speed > 5){
        speed = 5;
    }
    if(speed < 0){
        speed = 0;
    }
    return true;
}
