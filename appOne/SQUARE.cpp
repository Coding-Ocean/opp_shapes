#include "SQUARE.h"
void SQUARE::init() {
}
void SQUARE::move(int cnt) {
    float ofsX = 8;
    float ofsY = ofsX / 16 * 9;
    float ofsA = 360.0f / 200;
    Px = ofsX * cnt;
    Py = ofsY * cnt;
    Len = ofsX * cnt;
    Angle = ofsA * cnt;
    colorMode(RGB);
    strokeWeight(1);
    stroke(0, 0, 0);
    fill(255, 255, 255, 9);
}
void SQUARE::draw() {
    rect(Px, Py, Len, Len, Angle * TO_RAD);
}
