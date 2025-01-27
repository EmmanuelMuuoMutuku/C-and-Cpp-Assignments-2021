// CH-230-A
// a4_p5.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
#include <string.h>
int count_consonants(char str[]);

int main() {
    char str[100];
    while(1) {
        fgets(str, sizeof(str), stdin);
        if(str[0] == '\n') {
            break;
        }
            printf("Number of consonants=%d\n", count_consonants(str));
    }
    return 0;
}

int count_consonants(char str[]) {
        int count = 0;
        char *idr = str; // passing array to pointer

        // for loop to count all consonants present
        for (int i = 0; *idr != '\0'; i++) {

                // for all alphabets
                if ((*idr >= 97 && *idr <= 122) || (*idr >= 65 && *idr <= 90))
                {

                    if (*idr != 'a' && *idr != 'e' && *idr != 'i' &&
                        *idr != 'o' && *idr != 'u' && *idr != 'A' && *idr != 'E' && *idr != 'I' &&
                        *idr != 'O' && *idr != 'U') // for all vowels
                    {
                        count++;
                    }
                }
            idr++;
        }
        return count;
    }