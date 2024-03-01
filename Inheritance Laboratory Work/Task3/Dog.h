//
// Created by Ivan on 01.03.2024.
//

#ifndef TASK3_DOG_H
#define TASK3_DOG_H


#include "Animal.h"

class Dog : public Animal {
public:
    Dog(std::string name);
    void makeNoise() override;
    void eat() override;
    std::string getDescription() override;
};

#endif //TASK3_DOG_H
