// CH-230-A
// a6_p3.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>

// Macro to determine the minimum among 
// the entered integers in the main function
#define minimum(x, y, z, min)          \
    {                                  \
        if ((x <= y) && (x <= z))      \
        {                              \
            min = x;                   \
        }                              \
        else if ((y <= z) && (y <= x)) \
        {                              \
            min = y;                   \
        }                              \
        else                           \
            min = z;                   \
}

// Macro to determine the maximum among 
// the entered integers in the main function
#define maximum(x, y, z, max)          \
    {                                  \
        if ((x >= y) && (x >= z))      \
        {                              \
            max = x;                   \
        }                              \
        else if ((y >= x) && (y >= z)) \
        {                              \
            max = y;                   \
        }                              \
        else                           \
            max = z;                   \
}

// Macro to determine the mid-range
#define mid_range(max, min, mid)      \
    {                                 \
        mid = (min + max) / (float)2; \
    }

int main() {
    int a, b, c, min, max;
    float mid;

    // Read integers from keyboard
    scanf("%d", &a);
    scanf("%d" ,& b);
    scanf("%d", & c);

    //Call macro for minimum value
    minimum(a, b, c, min);

    //Call macro for maximum value
    maximum(a, b, c, max);

    //Call macro for mid-range value
    mid_range(max, min, mid);

    printf("The mid-range is: %f\n", mid);

    return 0;
}