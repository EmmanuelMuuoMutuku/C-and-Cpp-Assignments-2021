// CH-230-A
// a3_p8.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
// Function prototypes
float sum_arr(int a, float b[]);
float avg_arr(int a, float b[]);

    int main()  {
    int i;
    float arr[10];

    // For loop to enter 10 floats
    for(i = 0; i < 10; i++) {
        printf("Enter up to 10 floats:\n");
        scanf("%f", &arr[i]);

    //if condition to ensure it stops reading if equal to -99
        if(arr[i] == -99.0) { 
            break;
        }

    }

    //Function call for sum and average
    sum_arr(i,arr);
    avg_arr(i,arr);
    return 0;
}

    //Function for calculating sum of all floats entered
    float sum_arr(int a, float b[]) {
        int idx;
        float sum = 0;
            for (idx = 0; idx < a; idx++)   {
                sum += b[idx]; // sums up all values before -99
            }
        printf("sum: %f\n", sum);
        return (sum);
    }
        
    //Function for calculating average for all floats entered
    float avg_arr(int a, float b[]) {
        int idx;
        float sum = 0, avg;
            for (idx = 0; idx < a; idx++)   {
                sum += b[idx]; // sums up all values before -99
    }

    //Calculates average of all floats       
        avg = sum / idx;
        printf("average: %f\n", avg);
        return (avg);
    }




    