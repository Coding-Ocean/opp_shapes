#pragma once
#include"libOne.h"
class BUBBLE{
private:
    float Px = 0, Py=0, Radius = 0;
    float Hue=0, Vx = 0, Vy = 0;
public:
    void init() ;
    void move(int cnt) ;
    void draw() ;
};

