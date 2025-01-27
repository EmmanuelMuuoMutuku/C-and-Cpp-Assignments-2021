// CH-230-A
// a3_p6.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>

//Function prototype
float to_pounds(int kg, int g);

int main()
{
    int kg, g;
    
    // Reads values in kilograms and grams
    scanf("%d", &kg);
    scanf("%d", &g);

    //Print function together with the function call (to_pounds)
    printf("Result of conversion: %f\n", to_pounds(kg, g));

    return 0;
}

    float to_pounds(int kg, int g) {

        float pounds1;
        pounds1 = kg * 2.2; // converts kg to pounds

        float pounds2;
        pounds2 = g * 0.001 * 2.2; // converts g to pounds

        float sum;
        sum = pounds1 + pounds2; // sums up both values

        return (sum); 
    }