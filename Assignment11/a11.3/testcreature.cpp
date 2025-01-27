// CH-230-A
// a11_p3.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>
#include "Creature.h"
using namespace std;

int main() {
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Elephant.\n";
    Elephant h;
    h.run();
    h.bodyFatLost();

    cout << "\nCreating an Ogre.\n";
    Ogre o;
    o.run();
    o.scaryLevel();

    return 0;
}