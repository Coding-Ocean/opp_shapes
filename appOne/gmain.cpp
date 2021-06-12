#define _EX3
#ifdef _EX3
#include"BUBBLE.h"
#include"RAIN.h"
#include"SQUARE.h"
#include"SHAPES.h"
void wait() {
    hideCursor();
    clear(60);
    print("Welcom to Coding Ocean.");
    present();
    Sleep(1500);
}
void gmain() {
    window(1920, 1080, full);
    wait();
    SHAPES<BUBBLE>bubbles;
    SHAPES<RAIN>rains;
    SHAPES<SQUARE>squares;
    const int num = 3;
    SHAPES_BASE* shapes[num] = {
        &bubbles,
        &rains,
        &squares
    };
    DATA data[num];
    readText(data, num);
    for (int i = 0; i < num; i++) {
        shapes[i]->create(&data[i]);
    }
    int idx = 0;
    shapes[idx]->init();
    while (notQuit) {
        if (isTrigger(KEY_SPACE)) {
            ++idx %= num;
            shapes[idx]->init();
        }
        shapes[idx]->proc();
    }
    for (int i = 0; i < num; i++) {
        shapes[i]->destroy();
    }
}
#endif
#ifdef _EX2
#include"SHAPES.h"
void gmain() {
    window(1920, 1080, full);
    hideCursor();
    SHAPES shapes;
    shapes.create();
    while (notQuit) {
        shapes.proc();
    }
    shapes.destroy();
}
#endif

#ifdef _EX1
#include"fileIO.h"
#include"BUBBLE.h"
void gmain() {
    window(1920, 1080, full);
    hideCursor();

    struct DATA data[3];
    readText(data,3);

    int i = 2;
    int num = data[i].num;
    float r = data[i].r;
    float g = data[i].g;
    float b = data[i].b;

    BUBBLE* bubble = new BUBBLE[num];
    
    for (int i = 0; i < num; i++) {
        bubble[i].init();
    }
    while (notQuit) {
        colorMode(RGB);
        clear(r,g,b);
        for (int i = 0; i < num; i++) {
            bubble[i].move();
            bubble[i].draw();
        }
    }

    delete[] bubble;
}
#endif