//
// Created by Ivan on 01.03.2024.
//

#ifndef TASK4_CIRCLE_H
#define TASK4_CIRCLE_H


#include "Shape.h"

class Circle : public Shape {
private:
    int x, y, radius;

public:
    Circle(int x_coord, int y_coord, int r, std::string c);
    void draw() override;
};


#endif //TASK4_CIRCLE_H
