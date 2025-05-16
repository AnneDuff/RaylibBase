#pragma once
#include "objects.h"

class asteroid: public object {
    public:
    asteroid(int x, int y, float speed, float direction, float rotation);
    ~asteroid();
    void Draw(int x, int y);
    void createAsteroids();
    bool Update();
    private:
    float rotation;
    float direction;
    float speed;
    int x;
    int y;
};