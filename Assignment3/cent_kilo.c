// CH-230-A
// a3_p3.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
//Function prototype
float convert(int cm); 

int main()
{
    int a;
    scanf("%d", &a);

    //Function call for conversion
    float b= convert(a);

    //Prints the result
    printf("Result of conversion: %f\n", b); 
    return 0;
}

//Function that converts cm to km
float convert(int cm) {
        float km;
        km = cm * 0.00001;
        return (km);
    }
