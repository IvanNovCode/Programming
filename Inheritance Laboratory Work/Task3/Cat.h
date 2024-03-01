//
// Created by Ivan on 01.03.2024.
//

#ifndef TASK3_CAT_H
#define TASK3_CAT_H


#include "Animal.h"

class Cat : public Animal {
public:
    Cat(std::string name);
    void makeNoise() override;
    void eat() override;
    std::string getDescription() override;
};


#endif //TASK3_CAT_H
