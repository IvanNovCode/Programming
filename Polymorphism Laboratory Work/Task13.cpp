//
// Created by Ivan on 3/21/2024.
//
#include <iostream>
#include <cmath>

class Shape {
public:
    virtual void draw() = 0;
    virtual double CalculationArea() = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    virtual void draw() override {
        std::cout << "Drawing Circle" << std::endl;
    }

    virtual double CalculationArea() override {
        return M_PI * radius * radius;
    }
};

class Square : public Shape {
private:
    double side;

public:
    Square(double s) : side(s) {}

    virtual void draw() override {
        std::cout << "Drawing Square" << std::endl;
    }

    virtual double CalculationArea() override {
        return side * side;
    }
};

class Triangle : public Shape {
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    virtual void draw() override {
        std::cout << "Drawing Triangle" << std::endl;
    }

    virtual double CalculationArea() override {
        return 0.5 * base * height;
    }
};

int main() {
    Circle circle(5.0);
    Square square(4.0);
    Triangle triangle(3.0, 4.0);

    circle.draw();
    std::cout << "Area of Circle: " << circle.CalculationArea() << std::endl;

    square.draw();
    std::cout << "Area of Square: " << square.CalculationArea() << std::endl;

    triangle.draw();
    std::cout << "Area of Triangle: " << triangle.CalculationArea() << std::endl;

    return 0;
}