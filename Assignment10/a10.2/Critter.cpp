// CH-230-A
// a10_p2.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

//Setter for length data member
void Critter::setLength(double newlength) {
    length = newlength;
}

//Setter for country data member
void Critter:: setCountry(std::string& newcountry) {
    country = newcountry;
}
void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << 
    hunger << "." << " My length is " << length << "." <<
    " My country is " << country << "." << endl;
}

int Critter::getHunger() {
	return hunger;
}

//Getter method for length data member
double Critter::getLength() {
    return length;
}

//Getter method of country data member
std::string Critter::getCountry() {
    return country;
}