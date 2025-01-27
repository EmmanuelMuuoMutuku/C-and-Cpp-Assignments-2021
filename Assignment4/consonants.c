// CH-230-A
// a4_p4.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
#include <string.h>

//Function prototype
int count_consonants(char str[]);

int main() {
    char str[100];
    
    //while 1 is for repeatedly entering a string
        while(1) {
        fgets(str, sizeof(str), stdin);

        // if condition used to ensure it stops if string entered is empty
        if(str[0] == '\n') {
            break;
        }   

            // Function call in the print function
            printf("Number of consonants=%d\n", count_consonants(str));
    }
    return 0;
}

int count_consonants(char str[]) {
    int i, count = 0;
    for(i = 0; str[i] != '\0'; i++) { 

    //ensures all alphabets are included
        if((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90)) { 

            // Checks for vowels only
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u'|| str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U' ) {
                continue;
            }
            else {
                count++;
            }
        }
    }
        return count;
    }

