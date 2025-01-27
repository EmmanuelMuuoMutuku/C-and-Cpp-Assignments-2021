// CH-230-A
// a3_p5.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>

    int main() {
        char c;
        int n, i; 
        double array[100];
        double sum = 0;

        
        printf("Enter character:\n");
        scanf("%c", &c); 
        printf("How many values do you want to enter?\n");
        scanf("%d", &n);

        // Reads temperature readings from i=0 to i = (n-1)
        for (i = 0; i < n; i++) {
            printf("Read temperature in degrees: \n");
            scanf("%lf", &array[i]);
            sum += array[i];
        }
            
            // Sum of all temperatures
            switch (c) {
                case 's':
                printf("Sum of all Temperatures: %lf\n", sum);
                break;

            // List of all temperatures
                case 'p':
                printf("List of all Temperatures:\n");
                for (i = 0; i < n; i++) { 
                printf("%lf\n", array[i]);
                }
                break;

            // List of all temperatures in Fahrenheit
                case 't':
                printf("List of all Temperatures in Fahrenheit:\n");
                for (i = 0; i < n; i++) { 
                printf("%lf\n", (array[i]* 9 / 5) + 32);
                } 
                break;

            // Mean/average of all temperatures
                default:
                printf("The mean of all temperatures: %lf\n", sum / n);
            }

        return 0;
    }

