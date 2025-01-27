// CH-230-A
// a5_p8.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
#include <stdlib.h>
void r_matrix(int **mat, int rows, int cols);
void p_matrix(int **mat, int rows, int cols);
void m_matrices(int **mat1, int **mat2, int **mat3, int x, int y, int z);

int main() {
    int i, x, y, z, **matrix1, **matrix2, **matrix3;

    //Read integers for matrix dimension
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    //Dynamic memory allocation for the 1st matrix
    matrix1 = (int **)malloc(sizeof(int*) * x);
    if (matrix1 == NULL)
        exit(1);

    for (i = 0; i < x; i++) {
        matrix1[i] = (int *)malloc(sizeof(int) * y);
        if (matrix1[i] == NULL)
            exit(1);
    }

    //Dynamic memory allocation for the 2nd matrix
    matrix2 = (int **)malloc(sizeof(int*) * y);
    if (matrix2 == NULL) {
        exit(1);
    }

    for (i = 0; i < y; i++) {
        matrix2[i] = (int *)malloc(sizeof(int) * z);
        if (matrix2[i] == NULL) {
            exit(1);
        }    
    }

    //Dynamic memory allocation for 3rd matrix
    matrix3 = (int **)malloc(sizeof(int*) * x);
    if (matrix3 == NULL) {
        exit(1);
    }

    for (i = 0; i < x; i++) {
        matrix3[i] = (int *)malloc(sizeof(int) * z);
        if (matrix3[i] == NULL) {
            exit(1);
        }
    }

    //Function call to read values for 1st matrix
    r_matrix(matrix1, x, y);

    //Function call to read values for 2nd matrix
    r_matrix(matrix2, y, z);

    //Print 1st matrix
    printf("Matrix A:\n");
    p_matrix(matrix1, x, y);

    //Print 2nd matrix
    printf("Matrix B:\n");
    p_matrix(matrix2, y, z);

    //Function call and print result matrix of multiplication 
    m_matrices(matrix1, matrix2, matrix3, x, y, z);
    printf("The multiplication result AXB:\n");
    p_matrix(matrix3, x, z);

    //Free memory allocated for 1st matrix
    for (i = 0; i < x; i++)
        free(matrix1[i]);
    free(matrix1);

    //Free memory allocated for 2nd matrix
    for (i = 0; i < y; i++)
        free(matrix2[i]);
    free(matrix2);

    //Free matrix allocated for 3rd matrix
    for (i = 0; i < x; i++)
        free(matrix3[i]);
    free(matrix3);
    
    return 0;
}

// Function to read values for the matrices
void r_matrix(int **mat, int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++){
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

}

//Function to print values for the matrices
void p_matrix(int **mat, int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

//Function to calculate matrix multiplication
void m_matrices(int **mat1, int **mat2, int **mat3, int x, int y, int z) {
    int i, j, k;
    for (i = 0; i < x; i++) {
        for (j = 0; j < z; j++) {
            mat3[i][j] = 0;
            for (k = 0; k < y; k++){
                mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}