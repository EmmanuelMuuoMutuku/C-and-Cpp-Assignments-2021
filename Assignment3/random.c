//  #include <stdio.h>

//  int main() {
//      float x;
//      int n;
//      int i = 1;
//      scanf("%f", &x);
//      scanf("%d",&n);

//      if (n < 1) {
//          printf("Input is invalid, reenter value\n");
//          scanf("%d", &n);
//      }
//     else {
//          while(n >= 1) { 
//          printf("%f\n", x);
//          i++;
//          }
//     }
//      return 0;
//  }

// #include <stdio.h>

//     int main() {
//         int idx, n, sum = 0;
//         printf("Type a positive number ");
//         scanf("%d", &n);

//         for(idx = 1; idx <= n; idx++) {
//             printf("Processing %d..\n", idx); 
//             sum += idx;
//         }
//         printf("The sum is %d\n", sum);
//         return 0;
//     }



//Address Arithmetic Example 1 (FOR LOOP)
// #include <stdio.h> 

//  int main () { 
//     char a_string [] = "This is a string\0";
//     char *p;
//     int count = 0;
//     printf("The string: %s\n", a_string);
//     for (p = &a_string [0]; *p != '\0'; p++)
//         count ++;
//     printf("The string has %d chars.\n", count);
//     p--;
//     printf("Printing the reverse string: ");
//     while (count > 0) {
//         printf("%c", *p);
//         p--;
//          count --;
//     }
//     printf("\n");
//     return 0;
//  }



// Address Arithmetic Example 2 (WHILE LOOP)
// #include <stdio.h>

// int main () {
//     char a_string[] = "This is a string\0";
//     char *p;
//     int count = 0;
//     printf("The string : %s\n", a_string);
//     p = a_string;
//     while (*p != '\0') {
//         p++;
//         count ++;
//     }
//     printf("The string has %d characters.\n", count);
//     printf("Printing the reverse string: ");
//     p--;
//     while (count > 0) {
//        printf("%c", *p);
//         p--;
//         count --;
//      }
//      printf("\n");
//      return 0; 
//     }

//INCREASING A POINTER EXERCISE
// #include <stdio.h>
// #include <stdlib.h>
//  int main() {
//     char ch_arr[2] = {'A', 'B'};
//     char *ch_ptr;
//     // float f_arr[2] = {1.1, 2.2};
//     // float *f_ptr;

//     ch_ptr = &ch_arr[0];
//     printf("%p\n", ch_ptr);
//     ch_ptr++;
//     printf("%p\n", ch_ptr);
//     printf("%c\n", *ch_ptr);
//     return 0;
//  }
 



 // Ask professor to explain this concept again
//LOCAL AND GLOBAL SCOPE
// #include <stdio.h> 
// //global variable
// int x = 7;

// void xlocal(int y) { 
//     int x;
//     x = y * y;
//     printf("xlocal: %d\n", x); 
//     return;
// }

// void xglobal(int y) {
//     x = y * x;
//     printf("xglobal: %d\n", x); 
//     return;
// }

// int main() {
//  int x;
//  // try to explain if not
//  // commented out
//  x = 8;
//  printf("main: %d\n", x);
//  xlocal(x);
//  printf("main: %d\n", x);
//  xglobal(x);
//  printf("main: %d\n", x);
//  return 0;
//  }


// PASSING BY REFERENCE (1)
// #include <stdio.h>

// void increase(int *par) { 
//     *par = *par + 1;
// }

//  int main() {
//     int number = 5;
//     increase(&number); /* pass pointer */
//     printf("Increased number is %d\n", number);
//     return 0;
// }

// #include <stdio.h>  
  
// int  main()  
// {  
//     int arr[10]; 
//     int i;  
//        printf("\n\nRead and Print elements of an array:\n");
//        printf("-----------------------------------------\n");	
  
//     printf("Input 10 elements in the array :\n");  
//     for(i=0; i<10; i++)  
//     {  
// 	    printf("element - %d : ",i);
//         scanf("%d", &arr[i]);  
//     }  
  
//     printf("\nElements in array are: ");  
//     for(i=0; i<10; i++)  
//     {  
//         printf("%d  ", arr[i]);  
//     } 
//     printf("\n");	
// }


// #include <stdio.h>
    // int main() {
    //     int idx, n, sum = 0;
    //     printf("Type a positive number ");
    //     scanf("%d", &n);
    //     for(idx = 1; idx <= n; idx++) {
    //         printf("Processing %d..\n", idx); 
    //         sum += idx;
    //     }
    //     printf("The sum is %d\n", sum);
    //     return 0;
    // }


// int main() {
//     char a_string[] = "This is a string\0"; 
//     char *p;
//     int count = 0;
//     printf("The string: %s\n", a_string); 
//     for (p = &a_string[0]; *p != '\0'; p++)
//         count ++;
//     printf("The string has %d chars.\n", count); 
   
//    //Ask the professor why it's like this
//    //????????????????
//     p--;
//     printf("Printing the reverse string: "); 
//     while (count > 0) {
//         printf("%c", *p); 
//         p--;
//         count--;
//     }    
//     printf("\n"); 
//     return 0;
// }

// And then ask the professor about slide 13/40 tutorial 3 the void keyword


// PASSING ARRAYS TO FUNCTIONS

// #include <stdio.h>
// #include <stdlib.h>
// void strange_function(int v[], int dim) {
//     int i; 
//     for (i = 0;i < dim; i++) 
//     v[i] = 287;
//     //v= (int *) malloc(sizeof(int) * 1000);
// }
// int main() {
//     int array[] = {1, 2, 9, 16};
//     int *p = &array[0];
//     strange_function(array, 4);
//     printf("%d %p %p\n", array[0], p, array);
//     return 0;
// }

// Specifying the Dimension on the Fly
// #include <stdio.h> 
// #include <stdlib.h> 
// int main() {

//     int *dyn_array, how_many, i; 
//     printf("How many elements? "); 
//     scanf("%d", &how_many); 
//     dyn_array =
//         (int*) malloc(sizeof(int) * how_many); 
//     if (dyn_array == NULL)
//         exit(1); 
//     for(i = 0; i < how_many; i++) {
//         printf("\nInput number %d:", i);
//         scanf("%d", &dyn_array[i]);
//    } 
// return 0;
// }

// #include <stdio.h>
//  #include <stdlib.h>
//  int main() {
//     int length[2] = {7, 9};
//     int *ptr1, *ptr2; int n1, n2;
//     ptr1 = &length[0];
//     // &length[0] is pointer to first elem
//     ptr2 = length;
//     //length is pointer to first elem therefore same as above
//     n1 = length [0];
//     // length[0] is value
//     n2 = *ptr2;
//     // *ptr2 is value therefore same as above
//     printf("ptr1: %p, ptr2: %p\n", ptr1, ptr2);
//     printf("n1: %d, n2: %d\n", n1, n2);
//     return 0;
//  }

// Multi-dimensional Arrays in C: Example
// #include <stdio.h> 
// int main() {
//     int table [50][50]; 
//     int i, j, row, col; 
//     scanf("%d", &row); 
//     scanf("%d", &col);
//     for(i = 0; i < row; i++)
//         for (j = 0; j < col; j++)
//     table[i][j] = i * j;
//     for(i = 0;i < row; i++) {
//     for (j = 0; j < col; j++)
//         printf("%d ", table[i][j]);
//     printf("\n"); 
//     }
// return 0; 
// }


// #include <stdio.h>
// int main(int argc, char *argv[]) {
//    int i;
//     for (i = 1; i < argc; i++)
//     printf("%d %s\n", i, argv[i]); 
//     return 0; 
// }



// Pointer Arithmetic with Arrays
#include <stdio.h>
#define ROW 2
#define COL 3
int main() {
    int arr[ROW][COL] = { {1, 2, 3}, {11, 12, 13} }; 
    int i = 1;
    int j = 2;
    int* p = (int*) arr; // needs explicit cast 
    printf("Address of [1][2]: %p\n", &arr[1][2]);
    printf("Address of [1][2]: %p\n", p + (i * COL + j));
    printf("Value of [1][2]: %d\n", arr[1][2]); 
    printf("Value of [1][2]: %d\n", *(p + (i * COL + j)));
    printf("\n");
    printf("Address of [0][0]: %p\n", p + (0 * COL + 0));
    printf("Address of [0][1]: %p\n", p + (0 *  COL + 1));
    printf("Address of [0][2]: %p\n", p + (0 * COL + 2));
    printf("Address of [1][0]: %p\n", p + (1 * COL + 0)); 
    printf("Address of [1][1]: %p\n", p + (1 * COL + 1));
    printf("Address of [1][2]: %p\n", p + (1 * COL + 2));
    return 0;
 }
