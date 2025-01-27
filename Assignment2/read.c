// CH-230-A 
// a2_p1.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
int main() {
    // variable declaration
    double d1, d2, sum, difference, square;
    int x1, x2,i_sum,i_product,c_sum,c_product;
    char a1, a2;

    //Reading doubles from keyboard
    scanf("%lf",&d1);
    scanf("%lf",&d2);

    // Reading integers from keyboard
    scanf("%d", &x1);
    scanf("%d", &x2);

    //Reading chars from the keyboard
    getchar();
    scanf("%c", &a1);
    getchar();
    scanf("%c", &a2);
   
    //Calculating sum,product and square of doubles
    sum= d1 + d2;
    difference= d1 - d2;
    square = d1 * d1;

    //Printing the results
    printf("sum of doubles=%lf\n", sum);
    printf("difference of doubles=%lf\n", difference);
    printf("square=%lf\n", square);

    //Calculating sum and product of integers
    i_sum=x1 + x2;
    i_product= x1 * x2;

    // Printing sum and product of integers
    printf("sum of integers=%d\n", i_sum);
    printf("product of integers=%d\n", i_product);

    //Calculating sum and product of chars
    c_sum= a1 + a2;
    c_product= a1 * a2;

    //Printing the results
    printf("sum of chars=%d\n", c_sum);
    printf("product of chars=%d\n", c_product);
    printf("sum of chars=%c\n", c_sum);
    printf("product of chars=%c\n", c_product);
    return 0;
}
