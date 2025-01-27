// CH-230-A
// a13_p2.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include<iostream>
#include"Complex.h"

int main() {
    Complex a, b;
    Complex add;
    Complex subtract;
    Complex multiply;
    Complex conjugate;
    double temp;

    cout<<"Real value for a: ";
    cin>>temp;
    a.setReal(temp);

    cout<<"Imaginary value for a: ";
    cin>>temp;
    a.setImaginary(temp);

    cout<<"Real value for b: ";
    cin>>temp;
    b.setReal(temp);

    cout<<"Imaginary value for b: ";
    cin>>temp;
    b.setImaginary(temp);

    add = a.add(b);
    subtract = a.sub(b);
    multiply = a.mult(b);
    conjugate = a.conjugate();
    
    cout<<"Addition of a and b= ";
    add.print();

    cout<<"Substraction of b from a= ";
    subtract.print();

    cout<<"Multiplication of a and b= ";
    multiply.print();

    cout<<"Conjugate of a= ";
    conjugate.print();
    return 0;
}