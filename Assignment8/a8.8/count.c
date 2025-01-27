// CH-230-A
// a8_p8.c
// Emmanuel Mutuku
// emutuku@jacobs-university.de 

#include <stdio.h>
#include<ctype.h>

int main () {
    int count = 0, flag = 0;
    char ch, pocketNumber[80];
    FILE *countingFile;

    scanf("%s", pocketNumber);
    countingFile = fopen(pocketNumber, "r");

    while ((ch = (fgetc(countingFile))) != EOF) {

        // use of isalpha to check if its an alphabet
        // with reference to ctype.h
        if(isalpha(ch)) {
            //set to 1
            flag = 1;
            //move to the next character
            continue;
        }

        //if its not an alphabet 
        else {
            //if last char is an alphabet
            if (flag == 1) {

                //set to 0
                flag = 0;
                count++;
            }
            //if last char is not alphabet then separators 
            // are present
            else {
                continue;
            }
        }
    }

    //close
    fclose(countingFile);

    //Prints outputs depending on word count
    if (count == 0) {
        printf("The file contains no words.\n");
    }
    else if (count == 1) {
        printf("The file contains 1 word.\n");
    }
    else {
        printf("The file contains %d words.\n", count);
    }

    return 0;
}