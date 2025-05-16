#pragma once
#include "objects.h"

class object{
    public:
    object(int x, int y, float speed);
    virtual ~object();
    virtual bool Update();
    private:
    float speed;
    int x;
    int y;
    float dx;
    float dy;
    double direction;
};