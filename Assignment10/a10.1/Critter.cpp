// CH-230-A
// a10_p1.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>
#include "Critter.h"

// Commented out using namespace std;
//  using namespace std;

//Removed Critter:: prefix from Critter
//:: getHunger

//Declared and defined this function in the 
// Critter.h file

// void Critter::setName(string& newname) {
// 	name = newname;
// }

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

//Added std here
void Critter::print() {
    std::cout << "I am " << name << ". My hunger level is " << 
    hunger << "." << std::endl;
}

int Critter::getHunger() {
	return hunger;
}