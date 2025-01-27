// CH-230-A
// a6_p1.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>

// SWAP is a macro and it has 3 parameters i.e two variables and a data type
// The data type (in the third parameter) is the temporary in this case
#define SWAP(x, y, dataType) {dataType temp; temp = x, x = y, y = temp;}

int main() {
    int a, b;
    double i, j;

    //Reading integers
    scanf("%d", &a);
    scanf("%d", &b);

    //Reading doubles
    scanf("%lf", &i);
    scanf("%lf", &j);

    //call macro with integers first
    SWAP(a, b, int);

    //call macro with double after
    SWAP(i, j, double);

    //print function for the swapped values
    printf("After swapping:\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%.6lf\n", i);
    printf("%.6lf\n", j);
    return 0;
}





