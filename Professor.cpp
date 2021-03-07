//
// Created by Павел Бахаруев on 04.03.2021.
//

#include <iostream>
#include "Professor.h"

Professor::Professor(const string &fullName) : Person(fullName, "Professor") {
    joke="I am serious person. I have no jokes";
}

int Professor::gradeHomework(Student &student) {
    if(student.usedGlobalVariables())
        return 40;
    else
        return 100;
}

Professor::Professor(const string &fullName, string jokee) : Person(fullName, "Professor"){
    joke = jokee;
}

string Professor::sayJoke() {
    return joke;
}

void Professor::sendToRetake(Student student) {
    cout << "Professor " << full_name << " sent student " << student.getFullName() << " to retake" << endl;

}
