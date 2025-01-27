// CH-230-A
// a9_p2.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>

int main (int argc, char **argv) {
    int n, i;
    double x;
    std::string s;

    //Reading int, double and string from keyboard
    std::cin >> n >> x >> s;

    //Loop to output string and double n times
    for ( i = 0; i < n; i++) {
        std::cout << s << ":" << x << std::endl;
    }
    return 0;
}