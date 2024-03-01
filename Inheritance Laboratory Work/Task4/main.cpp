//
// Created by Ivan on 01.03.2024.
//
#include "Circle.h"
#include "Rectangle.h"
#include <vector>

int main() {
    std::vector<Shape*> shapes;
    shapes.push_back(new Circle(0, 0, 5, "red"));
    shapes.push_back(new Rectangle(1, 1, 4, 3, "blue"));

    for (Shape* shape : shapes) {
        shape->draw();
    }

    for (Shape* shape : shapes) {
        delete shape;
    }

    return 0;
}