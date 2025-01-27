// CH-230-A
// a7_p6.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

struct person {
    char name[30];
    int age;
};

//Function protoype
//takes two arguments (structs)

//if names are equal:
//compares age of the two structs and returns a value 
//that is the difference of the ages


//Otherwise
//if names are different:
//it returns the value of the strcmp between
//the two strings
int name(const struct person a, const struct person b);

//Function protoype
//takes two arguments (structs)

//if ages are equal:
//it returns the value of the strcmp between
//the structs names

//Otherwise
//if ages are different:
//compares age of the two structs and returns a value 
//that is the difference of the ages
int age(const struct person a, const struct person b);

//Function prototype
//Sorts out the elements in the array depending on age or name
//returns nothing since its a void
void bubblesort(struct person *array, int persons,
                int (*comp)(const struct person a, const struct person b));

//Function prototype
//Prints the elements of array in the following format:
// {name then age}             
void print(struct person *array, int persons);

int main() {
    int i, persons;
    struct person *array;

    scanf("%d", &persons);

    //Dynamic memory allocation
    array = (struct person *)malloc(sizeof(struct person) * persons);

    //check if memory allocation is successful
    if(array == NULL){
        exit(1);
    }
    for (i = 0; i < persons; i++) {
        getchar();

        // Enters name of person within the loop
        fgets((array[i]).name, sizeof((array[i]).name), stdin);

        //Puts null-terminator '\0'
        array[i].name[strlen(array[i].name) - 1] = '\0';

        //enters age of person entered above
        scanf("%d", &((array[i]).age));
    }

    //Sorts by name 
    bubblesort(array, persons, name);
    //prints 
    print(array, persons);

    //sorts by age
    bubblesort(array, persons, age);

    //prints
    print(array, persons);

    //deallocation of memory
    free(array);
    return 0;
}

int name(const struct person a, const struct person b){
    //Checking if name is equal
    int compare = strcmp(a.name, b.name);

    //returns age difference
    if(compare == 0){
        return a.age - b.age;
    }

    //otherwise returns compare 
    else{
        return compare;
    }
}

int age(const struct person a, const struct person b){
    // checks if age is equal
    if (a.age == b.age) {

        //returns the comparison of the name field
        return strcmp(a.name, b.name);
    }
    //returns age difference
    else {
        return a.age - b.age;
    }
}

void bubblesort(struct person *array, int persons,
                int (*comp)(const struct person a, const struct person b)){
    int i;
    bool swapped = true;

    //Iterate until swapping is not possible
    while(swapped) {
        swapped = false;
        for (i = 1; i < persons; i++) {

            //Swap if return is > 0
            if (comp(array[i-1], array[i]) > 0) {

                //Temporary struct to aid in swapping
                // as a third variable
                struct person temp = array[i - 1];
                array[i - 1] = array[i];
                array[i] = temp;

                //change is swapped 
                // its now true to check the next element
                swapped = true;
            }
        }
        
    }
}

void print(struct person *array, int persons){
    int i;
    for (i = 0; i < persons; i++)
    {
        printf("{%s,%d}; ", array[i].name, array[i].age);
    }
    printf("\n");
    return;
}