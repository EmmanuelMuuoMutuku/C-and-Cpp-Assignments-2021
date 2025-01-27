// CH-230-A
// a3_p9.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de


#include <stdio.h>
//Function prototype
double sum25(double v[], int n);

    int main()  {
        int n, i = 0;
        double v[20];

        //Reads integers from keyboard
        scanf("%d", &n);
    
        // Reads doubles in array from keyboard
        for (i = 0; i < n; i++) { 
            scanf("%lf", &v[i]);
        }

        //Function call
        double sum = sum25(v, n); 

        // checks if positions 2 and 5 are valid
            if (sum != -111) {
                printf("sum=%lf\n", sum);
        }

        //Prints invalid
            else {
                printf("One or both positions are invalid\n");
            }
            return 0;
    }

    // Function to calculate sum of position 2 and 5
    double sum25(double v[], int n) { 
        double sum;
        if(n < 6) {
        return -111;
        }
        else {
        sum = v[2] + v[5];
        }
        return sum;
    }