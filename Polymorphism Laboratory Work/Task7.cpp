//
// Created by Ivan on 3/21/2024.
//
#include <iostream>

class Vehicle {
public:
    virtual void SpeedUp() {
        std::cout << "Increasing vehicle speed" << std::endl;
    }
};

class Car : public Vehicle {
public:
    void SpeedUp() override {
        std::cout << "Increasing car speed" << std::endl;
    }
};

class Bicycle : public Vehicle {
public:
    void SpeedUp() override {
        std::cout << "Increasing bicycle speed" << std::endl;
    }
};

int main() {
    Vehicle vehicle;
    vehicle.SpeedUp();

    Car car;
    car.SpeedUp();

    Bicycle bicycle;
    bicycle.SpeedUp();

    return 0;
}
