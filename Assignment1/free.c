// if statement example

#include <stdio.h>
// int main() {
//     int first, second;
//     printf ("Type the first number :\n");
//     scanf ("%d", &first);
//     printf ("Type the second number:\n");
//     scanf ("%d", &second);
//     if (first>second) {
//         printf("The larger one is %d\n", first);
//     }
//     else {
//         printf("The larger one is %d\n", second);
//     }
//     printf ("Can you see the logical error?\n");
//     return 0;
// }

// Statements and compound statements
// int main() {
//     int a =3;
//     if (a>0) {
//         printf("a is a positive %d\n", a);
//         a= a-2 * a;
//         printf("now a is a negative %d\n", a);
//     }
// }

// Switch Example
// int main() {
//     int c;
//     for (c=0; c<=3; c++) {
//         printf ("c: %d\n", c);

//         switch (c) {
//             case 1:
//                 printf ("Here is 1\n");
//                 break;
//             case 2:
//                 printf("Here is 2\n");
//                 /* Fall through */
//             case 3:
//             case 4:
//             printf ("Here is 3,4\n");
//             break;
//             default:
//             printf("Here is default\n");
//         }
//     }
// }

// ITERATION : WHILE

// int main() {
//     int idx, n, sum=0;
//     printf("Enter a positive number");
//     scanf("%d", &n);
//     idx = 1;
//     while (idx <=n) {
//         sum += idx;
//         idx ++;
//     }
//     printf ("The sum is %d\n", sum);
//     return 0;
// }

// Arrays are the strings in C and '\0' marks the end of string
// int main() {
//     char name[30] = "Hello World";
//     printf("%s\n", name);
//     name[5] = '\0';
//     printf("%s\n", name);
//     return 0;
// }

// Reading Numbers with fgets and sscanf

// int main() {
//     char line [100];
//     int value;
//     printf("Enter a value: "); 
//     fgets(line, sizeof(line), stdin); 
//     sscanf(line, "%d", &value); 
//     printf("You entered: %d\n", value); 
// return 0;
// }

// #include <stdio.h>
//  int main() {
//       int thing_var; /* def. var. for a thing */
//        int *thing_ptr; /* def. pointer to a thing */
//  thing_var = 2; /* assign a value to a thing */
//  printf("Thing %d\n", thing_var);
//  thing_ptr = &thing_var; /* make the pointer
// point to thing_var */
//  *thing_ptr = 3; /* thing_ptr points to
// thing_var ,so thing_var changes to 3 */
//  printf("Thing %d\n", thing_var);
//  printf("Thing %d\n", *thing_ptr);
//  /* another way */
//  return 0;
//  }

// int main(){

// int a = 12345;
//  int *int_ptr = &a;
//  char *char_ptr;
//  char_ptr = int_ptr; /* WRONG */
//  printf("%d\n", *int_ptr);
//  printf("%d\n", *char_ptr);
//  return 0;
// }

// int main() {
//     char name[30] = "Hello World";
//     printf("%s\n", name);
//     name[5] = '\0';
//     printf("%s\n", name);
//     return 0;
// }
// int main() {
//     int c;
//         for (c = 0; c <= 3; c++) {
//         printf("c: %d\n", c);
//     switch (c) { 
//         case 1:
//             printf("Here is 1\n");
//             break; 
//         case 2:
//             printf("Here is 2\n");
//         /* Fall through */
//         case 3: 
//         case 4:
//             printf("Here is 3, 4\n");
//             break; 
//         default:
//             printf("Here is default\n"); 
//     }
// }
// return 0; 
// }
int main() {
    int idx, n, sum = 0;
    printf("Enter a positive number:\n");
    scanf("%d", &n);
    idx = 1;
    while (idx <= n) {
        sum += idx;
        idx ++;
    }
    printf("The sum is %d\n",sum);
    return 0;
}