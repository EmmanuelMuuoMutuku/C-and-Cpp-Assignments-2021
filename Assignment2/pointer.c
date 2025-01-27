// CH-230-A 
// a2_p5.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("a=%d\n", a);

    //Declaration and initialization of a pointer
    int *ptr_a;
    ptr_a = &a;
    printf("Address of a:%p\n", ptr_a);

    //Modification of the integer a 
    *ptr_a = *ptr_a + 5;
    printf("Modified value of a=%d\n", *ptr_a);
    printf("Address of a:%p\n", ptr_a);
    return 0;
}