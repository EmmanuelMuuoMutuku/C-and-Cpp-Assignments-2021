// CH-230-A
// a9_p5.cpp
// Emmanuel Mutuku
// emutuku@jacobs-university.de

#include <iostream>
#include <cstdlib>
#include <ctime>

int main(int argc,  char **argv) {
    int guess, randomNumber, count = 0;
    std::string playerName;

    //Ask for players name
    std::cin >> playerName;

    //init random number generator
    srand(static_cast<unsigned int>(time(0)));

    //Gets a random number between 1-100
    randomNumber = (rand() % 100) + 1;

    //get guesses from player repeatedly
    while (1) {

        //Ask for players guess
        std::cin >> guess;

        //increment number of tries
        count++;

        //condition to let you know if your guess is low
        if (guess < randomNumber) {
            std::cout << "Too low!" << std::endl;
        }

        //condition to let you know if your guess is high
        else if (guess > randomNumber) {
            std::cout << "Too high!"<< std::endl;
        }

        //any other condition, you've won!
        else {
            std::cout << "Congratulations " << playerName
            << "! You guessed right after " << count << " tries!" 
            << std::endl;
            break;
        }
    }
    return 0;
}
