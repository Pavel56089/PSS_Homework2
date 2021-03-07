//
// Created by Павел Бахаруев on 04.03.2021.
//

#ifndef HW2_ROOM_H
#define HW2_ROOM_H
#include <string>
#include <map>

using namespace std;

class Room {
public:
    Room(int roomNumber, const string &type);

    int getRoomNumber() const;

    void setRoomNumber(int roomNumber);

    int getAccessLevel() const;

    void setAccessLevel(int accessLevel);

    const string &getType() const;

    void setType(const string &type);

private:
    int room_number;
    int access_level;
    string type;
    map <int, string> levels = {{ 0, "no level" },
                                { 1, "green" },
                                { 2, "yellow" },
                                { 3, "red" }};

};


#endif //HW2_ROOM_H
