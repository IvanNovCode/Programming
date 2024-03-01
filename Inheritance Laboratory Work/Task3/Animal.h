//
// Created by Ivan on 01.03.2024.
//

#ifndef TASK3_ANIMAL_H
#define TASK3_ANIMAL_H


#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;

public:
    Animal(std::string name);
    virtual void makeNoise();
    virtual void eat();
    virtual std::string getDescription();
    virtual std::string getName();
};


#endif //TASK3_ANIMAL_H
