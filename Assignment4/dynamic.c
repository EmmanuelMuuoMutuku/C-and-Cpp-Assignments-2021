// CH-230-A
// a4_p6.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
#include <stdlib.h>
void large_2(int arr[], int num);
int main()
{
    int n, *dyn_array;
    
    // Reads number of elements from keyboard
    scanf("%d", &n);
    
    // Allocating memory for num elements
    dyn_array = (int*) malloc(sizeof(int) * n);

    //Checks if memory is allocated
    if (dyn_array == NULL) {
        exit (1);
    }

    // Storing numbers entered by the user
    for (int i = 0; i < n; i++) {
        printf("Enter Number %d: ", i + 1);
        scanf("%d", &dyn_array[i]);
    }

    large_2(dyn_array, n);
    // freeing the memory that was allocated
    free(dyn_array);

    return 0;
}


void large_2(int arr[], int num){
    int large1, large2; 
// Check for largest value
    for (int i = 1; i < num; i++) {

        //if loop checks if element is larger than largest
        if (arr[i] > large1) {

            //assigns value of largest to second largest
            large2 = large1;

            //assigns element to the largest
            large1 = arr[i];
        }

        // Checks if element is bigger than second largest and
        // if its smaller than largest element
        else if(arr[i] > large2 && arr[i] < large1) {
            large2 = arr[i];
        } 
    }
    
    printf("Largest number = %d\n", large1);
    printf("Second largest number = %d\n", large2);
}