// CH-230-A 
// a2_p8.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de


#include <stdio.h>

int main() {
    int x;
    
    //Read from keyboard
    scanf("%d", &x);

    //If condition for divisibility test of 2 and 7
    if((x % 2) == 0 && (x % 7) == 0)  {
        printf("The number is divisible by 2 and 7\n");
    }
    else {
        printf("The number is NOT divisible by 2 and 7\n");
    }
    return 0;
}