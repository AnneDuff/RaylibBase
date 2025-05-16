#include "asteroid.h"
#include "objects.h"
#include "raylib.h"
#include <stdlib.h>

asteroid::asteroid(int x, int y, float speed, float direction, float rotation): object(x, y, speed) {
    this->x = x;
    this->y = y;
    this->direction = direction;
    this->speed = speed;
    this->rotation = rotation;
}

asteroid::~asteroid(){}

void asteroid::Draw(int x, int y){
    DrawCircle(x, y, 50, WHITE);
}

//creates a random amount of asteroids (between 1 - 20) at a random place on the screen
void createAsteroids(){
    int amountOfAsteroids = rand() % 20;
    int randx = rand() % 800;
    int randy = rand() % 450;
    float randSpeed = rand() % 5;
    float randDirection = rand() % 7;
    float randRotation = rand() % 90;
    for(int i = 0; i < amountOfAsteroids; i++) {
        asteroid* newAsteroid = new asteroid(randx, randy, randSpeed, randDirection, randRotation);
    }
}

bool asteroid::Update(){
    if(x > 800){
        x -= 800;
    }
    if(x < 0){
        x += 800;
    }
    if(y > 450){
        y -= 450;
    }
    if(y < 0){
        y += 450;
    }
    return true;
}