// CH-230-A
// a6_p6.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
#include <math.h>

int main () {

    unsigned char c, bitmask;
    int i, d;
    d = 0;

    // Reads unsigned char from stdin
    scanf("%c", &c);

    // assigns the value of c to bitmask
    bitmask = c;

    // Loop to iterate across the 8 bits 
    // contained in char
    for (i = 0; i < 8; i++) {

        // condition to get original bits 
        // "& 1" checks if bit 1 is set
        if(bitmask & 1) {

            // in the case that bit 1 is 1
            // adds the power of 2 to i to d
            d += pow(2, i);
        }

        // Shifts right by 1 bit to check if the next bit is
        // 1 or 0 based on the if condition above 
        bitmask = bitmask >> 1;
    }

    // Reassigning of c to bitmask
    bitmask = c;

    // prints the decimal representation of
    // the character entered
    printf("The decimal representation is: %d\n", d);


    printf("The binary representation is: ");
    //Loop to iterate across the 8 bits
    // contained in char
    for ( i = 7; i >= 0; i--) {

        // Shifts right to the corresponding bit 
        // to print the right bit value
        bitmask = bitmask >> i;

        //check if bit 1 is set correctly and print the correct
        //value
            if ((bitmask & 1) == 1) {
                printf("1");
            }
            else {
                printf("0");
            }
            
            //Reassign c to bitmask again
            bitmask = c;
    }
    printf("\n");

    return 0;
}

