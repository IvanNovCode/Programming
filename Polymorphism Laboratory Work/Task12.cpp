//
// Created by Ivan on 3/21/2024.
//
#include <iostream>

class Animal {
public:
    virtual void move() const = 0;
    virtual void makeSound() const = 0;
};

class Bird : public Animal {
public:
    virtual void move() const override {
        std::cout << "Bird is flying" << std::endl;
    }

    virtual void makeSound() const override {
        std::cout << "Bird is chirping" << std::endl;
    }
};

class Panthera : public Animal {
public:
    virtual void move() const override {
        std::cout << "Panthera is running" << std::endl;
    }

    virtual void makeSound() const override {
        std::cout << "Panthera is roaring" << std::endl;
    }
};

int main() {
    Bird bird;
    Panthera panthera;

    std::cout << "Bird movement: ";
    bird.move();
    std::cout << "Bird sound: ";
    bird.makeSound();

    std::cout << "\nPanthera movement: ";
    panthera.move();
    std::cout << "Panthera sound: ";
    panthera.makeSound();

    return 0;
}