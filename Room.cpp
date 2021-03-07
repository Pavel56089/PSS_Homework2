//
// Created by Павел Бахаруев on 04.03.2021.
//

#include "Room.h"
#include <iostream>

Room::Room(int roomNumber, const string &type) : room_number(roomNumber), type(type) {
    if (type == "class room"){
        access_level = 1;
    }else if(type == "lecture room"){
        access_level = 1;
    }else if(type == "conference room"){
        access_level = 2;
    }else if (type == "cabinet"){
        access_level = 2;
    }else if (type == "director cabinet"){
        access_level = 3;
    }else{
        access_level = 0;
    }
    cout << "Room " << room_number << " " << type << " with access level " << access_level << " is created." << endl;

}

int Room::getRoomNumber() const {
    return room_number;
}

void Room::setRoomNumber(int roomNumber) {
    room_number = roomNumber;
}

int Room::getAccessLevel() const {
    return access_level;
}

void Room::setAccessLevel(int accessLevel) {
    access_level = accessLevel;
}

const string &Room::getType() const {
    return type;
}

void Room::setType(const string &type) {
    Room::type = type;
}
