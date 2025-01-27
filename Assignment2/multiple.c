// CH-230-A 
// a2_p6.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>

int main() {
    double x, y;

    //Read from keyboard
    scanf("%lf", &x);
    scanf("%lf", &y);

    // Declaration and initialization of pointer
    double *ptr_one, *ptr_two, *ptr_three;
    ptr_one= &x;
    ptr_two= &x;
    ptr_three= &y;
    

    //Print function of addresses
    printf("Address of x: %p\n", ptr_one);
    printf("Address of x: %p\n", ptr_two); 
    printf("Address of y: %p\n", ptr_three);
    return 0;
}
