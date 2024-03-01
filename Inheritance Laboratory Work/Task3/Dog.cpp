//
// Created by Ivan on 01.03.2024.
//

#include "Dog.h"

Dog::Dog(std::string name) : Animal(name) {}

void Dog::makeNoise() {
    std::cout << "Dog barks" << std::endl;
}

void Dog::eat() {
    std::cout << "Dog eats meat" << std::endl;
}

std::string Dog::getDescription() {
    return "This is a dog";
}