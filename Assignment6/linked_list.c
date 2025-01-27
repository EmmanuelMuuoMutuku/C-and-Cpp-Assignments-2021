// CH-230-A
// a6_p8.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
#include <stdlib.h>

struct list {
    int info;
    struct list *next; // self reference
};

// Function prototype 
// Inserts a new int at the end of the list
//my_list 
struct list *push_back(struct list *my_list, int value);

// Function prototype 
// Inserts a new int at the beginning of the list
//my_list 
struct list *push_front(struct list *my_list, int value);

// Function prototype
// removes the first element from the list
struct list *remove_item(struct list *my_list);

//Function prototype
// Prints the list 
void print_list(struct list *my_list);

//Function prototype
// disposes previously allocated list
void dispose_list(struct list *my_list);

int main () {
    char c;
    int n;

    // initial setting of the list to empty
    struct list *my_list = NULL;

    // Infinite loop that reads input repeatedly
    while (1) {
        scanf("%c", &c);

        //use of switch for the different cases given
        switch (c) {
            // case a is for inserting elements at the end
            // of the list
            case 'a':
                scanf("%d", &n);
                getchar();

                //Function call
                my_list = push_back(my_list, n);
                break;

            // case b is for inserting elements at the beginning
            // of the list
            case 'b':
                scanf("%d", &n);
                getchar();

                //Function call
                my_list = push_front(my_list, n);
                break;

            // case r is for removing elements from the 
            // beginning of the list
            case 'r':
                getchar();

                //Function call
                my_list = remove_item(my_list);
                break;

            // case p is for printing elements
            case 'p':
                getchar();

                //Function call
                print_list(my_list);
                break;

            // case q is for disposing previously allocated
            // memory for the list
            case 'q':
                getchar();

                //Function call
                dispose_list(my_list);
                return 0;
            default:
            return 0;
        }
    }
}


struct list *push_back(struct list *my_list, int value) {
    struct list *cursor, *newel;
    cursor = my_list;

    newel = (struct list *)malloc(sizeof(struct list));
    
    // check if memory allocation was successful
    if (newel == NULL) {
        // printf("Error allocating memory\n");
        return my_list;
    }

    newel->info = value;

    // Last element in the list must have 
    // NULL as the next field
    newel->next = NULL;

    //Check if list is empty
    if (my_list == NULL) {

        //Returns only the new element
        return newel;
    }

    // Go through the list up to the end
    while (cursor->next != NULL) {
        //move to the next element
        cursor = cursor->next;
    }
    //point the last element to the new element
    cursor->next = newel;
    return my_list;
}

struct list *push_front(struct list *my_list, int value) {
    struct list *newel;

    newel = (struct list *)malloc(sizeof(struct list));
    
    // check if memory allocation was successful
    if (newel == NULL) {
        // printf("Error allocating memory\n");
        return my_list;
    }

    newel->info = value;

    //Reference to the first element
    newel->next = my_list;

    //return new element as first element of the structure
    return newel;
}
struct list *remove_item(struct list *my_list) {

    //Check if list is empty
    if (my_list == NULL) {
        // printf("Error allocating memory\n");
        // return list
        return my_list;
    }

    struct list *temp = my_list;

    //my_list links it to the next element 
    my_list = my_list->next;

    free(temp);
    return my_list;
}

void print_list(struct list *my_list) {
    struct list *cursor = my_list;

    // Loop until end of list
    while (cursor != NULL) {
        printf("%d ", cursor->info);
        cursor = cursor->next;
    }
    printf("\n");
}

void dispose_list(struct list *my_list) {
    struct list *nextelem;
    while (my_list != NULL) {
        nextelem = my_list->next;
        free(my_list);
        my_list = nextelem;
    }
}
