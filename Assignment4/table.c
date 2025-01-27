// CH-230-A
// a4_p1.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>

// Library for using Pie to calculate area and perimeter
#include <math.h>

//Function prototype
float enter_float();

    int main()  {
        float a;

        // Call function for lower limit
        float lower = enter_float();

        //Call function for upper limit
        float upper = enter_float();

        //Call function for step size
        float step = enter_float(); 

        // Print the radius area and perimeter
        for (a = lower; a <= upper; a += step)
        {
            printf("%f %f %f\n", a, a * a * M_PI, 2 * M_PI * a);
    }       
    return 0;
}


float enter_float() {

    // Creation of an array with 100 as limit
    char line [100];

    float number;

    // Reads from keyboard the characters entered
    fgets(line, sizeof(line), stdin);

    // Converts the characters entered to numbers(floats in this case)
    sscanf(line, "%f", &number);

    return (float) number;
}