// CH-230-A
// a5_p1.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>

//Function prototype
void tri_chars(int n, char ch);

int main() {
   int n;
   char ch;
   scanf("%d", &n); 
   getchar();
   scanf("%c", &ch);

   // Function call
   tri_chars(n, ch);
   return 0;
}

void tri_chars(int n, char ch) {
   int i, j;

   //Loop to decrease i from n to 1
   for (i = n; i >= 1; i--)
   {

      // Loop to increase j from 1 to i
      for (j = 1; j <= i; j++) {
         //Prints the chars in a triangle format
         printf("%c", ch);
      }
      printf("\n");
   }
}