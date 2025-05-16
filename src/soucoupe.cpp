#include "soucoupe.h"
#include "objects.h"
#include "raylib.h"
#include <math.h>
#include <stdlib.h>

soucoupe::soucoupe(int x, int y, float speed, float direction): object(x, y, speed) {
    this->x = x;
    this->y = y;
    this->sizex = sizex;
    this->sizey = sizey;
    this->direction = direction;
    this->speed = speed;
}

soucoupe::~soucoupe(){}

//x = 0 puisque la soucoupe spawnera toujours sur le cote de l'ecran
void::soucoupe::Draw(int y){
    DrawCircle(0, y, 50, ORANGE);
}

//spawns a soucoupe at a random place on the y axis and at 0 and the x axis
//so the soucoupe arrives from the side.
void soucoupe::createSoucoupe(){
    int randy = rand() % 450;
    int randSpeed = rand() % 5;
    soucoupe* newSoucoupe = new soucoupe(0, randy, randSpeed, direction);
}

bullet* soucoupe::Fire(){
    bullet* blast = new bullet(x + 20 * sin(direction), y - 20 * cos(direction), 7, direction);
    return blast;
}

bool soucoupe::Update(){
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