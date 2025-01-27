// CH-230-A
// a12_p3.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include "TournamentMember.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //First Player
    char firstName[36] = "Emmanuel";
    char lastName[36] = "Mutuku";
    char dateOfBirth[11] = "13/07/1999";
    Player E6(firstName, lastName, dateOfBirth, 22, 176, 6, "CDM", 1, "Right");
    E6.increment_goals();
    E6.printing();
    cout << endl;

    //Second Player
    char firstName_1[36] = "Paul";
    char lastName_1[36] = "Pogba";
    char dateOfBirth_1[11] = "15/03/1993";
    Player PP6(firstName_1, lastName_1, dateOfBirth_1, 28, 191, 6, "CAM", 89, "Right");
    PP6.increment_goals();
    PP6.printing();
    cout << endl;

    //Third Player
    char firstName_2[36] = "Toni ";
    char lastName_2[36] = "Kroos";
    char dateOfBirth_2[11] = "04/01/1990";
    Player TK8(firstName_2, lastName_2, dateOfBirth_2, 31, 183, 8, "CM", 106, "Right");
    TK8.increment_goals();
    TK8.printing();
    cout << endl;

    E6.setLocation("Hamburg");
    E6.printing();
    cout << endl;
    PP6.printing();
    cout << endl;
    TK8.printing();
    return 0;
}