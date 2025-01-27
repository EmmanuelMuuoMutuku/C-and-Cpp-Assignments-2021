// CH-230-A
// a8_p4.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
#include <math.h>
#include "stack.h"

int main() {
    unsigned int num, temp;
    int i, remainder;
    struct stack Stack;

    // count holds the number of elements in the stack
    Stack.count = 0; 

    //Enter number to be converted to binary
    scanf("%u", &num);

    temp = num;

    for (i = 0; pow(2, i) < num; i++)
    {
        // Calculating remainder with modulo
        remainder = temp % 2;

        //Pushing the remainder onto stack
        push(&Stack, remainder);
        temp /= 2;
    }

    printf("The binary representation of %u is ", num);
    for (i = 0; pow(2, i) < num; i++)
    {
        //pop elements of the stack to output it on the
        //standard output
        pop(&Stack);
    }
    printf(".\n");
    return 0;
}

