// CH-230-A 
// a1_p4.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>

int main() {
    int x = 17, y= 4;
    int sum, product, difference, modulo;
    float division;

    sum = x + y;
    product= x * y;
    difference= x - y;
    division= (float) x / y;
    modulo = x % y;

    printf("x=%d\n", x);
    printf("y=%d\n", y);
    printf("sum=%d\n", sum);
    printf("product=%d\n", product);
    printf("difference=%d\n", difference);
    printf("division=%f\n", division);
    printf("remainder of division=%d\n", modulo);
    return 0;
}