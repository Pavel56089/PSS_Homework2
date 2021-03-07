//
// Created by Павел Бахаруев on 04.03.2021.
//

#include <iostream>
#include "Person.h"
#include <set>

using namespace std;

Person::Person(const string &fullName, string type) : full_name(fullName), type(type) {
    if (type == "Student")
        access_level = 1;
    else if ((type == "Professor") || (type == "Lab employee"))
        access_level = 2;
    else if ((type == "Director") || (type == "Admin"))
        access_level = 3;
    else
        access_level = 0;
    cout << type << " " << fullName << " with access level " << levels[access_level] <<" is created." << endl;
    customRoomAccess.insert(100);
}

void Person::sayhi() {
    cout << "Hi" << endl;
}

bool Person::getAccessToRoom(Room room) {
    if (access_level >= room.getAccessLevel()){
        return true;
    }else if(customRoomAccess.find(room.getRoomNumber()) != customRoomAccess.end())
        return true;
    else
        return false;
}

void Person::setAccessLevel(int accessLevel, string key) {
    if(key == admin_key)
        access_level = accessLevel;
}

//void Person::addCustomRoomAccess(int room) {
//    custom_room_access.insert(room);
//    custom_room_access.insert(101);
//    custom_room_access.insert(101);
//    cout << "Room " << room << " granted " << full_name << endl;
//}

void Person::addRoom(int r, string key) {
    if (key == admin_key)
        customRoomAccess.insert(r);

}

const string &Person::getFullName() const {
    return full_name;
}

