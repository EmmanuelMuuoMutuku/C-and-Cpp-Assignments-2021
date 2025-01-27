// CH-230-A
// a10_p8.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <string>

class Complex {
    private:
    //Complex numbers have a real and an imaginary part
        int real;
        int imaginary;

    public:
        //Default constructor initializing properties by 0
        //With no parameters supplied
        Complex();

        //Constructor setting properties with specific values
        //with all parameters supplied
        Complex(int real, int complex);

        //A copy of the constructor
        Complex(Complex &number);

        //Empty destructor
        ~Complex();

        //Setter methods
        void setReal(int newReal);
        void setImaginary(int newImaginary);

        //Getter methods
        int getReal();
        int getImaginary();

        //Service method
        Complex conjugate();
        Complex add(Complex &number);
        Complex subtract(Complex &number);
        Complex multiply(Complex &number);

        //Print
        void print();
};