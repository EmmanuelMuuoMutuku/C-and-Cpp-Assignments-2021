#include <stdio.h>

int main() {
    char a_string[] = "This is a string\0";
    char *p;
    int count = 0;
    printf("The string: %s\n", a_string);
    for (p = &a_string[0]; *p != '\0'; p++)
    count++;
    printf("The string has %d chars.\n", count);
    return 0;
}