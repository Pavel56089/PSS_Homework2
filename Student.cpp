//
// Created by Павел Бахаруев on 04.03.2021.
//

#include <iostream>
#include "Student.h"


Student::Student(const string &fullName) : Person(fullName, "Student") {
    isUsesGlobalVariables = false;
}

void Student::useGlobalVariables() {
    isUsesGlobalVariables = true;
}

bool Student::usedGlobalVariables() {
    return isUsesGlobalVariables;
}

void Student::shushukatsa(Student &student) {
    cout << full_name << " shushukaetsya with " << student.getFullName() << endl;
}

