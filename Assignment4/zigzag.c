// CH-230-A
// a4_p2.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
int main() {

    char line[50];
    int i;

        // Reads character from standard input
        fgets(line, sizeof(line), stdin);

        //for loop to print the result as a zigzag
        for(i = 0; line[i] != '\n'; i++) {

            // Condition to ensure all even numbers are printed without a space
            if(i % 2 == 0) {
            printf("%c\n", line[i]);
        }
            else {
            printf(" %c\n", line[i]);
        }
    }
    return 0;
}

 