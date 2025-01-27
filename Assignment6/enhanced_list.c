// CH-230-A
// a6_p9.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
#include <stdlib.h>

struct list {
    int info;
    struct list *next; // self reference
};

// Variable contains size of the list and
// it is global
int size_list = 0;

// Function prototype
// Inserts a new int at the end of the list
// my_list
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
// inserts a new int at a specific position in the list
struct list *push(struct list *ptr, int position, int value);

//Function prototype
// reverses the order of the list
struct list *reverse(struct list *ptr);

//Function prototype
// disposes previously allocated list
void dispose_list(struct list *my_list);




int main () {
    char c;
    int n, pos;

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

            // case i for insterting int at a
            // specific position
            case 'i':
                getchar();
                scanf("%d%d", &pos, &n);
                getchar();
                my_list = push(my_list, pos, n);
                break;
            // case R reverses the order of the list
            case 'R':
                getchar();
                my_list = reverse(my_list);
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

    size_list++;
    // return new element as first element of the structure
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
struct list *push(struct list *my_list, int position, int value) {
    struct list *cursor, *previous_e, *newelem;
    int i = 0;

    cursor = my_list;
    newelem = (struct list *)malloc(sizeof(struct list));

    //Check if memory was allocated successfully
    if (newelem == NULL) {

        // return my-list if empty
        return my_list;
    }

    newelem->info = value;
    newelem->next = my_list;

    //Condition to return list if we have
    // an invalid position (negative or > list)
    if(position < 0 || position > size_list) {
        printf("Invalid position!\n");
        return my_list;
    }

    //Condition to place new element in pos 0 
    // incase the list is empty
    if(my_list == NULL) { 
        if(position != 0) {
            return my_list;
        }
        else {
            my_list = newelem;
            size_list++;
            return my_list;
        }
    }
    else {

        // if list is at pos 0 and its empty
        // insert value in front of the list
        // hence function call of push_front
        if (position == 0) {
            return push_front(my_list, value);
        }

        // loop until the position entered
        while (i < position) {
            // The cursor is now previous element
            previous_e = cursor;

            //Cursor is moved to the next element
            cursor = cursor->next;
            i++;
        }

        //new element is then linked to cursor
        newelem->next = cursor;

        // previous element is linked to new element
        previous_e->next = newelem;
        size_list++;
    }
    return my_list;
}

struct list *reverse(struct list *my_list) {
    struct list *cursor, *previous_e = NULL, *nextelem = NULL;
    int i = 0;
    cursor = my_list;
    if(size_list == 0 || size_list == 1) {
        return my_list;
    }
    else {
        while(i < size_list){

            // Condition to check if we are at the
            // first element
            if(i == 0) {
                previous_e = cursor;
                cursor = cursor->next;

                // first element here becomes last
                previous_e->next = NULL;
            }

            //condition to check if we are at the last element
            else if(i == (size_list - 1)) {
                my_list = cursor;
                my_list->next = previous_e;

                // return the last element which is first
                // in the reversed list
                return my_list;
            }
            else {
                // stores next field of cursor
                nextelem = cursor->next;

                // reverse the next field of cursor
                cursor->next = previous_e;

                // move to the next element
                previous_e = cursor;
                cursor = nextelem;
            }
            i++;
        }
    }
    return my_list;
}

void dispose_list(struct list *my_list) {
    struct list *nextelem;
    while (my_list != NULL) {
        nextelem = my_list->next;
        free(my_list);
        my_list = nextelem;
    }
}