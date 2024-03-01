//
// Created by Ivan on 01.03.2024.
//

#include "Rectangle.h"
#include <iostream>

Rectangle::Rectangle(int x1_coord, int y1_coord, int x2_coord, int y2_coord, std::string c) : Shape(c), x1(x1_coord), y1(y1_coord), x2(x2_coord), y2(y2_coord) {}

void Rectangle::draw() {
    std::cout << "Drawing a " << color << " rectangle with top-left corner at (" << x1 << ", " << y1 << ") and bottom-right corner at (" << x2 << ", " << y2 << ")" << std::endl;
}