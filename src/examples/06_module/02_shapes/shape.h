//shape.h
#include <iostream>
#ifndef SHAPE_H
#define SHAPE_H

class shape// abstract class has at lest one pure virtual function
{
public:
    virtual void draw() = 0;//pure virtual fuction

};

#endif