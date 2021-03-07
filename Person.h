//
// Created by Павел Бахаруев on 04.03.2021.
//

#ifndef HW2_PERSON_H
#define HW2_PERSON_H
#include <string>
#include "Room.h"
#include <map>
#include <set>
#include "Person.h"

using namespace std;

class Person {
public:
    Person(const string &fullName, string type);
    bool getAccessToRoom(Room room);

    void setAccessLevel(int accessLevel, string key);
    void addRoom(int r, string key);
    const string &getFullName() const;

protected:
    string full_name;
    map <int, string> levels = {{ 0, "no level" },
                                   { 1, "green" },
                                   { 2, "yellow" },
                                   { 3, "red" }};
private:
    int access_level;
    set<int> customRoomAccess;
    string admin_key = "i_am_admin";


};


#endif //HW2_PERSON_H
