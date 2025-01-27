// CH-230-A
// a12_p2.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include "TournamentMember.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    char firstName[36] = "Emmanuel";
    char lastName[36] = "Mutuku";
    char dateOfBirth[11] = "13/07/1999";

    TournamentMember b(firstName, lastName, dateOfBirth, 22, 176);
    b.printInformation();
    cout << endl;

    //Change Location
    b.setLocation("Lagos");
    b.printInformation();
    return 0;
}