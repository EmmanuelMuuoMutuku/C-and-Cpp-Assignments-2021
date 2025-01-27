// CH-230-A
// a12_p4.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>
#include "fraction.h"

using namespace std;

int main(int argc, char**argv)
{
	Fraction a;
	Fraction b;
    cin >> a;
    cin >> b;
    cout << "Multiplication= " << a * b << endl;
    cout << "Division= " << a / b << endl;
    return 0;
}