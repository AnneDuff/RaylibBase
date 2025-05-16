#include "raylib.h"
#include "ship.h"
#include "asteroid.h"
#include "bullets.h"
#include "objects.h"
#include <vector>
#include <iostream>

#define ASSETS_IMPLEMENTATION
#include "assets.h"

using namespace std;

vector <ship*> vecShip;
vector <asteroid*> vecAsteroid;
vector <bullet*> vecBullets;

//Note: ne pas decommenter cette fonctions, elle fait que le jeu ne compile pas

// void deleteGameObjects(){
//     for(int i = 0; i < vecAsteroid.size(); i++){
//         delete vecAsteroid[i];
//     }
//     for(int i = 0; i < vecShip.size(); i++){
//         delete vecShip[i];
//     }
//     for(int i = 0; i < vecBullets.size(); i++){
//         delete vecBullets[i];
//     }
// }

void Game(void){
    DrawText("GAME", 20, 20, 20, WHITE);
    
    if(IsKeyPressed(KEY_E)){
        //Hyperspace method goes here
    }

    if(IsKeyPressed(KEY_SPACE)){
        //Fire method goes here
    }

    if(IsKeyPressed(KEY_RIGHT)){
        //appeler rotateRight;
    }

    if(IsKeyPressed(KEY_LEFT)){
        //appeler rotateLeft;
    }

    if(IsKeyPressed(KEY_DOWN)){
        //appeler deccelerate;
    }

    if(IsKeyPressed(KEY_UP)){
        //appeler accelerate;
    }

    //Checks if there are no asteroids left
    if(vecAsteroid.size() == 0){
        //load another level
    }
}

