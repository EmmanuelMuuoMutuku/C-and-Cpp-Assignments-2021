// CH-230-A 
// a1_p1.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de 

#include <stdio.h>
int main () {
    double result; /* The result of our calculation */
    result = (3.0 + 1.0) / 5.0;
    printf ("The value of 4/5 is %lf\n", result);
    return 0;
}
/*The reason is the type of variable used i.e integers 3,1 and 5. 
Whenever an integer is used for storing the output, 
the result will be stored as an integer and not as a decimal value. 
When two integers are divided, 
the result is truncated hence the remainder doesn't matter. 
Hence the result is 0.000 */
