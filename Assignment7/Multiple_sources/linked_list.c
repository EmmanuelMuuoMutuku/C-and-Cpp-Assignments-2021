// CH-230-A
// a7_p1.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"


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