// CH-230-A
// a9_p8.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>
#include <climits>

//Function prototype
//Identifies the largest number 
//and subtracts it from all the other elements
void subtract_max(int *arr, int n);

// Function prototype
// dealocates memory 
void deallocate(int *arr);

int main(int argc, char **argv)
{
    int n, *arr;
    std::cin >> n;

    //"Dynamic Memory allocation"
    arr = new int[n];

    //Loop to enter elements of an array
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    //Output values before function call
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << std::endl;
    }

    //Function call
    subtract_max(arr, n);

    //Output values after function call
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << std::endl;
    }

    //Function call to deallocate memory
    deallocate(arr);
    return 0;
}

void subtract_max(int *arr, int n) {
    int max = INT_MIN;

    //Loop to find the largest number in the array
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    //Loop to subtract max from all elements in array 
    for (int i = 0; i < n; i++) {
        arr[i] -= max;
    }
}

void deallocate(int *arr) {
    delete arr;
}