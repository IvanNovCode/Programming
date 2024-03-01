//
// Created by Ivan on 01.03.2024.
//

#ifndef TASK2_USER_H
#define TASK2_USER_H


#include <string>

class User {
private:
    std::string name;
    int age;

public:
    void setName(std::string n);
    std::string getName() const;
    void setAge(int a);
    int getAge() const;
};


#endif //TASK2_USER_H
