// CH-230-A
// a4_p3.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
#include <math.h>

// Function prototypes
float geometric_mean(float arr[], int num);
float lowest(float arr[], int num);
float highest(float arr[], int num);
float sum(float arr[], int num);

int main() {
    int a = 0;
    char c;
    float d;
    float arr[15];

    while(a < 15) {
        scanf("%f", &d);

        // to check if our non-constant value is less than 0
        if(d < 0) {
            break;
        }
        else {
        arr[a] = d; //pass value to array
        a++;
        }
    }

    getchar();
    
    // Enter character that tells us the function going to be executed
    scanf("%c", &c);


    switch(c) {
        case 'm':
        printf("Geometric mean= %f\n", geometric_mean(arr, a));
        break;

        case 'l':
        printf("Lowest value= %f\n", lowest(arr, a));
        break;

        case 'h':
        printf("Highest value= %f\n", highest(arr, a));
        break;

        case 's':
        printf("Geometric sum = %f\n", sum(arr, a));
        break;
    }
    return 0;
}

float geometric_mean(float arr[], int num) {
    float gm = 1;
    for(int i = 0; i < num; i++) {
        
        // element in i-th position multiplied with gm
        gm *= arr[i]; 
        
    }
    //returns geometric mean using the formula below
    return pow(gm, 1/(float)num); 
}


float lowest(float arr[], int num) {

    //lowest value is first element
    float low = arr[0]; 
    for(int i = 0; i < num; i++) {

        //if comparison to determine lowest number
        if(arr[i]<low) {
            low = arr[i];
        }
    }
    return low;
}

 // same as above but for the highest value now
float highest(float arr[], int num) {
    float high = arr[0];
    for(int i = 0; i < num; i++) {

        //if loop comparison to determine the highest number
        if(arr[i]>high) {
            high = arr[i];
        }
    }   
    return high; 
}

float sum(float arr[], int num) {
    float sum = 0;
    for(int i = 0; i < num; i++) {
        sum += arr[i];
    }
    return sum;
}   