// CH-230-A
// a10_p5.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>
#include <cstdlib>
#include "Crittter.h"

using namespace std;
int main(int argc, char **argv) {

    //First instance: No parameters supplied
    Critter a;
    //set hunger level to 2 using setHunger method
    a.setHunger(2);
    a.print();

    //Second instance: name is the only parameter supplied
    Critter b("Manu");
    //set hunger level to 2 using setHunger method
    b.setHunger(2);
    b.print();

    //Third instance: all parameters supplied except height
    Critter c("Patra", 2, 5);
    c.print();

    //Fourth instance: all parameters supplied with no exceptions
    Critter d("Tenge", 2, 15, 176.0);
    d.print();

    return 0;
}