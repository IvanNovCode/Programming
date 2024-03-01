//
// Created by Ivan on 01.03.2024.
//

#ifndef PROGRAMMINGPROJECT1_ASPIRANT_H
#define PROGRAMMINGPROJECT1_ASPIRANT_H

#include "Student.h"

class Aspirant : public Student {
private:
    std::string scientificWork;

public:
    Aspirant(std::string firstName, std::string lastName, std::string group, double averageMark, std::string scientificWork);

    double getScholarship() override;

    void displayInfo();
};


#endif //PROGRAMMINGPROJECT1_ASPIRANT_H
