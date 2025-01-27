// CH-230-A
// a10_p3.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>
#include "City.h"

using namespace std;

//Setter methods for all data members of City class
void City::setName(string newName) {
    name = newName;
}

void City::setPopulation(int newPopulation) {
    population = newPopulation;
}

void City::setMayor(string newMayor) {
    mayor = newMayor;
}

void City::setArea(double newArea) {
    area = newArea;
}

//Getter methods for all data members of City class
string City::getName() {
    return name;
}

int City::getPopulation() {
    return population;
}

string City::getMayor() {
    return mayor;
}

double City::getArea() {
    return area;
}

//Print through getter methods
void City::print() {
    cout << "City: " << name << "\nPopulation: "
    << population << " inhabitants\nMayor: "
    << mayor << "\nArea: "
    << area << " square kilometers" << endl;
}
