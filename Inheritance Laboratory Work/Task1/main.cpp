//
// Created by Ivan on 01.03.2024.
//

#include <iostream>
#include <vector>
#include "Student.h"
#include "Aspirant.h"

int main() {
    std::vector<Student*> students;

    Student student1("Ivan", "Novozhilov", "PIe 23", 5.0);
    Student student2("Nikita", "Kuricin", "PIe 23", 4.2);
    Aspirant aspirant1("Viktoria", "Belugina", "PRI 22", 4.8, "Research on AI");
    Student student3("Alexander", "Simanskiy", "PIe 23", 4.4);
    Aspirant aspirant2("Maxim", "Sheryagin", "InfoBez 21", 5.0, "Research on AI");

    students.push_back(&student1);
    students.push_back(&student2);
    students.push_back(&aspirant1);
    students.push_back(&student3);
    students.push_back(&aspirant2);

    for (Student* student : students) {
        std::cout << "Scholarship: " << student->getScholarship() << std::endl;
    }

    return 0;
}
