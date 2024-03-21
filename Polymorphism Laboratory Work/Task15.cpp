//
// Created by Ivan on 3/21/2024.
//
#include <iostream>

class Vehicle {
public:
    virtual void startEngine() = 0;
    virtual void stopEngine() = 0;
};

class Car : public Vehicle {
public:
    virtual void startEngine() override {
        std::cout << "Car engine started with ignition key" << std::endl;
    }

    virtual void stopEngine() override {
        std::cout << "Car engine stopped with ignition key" << std::endl;
    }
};

class Motorcycle : public Vehicle {
public:
    virtual void startEngine() override {
        std::cout << "Motorcycle engine started with kick-start" << std::endl;
    }

    virtual void stopEngine() override {
        std::cout << "Motorcycle engine stopped by turning off the key" << std::endl;
    }
};

int main() {
    Car car;
    Motorcycle motorcycle;

    std::cout << "Starting Car engine: ";
    car.startEngine();
    std::cout << "Stopping Car engine: ";
    car.stopEngine();

    std::cout << "\nStarting Motorcycle engine: ";
    motorcycle.startEngine();
    std::cout << "Stopping Motorcycle engine: ";
    motorcycle.stopEngine();

    return 0;
}