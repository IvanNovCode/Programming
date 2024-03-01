//
// Created by Ivan on 01.03.2024.
//

#include "Student.h"

#include <iostream>

Student::Student(std::string firstName, std::string lastName, std::string group, double averageMark)
        : firstName(firstName), lastName(lastName), group(group), averageMark(averageMark) {
}

double Student::getScholarship() {
    if (averageMark == 5.0) {
        return 2000;
    } else {
        return 1900;
    }
}

void Student::displayInfo() {
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Group: " << group << std::endl;
    std::cout << "Average Mark: " << averageMark << std::endl;
}