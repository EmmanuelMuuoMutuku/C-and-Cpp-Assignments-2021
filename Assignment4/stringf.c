// CH-230-A
// a4_p12.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
#include <string.h>

//Function prototype
void replaceAll(char *str, char c, char e);

int main() {
    char str[80], a, b;
    
    //While loop to ensure it reads the string and characters repeatedly
    while(1) {
        printf("Enter a string:\n");

        fgets(str, sizeof(str), stdin);
        str[strlen(str) - 1] = '\0';

        //condition to check if string entered is same as stop
        if(strcmp(str, "stop") == 0) {
            break;
        }

        scanf("%c", &a);
        getchar();
        scanf("%c", &b);
        getchar();

        //print the character to be replaced
        // the replacing character and the string before replacement
        printf("%c\n%c\n%s\n", a, b, str);

        // Function call
        replaceAll(str, a, b);  
    }
    return 0;
}

void replaceAll (char *str, char c, char e) {
    int i, length;
    length = strlen(str);

    // loop through the entire string 
    for(i = 0; i < length; i++) { 

        // condition to replace all 'c' with 'e'
        if(str[i] == c) 
        {
            str[i] = e;
        }
         
    }
    //Prints the string after replacement
        printf("%s\n", str);
}
