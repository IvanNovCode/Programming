//
// Created by Ivan on 01.03.2024.
//

#ifndef PROGRAMMINGPROJECT1_STUDENT_H
#define PROGRAMMINGPROJECT1_STUDENT_H

#include <string>

class Student {
protected:
    std::string firstName;
    std::string lastName;
    std::string group;
    double averageMark;

public:
    Student(std::string firstName, std::string lastName, std::string group, double averageMark);

    virtual double getScholarship();

    void displayInfo();
};


#endif //PROGRAMMINGPROJECT1_STUDENT_H
