// CH-230-A
// a13_p2.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include"Complex.h"

using namespace std;

// constructor with all parameters
Complex::Complex(double r, double i) {
    real = r;
    imaginary = i;
}

//Copy constructor
Complex::Complex(const Complex& value) {
    real = value.real;
    imaginary = value.imaginary;
}

//Empty constructor
Complex::Complex() {
    real = 0;
    imaginary = 0;
}

//Destructor
Complex::~Complex() {
    cout<<"Call Destructor"<<endl;
}

//Addition
Complex Complex::add(Complex value) {
    Complex temp;
    temp.real = real + value.real;
    temp.imaginary = imaginary + value.imaginary;
    return temp;
}

//Substraction
Complex Complex::sub(Complex value) {
    Complex temp;
    temp.real = real - value.real;
    temp.imaginary = imaginary - value.imaginary;
    return temp;
}

//Multiplication
Complex Complex::mult(Complex value) {
    Complex temp;
    temp.real = real*value.real - imaginary*value.imaginary;
    temp.imaginary = imaginary*value.real + real*value.imaginary;
    return temp;
}
//Conjugate
Complex Complex::conjugate() {
    Complex temp;
    temp.real = getReal();
    temp.imaginary = -imaginary;
    return temp;
}

Complex Complex::operator+(Complex obj) {
    Complex temp;
    temp.real = real + obj.real;
    temp.imaginary = imaginary + obj.imaginary;
    return temp;
}

Complex Complex::operator-(Complex obj) {
    Complex temp;
    temp.real = real-obj.real;
    temp.imaginary = imaginary - obj.imaginary;
    return temp;
}

Complex Complex::operator*(Complex obj) {
    Complex temp;
    temp.real = real*obj.real - imaginary*obj.imaginary;
    temp.imaginary = imaginary*obj.real + real*obj.imaginary;
    return temp;
}

Complex &Complex::operator=(const Complex &obj) {
    real = obj.real;
    imaginary = obj.imaginary;
    return *this;
}

//Setters
void Complex::setReal(double real_1) {
    real = real_1;
}

void Complex::setImaginary(double imaginary_1) {
    imaginary = imaginary_1;
}

//Getters
double Complex::getImaginary() {
    return imaginary;
}

double Complex::getReal() {
    return real;
}

//Print function
void Complex::print()
{
    cout<<noshowpos<<real;
    cout<<showpos<<imaginary<<"i"<<endl;
}

