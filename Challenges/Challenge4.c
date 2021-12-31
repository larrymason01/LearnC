// Number Guessing Game
#include "stdio.h"

int main() {
    int randNum = 15;
    int userGuess;

    int tries = 5;

    while (tries > 0) {

        if (tries != 1) {
            printf("I have chosen a number between 1 and 20, you must guess the number in %d tries: ", tries);
            scanf("%d", &userGuess);
        } else {
            printf("I have chosen a number between 1 and 20, you must guess the number in %d try: ", tries);
            scanf("%d", &userGuess);
        }

        if (userGuess == randNum) {
            printf("You have guessed the number!");
            break;
        } else if (userGuess > randNum) {
            printf("Number too high, try again!\n");
        } else {
            printf("Number too low, try again!\n");
        }

        tries--;
    }



    return 0;
}

