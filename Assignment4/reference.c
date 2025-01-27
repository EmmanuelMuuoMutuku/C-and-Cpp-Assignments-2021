// CH-230-A
// a4_p10.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
#include <math.h>

//Function prototype
void proddivpowinv (float a, float b, float *prod, 
float *div, float *pwr, float *invb);


int main() {
    float x, y, multiply, division, power, inverse;

    printf("Enter Value1:");
    scanf("%f", &x);
    printf("Enter Value2:");
    scanf("%f", &y);

    //Function call to print the results of the calculations
    proddivpowinv(x, y, &multiply, &division, &power, &inverse);
    printf("Product = %f\n", multiply);
    printf("Division = %f\n", division);
    printf("Power = %f\n", power);
    printf("Inverse = %f\n", inverse);

    return 0;
}

void proddivpowinv (float a, float b, float *prod, 
float *div, float *pwr, float *invb) {

    // Calculates product of two floats
    *prod = a * b;

    // Calculates division of two floats
    *div = a / b;

    // Calculates a raised to the power of b
    *pwr = pow(a, b);

    // Calculates the inverse of b
    *invb = 1 / b;
}