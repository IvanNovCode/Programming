//
// Created by Ivan on 01.03.2024.
//

#include "User.h"

void User::setName(std::string n) {
    name = n;
}

std::string User::getName() const {
    return name;
}

void User::setAge(int a) {
    age = a;
}

int User::getAge() const {
    return age;
}