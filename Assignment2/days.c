// CH-230-A
// a2_p10.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>

int main() {
    int n;
    int i = 1;

    //Read from keyboard
    scanf("%d", &n);

    // Condition to repeat if value read is negative or 0
    if (n < 1) {
        main();
    }

    else {
        //Condition for all values equal to or less than n to be printed
        while (i <= n) {

            // condition for the first day without 's'
            if(i == 1) {
                printf("%d day = %d hours\n",i, i *24);
            }

            // add s in all other values that are more than one
            else {
                printf("%d days = %d hours\n",i, i *24);
            }
            i++;
        }
    }
    return 0;
}