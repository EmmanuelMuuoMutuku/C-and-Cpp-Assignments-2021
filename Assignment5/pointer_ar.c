// CH-230-A
// a5_p6.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
#include <stdlib.h>
void count_negative(int count, float *ptr);
int main() {
    int n, i;
    int count = 0;
    float *ptr;

    //Read integer from keyboard
    scanf("%d", &n);

    //Dynamically allocate memory using malloc()
    ptr = (float*) malloc(sizeof(float) * n);

    // Check if memory has been successfully allocated
    if (ptr == NULL) {
        printf("Memory not allocated\n");
        exit (1);
    }
    
    for (i = 0; i < n; i++) {
        scanf("%f", &ptr[i]); //Enter elements of array:
    }
    
    //Function call
    count_negative(count, ptr);

    free(ptr);
    return 0;
}

void count_negative(int count, float *ptr) {

    //Condition to check if the element is negative
        if((*(ptr + count )) < 0) {
            printf("Before the first negative value: %d elements\n", count);
        }

        // If there's no negative increase count
        else {
        count++;

        //Recursive function call to ensure there's continuity since we
        //can't use integer counter variables like for loops 
        count_negative(count, ptr);
        }
}