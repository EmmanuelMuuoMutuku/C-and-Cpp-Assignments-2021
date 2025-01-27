// CH-230-A
// a3_p2.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>

// int main () {
//     char ch;
//     int n, i;

//     printf("Enter a lowercase character:\n");
//     scanf("%c", &ch);
//     // getchar(); 
//     printf("Enter integer:\n");
//     scanf("%d", &n);

//     // Reenters value if less than 0
//     while (n < 0 ) {
//         printf("Reenter value\n"); 
//         scanf("%d", &n);
//     }

//     //Loop to print the character entered n times
//     for (i = 0; i <= n; i++) {
//         if (i == 0) {
//             printf("%c\n", ch); // prints the first character without -n
//         }
//         else { 
//         printf("%c-%d\n", ch, i); // prints the others with -n
//         }
//     }
//     return 0;
// }

#include<stdio.h>

int main() {
	char ch;
	int n, i;
	
	scanf("%c", &ch);
	getchar();
	scanf("%d", &n);
	
	// Print all the corresponding characters with ASCII value from ch to ch-n
	for(i = 0; i <= n; i++) {
		printf("%c\n", ch - i);
	}

	return 0;
}