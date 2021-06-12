#pragma once
#include"libOne.h"
class RAIN{
private:
    float Px = 0, Py = 0, Vx = 0, Vy = 0;
    float Speed = 0, Len = 0, SWeight = 0;
public:
    void init();
    void move(int cnt);
    void draw();
};