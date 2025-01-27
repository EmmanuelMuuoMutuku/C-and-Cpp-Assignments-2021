// CH-230-A
// a10_p2.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;

    string name, country;
    int hunger;
    double length;

    cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);

    cout << "Length: ";
    cin >> length;
    c.setLength(length);

    cout << "Country: ";
    cin >> country;
    c.setCountry(country);

    cout << "You have created:" << endl;
	c.print();
        return 0;
}