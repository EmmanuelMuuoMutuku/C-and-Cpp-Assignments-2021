//POINTER ARITHMETIC WITH ARRAYS

// #include <stdio.h>
// #define ROW 2
// #define COL 3
// int main() 
// {
// int arr[ROW][COL] = { {1, 2, 3}, {11, 12, 13} }; 
// int i = 1;
// int j = 2;
// int* p = (int*) arr; // needs explicit cast 
// printf("Address of [1][2]: %p\n", &arr[1][2]);
// printf("Address of [1][2]: %p\n", p + (i * COL + j));
// printf("Value of [1][2]: %d\n", arr[1][2]); 
// printf("Value of [1][2]: %d\n", *(p + (i * COL + j))); 
// printf("\n");
// printf("Address of [0][0]: %p\n", p + (0 * COL + 0));
// printf("Value of [0][0]: %d\n", *(p + (0 * COL + 0)));
// printf("Address of [0][1]: %p\n", p + (0 * COL + 1));
// printf("Value of [0][1]: %d\n", *(p + (0 * COL + 1)));
// printf("Address of [0][2]: %p\n", p + (0 * COL + 2)); 
// printf("Value of [0][2]: %d\n", *(p + (0 * COL + 2)));
// printf("Address of [1][0]: %p\n", p + (1 * COL + 0)); 
// printf("Value of [1][0]: %d\n", *(p + (1 * COL + 0)));
// printf("Address of [1][1]: %p\n", p + (1 * COL + 1));
// printf("Value of [1][1]: %d\n", *(p + (1 * COL + 1)));
// printf("Address of [1][2]: %p\n", p + (1 *  COL + 2));
// printf("Value of [1][2]: %d\n", *(p + (1 * COL + 2)));
// return 0;
  
// }

//WORKING WITH 2D DYNAMIC ARRAYS
// #include <stdio.h>
// #include <stdlib.h>
// void set_all_elements(int **arr, int numrow, int numcol) 
// {
//     int r, c;
//     for (r = 0; r < numrow; r++)
//         for (c = 0; c < numcol; c++)
//             arr[r][c] = r * c;     // some value ...
// }

// int main() 
// {
//     int **table, row;
//     table = (int **) malloc(sizeof(int *) * 3); 
//     if (table == NULL)
//         exit(1);
//     for (row = 0; row < 3; row++) 
//     {
//         table[row] = (int *) malloc(sizeof(int) * 4); 
//         if (table[row] == NULL)
//         exit(1); 
//     }
//     set_all_elements(table, 3, 4); 
//     return 0;
// }


//TRACING THE STACK OF CALLS
// #include <stdio.h>
// #include <stdlib.h>
// int factorial(int n) 
// { 
//     int val;
//     if((n==0)||(n==1))
//     {
//         printf("base\n");
//         return 1;
//     }
//     else
//     {
//         printf("called with par = %d\n", n);
//         val = n * factorial(n - 1); 
//         printf("returning %d\n", val); 
//         return val;
//     } 
// }

// int main() 
// {
//     printf("%d\n", factorial(4)); 
//     return 0;
// }

//FIBONACCI NUMBERS
// #include <stdio.h>
// #include <stdlib.h>

// int fibonacci(int n) 
// {
//     if((n == 0) || (n == 1))
//     return 1;
//     else 
//     return fibonacci (n-1) + fibonacci(n-2);
// }
    
#include <stdlib.h>
#include <stdio.h>

int checkForPrime(int);
int i;

int main()
{

    int n1,primeNo;

	printf("\n\n Recursion : Check a number is prime number or not :\n");
	printf("--------------------------------------------------------\n");
	
    printf(" Input any positive number : ");
    scanf("%d",&n1);
    
    i = n1/2;

    primeNo = checkForPrime(n1);//call the function checkForPrime

   if(primeNo==1)
        printf(" The number %d is a prime number. \n\n",n1);
   else
      printf(" The number %d is not a prime number. \nn",n1);
   return 0;
}

int checkForPrime(int n1)
{
    if(i==1)
    {
        return 1;
    }
    else if(n1 %i==0)
    {
         return 0;
    }     
    else
       {
         i = i -1; 
         checkForPrime(n1);//calling the function checkForPrime itself recursively
         return 1;
      }
}
