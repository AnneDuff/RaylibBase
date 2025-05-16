#pragma once
#include "objects.h"

class bullet : public object {
    public:
    bullet(int x, int y, float speed, float direction);
    ~bullet();
    void Draw(int x, int y);
    void createBullets(int x, int y, float shipDirection);
    bool Update();
    private:
    int x;
    int y;
    float direction;
    float speed;
};