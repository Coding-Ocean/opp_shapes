#pragma once
#include"fileIO.h"
#include"libOne.h"
class SHAPES_BASE {
public:
    virtual int create(DATA* data) = 0;
    virtual void destroy() = 0;
    virtual void init() = 0;
    virtual void proc() = 0;
};

