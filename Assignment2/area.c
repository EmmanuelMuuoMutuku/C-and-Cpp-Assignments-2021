// CH-230-A
// a2_p4.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>

int main() {
    float a, b, h;

    //Read from keyboard
    scanf("%f", &a); 
    scanf("%f",&b);
    scanf("%f",&h);

    //Calculating area for square,rectangle,triangle,trapezoid
    float s_area= (a * a);
    float re_area= (a * b);
    float tri_area= ((a * h) /2);
    float tra_area= (((a + b) /2) * h);

    //Print 
    printf("square area=%f\n", s_area);
    printf("rectangle area=%f\n", re_area); 
    printf("triangle area=%f\n", tri_area);
    printf("trapezoid area=%f\n", tra_area);
    return 0;
}