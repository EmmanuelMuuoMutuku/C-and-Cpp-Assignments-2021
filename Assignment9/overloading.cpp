// CH-230-A
// a9_p4.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>

//Function prototype
//Returns the difference between the
//second and the first int
int mycount(int x, int y);

//Function prototype
//Returns the number of times the char
//occurs in an entered string
int mycount(char c, std::string s);

int main(int argc, char **argv) {
    int first, second, result;
    char c;

    //Reads first and second integer from keyboard
    std::cin >> first >> second;
    
    //Function call for the difference of
    //two integers
    result = mycount(first, second);

    //Output
    std::cout << result << std::endl;

    //Read character and string from keyboard
    std::cin >> c;

    // Function call for the char in string
    result = mycount(c, "this is a string");

    //Output
    std::cout << result << std::endl;

    return 0;
}

int mycount(int x, int y) {
    return (y - x);
}

int mycount(char c,std::string s) {
    int i, count = 0;

    for ( i = 0; i < (int) s.length(); i++) {
        if (s[i] == c) {
            count++;
        }
    }
    return count;
}