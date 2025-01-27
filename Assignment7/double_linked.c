// CH-230-A
// a7_p2.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
#include <stdlib.h>

struct list {
    char info;
    struct list *previous;
    struct list *next;
};

//Global variable containing size of list
int size_list = 0;

//Function prototype
//Inserts a new element at the beginning of the list
//Returns a pointer of type struct list which is a 
//double linked list
struct list *push_front(struct list *my_list, char value);

//Function prototype
//Deletes all elements in the list that match char value
//Returns a pointer of type struct which is a 
//double linked list
struct list *remove_item(struct list *my_list, char value);

//Function prototype
//Prints all elements in the list
//Returns nothing since its void
void print_list(struct list *my_list);

//Function prototype
//Prints all elements in the list in a reverse manner
//Returns nothing
void print_reverse_list(struct list *my_list);

//Function prototype
//Frees memory taken up by elements in the list
//Returns nothing since its void
void dispose_list(struct list *my_list);

int main() {
    int c;
    char info;
    struct list *my_list = NULL;

    //Infinite loop reads input repeatedly
    while (1) {
        scanf("%d", &c);
        getchar();

    //use of switch for different cases given
        switch (c) {

        //case 1 is for inserting element at the beginning
        //of the list
        case 1:
            scanf("%c", &info);
            my_list = push_front(my_list, info);
            break;

        //case 2 is for deleting items from the list
        case 2:
            scanf("%c", &info);
            my_list = remove_item(my_list, info);
            break;

        // case 3 is for print all elements in the list
        case 3:
            print_list(my_list);
            break;

        // case 4 is for printing list in reverse
        case 4:
            print_reverse_list(my_list);
            break;

        // case 5 is for freeing memory
        case 5:
            dispose_list(my_list);
            return 0;
        default:
            return 0;
        }
    }
}

struct list *push_front(struct list *my_list, char value) {
    struct list *newel;
    newel = (struct list *)malloc(sizeof(struct list));

    //check if memory allocation was successful
    if (newel ==NULL) {
        return my_list;
    }

    //value is now assigned to the info field
    newel->info = value;
    //Null is now assigned to the previous field
    newel->previous = NULL;

    //condition to check if there is any other 
    //element on the list
    if(my_list == NULL) {

        //newel is the only element
        //so NULL is assigned to the next field
        newel->next = NULL;
    }

    else {
        // if not my-list is assigned to next field
        newel->next = my_list;

        // and my_list previous points to newel
        my_list->previous = newel;
    }
    size_list++;

    //returns newel as first element in the list
    return newel;
}

struct list *remove_item(struct list *my_list, char value) {

    //successful memory allocation
    if(my_list == NULL){
        return my_list;
    }
    struct list *cursor = my_list;
    struct list *temp;
    int count = 0;

    // Loop until the end of the list
    while (cursor != NULL) {

        //condition to check if info is same as value
        if(cursor->info == value) {

            //add to the count if match is found
            count++;

            //assigning temp to cursor
            temp = cursor;

            //condition to check if we are at the beginning of the list
            if(temp == my_list) {

                //condition to check if there's another element after cursor
                if(cursor->next != NULL) {
                    
                    //Move to the next element
                    cursor = cursor->next;
                    my_list = my_list->next;

                    //remove link with the deleted element 
                    my_list->previous = NULL;
                    free(temp);
                }
                else {
                    //Remove element
                    free(temp); 
                    my_list = NULL;

                    //return my_list as there is no another element
                    return my_list;
                }
            }

            // condition to check if there is another element
            // and connect element before and after cursor
            // and then remove element by freeing temp
            else if (cursor->next != NULL) {
                cursor->previous->next = cursor->next;
                cursor->next->previous = cursor->previous;
                cursor = cursor->next;
                free(temp);
            }
        }
        else {
            cursor = cursor->next;
        } 
    }
    // condition to check if there's no match
    if (count == 0)
    {
        printf("The element is not in the list!\n");
    }
    return my_list;
}

void print_list(struct list *my_list) {
    struct list *cursor = my_list;
    while (cursor != NULL) {
        printf("%c ", cursor->info);
        cursor = cursor->next;
    }
    printf("\n");
}

void print_reverse_list(struct list *my_list) {
    struct list *cursor;
    cursor = my_list;

    // loop until end of the list
    while (cursor->next != NULL) {
        cursor = cursor->next;
    }
    
    //loop in a reverse manner and print the elements
    while (cursor != NULL) {
        printf("%c ", cursor->info);
        cursor = cursor->previous;
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