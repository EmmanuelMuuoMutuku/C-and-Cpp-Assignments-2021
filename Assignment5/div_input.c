// CH-230-A
// a5_p4.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
#include <stdlib.h>
void divby5(float *arr, int size);
int main() {
    int n, i;
    float* ptr;

    //Read integer from keyboard
    printf("Enter number of elements:\n");
    scanf("%d", &n);

    //Dynamically allocate memory using malloc()
    ptr = (float*) malloc(sizeof(float) * n);

    // Check if memory has been successfully allocated
    if (ptr == NULL) {
        printf("Memory not allocated\n");
        exit (1);
    }
    printf("Enter elements of array:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &ptr[i]); //Enter elements of array:
    }
    printf("Before:\n");
    for (i = 0; i < n; i++) {
        printf("%.3f ", ptr[i]);
    }

    divby5(ptr, i); // Call function
    
    free (ptr); // Freeing the dynamically allocated memory
    return 0;

}

void divby5(float *arr, int size) {
    int i; // Declaration 
    printf("\nAfter:\n");
    for ( i = 0; i < size ; i++) {

        //Divide the elements of the array by 5
        arr[i] /= 5; 
        printf("%.3f ", *(arr + i));
    } 
    printf("\n");  
}