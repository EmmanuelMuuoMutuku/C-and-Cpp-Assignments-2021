// CH-230-A
// a11_p4.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>
#include "Creature.h"
using namespace std;

int main() {
    string line;

    // Get first line of input
    getline(cin, line); 

    // Infinite loop until "quit"
    while (line != "quit") {

        // Check if line is "Wizard", Elephantt", or "Ogre"
        if (line == "Wizard") {
            cout << "\nCreating a Wizard.\n";
            Wizard *w = new Wizard;
            (*w).run();
            (*w).hover();
            delete w;

        } else if (line == "Elephant") {
            cout << "\nCreating an Elephant.\n";
            Elephant *h = new Elephant;
            (*h).run();
            (*h).bodyFatLost();
            delete h;

        } else if (line == "Ogre") {
            cout << "\nCreating an Ogre.\n";
            Ogre *o = new Ogre;
            (*o).run();
            (*o).scaryLevel();
            delete o;
        }
        // Get next input
        getline(cin, line); 
    }

    return 0;
}