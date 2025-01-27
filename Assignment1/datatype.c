// CH-230-A 
// a1_p5.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>

int main() {
    //Declares & Initializes int x
    int x= 2138;
    //Declares & Initializes float y
    float y= -52.358925;
    //Declares & Initializes character z
    char z= 'G'; 
    //Declares & Initializes double variable u
    double u= 61.295339687;
    

    //Print function for the variables above
    printf("x=%9d\n", x);
    printf("y=%11.5f\n", y);
    printf("z=%c\n", z);
    printf("u=%.7f\n", u);
    return 0;
}