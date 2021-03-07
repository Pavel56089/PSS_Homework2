//
// Created by Павел Бахаруев on 04.03.2021.
//

#ifndef HW2_ADMIN_H
#define HW2_ADMIN_H


#include "Person.h"
#include "Student.h"

class Admin : public Person{
public:
    Admin(const string &fullName);
    void openRoom(Room room);
    void grantAccess(Person &person, Room room);
    void changeAccessLevel(Person &person, int level);
private:
    string key = "i_am_admin";

};


#endif //HW2_ADMIN_H
