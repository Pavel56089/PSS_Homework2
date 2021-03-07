//
// Created by Павел Бахаруев on 04.03.2021.
//

#ifndef HW2_PROFESSOR_H
#define HW2_PROFESSOR_H
#include "Person.h"
#include "Student.h"


class Professor : public Person{
public:
    Professor(const string &fullName);
    Professor(const string &fullName, string joke);
    int gradeHomework(Student &student);
    string sayJoke();
    void sendToRetake(Student student);
private:
    string joke;
};


#endif //HW2_PROFESSOR_H
