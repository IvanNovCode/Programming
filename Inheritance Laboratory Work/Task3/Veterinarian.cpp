//
// Created by Ivan on 01.03.2024.
//

#include "Veterinarian.h"

void Veterinarian::treatAnimal(Animal* animal) {
    std::cout << "Name: " << animal->getName() << std::endl;
    std::cout << "Description: " << animal->getDescription() << std::endl;
}