// CH-230-A 
// a2_p3.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>

int main() {
    int hours, days, weeks;

    scanf("%d", &hours); 
    scanf("%d",&days);
    scanf("%d",&weeks);

    // Convertion of weeks and days to hours
    int h_days= (days * 24);
    int h_weeks= (weeks * 7 * 24);

    int sum= (hours + h_days + h_weeks);

    printf("Total number of hours=%d\n", sum);
    return 0;

    
}