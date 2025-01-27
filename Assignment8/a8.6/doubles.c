// CH-230-A
// a8_p6.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de 
#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *fileOne, *fileTwo, *output;
    double a, b;
    char fileOneName[32], fileTwoName[32];

    // Read file Names
    scanf("%s*c", fileOneName);
    scanf("%s", fileTwoName);

    //Open fileOne
    fileOne = fopen(fileOneName, "r");

    //Check if opening was successful
    if (fileOne == NULL) {
        printf("fileOneName cannot be accessed!\n");
        exit(1);
    }

    // If successful read double value inside
    else {
        fscanf(fileOne, "%lf", &a);
    }
    //Close
    fclose(fileOne);

    //Open fileTwo
    fileTwo = fopen(fileOneName, "r");

    // Check if opening was successful
    if (fileTwo == NULL) {
        printf("fileTwo cannot be accessed!\n");
        exit(1);
    }

    //if successful read double value inside
    else {
        fscanf(fileTwo, "%lf", &b);
    }

    //close
    fclose(fileTwo);

    //Printing the result of the different arithmetic
    // operations

    output = fopen("results.txt", "w");
    fprintf(output, "sum:%lf\n", a + b);
    fprintf(output, "difference:%lf\n", a - b);
    fprintf(output, "product:%lf\n", a * b);
    fprintf(output, "division:%lf\n", a / b);

    fclose(output);
    return 0;
}