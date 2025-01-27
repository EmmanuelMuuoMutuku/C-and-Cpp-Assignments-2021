// CH-230-A
// a3_p1.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
    int main() {
        float x;
        int n, i;

        //Read float and integer from keyboard
        scanf("%f", &x);
        scanf("%d", &n);
        
        //While loop to ensure integer entered is greater than 0
        while (n < 1) {
            printf("Input is invalid, reenter value\n");
            scanf("%d", &n);
        }

        //for loop to print float, integer number of times
            for (i = 0; i < n; i++) {
                printf("%f\n", x);
            }
        return 0;
    }