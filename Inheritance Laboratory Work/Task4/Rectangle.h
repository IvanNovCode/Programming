//
// Created by Ivan on 01.03.2024.
//

#ifndef TASK4_RECTANGLE_H
#define TASK4_RECTANGLE_H


#include "Shape.h"

class Rectangle : public Shape {
private:
    int x1, y1, x2, y2;

public:
    Rectangle(int x1_coord, int y1_coord, int x2_coord, int y2_coord, std::string c);
    void draw() override;
};


#endif //TASK4_RECTANGLE_H
