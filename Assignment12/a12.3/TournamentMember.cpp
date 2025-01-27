// CH-230-A
// a12_p3.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>
#include "TournamentMember.h"
#include <cstring>

using namespace std;
string TournamentMember::location = "Nairobi";

//Constructor with all parameters
TournamentMember::TournamentMember(char *first_name,char *last_name, char *date_of_birth, int age_1, double height_1){
    cout << "Constructor with all parameters" << endl;
    strcpy(firstName, first_name);
    strcpy(lastName, last_name);
    strcpy(dateOfBirth, date_of_birth);
    age = age_1;
    height = height_1;
}

//Copy Constructor
TournamentMember::TournamentMember(const TournamentMember& a){
    cout << "Copy constructor" << endl;
    strcpy(firstName, a.firstName);
    strcpy(lastName, a.lastName);
    strcpy(dateOfBirth, a.dateOfBirth);
    age = a.age;
    height = a.height;
}

//Empty Constructor
TournamentMember::TournamentMember() {
    cout << "Empty constructor" << endl;
    strcpy(firstName, "");
    strcpy(lastName, "");
    strcpy(dateOfBirth, "");
    age = 0, height = 0.0;
}

//Destructor
TournamentMember::~TournamentMember() {
    cout << "Destructor" << endl;
}

//Printing
void TournamentMember::printInformation() {
    cout << "Full Name: " << getfirstName() << " "
        << getlastName() << endl;
    cout << "Date of birth: " << getdateOfBirth() << endl;
    cout << "Age: " << getAge() << endl;
    cout << "Height: " << getHeight() << endl;
    cout<<"Location: "<<getLocation()<<endl;
}

//Set Goals
void Player::setGoals(int goalscored_1) {
    goalscored = goalscored_1;
}

//Constructor with all parameters
Player::Player(char *first_name,char *last_name, char *date_of_birth, 
int age_1, double height_1, int number_1, string position_1, int goalscored_1, 
string foot_1) : TournamentMember(first_name, last_name, date_of_birth, 
age_1, height_1){
    cout << "Constructor with all parameters" << endl;
    number = number_1;
    position = position_1;
    goalscored = goalscored_1;
    foot = foot_1;
}

//Copy constructor
Player::Player(const Player &c):TournamentMember(c) {
    cout<<"Copy constructor"<<endl;
    number = c.number;
    position = c.position;
    goalscored = c.goalscored;
    foot = c.foot;
}

//Empty constructor
Player::Player() : TournamentMember() {
    cout<<"Empty Constructor"<<endl;
    number = 0;
    position = "";
    goalscored = 0;
    foot = "";
}

//Destructor
Player::~Player() {
    cout<<"Destructor"<<endl;
}

//Goal increment
void Player::increment_goals() {
    goalscored++;
}

//Printing
void Player::printing() {
    printInformation();
    cout << "Number: " << getNumber() << endl;
    cout << "Position: " << getPos() << endl;
    cout << "Goalscored: " << getGoals() << endl;
    cout << "Strong Foot: " << getFoot() << endl;
}