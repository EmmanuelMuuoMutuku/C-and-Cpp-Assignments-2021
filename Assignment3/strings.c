// CH-230-A
// a3_p11.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
#include <string.h>
    int main() {
        char one[50];
        char two[50];
        char three[50]; 
        char c;
        int length1, length2;

    //Input 1st string
        fgets(one, 50, stdin); 
        one[strlen(one)-1]= '\0';
    //Input 2nd String
        fgets(two, 50, stdin); 
        two[strlen(two)-1]= '\0';

        length1 = (int) strlen(one); 
        length2 = (int) strlen(two); 

        //print length of both strings
        printf("length1=%d\n", length1);
        printf("length2=%d\n", length2); 

        //Concatenate
        strcat(one, two); 
        printf("concatenation=%s\n", one);

        //Copy two to three
        strcpy(three, two);
        printf("copy=%s\n",three);

        //comparing string one and two
        int compare = strcmp(one, two);
        if (compare < 0) {
            printf("one is smaller than two\n");
        }
        else if (compare > 0) {
            printf("one is larger than two\n");
        }
        else {
            printf("one is equal to two\n");
        }
        //Position
        scanf("%c", &c);
        char *pos = strchr(two, c);
        if (pos == NULL) {
            printf("The character is not in the string\n");
        }
        else {
            printf("position=%ld\n", pos - two);
        }
        return 0;
    }

//     int main() {
//         char one[50];
//         char two[50];
//         char three[50];


//         scanf("%[^\n]%*c", one);
//         scanf("%[^\n]s*c", two);
//         getchar();

//         int compareResult = strcmp(one, two); // Compare strings before concat

    //         // Print length of one and two
    //         printf("length1=%d\n", (int)strlen(one));
    //         printf("length2=%d\n", (int)strlen(two));

    //         strcat(one, two);
    //         printf("concatenation=%s\n", one);

    //         strcpy(three, two);
    //         printf("copy=%s\n", three);

    //         // Print different output varying from the return value of strcmp
    //         if (compareResult < 0)
    //         {
    //             printf("one is smaller than two\n");
    //     } else if (compareResult > 0) {
    //         printf("one is larger than two\n");
    //     } else printf("one is equal to two\n");

    //     char c;
    //     char *ptr_a;
    //     scanf("%c", &c);
    //     ptr_a = strchr(two, c);

    //     if(ptr_a == NULL) { // If we didn't find any occurence of c in two
    //         printf("The character is not in the string\n");
    //     } else printf("position=%d\n", (int) (ptr_a - two)); // Else print position

    //     return 0;
    // }
