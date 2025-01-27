// CH-230-A
// a9_p6.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>
#include <cmath>

int arrSize = 6;

// Function prototype
// determines and returns the first positive
// and even from array
int myfirst(int *arrInt);

//Function prototype
//determines and returns the first negative
//which doesnt have a fractional part
double myfirst(double *arrDouble);

//Function prototype
//determines and returns the first element 
//which is a consonant
char myfirst(char *arrChar);

int main(int argc, char **argv) {
    int num[] = {-2, -1, 0, 1, 2};
    double n[] = {-1.5, 1.0, 1.5, -2.0, 2.5};
    char c[] = {'e', 'T', 'm', 'o', 'u'};

    //Function call for int
    std::cout << myfirst(num) << std::endl;

    //Function call for double
    std::cout << myfirst(n) << std::endl;

    //Function call for chars
    std::cout << myfirst(c) << std::endl;

    return 0;
}

int myfirst(int *arrInt) {
    for (int i = 0; i < arrSize; i++) {

        //condition to check for positive & even number
        if ((arrInt[i] > 0) && (arrInt[i] % 2 == 0)) {
            return arrInt[i];
        }
    }
    return -1;
}

double myfirst(double *arrDouble) {
    for (int i = 0; i < arrSize; i++) {

        //condition to check for negative & non-fractional
        if ((arrDouble[i] < 0) &&(arrDouble[i] == floor(arrDouble[i]))) {
            return arrDouble[i];
        }
    }
    return -1.1;
}

char myfirst(char *arrChar) {
    char c;
    for (int i = 0; i < arrSize; i++) {
        c = tolower(arrChar[i]);

        //check if char is a letter
        // if(isalpha(c)) {

            //check if char is a consonant
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
                return arrChar[i];
            }
                // }
    }
    return '0';
}