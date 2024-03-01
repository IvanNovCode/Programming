//
// Created by Ivan on 01.03.2024.
//
#include <iostream>
#include "Worker.h"

int main() {
    Worker ivan;
    ivan.setName("Иван");
    ivan.setAge(25);
    ivan.setSalary(1000);

    Worker vasya;
    vasya.setName("Вася");
    vasya.setAge(26);
    vasya.setSalary(2000);

    double avgSalary = (ivan.getSalary() + vasya.getSalary()) / 2.0;
    std::cout << "Средняя зарплата: " << avgSalary << std::endl;

    return 0;
}
