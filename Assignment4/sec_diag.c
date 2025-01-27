// CH-230-A
// a4_p8.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>

// Function prototype
void diagonal(int mat[30][30], int n);
void sec_D(int mat[30][30], int n);
int main()
{
    // two dimensional array declaration
    int mat[30][30];
    int n, i, j;

    // Reads from keyboard integer for rows and columns
    scanf("%d", &n);

    // reads the contents of the 2D Matrix
    for (i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
        scanf("%d", &mat[i][j]);
        }
    }

    //function calls
    diagonal(mat,n);
    sec_D(mat, n);

    return 0;
}

void diagonal(int mat[30][30], int n){
    int i, j;

    printf("The entered matrix is:\n");

    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        //Newline after the row
        printf("\n"); 
    }
}
void sec_D(int mat[30][30], int n) {
    int i, j;

    printf("Under the secondary diagonal:\n");

    for ( i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {

            //condition checks if sum of row index & column index is 
            //greater than n-1
            if(i + j> n-1) {
                printf("%d ", mat[i][j]);
            }
        }
        
    }
    printf("\n");
}