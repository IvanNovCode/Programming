//
// Created by Ivan on 3/21/2024.
//
#include <iostream>

class Employee {
public:
    virtual double CalculateSalary() = 0;
};

class Manager : public Employee {
public:
    virtual double CalculateSalary() override {
        return 50000.0;
    }
};

class Programmer : public Employee {
public:
    virtual double CalculateSalary() override {
        return 40000.0;
    }
};

int main() {
    Manager manager;
    Programmer programmer;

    std::cout << "Salary of Manager: $" << manager.CalculateSalary() << std::endl;
    std::cout << "Salary of Programmer: $" << programmer.CalculateSalary() << std::endl;

    return 0;
}