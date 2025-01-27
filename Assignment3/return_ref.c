// CH-230-A
// a3_p10.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de


#include <stdio.h>

float product(float a, float b);
void productbyref(float a, float b, float *p);
void modifybyref(float *a, float *b);

int main()
{
    float x, y;
    float prodbyref;

    printf("Enter first float:\n");
    scanf("%f", &x);
    printf("Enter second float:\n");
    scanf("%f", &y);

    float product1 = product(x, y);
    printf("Product1: %f\n", product1);

    //Return by reference
    productbyref(x, y, &prodbyref);
    printf("Product by reference: %f\n", prodbyref);

    //Return change by reference
    modifybyref(&x, &y);
    printf("x and y are now %f and %f\n", x, y);
    return 0;
}

//returns the product of the two float values
    float product(float a, float b) { 
        float product1;
        product1 = a * b;
        return product1;
    }

    void productbyref(float a, float b, float *p) {
        *p = a * b;
        
    }
    void modifybyref(float *a, float *b) {
        *a += 3;
        *b += 11;
    }