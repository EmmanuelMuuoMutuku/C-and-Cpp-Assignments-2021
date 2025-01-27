// CH-230-A
// a4_p11.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
#include <stdlib.h>

//Used for the tolower function 
#include <ctype.h>

//Used for the strlen function
#include<string.h> 

// Function prototype
int count_insensitive(char *str, char c);

int main() {
    char *max_str, *correct_str;
    char example[5] = {'b', 'H', '8', 'u', '$'};
    int i, length;

    //Dynamic allocation of string with maximal length 
    max_str = (char *)malloc(sizeof(char) * 50);
    if (max_str == NULL) {
        exit(1);
    }

    // Read from keyboard contents of the string until enter is pressed
    scanf("%[^\n]%*c", max_str);

    // determines length of the string
    length = strlen(max_str);
    
    // Dynamic allocation of string with correct size
    correct_str = (char *)malloc(sizeof(char) * length);
    if (correct_str == NULL) {
        exit(1);
    }

    // Copy content of original string to the new string
    strcpy(correct_str, max_str);

    //Deallocate memory for the first string
    free(max_str);

    //
    for (i = 0; i < length; i++) {

        // Condition checks for uppercase letters
        if (correct_str[i] >= 65 && correct_str[i] <= 90) {

            // Lowers the characters' case 
            correct_str[i] = tolower(correct_str[i]);
        }
    }
    
    // Uses example given to loop through the cases given
    for (i = 0; i < 5; i++)
    {
        printf("The character '%c' occurs %d times.\n", example[i], count_insensitive(correct_str, example[i]));
    }
    return 0;
}

int count_insensitive(char *str, char c) {
    int i, count = 0;
    int length;

    // tolower lowers the case of the character
    char small_c = tolower(c);

    // Determines length of string
    length = strlen(str);

    for (i = 0; i < length; i++) {

        // Condition to check if character in the string matches what 
        // we are looking for
        if(str[i] == small_c) {
            count++;
        }
    }
    return count;
}