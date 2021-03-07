//
// Created by Павел Бахаруев on 04.03.2021.
//

#ifndef HW2_STUDENT_H
#define HW2_STUDENT_H
#include "Person.h"


class Student : public Person{
public:
    Student(const string &fullName);
    void useGlobalVariables();
    bool usedGlobalVariables();
    void shushukatsa(Student &student);
private:
    bool isUsesGlobalVariables;

};


#endif //HW2_STUDENT_H
