// CH-230-A
// a5_p11.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include<stdio.h>
#include<math.h>
int isPrime(unsigned int num, unsigned int test);

int main() {
    unsigned int x;

    scanf("%u", &x);

    //Condition to check if its prime or not
    // Second argument to raise efficiency 
    if(isPrime(x, sqrt(x) + 1) == 1) {
        printf("%u is prime\n", x);
    } 
    else printf("%u is not prime\n", x);
    
    return 0;
}

int isPrime(unsigned int num, unsigned int i) {
    // It is not a prime number
    if(num < 2) 
        return 0; 
    // If its 2 its a prime number
    if(num == 2)
        return 1;

    //Check if recursion case has arrived at 1
    if (i == 1) { 
        return 1;

    } 
    else {

        //If remainder is 0 return 0 hence not prime
        if (num % i == 0) 
            return 0;
        else{

            //Recursive call 
            return isPrime(num, i - 1); 
        }
    }
}
