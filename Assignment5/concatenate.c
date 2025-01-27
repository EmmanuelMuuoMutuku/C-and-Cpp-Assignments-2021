// CH-230-A
// a5_p7.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char str1[100], str2[100];
    char *ptr;

    //Enter 1st string 
    fgets(str1, sizeof(str1),stdin);
    str1[strlen(str1)-1] = '\0';

    // Enter 2nd string 
    fgets(str2, sizeof(str2),stdin);
    str2[strlen(str2)-1] = '\0';

    // for the arithmetic part of Dynamic allocation    
    int size = strlen(str1) + strlen(str2) + 1; 
    
    //Dynamically allocate memory for exact size of chars
    ptr = (char*) malloc(sizeof(char) * size);

    // Check if memory has been successfully allocated
    if (ptr == NULL) {
        printf("Memory not allocated\n");
        exit (1);
    }
    //Concatenate
    strcat(ptr, str1); 
    strcat(ptr, str2); 

    printf("Result of concatenation: %s\n", ptr);

    free(ptr);
    return 0;
}
