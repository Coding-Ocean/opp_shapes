#pragma once
#define _TEMPLATE
#ifdef _TEMPLATE
#include"libOne.h"
#include"SHAPES_BASE.h"
template<class T>
class SHAPES : public SHAPES_BASE{
private:
    DATA Data;
    int Cnt = 0;
    T* Shapes = 0;
public:
    int create(DATA* data) {
        Data = *data;
        Shapes = new T[Data.num];
        for (int i = 0; i < Data.num; i++) {
            Shapes[i].init();
        }
        return 0;
    }
    void destroy() {
        if (Shapes) { delete[] Shapes; Shapes = 0; }
    }
    void init() {
        Cnt = 0;
    }
    void proc() {
        for (int i = 0; i < Data.num; i++) {
            if (Cnt % Data.numLoops==0) {
                colorMode(RGB);
                clear(Data.r, Data.g, Data.b);
                Cnt = 0;
            }
            Cnt++;
            Shapes[i].move(Cnt);
            Shapes[i].draw();
        }
    }
};
#endif
#ifdef _SQUARE
#include"SHAPES_BASE.h"
#include"SQUARE.h"
class SHAPES : public SHAPES_BASE{
private:
    SQUARE* Shapes = 0;
public:
    int create() {
        BackColor = SQUARE::backColor();
        Num = SQUARE::num();
        Shapes = new SQUARE[Num];
        for (int i = 0; i < Num; i++) {
            Shapes[i].init();
        }
        return 0;
    }
    void destroy() {
        if (Shapes) { delete[] Shapes; Shapes = 0; }
    }
    void proc() {
        colorMode(RGB);
        clear(BackColor);
        for (int i = 0; i < Num; i++) {
            Shapes[i].move();
            Shapes[i].draw();
        }
    }
};
#endif
#ifdef _RAIN
#include"SHAPES_BASE.h"
#include"RAIN.h"
class SHAPES : public SHAPES_BASE{
private:
    int Num = 0;
    RAIN* Shapes = 0;
    COLOR BackColor;
public:
    int create() {
        BackColor = RAIN::backColor();
        Num = RAIN::num();
        Shapes = new RAIN[Num];
        for (int i = 0; i < Num; i++) {
            Shapes[i].init();
        }
        return 0;
    }
    void destroy() {
        if (Shapes) { delete[] Shapes; Shapes = 0; }
    }
    void proc() {
        colorMode(RGB);
        clear(BackColor);
        for (int i = 0; i < Num; i++) {
            Shapes[i].move();
            Shapes[i].draw();
        }
    }
};
#endif
#ifdef _BUBBLE
#include"SHAPES_BASE.h"
#include"BUBBLE.h"
class SHAPES : public SHAPES_BASE{
private:
    int Num = 0;
    BUBBLE* Shapes = 0;
    COLOR BackColor;
public:
    int create() {
        BackColor = COLOR(200, 60, 120);
        Num = 150;
        Shapes = new BUBBLE[Num];
        for (int i = 0; i < Num; i++) {
            Shapes[i].init();
        }
        return 0;
    }
    void destroy() {
        if (Shapes) { delete[] Shapes; Shapes = 0; }
    }
    void proc() {
        colorMode(RGB);
        clear(BackColor);
        for (int i = 0; i < Num; i++) {
            Shapes[i].move();
            Shapes[i].draw();
        }
    }
};
#endif