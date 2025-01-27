// CH-230-A
// a5_p3.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
#include <string.h>
int count_lower(char *str);
int main() {
    char str[50];

    // loop infinitely
    while (1) {
        printf("Enter a string:\n");
        fgets(str, sizeof(str), stdin);

        // stop execution if string is empty
        if(str[0] == '\n') {
            break;
        }

        //Prints number of lowercase characters 
        //Function call
        else {
            printf("Number of lowercase characters=%d\n", count_lower(str));
        }
    }
    return 0;
}

int count_lower(char * str) {
    //Declaring i and defining count
    int i, count = 0; 

    // use of pointer to walk through the string
    for (i = 0; *(str + i) != '\0'; i++) {
    
        // determines and counts lower case letters
        if(*(str + i) >= 97 && *(str + i) <= 122) 
        {
            count++;
        }
    }
    return count;
}