// CH-230-A
// a7_p7.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
#include "stack.h"

int main() {
    char c;
    int num;
    struct stack Stack;

    // count holds the number of elements in the stack
    Stack.count = 0; 

    // Infinite loop 
    while(1) { 
        scanf("%c*c", &c);
        switch(c) {
            case 's':
                scanf("%d", &num);
                getchar();
                push(&Stack, num);
                break;
            case 'p':
                pop(&Stack);
                break;
            case 'e':
                empty(&Stack);
                break;
            case 'q':
                printf("Quit\n");
                return 0;
        }
    }
    return 0;
}

