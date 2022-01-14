// Blackjack game from Programming 1 class, made in C

#include "stdio.h";
#include "stdlib.h";
#include "stdbool.h"

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
    struct Card card;
};

void getCard();

// Main function
int main(int argc, char *arv[]) {
    return run();
}

// Run function, contains the main code for the Blackjack game
int run() {
    bool isRunning = true;

    struct Player ply;
    struct Player dealer;

    while(isRunning) {

    }

    return 0;
}

void getCard(struct Player *player) {
    player->card.num = rand();
}