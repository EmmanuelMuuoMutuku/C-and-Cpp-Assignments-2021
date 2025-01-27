// CH-230-A 
// a2_p2.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>

int main() {
    char ch; // variable declaration

    //Read from keyboard
    scanf("%c", &ch);

    // Printing character, decimal, octal, hexadecimal
    printf("character=%c\n",ch);
    printf("decimal=%d\n", ch);
    printf("octal=%o\n",ch);
    printf("hexadecimal=%x\n",ch);

    return 0;
}