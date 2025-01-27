// CH-230-A
// a10_p3.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>
#include <cstdlib>
#include "City.h"

using namespace std;

int main(int argc, char** argv) {
    City Bremen, Paris, London;

	// Set value for each data member of the three cities
	Bremen.setName("Bremen");
	Bremen.setPopulation(566331);
	Bremen.setMayor("Andreas Bovenschulte");
	Bremen.setArea(326.7);

	Paris.setName("Paris");
	Paris.setPopulation(11078546);
	Paris.setMayor("Anne Hidalgo");
	Paris.setArea(105.4);

	London.setName("London");
	London.setPopulation(9425622);
	London.setMayor("Sadiq Khan");
	London.setArea(1572);

	// Output the data members
	Bremen.print();
	Paris.print();
	London.print();

	return 0;

}