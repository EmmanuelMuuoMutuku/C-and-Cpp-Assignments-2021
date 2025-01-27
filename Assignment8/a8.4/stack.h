// CH-230-A
// a8_p4.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

struct stack {
    unsigned int count;
    // Its an unsigned int so 4*8 will be 32 bits
    int array[32]; //container

};

//Function prototype
//Pushes int on the stack 
//Prints stack overflow if we push a new element
//that increases stack size more than the space we have
void push(struct stack *Stack, int num);

//Function prototype
//Pops int of the stack
//Prints stack underflow if we pop another element
//when the stack size is 0
void pop(struct stack *Stack);

//Function prototype
//Empties the stack by popping elements from the stack
void empty(struct stack *Stack);

//Function prototype
//Returns 1 if stack is empty and 0 if otherwise
int isEmpty(struct stack *Stack);

