#include "RAIN.h"
void RAIN::init() {
    angleMode(RADIANS);
    Px = random() % (int)width;
    Py = random() % 1080 * -1.0f;
    float angle = random() % 4 + 88.0f;
    Vx = cos(angle * TO_RAD);
    Vy = sin(angle * TO_RAD);
    Speed = random() % 10 + 20.0f;
    Len = random() % 1000 + 80.0f;
    SWeight = random() % 2 + 1;
}
void RAIN::move(int cnt) {
    Px += Vx * Speed;
    Py += Vy * Speed;
    if (Py - Vy * Len > height) {
        init();
    }
}
void RAIN::draw() {
    strokeWeight(SWeight);
    stroke(255, 255, 255, 120);
    line(Px, Py, Px - Vx * Len, Py - Vy * Len);
}
