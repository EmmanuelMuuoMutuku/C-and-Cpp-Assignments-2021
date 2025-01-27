// CH-230-A
// a10_p8.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>
#include <cstdlib>
#include "Complex.h"

using namespace std;

int main (int argc, char **argv) {
    int real, imaginary;
    Complex firstNum, secondNum, result;

    cout << "First Number: \n"
        << "Real: ";
    cin >> real;
    cout << "Imaginary: ";
    cin >> imaginary;

    firstNum.setReal(real);
    firstNum.setImaginary(imaginary);

    cout << "Second Number: \n"
        << "Real: ";
    cin >> real;
    cout << "Imaginary: ";
    cin >> imaginary;

    secondNum.setReal(real);
    secondNum.setImaginary(imaginary);

    //Conjugate
    cout << "Conjugate of the first number: ";
    result = firstNum.conjugate();
    result.print();

    //Sum
    cout << "Sum of the two complex numbers: ";
    result = firstNum.add(secondNum);
    result.print();

    //Difference
    cout << "Difference of the two complex numbers: ";
    result = firstNum.subtract(secondNum);
    result.print();

    //Multiplication
    cout << "Multiplication of the two complex numbers: ";
    result = firstNum.multiply(secondNum);
    result.print();

    return 0;
}