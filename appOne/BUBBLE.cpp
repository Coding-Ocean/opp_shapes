#include "BUBBLE.h"
void BUBBLE::init() {
    Px = random() % (int)width + 0.0f;
    Py = random() % (int)height + 0.0f;
    Vx = random() % 7 - 3.0f;
    Vy = random() % 7 - 3.0f;
    Radius = random() % 50 + 10.0f;
    Hue = (random() % 360) * TO_RAD;
}
void BUBBLE::move(int cnt) {
    Px += Vx;
    Py += Vy;
    if (Px < -Radius)Px = width + Radius;
    else if (Py < -Radius)Py = height + Radius;
    else if (Px > width + Radius)Px = -Radius;
    else if (Py > height + Radius)Py = -Radius;
}
void BUBBLE::draw() {
    noStroke();
    colorMode(HSV);
    fill(Hue, 120, 255, 168);
    circle(Px, Py, Radius * 2);
}
