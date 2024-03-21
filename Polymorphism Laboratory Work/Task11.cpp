//
// Created by Ivan on 3/21/2024.
//
#include <iostream>
#include <cmath>

class Shape {
public:
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    virtual double getArea() override {
        return M_PI * radius * radius;
    }

    virtual double getPerimeter() override {
        return 2 * M_PI * radius;
    }
};

class Rectangle : public Shape {
private:
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    virtual double getArea() override {
        return width * height;
    }

    virtual double getPerimeter() override {
        return 2 * (width + height);
    }
};

class Triangle : public Shape {
private:
    double side1, side2, side3;

public:
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    virtual double getArea() override {
        double s = (side1 + side2 + side3) / 2;
        return sqrt(s * (s - side1) * (s - side2) * (s - side3));
    }

    virtual double getPerimeter() override {
        return side1 + side2 + side3;
    }
};

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);
    Triangle triangle(3.0, 4.0, 5.0);

    std::cout << "Area of Circle: " << circle.getArea() << std::endl;
    std::cout << "Perimeter of Circle: " << circle.getPerimeter() << std::endl;

    std::cout << "Area of Rectangle: " << rectangle.getArea() << std::endl;
    std::cout << "Perimeter of Rectangle: " << rectangle.getPerimeter() << std::endl;

    std::cout << "Area of Triangle: " << triangle.getArea() << std::endl;
    std::cout << "Perimeter of Triangle: " << triangle.getPerimeter() << std::endl;

    return 0;
}