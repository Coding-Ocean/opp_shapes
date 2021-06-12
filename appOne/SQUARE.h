#pragma once
#include"libOne.h"
class SQUARE{
private:
    int NumLoops=0;
    int Cnt=0;
    float Px = 0, Py = 0;
    float Len = 0;
    float Angle = 0;
    int Id = 0;
public:
    void init();
    void move(int cnt);
    void draw();
};

