// CH-230-A
// a2_p9.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);

    // Condition to consider if the character entered is a digit
    if (a <= 57 && a >= 48) {
        printf("%c is a digit\n", a);
    }

    //Condition to consider if the character entered is a letter (Upper and lower)
    else if ((a <= 122 && a >= 97) || (a <= 90 && a >= 65)) {
        printf("%c is a letter\n", a);
    }

    //Condition to consider if the character entered is any other symbol
    else {
        printf("%c is some other symbol\n", a);
    }
    return 0;
}