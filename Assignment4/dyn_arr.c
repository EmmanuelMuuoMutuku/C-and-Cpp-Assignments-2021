// CH-230-A
// a4_p9.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
#include <stdlib.h>
int prodminmax(int arr[], int n);
int main() {
    int n;
    int *arr;

    // Reads integer from Keyboard
    scanf("%d", &n);


    //Dynamic memory allocation
    arr = (int *) malloc(sizeof(int) * n);

    if (arr == NULL) {
        exit(1);
    }

    //For loop to enter values of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }


    //Function call
    printf("%d\n", prodminmax(arr, n));
    
    // Freeing memory that was allocated
    free(arr);
    return 0;
}

int prodminmax(int arr[], int n) {
    int i, product;

    //Assigns variable to the first element of the array
    int large = arr[0], small = arr[0];

    for ( i = 0; i < n; i++) {

        // Condition to find the largest number in the array
        if (arr[i] > large) {
            large = arr[i];
        }

        // Condition to find the smallest number in the array
        if(arr[i] < small){
            small = arr[i];
        }
    }
    
    //Calculating product of the largest and smallest number in array
    product = large * small;
    return (product);
}