// CH-230-A
// a5_p9.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
#include <stdlib.h>
void r_matrix(int ***arr, int x, int y, int z);
void p_matrix(int ***arr, int x, int y, int z);

int main() {
    int ***matrix, rows, cols, down, i, j;

    //input integers representing rows, columns and depth
    scanf("%d", &rows);
    scanf("%d", &cols);
    scanf("%d", &down);

    //dynamically allocate matrix
    matrix = (int ***)malloc(sizeof(int**) * rows);
    if (matrix == NULL) {
        exit(1);
    }

    for (i = 0; i < rows; i++) {
        matrix[i] = (int **)malloc(sizeof(int*) * cols);
        if (matrix[i] == NULL) {
            exit(1);
        }

        for (j = 0; j < cols; j++) {
            matrix[i][j] = (int *)malloc(sizeof(int) * down);
            if (matrix[i][j] == NULL) {
                exit(1);
            }
        }
    }

    //Funtion call to read components of the 3D array
    r_matrix(matrix, rows, cols, down);

    //Function call to print components of the 3D array
    p_matrix(matrix, rows, cols, down);

    // Free memory allocated 
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            free(matrix[i][j]);
        }
        free(matrix[i]);
    }

    free(matrix);

    return 0;
}

// Function to read components of the 3D array
void r_matrix(int ***arr, int x, int y, int z) {
    int i, j, k;
    for (i = 0; i < x; i++)
        for (j = 0; j < y; j++)
            for (k = 0; k < z; k++)
                scanf("%d", &arr[i][j][k]);
}

// Function to print components of the 3D array
void p_matrix(int ***arr, int x, int y, int z) {
    int i, j, k;
    for (k = 0; k < z; k++) {
        printf("Section %d:\n", k + 1);
        for (i = 0; i < x; i++) {
            for (j = 0; j < y; j++) {
                printf("%d ", arr[i][j][k]);
            }
            printf("\n");
        }
    }
}