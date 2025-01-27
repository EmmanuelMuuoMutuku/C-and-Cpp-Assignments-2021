// CH-230-A
// a7_p1.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

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