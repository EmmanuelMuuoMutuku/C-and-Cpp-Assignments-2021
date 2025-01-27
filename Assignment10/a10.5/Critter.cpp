// CH-230-A
// a10_p5.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>
#include "Crittter.h"

using namespace std;

//Constructor without any parameters
Critter::Critter() {
    cout << "Constructor without any parameters supplied\n";
    name = "default_critter";
    hunger = 0;
    boredom = 0;
    height = 5;
}

//Constructor with name as the only supplied parameter
Critter::Critter(string Name) {
    cout << "Constructor with name as the only supplied parameter\n";
    name = Name;
    hunger = 0;
    boredom = 0;
    height = 5;
}

//Constructor with name,hunger,boredom and height supplied as parameters
Critter::Critter(string Name, int Hunger, int Bored, double Height) {
    cout << "Constructor with all supplied parameters\n";
        name = Name;
        hunger = convertCastDivide(Hunger);
        boredom = Bored;
        height = Height;
}

// Setter methods for each data member
void Critter::setName(std::string& newName) {
    name = newName;
}

void Critter::setHunger(int newHunger) {
    hunger = convertCastDivide(newHunger);
}

void Critter::setBoredom(int newBoredom) {
    boredom = newBoredom;
}

void Critter::setHeight(double newHeight) {
    height = newHeight;
}

// Getter methods for each data member
string Critter::getName() {
    return name;
}

int Critter::getHunger() {
    return convertCastMultiply();
}

int Critter::getBoredom() {
    return boredom;
}

double Critter::getHeight() {
    return height;
}

//Methods to hide information
//converts int to double and returns double
double Critter::convertCastDivide(int Hunger) {
    return (((double)Hunger) / 10);
}

//converts double back to int and returns int
int Critter::convertCastMultiply() {
    return ((int)(hunger * 10));
}

//Print through getter methods
void Critter::print() {
    cout << "Name: " << name << "\nHunger: " << hunger 
    << "\nBoredom: " << boredom << "\nHeight: " 
    << height << endl;
}