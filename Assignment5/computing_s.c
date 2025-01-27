// CH-230-A
// a5_p5.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>
#include <stdlib.h>
double dot_product(double v[], double w[], int n);
void small_v(double v[], double small, int n);
void large_v(double v[], double large, int n);
void small_w(double w[], double small, int n);
void large_w(double w[], double large, int n);

int main() 
{
    int i, n;
    int small = 0;
    int large = 0;
    double *v, *w;
    
    //Reads number n
    scanf("%d", &n);

    // Allocate memory for vector v
    v = (double *)malloc(sizeof(double) * n);

    if (v == NULL) {
      exit(1);
    }

     // Allocate memory for vector w
    w = (double *)malloc(sizeof(double) * n);

    if (w == NULL) {
      exit(1);
    }


    //Reads vector v
    for (i = 0; i < n; i++) {
          scanf("%lf", &v[i]);
    }

    // Reads vector w
    for (i = 0; i < n; i++) {
          scanf("%lf", &w[i]);
    }

    // Function call and prints the scalar product of vector v and w
    printf("Scalar product=%lf\n", dot_product(v, w, n));

    small_v(v, small, n);
    large_v(v, large, n);
    small_w(w, small, n);
    large_w(w, large, n);

    free(v);
    free(w);
    return 0;
}

double dot_product(double v[], double w[], int n)
{
    int i;
    double result = 0;
    for (i = 0; i < n; i++) {

    // calcualting the scalar vector
     result += v[i] * w[i]; 
    }

    return result;
}

void small_v(double v[], double small, int n) 
{
    int i, sm_position_v = 0;
     small = v[0]; // initializing
    for(i = 0; i < n; i++) {
      // if smaller value is encountered
        if(v[i] < small) {

          // update the value of small
          small = v[i];   

          // position of the smallest value
          sm_position_v = i; 
        }
    }
    printf("The smallest = %lf\n", small);
    printf("Position of smallest = %d\n", sm_position_v);
    
}

void large_v(double v[], double large, int n) 
{
    int i, lg_position_v = 0;
    large = v[0]; // initializing
    for(i = 0; i < n; i++) {

      // if smaller value is encountered
        if(v[i] > large) {
          
          // update the value of small
          large = v[i];   

          // position of largest position
          lg_position_v = i; 
        }
    }
    printf("The largest = %lf\n", large);
    printf("Position of largest = %d\n", lg_position_v);
}

void small_w(double w[], double small, int n) {
    int i, sm_position_w = 0;
    small = w[0]; // initializing
    for(i = 0; i < n; i++) {

      // if smaller value is encountered
        if(w[i] < small) {
          small = w[i];   // update the value of small
          sm_position_w = i; // position of the smallest value
        }
    }
    printf("The smallest = %lf\n", small);
    printf("Position of smallest = %d\n", sm_position_w);
    
}

void large_w(double w[], double large, int n) {
    int i, lg_position_w = 0;
    large = w[0]; // initializing
    for(i = 0; i < n; i++) {

      // if smaller value is encountered
        if(w[i] > large) {
          large = w[i];   // update the value of small
          lg_position_w = i; // position of largest position
        }
    }
    printf("The largest = %lf\n", large);
    printf("Position of largest = %d\n", lg_position_w);
}