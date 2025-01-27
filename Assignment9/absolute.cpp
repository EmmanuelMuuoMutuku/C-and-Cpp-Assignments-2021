// CH-230-A
// a9_p3.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>

//Function prototype
//Takes a float and returns absolute values of
// a float parameter
float abs(float absolute);

int main(int arg, char **argv) {
    float x;

    //Read float from keyboard
    std::cin >> x;

    //Outputing absolute value through
    //the function call
    std::cout << abs(x) << std::endl;
    return 0;
}

float abs(float absolute) {
    if(absolute >= 0) {
        return absolute;
    }
    else{
        // returns absolute *(-1);
        return (absolute * (-1));
    }
}