#include<fstream>
#include"fileIO.h"
void readText(DATA* data, int num) {
    std::ifstream ifs;
    ifs.open("data.txt");
    for (int i = 0; i < num; i++) {
        ifs >> data[i].num;
        ifs >> data[i].numLoops;
        if (data[i].numLoops == 0)
            data[i].numLoops = data[i].num;
        ifs >> data[i].r;
        ifs >> data[i].g;
        ifs >> data[i].b;
    }
    ifs.close();
}