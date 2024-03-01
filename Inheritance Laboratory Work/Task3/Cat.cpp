//
// Created by Ivan on 01.03.2024.
//

#include "Cat.h"

Cat::Cat(std::string name) : Animal(name) {}

void Cat::makeNoise() {
    std::cout << "Cat meows" << std::endl;
}

void Cat::eat() {
    std::cout << "Cat eats fish" << std::endl;
}

std::string Cat::getDescription() {
    return "This is a cat";
}