//
// Created by Ivan on 01.03.2024.
//

#include "Circle.h"
#include <iostream>

Circle::Circle(int x_coord, int y_coord, int r, std::string c) : Shape(c), x(x_coord), y(y_coord), radius(r) {}

void Circle::draw() {
    std::cout << "Drawing a " << color << " circle at coordinates (" << x << ", " << y << ") with radius " << radius << std::endl;
}