//
// Created by Ivan on 3/21/2024.
//
#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void draw() = 0;
    virtual double CalculationArea() = 0;
};

class Circle : public Shape {
public:
    double radius;
    Circle(double r) : radius(r) {}

    virtual void draw() override {
        cout << "Drawing Circle" << endl;
    }

    virtual double CalculationArea() override {
        return M_PI * radius * radius;
    }
};

class Cylinder : public Circle {
public:
    double height;
    Cylinder(double r, double h) : Circle(r), height(h) {}

    virtual void draw() override {
        cout << "Drawing Cylinder" << endl;
    }

    virtual double CalculationArea() override {
        double baseArea = M_PI * radius * radius;
        double lateralArea = 2 * M_PI * radius * height;
        return 2 * baseArea + lateralArea;
    }
};

int main() {
    Circle circle(5.0);
    Cylinder cylinder(5.0, 8.0);

    circle.draw();
    cout << "Area of Circle: " << circle.CalculationArea() << endl;

    cylinder.draw();
    cout << "Total Surface Area of Cylinder: " << cylinder.CalculationArea() << endl;

    return 0;
}