// CH-230-A
// a6_p2.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>

// Macro leastbit checks if the least significant beat is 1 or 0
// & bitwise operator performs the function of checking that
#define leastbit(a) { \
    if((a & 1) == 1) \
        printf("1\n"); \
    else \
    printf("0\n");\
}

int main() {
    unsigned char c;

    // Reads unisigned char from keyboard
    scanf("%c", &c);

    printf("The decimal representation is: %d\n", c);
    printf("The least significant bit is: ");

    //calls macro 
    leastbit(c);
    return 0;
}
