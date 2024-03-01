//
// Created by Ivan on 01.03.2024.
//

#ifndef TASK2_WORKER_H
#define TASK2_WORKER_H


#include "User.h"

class Worker : public User {
private:
    int salary;

public:
    void setSalary(int s);
    int getSalary() const;
};


#endif //TASK2_WORKER_H
