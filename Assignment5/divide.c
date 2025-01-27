// CH-230-A
// a5_p2.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
void divby5(float arr[], int size);
int main() {
    float arr[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    int i;
    
    printf("Before:\n");
    for ( i = 0; i < 6 ; i++) {
        printf("%.3f ", arr[i]);
    }

    // Call function
    divby5(arr, i); 

    // Backslash n before after is to print new line after the
    // before components
    printf("\nAfter:\n");
    for ( i = 0; i < 6 ; i++) {
        printf("%.3f ", arr[i]);
    } 
    printf("\n"); 

    return 0;

}

void divby5(float arr[], int size) {
    int i; 
    for (i = 0; i < 6 ; i++) {
        //Divide the elements of the array by 5
        arr[i] /= 5; 
    } 
}