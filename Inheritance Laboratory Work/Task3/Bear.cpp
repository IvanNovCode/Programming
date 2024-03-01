//
// Created by Ivan on 01.03.2024.
//

#include "Bear.h"

Bear::Bear(std::string name) : Animal(name) {}

void Bear::makeNoise() {
    std::cout << "Bear growls" << std::endl;
}

void Bear::eat() {
    std::cout << "Bear eats berries and fish" << std::endl;
}

std::string Bear::getDescription() {
    return "This is a bear";
}