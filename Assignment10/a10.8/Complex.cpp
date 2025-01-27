// CH-230-A
// a10_p8.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>
#include "Complex.h"

using namespace std;

//Constructor complex with no parameters
// all properties set to 0
Complex::Complex() {
    real = 0;
    imaginary = 0;
}

//Constructor complex with all parameters
Complex::Complex(int Real, int Imaginary) {
    real = Real;
    imaginary = Imaginary;
}

//Copy of constructor complex
Complex::Complex(Complex &number) : real(number.real), 
        imaginary(number.imaginary) {
}

//Empty Destructor
Complex::~Complex() {
}

//Setter methods
void Complex::setReal(int newReal) {
    real = newReal;
}

void Complex::setImaginary(int newImaginary) {
    imaginary = newImaginary;
}

// Getter methods 
int Complex::getReal() {
    return real;
}

int Complex::getImaginary() {
    return imaginary;
}

//Methods to perform arithmetic operations 
//Complex Conjugate
Complex Complex::conjugate() {
    Complex temp;

    //Real part is unchanged
    temp.setReal(getReal());

    //Imaginary part is multiplied by (-1)
    temp.setImaginary((-1) * getImaginary());
    return temp;
}

//Addition of Complex Numbers
Complex Complex::add(Complex &number) {
    Complex temp;
    temp.setReal(getReal() + number.getReal());
    temp.setImaginary(getImaginary() + number.getImaginary());
    return temp;
}

//Subtraction of Complex Numbers
Complex Complex::subtract(Complex &number) {
    Complex temp;
    temp.setReal(getReal() - number.getReal());
    temp.setImaginary(getImaginary() - number.getImaginary());
    return temp;
}

//Multiplication of complex Numbers
Complex Complex::multiply(Complex &number) {
    Complex temp;
    temp.setReal(getReal() * number.getReal() - getImaginary() * number.getImaginary());
    temp.setImaginary(getReal() * number.getImaginary() + getImaginary() * number.getReal());
    return temp;
}

void Complex::print() {
    //Condition to check if imaginary part is > 0
    if (getImaginary() >= 0) {
        cout << real << " + " << imaginary << "i" << endl;
    }
    else {
        cout << real << " - " << imaginary << "i" << endl;
    }
}
