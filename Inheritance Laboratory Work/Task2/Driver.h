//
// Created by Ivan on 01.03.2024.
//

#ifndef TASK2_DRIVER_H
#define TASK2_DRIVER_H


#include "Worker.h"

class Driver : public Worker {
private:
    int experience;
    char drivingCategory;

public:
    void setExperience(int exp);
    int getExperience() const;
    void setDrivingCategory(char category);
    char getDrivingCategory() const;
};


#endif //TASK2_DRIVER_H
