// Blackjack game from Programming 1 class, made in C

#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"
#include "string.h"
#include "time.h"   // time.h is only used for generating a seed for the rand() function

int run();

struct Card {
    int num;
    int val;
    char *name;
};

// A player structure, used to define the dealer and the player
struct Player {
    int handVal;
    int winNum;
    int lossNum;
    int gamesPlayed;
    struct Card card;
};

void getCard();
void printGameMenu();
bool processInput(int usrInput, struct Player *ply, struct Player *dealer);
void printCardInfo(struct Player *ply, bool isPlayer);
bool canContinue(struct Player *ply);
void checkWin(struct Player *ply, struct Player *dealer);

// Main function
int main(int argc, char *arv[]) {
    return run();
}

// Run function, contains the main code for the Blackjack game
int run() {

    // Game variables
    bool isRunning = true;
    bool isDrawing; // This variable is used to check if the user is still drawing cards, assigned in the main loop
    int gameNum = 1;

    // User input variables
    int usrInput;
    char *inBuf;

    // Sets the seed for rand(), prevents same random values being used between runs
    srand(time(0));

    // Initialization code for players and initial card
    struct Player ply = {0, 0, .card.name = calloc(sizeof (char), 10), .gamesPlayed = 0};
    struct Player dealer = {0, 0, .card.name = calloc(sizeof (char), 10), .gamesPlayed = 0};

    // In the above code, we dynamically allocate memory using calloc() to make sure the char pointer has
    // enough memory to contain the card.name string

    struct Player *plyPtr = &ply;
    struct Player *dealerPtr = &dealer;

    // Main while loop
    while(isRunning) {

        plyPtr->handVal = 0;
        dealerPtr->handVal = 0;

        getCard(plyPtr);
        getCard(dealerPtr);

        printf("Starting Game #%d\n\n", gameNum);

        printf("Your card is a %s\n", ply.card.name);
        printf("Your hands total is: %d\n\n", ply.handVal);

        // Prints the game menu
        printGameMenu();

        isDrawing = true;

        while (isDrawing) {
            // Gets the user's menu choice, using strtol() to prevent conversion errors
            printf("Enter a menu choice 1-4:");
            scanf("%s", inBuf);
            printf("\n");
            usrInput = strtol(inBuf, NULL, 10);

            if (usrInput == 4) {
                isRunning = false;
                break;
            }

            //isRunning = processInput(usrInput, plyPtr, dealerPtr);
            isDrawing = processInput(usrInput, plyPtr, dealerPtr);
        }

        if (isRunning) {
            checkWin(plyPtr, dealerPtr);
            gameNum++;
        }
    }

    return 0;
}

void getCard(struct Player *ply) {

    // Generates a random number, 1-13, which will then be used to determine which card is drawn,
    // and the value

    ply->card.num = rand() % (13 - 1 + 1) + 1;

    // Code that determines card name and value based on the card number, and adds the card value
    // to the hand total of the player passed in to the function

    switch (ply->card.num) {
        case 1:
            ply->card.name = "ACE!";
            ply->card.val = 1;
            ply->handVal += ply->card.val;
            break;
        case 11:
            ply->card.name = "JACK!";
            ply->card.val = 10;
            ply->handVal += ply->card.val;
            break;
        case 12:
            ply->card.name = "QUEEN!";
            ply->card.val = 10;
            ply->handVal += ply->card.val;
            break;
        case 13:
            ply->card.name =  "KING!";
            ply->card.val = 10;
            ply->handVal += ply->card.val;
            break;
        default:
            // This default case deals with numbers 2-10
            sprintf(ply->card.name, "%d", ply->card.num);   // Converts the card number to a string value
            ply->card.val = ply->card.num;
            ply->handVal += ply->card.val;
            break;
    }

}

void printGameMenu() {
    printf("1. Draw Card\n");
    printf("2. Hold Hand\n");
    printf("3. Print Statistics\n");
    printf("4. Exit Game\n\n");
}

bool processInput(int usrInput, struct Player *ply, struct Player *dealer) {
    switch (usrInput) {
        case 1: // User wants to draw a card
            getCard(ply);
            printCardInfo(ply, true);
            // If the player didn't instantly win or loose, continue the game
            if (canContinue(ply)) {
                return true;
            } else {    // If the player DID instantly win or loose, return false
                return false;
            }
        case 2: // Player wants to hold, dealer will then draw a card
            getCard(dealer);
            printCardInfo(dealer, false);
            return false;
        case 3:
            printf("\nHello\n");
            return true;
        case 4:
            return false;
    }
}

void printCardInfo(struct Player *ply, bool isPlayer) {
    if (isPlayer) { // Indicates the player is calling the function
        printf("Your card is a: %s\n", ply->card.name);
        printf("Your hands total is: %d\n\n", ply->handVal);
    } else {    // Indicates the dealer is calling the function
        printf("The dealer's card is: %s\n", ply->card.name);
        printf("The dealer's hand total is: %d\n\n", ply->handVal);
    }
}

// This function is used to check the instant win or loss of the player
bool canContinue(struct Player *ply) {
    int val = ply->handVal;

    if (val > 21 || val == 21) {    // If they instantly won or loss, then return false
        return false;
    }

    return true;
}

void checkWin(struct Player *ply, struct Player *dealer) {
    if (ply->handVal > 21) {
        printf("You lost!\n\n");
        return;
    } else if (ply->handVal == 21) {
        printf("Blackjack! You won!\n\n");
        return;
    } else {
        if (dealer->handVal > 21) {
            printf("You Win!");
        } else if (dealer->handVal < 21) {
            if (dealer->handVal > ply->handVal) {
                printf("You lost!");
            } else if (dealer->handVal < ply->handVal) {
                printf("You win!");
            }

        }
    }
}