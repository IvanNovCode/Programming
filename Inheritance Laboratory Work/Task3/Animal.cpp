//
// Created by Ivan on 01.03.2024.
//

#include "Animal.h"
#include <iostream>

Animal::Animal(std::string name) : name(name) {}

void Animal::makeNoise() {
    std::cout << "Animal noise" << std::endl;
}

void Animal::eat() {
    std::cout << "Animal eats" << std::endl;
}

std::string Animal::getName() {
    return name;
}

std::string Animal::getDescription() {
    return "This is an animal";
}