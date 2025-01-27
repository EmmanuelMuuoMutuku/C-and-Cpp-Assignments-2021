// CH-230-A
// a12_p5.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>
#include "fraction.h"

using namespace std;

int main(int argc, char**argv)
{
	Fraction a; 
	Fraction b; 
	Fraction c; 
	Fraction subtract;
	Fraction addition;
    cin >> a;
    cin >> b;
	c = b;
    cout << c;
	if(b > a) {
        cout<<"Fraction b is greater than Fraction a "<<endl;
    }
    else if(a > b)
	{
		cout<<"Fraction a is greater than Fraction b"<<endl;
	}
	else
	{
		cout<<"Both fractions are equal"<<endl;
	}
	
	subtract = (a - b);
    addition = (a + b);

    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    cout << "Add: " << addition << endl;
    cout << "Subtraction: " << subtract << endl;
    return 0;
}