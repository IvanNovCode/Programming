//
// Created by Ivan on 01.03.2024.
//

#ifndef TASK4_SHAPE_H
#define TASK4_SHAPE_H


#include <string>

class Shape {
protected:
    std::string color;

public:
    Shape(std::string c);
    virtual void draw() = 0;
};


#endif //TASK4_SHAPE_H
