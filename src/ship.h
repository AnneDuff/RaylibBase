#pragma once
#include "bullets.h"
#include "objects.h"
#include "raylib.h"

class ship: public object{
    public:
    ship(int x, int y, float speed);
    ~ship();
    void Draw();
    bullet* Fire();
    void rotateLeft(const float delta = 0.09f);
    void rotateRight(const float delta = 0.09f);
    void accelerate(const float delta = 0.5f);
    void deccelerate(const float delta = 0.5f);
    void shipLosesLife();
    void shipGainsLife();
    void createShip();
    void hyperspace();
    bool Update();
    private:
    float speed;
    float direction;
    float acceleration;
    int points;
    int lives;
    int dx;
    int dy;
    int x;
    int y;
    int h;
    int w;
};