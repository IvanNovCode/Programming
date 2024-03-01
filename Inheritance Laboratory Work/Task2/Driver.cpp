//
// Created by Ivan on 01.03.2024.
//

#include "Driver.h"

void Driver::setExperience(int exp) {
    experience = exp;
}

int Driver::getExperience() const {
    return experience;
}

void Driver::setDrivingCategory(char category) {
    drivingCategory = category;
}

char Driver::getDrivingCategory() const {
    return drivingCategory;
}