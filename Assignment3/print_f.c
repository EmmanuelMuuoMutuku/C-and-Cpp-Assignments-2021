// CH-230-A
// a3_p7.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de
#include <stdio.h>

//Function prototype
void print_form(int n, int m, char c);

int main() {
    int n, m;
    char c;

    //Reads integer from keyboard
    scanf("%d", &n); 
    scanf("%d", &m); 

    getchar();

    //Reads character from keyboard
    scanf("%c", &c);

    print_form(n, m, c);
    return 0;
}

    void print_form(int n, int m, char c) {
        char arr[50];
        for (int i_n = 1; i_n <= n; i_n++) { //for height n

        // Makes sure characters forming base m are side by side 
        //by putting them in an array to form a string
            for (int i_m = 1; i_m <= m; i_m++) { 
                arr[i_m] = c;

        //makes the position after the last character null
                arr[i_m + 1] = '\0'; 
            }
            printf("%s\n", arr);
            m++;
        }
    }