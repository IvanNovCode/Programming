//
// Created by Ivan on 01.03.2024.
//

#ifndef TASK3_BEAR_H
#define TASK3_BEAR_H


#include "Animal.h"

class Bear : public Animal {
public:
    Bear(std::string name);
    void makeNoise() override;
    void eat() override;
    std::string getDescription() override;
};


#endif //TASK3_BEAR_H
