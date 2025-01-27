// CH-230-A
// a8_p7.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de 

#include <stdio.h>
#include <stdlib.h>

int main () {
    char ch;

    FILE *textOne, *textTwo, *merge;

    //Open file one to read
    textOne = fopen("text1.txt", "r");

    //Open file two to read
    textTwo = fopen("text2.txt", "r");

    //Create a file called merge12.txt that will merge
    // contents of text1.txt and text.2
    merge = fopen("merge12.txt", "w+");

    //Check if opening was successful for all files
    if (textOne == NULL) {
        exit(1);
    }
    if (textTwo == NULL) {
        exit(1);
    }
    if (merge == NULL) {
        exit(1);
    }

    //Read from text1.txt and write to merge12.txt
    while ((ch = fgetc(textOne)) != EOF) {
        fputc((int)ch, merge);
    }

    //Read from text2.txt and write to merge12.txt
    while ((ch = fgetc(textTwo)) != EOF) {
        fputc((int)ch, merge);
    }

    //Close
    fclose(textOne);
    fclose(textTwo);
    fclose(merge);

    return 0;
}