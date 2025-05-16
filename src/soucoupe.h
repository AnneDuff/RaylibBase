#pragma once
#include "bullets.h"
#include "objects.h"

class soucoupe: public object {
    public:
    soucoupe(int x, int y, float speed, float direction);
    ~soucoupe();
    void Draw(int y);
    void createSoucoupe();
    bullet* Fire();
    bool Update();
    private:
    float direction;
    float speed;
    int sizex;
    int sizey;
    int x;
    int y;
};