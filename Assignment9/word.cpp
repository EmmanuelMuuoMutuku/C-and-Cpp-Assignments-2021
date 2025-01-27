// CH-230-A
// a9_p9.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char **argv) {
    int randomNumber, count;
    string input[17] = {"computer", "television", "keyboard", "laptop", "mouse"};
    char ch;
    string temp;
    string guess;
    string quit = "quit";
    string answer;
    
    //Loop to enter the other 12 inputs of my choice
    for (int i = 5; i < 17; i++) {
        getline(cin, input[i]);
    }

    do
    {
        //init random number generator
        srand(static_cast<unsigned int>(time(0)));

        //Gets a random number between 0-16
        randomNumber = (rand() % 17);

        //Count goes back to zero every time the game restarts
        count = 0;

        //The input is put in a temp
        temp = input[randomNumber];

        //Loop to replace all vowels with underscore
        for (int i = 0; i < (int)temp.length(); i++) {
            ch = temp[i];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                temp[i] = '_';
            }
        }

        cout << "What word could this be? " << temp << endl;

        //Infinite loop for player to guess word
        while (1) {
            cout << "Enter your guess: ";
            cin >> guess;

            //guess more times
            count++;

            //Condition to execute quiting if player types quit
            if (guess == quit) {
                return 0;
            }
            
            //Condition to check input entered and determine if
            //its right or wrong
            //if its right number of guesses is displayed
            //and the player is asked if they want to play again
            //if wrong, player is asked to try again

            else if (guess == input[randomNumber]) {
                // Check if word chosen is correct
                cout << "Number of tries: " << count << endl;
                cout << "Do you want to try again? Yes/No" << endl;

                //Input your answer
                cin >> answer;
                
                //Condition to try again
                if (answer == "Yes") {

                    //randomise again if one say yes
                    srand(static_cast<unsigned int>(time(0)));
                    break;
                }
                //if you say no it stops the program
                else if(answer == "No"){
                    return 0;
                }
                else {
                    continue;
                }
            }
        }

    } 
    while (1);
    return 0;
}