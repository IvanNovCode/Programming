//
// Created by Ivan on 3/21/2024.
//
#include <iostream>

class Circle {
private:
    double x;
    double y;
    double r;

public:
    Circle(double r) : x(0), y(0), r(r) {}
    Circle(int x, int y, double r) : x(x), y(y), r(r) {}
    Circle(int x, double r) : x(x), y(0), r(r) {}
    Circle(double r, int y) : x(0), y(y), r(r) {}

    double getX() {
        return x;
    }

    double getY() {
        return y;
    }

    double getR() {
        return r;
    }
};

int main() {
    Circle circle1(5.0f);
    Circle circle2(3, 4, 5.0f);
    Circle circle3(6, 5.0f);
    Circle circle4(7.0f, 5);

    std::cout << "Circle radius 1: " << circle1.getR() << std::endl;
    std::cout << "Circle radius 2: " << circle2.getR() << std::endl;
    std::cout << "Circle radius 3: " << circle3.getR() << std::endl;
    std::cout << "Circle radius 4: " << circle4.getR() << std::endl;

    return 0;
}
