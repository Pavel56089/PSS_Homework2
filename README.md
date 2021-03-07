# Homework #2 Programming Software Systems
## Classes and dependence
The project represents university access system and some simulation of the Innopolis University life.
## Classes and dependence

1. Class Room has type, access_level, room number fields and functions:
    ```Person(const string &fullName, string type);
    bool getAccessToRoom(Room room);
    void setAccessLevel(int accessLevel, string key);
    void addRoom(int r, string key);
    const string &getFullName() const;

2. Class Person have name, access_level, customRoomAccess set fields and functions:

    ```Room(int roomNumber, const string &type);
    int getRoomNumber() const;
    void setRoomNumber(int roomNumber); 
    int getAccessLevel() const;
    void setAccessLevel(int accessLevel);
    const string &getType() const;
    void setType(const string &type);

2a. Class Admin extends Person, have key field and functions:

    Admin(const string &fullName);
    void openRoom(Room room);
    void grantAccess(Person &person, Room room);
    void changeAccessLevel(Person &person, int level);

2b. Class Professor extends Person, have joke field and functions:

    Professor(const string &fullName);
    Professor(const string &fullName, string joke);
    int gradeHomework(Student &student);
    string sayJoke();
    void sendToRetake(Student student);

2c. Class Student extends Person, have isUsesGlobalVariables field and functions:

    Student(const string &fullName);
    void useGlobalVariables();
    bool usedGlobalVariables();
    void shushukatsa(Student &student);

2d. Class Director extends Person, havefunctions:

    Director(const string &fullName);

2e. Class LabEmpoyee extends Person , have functions

    LabEmployee(const string &fullName);

## How to Run Code
Use C++ 17 Standart. You can write Program in main.cpp. The Optional Description of the function will be in the terminal during termination.

---
Created by Pavel Baharuev.