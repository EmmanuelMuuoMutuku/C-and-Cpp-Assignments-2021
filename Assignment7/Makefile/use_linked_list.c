// CH-230-A
// a7_p3.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de
#include <stdio.h>
#include "linked_list.h"

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