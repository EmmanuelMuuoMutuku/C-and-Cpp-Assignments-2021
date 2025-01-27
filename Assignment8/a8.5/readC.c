// CH-230-A
// a8_p5.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
#include <stdlib.h>
int main() {
    char a, b;

    //Creating input file and checking if it can
    // be open
    FILE *fileR;
    fileR = fopen("chars.txt", "r");

    if (fileR == NULL) {
        printf("File can not be accessed!\n");
        exit(1);
    }
    else {
        a = getc(fileR);
        b = getc(fileR); 
    }

    //closing
    fclose(fileR);

    //Creating and opening output file
    FILE *fileW;
    fileW = fopen("codesum.txt", "w");
    
    //ASCII code arithmetic sum of initially read chars
    // Using casting
    fprintf(fileW, "%d", (int) a + (int) b);

    fclose(fileW);
    return 0;
}