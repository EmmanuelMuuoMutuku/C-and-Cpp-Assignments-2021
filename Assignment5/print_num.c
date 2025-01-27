// CH-230-A
// a5_p10.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
void counting_down(int n);

int main() {

    // Use of unsigned to ensure its positive 
    unsigned int n; 

    //Read positive integer from keyboard
    scanf("%u", &n);

    //Call function for counting down from n to 1
    counting_down(n);

    printf("\n");
    return 0;
}

void counting_down(int n) {

    //Condition to print 1 on its own
    if(n == 1) {
        printf("1.");
    }

    //Condition to print all values from n to n > 1
    else {
        printf("%d,", n);
        counting_down(n - 1); // Call recursive function
        }
    }
