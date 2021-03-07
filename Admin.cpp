//
// Created by Павел Бахаруев on 04.03.2021.
//

#include <iostream>
#include "Admin.h"
#include "Person.h"
#include "Room.h"
#include "Student.h"


Admin::Admin(const string &fullName) : Person(fullName, "Admin") {
}

void Admin::openRoom(Room room) {
    room.setAccessLevel(0);
}

void Admin::grantAccess(Person &person, Room room) {
    person.addRoom(room.getRoomNumber(), key);
}

void Admin::changeAccessLevel(Person &person, int level) {
    person.setAccessLevel(level, key);
}

