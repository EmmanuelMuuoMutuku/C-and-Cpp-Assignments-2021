// CH-230-A
// a8_p4.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
#include <limits.h>
#include "stack.h"

void push(struct stack *Stack, int num) {
    // printf("Pushing ");
    // Check if stack is full
    if((*Stack).count == 32){
        printf("Stack Overflow\n");
    }
    else {
        // printf("%d\n", num);
        // Place value inside of stack
        (*Stack).array[(*Stack).count] = num; 
        (*Stack).count++;
    }
}

void pop(struct stack *Stack) {
    // printf("Popping ");
    // Check if stack is empty with isEmpty
    if(isEmpty(Stack) == 1) {
        printf("Stack Underflow\n");
    }
    else {
        printf("%d", (*Stack).array[(*Stack).count - 1]);
        (*Stack).array[(*Stack).count - 1] = UINT_MAX;
        (*Stack).count--;
    }
}

void empty(struct stack *Stack) {
    printf("Emptying Stack ");
    for(int i = (*Stack).count - 1; i >= 0; i--){
        printf("%d ", (*Stack).array[(*Stack).count - 1]);
        (*Stack).array[(*Stack).count - 1] = UINT_MAX;
        (*Stack).count--;
    }
    printf("\n");
}

int isEmpty(struct stack *Stack) {
    if((*Stack).count == 0)
        return 1;
    else return 0;
}