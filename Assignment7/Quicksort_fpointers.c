// CH-230-A
// a7_p5.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
#include <stdlib.h>

//Function prototype
//Sorts elements in ascending order
//returns integers
int ascend(const void *x, const void *y);

//Function prototype
//Sorts elements in descending order
//returns integers
int descend(const void *x, const void *y);

//Function prototype
//Prints both ascending and descending order
//returns nothing
void print(int *arr, int size);

int main () {
    int n, i, *array;
    char c;

    scanf("%d", &n);

    //memory allocation
    array = (int *)malloc(sizeof(int) * n);
    if(array == NULL) {
        exit(1);
    }

    //loop to enter elements in array
    for (i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    getchar();

    //infinite loop 
    while (1) {
        //enter char
        scanf("%c", &c);
        getchar();

    //arrange in ascending order
        if (c == 'a'){
            qsort(array, n, sizeof(int), ascend);
            print(array, n);
        }

        //arrange in descending order
        else if(c == 'd') {
            qsort(array, n, sizeof(int), descend);
            print(array, n);
        }

        // free memory and quit
        else if(c == 'e') {
            free(array);
            return 0;
        }
    }
    free(array);
    return 0;
}

int ascend(const void *x, const void *y) {
    
    //void pointers are casted to int pointers 
    // deference takes place to find difference
    // first minus the second
    return (*(int *)x - *(int *)y);
}

int descend(const void *x, const void *y) {
    
    //void pointers are casted to int pointers 
    // deference takes place to find difference
    // second minus first
    return (*(int *)y - *(int *)x);
}

void print(int *array, int size){
    int i;
    for (i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}