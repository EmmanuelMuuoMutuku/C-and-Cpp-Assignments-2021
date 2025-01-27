// CH-230-A
// a13_p2.h
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>

using namespace std;

class Complex {
    private:
        double real;
        double imaginary;
    public:
        Complex(double , double);
        Complex(const Complex&);
        Complex();
        ~Complex();

        //Addition
        Complex add(Complex);

        //Substraction
        Complex sub(Complex);

        //Multiplication
        Complex mult(Complex);

        //Conjugate
        Complex conjugate();

        Complex operator+ (Complex);
        Complex operator- (Complex);
        Complex operator* (Complex);
        Complex& operator= (const Complex &);
        friend ostream& operator<<(ostream&, const Complex&);
        friend istream& operator>>(istream&, Complex&);

        //Setters
        void setReal(double);
        void setImaginary(double);

        //Getters
        double getReal();
        double getImaginary();

        //Print
        void print();
};