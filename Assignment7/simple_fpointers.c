// CH-230-A
// a7_p4.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>

//Function prototype
// returns void 
// converts entire string to uppercase
void upperCase(char *array, int size);

//Function prototype
//returns void
//converts entire string to lowercase
void lowerCase(char *array, int size);

//Function prototype
//returns void
//converts lower to upper and vice-versa
void reverse(char *array, int size);

//Function prototype
//returns void
//Quits program
void quit(char *array, int size);

int main() {
    int size;
    char *temp, *str, c;
    
    //Memory allocation for temp
    temp = (char *)malloc(sizeof(char) * 100);
    
    //checking if memory allocation was successful
    if (temp == NULL) {
        exit(1);
    }
    
    //Input chars on temp until newline
    scanf("%[^\n]%*c", temp);

    //memory allocation with exact size of string
    str = (char *)malloc(sizeof(char) * strlen(temp));

    //check if memory allocation was successful
    if(str == NULL) {
        exit(1);
    }

    //Copy temp to str
    strcpy(str, temp);

    //Deallocation of memory
    free(temp);

    //size of string
    size = strlen(str);

    //Infinite loop
    while (1) {
        scanf("%c", &c);
        getchar();
    
    //converts digit char to int
        int n = c - '0';

    //Function pointer array 
        void (*funcArray[4])(char *, int) = {upperCase, lowerCase, reverse, quit};
    
    //Function call
        (*funcArray[n - 1])(str, size);
    }
    return 0;
}

void upperCase(char *array, int size) {
    int i;
    char *strC;

    //Memory allocation
    strC = (char *)malloc(sizeof(char) * size);

    //check if successful
    if (strC == NULL) {
        exit(1);
    }

    //copy array to strC
    strcpy(strC, array);

    //loop through the string and convert lower to upper
    for ( i = 0; i < size; i++) {
        if (strC[i] >= 'a' && strC[i] <= 'z') {
            strC[i] = toupper(strC[i]);
        }
    }
    printf("%s\n", strC);
    free(strC);
}

void lowerCase(char *array, int size) {
    int i;
    char *strC;
    // Memory allocation
    strC = (char *) malloc(sizeof(char) * size);

    // Check if malloc was successful
    if(strC == NULL){ 
        
        exit(1);
    }

    strcpy(strC, array);

    // Loop through the string and convert upper to lower
    for(i = 0; i < size; i++) {
        if(strC[i] >= 'A' && strC[i] <= 'Z') { 
            strC[i] = tolower(strC[i]);
        }
    }
    printf("%s\n", strC);
    free(strC);
}

void reverse(char *array, int size) {
    int i;
    char *strC;
    strC = (char *)malloc(sizeof(char) * size);

    // Check if malloc was successful
    if(strC == NULL) { 
        exit(1);
    }

    strcpy(strC, array);

    for(i = 0; i < size; i++) {
        // Check if character at this postion is an uppercase letter
        if(strC[i] >= 'A' && strC[i] <= 'Z') { 

        // Lower the case of the character
            strC[i] = tolower(strC[i]); 
        } 
        // Check lowercase
        else if(strC[i] >= 'a' && strC[i] <= 'z') { 
            // Upper the case of the character
            strC[i] = toupper(strC[i]); 
        }
    }
    printf("%s\n", strC);
    free(strC);
}

void quit(char *array, int size) {
    free(array);
    exit(1);
}
