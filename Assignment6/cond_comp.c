// CH-230-A
// a6_p4.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
#include <stdlib.h>

// Definition of the macro INTERMEDIATE
#define INTERMEDIATE

// Function that calculates the scalar product
void scalar_p(int n, int x[], int y[]);


int main() {
    int n, i;
    int *x, *y;

    // Reads number of integers that should be contained 
    // in each vector
    scanf("%d", &n);

    //Memory allocation for the first vector
    x = (int *) malloc(sizeof(int) * n);
        if(x == NULL) {
            exit(1);
        }

    //Memory allocation of the second vector 
    y = (int *) malloc(sizeof(int) * n);
        if(y == NULL) {
            exit(1);
        }

    // Loop for reading vector components of x
    for ( i = 0; i < n; i++) {
        scanf("%d", &x[i]);
    }

    //Loop for reading vector components of y
    for ( i = 0; i < n; i++) {
        scanf("%d", &y[i]);
    }

    // Function call 
    scalar_p(n, x, y);

    // Memory deallocation of both vectors
    free(x);
    free(y);

    return 0;
}

void scalar_p(int n, int x[], int y[]) {
    int i, scalar_prod = 0, prodOfIndComponents = 0;

    // conditional compilation for showing intermediate results
    #ifdef INTERMEDIATE
    printf("The intermediate product values are:\n");
    #endif

    for ( i = 0; i < n; i++) {
        prodOfIndComponents = (x[i] * y[i]);
        scalar_prod += prodOfIndComponents;

    // prints the product of the individual vector components
    // if INTERMEDIATE is defined as a macro
        #ifdef INTERMEDIATE
        printf("%d\n", prodOfIndComponents);
        #endif
    }

    printf("The scalar product is: %d\n", scalar_prod);
}