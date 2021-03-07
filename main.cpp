#include <iostream>
#include "Person.h"
#include "Room.h"
#include "Student.h"
#include "Professor.h"
#include "Director.h"
#include "Admin.h"
#include "LabEmployee.h"

using namespace std;

int main() {
    Director Semenichin = Director("Kirill Semenichin");

    Admin Minnichanov = Admin("Rustam Minnichanov");
    Admin Nikiforov = Admin("Nikolay Nikiforov");

    Professor Shilov = Professor("Shilov");
    Professor Thormasov = Professor("Thormasov", "I dont want to explain, I just want to emphasis.");
    Professor Gorodetski = Professor("Gorodetski");
    Professor Burmyakov = Professor("Artem Burmyakov");
    Professor Mike = Professor("Mike");


    LabEmployee Sara = LabEmployee("Sara");
    LabEmployee Sarah = LabEmployee("Sarah");
    LabEmployee Masha = LabEmployee("Masha");
    LabEmployee Dmitry = LabEmployee("Dmitry");
    LabEmployee John = LabEmployee("John");
    LabEmployee Arslan = LabEmployee("Arslan");
    LabEmployee Albek = LabEmployee("Albek");
    LabEmployee Azatulek = LabEmployee("Azatulek");

    Student Pavel = Student("Pavel Baharuev");
    Student Artem = Student("Artem Batalov");
    Student Vladimir = Student("Vladimir");
    Student Vladislav = Student("Vladislav");
    Student Elizaveta = Student("Elizaveta");
    Student Ekaterina = Student("Ekaterina");
    Student George = Student("George");
    Student Ruslan = Student("Ruslan");
    Student Alena = Student("Alena");
    Student Misha = Student("Misha");
    Student Azat = Student("Azat");
    Student Ivan = Student("Ivan");
    Student Ilona = Student("Ilona");
    Student Nastya = Student("Nastya");
    Student Danil = Student("Danil");
    Student Musor = Student("Musor");

    Room Room305 = Room(305, "class room");
    Room Room202 = Room(202, "conference room");
    Room DirectorOffice = Room(401, "director cabinet");


    Artem.shushukatsa(Pavel);

    cout << Artem.getAccessToRoom(DirectorOffice) << endl;
    Nikiforov.grantAccess(Artem, DirectorOffice);
    cout << Artem.getAccessToRoom(DirectorOffice) << endl;

    Pavel.getAccessToRoom(Room202);
    Minnichanov.changeAccessLevel(Pavel, 3);
    Pavel.getAccessToRoom(Room202);

    Pavel.useGlobalVariables();
    cout << Mike.gradeHomework(Pavel) << endl;

    cout << Thormasov.sayJoke() << endl;

    Thormasov.sendToRetake(Musor);

    return 0;
}
