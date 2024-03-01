//
// Created by Ivan on 01.03.2024.
//

#include "Aspirant.h"

#include <iostream>

Aspirant::Aspirant(std::string firstName, std::string lastName, std::string group, double averageMark, std::string scientificWork)
        : Student(firstName, lastName, group, averageMark), scientificWork(scientificWork) {}

double Aspirant::getScholarship() {
    if (averageMark == 5.0) {
        return 2500;
    } else {
        return 2200;
    }
}

void Aspirant::displayInfo() {
    Student::displayInfo();
    std::cout << "Scientific Work: " << scientificWork << std::endl;
}