// Create a program that finds the total number of lines in a text file

#include <stdio.h>

int main(int argc, char *argv[]) {
    int numOfLines = 1; // Need to start at
    FILE *pFile = NULL;

    pFile = fopen("challenge13.txt", "r");

    char c;
    while ((c = fgetc(pFile)) != EOF) {
        // ASCII value of '\n' is 10, so if the char read is 10, that means we started a new line
        if (c == '\n')
            numOfLines++;
    }

    printf("Number of lines in challenge13.txt: %d", numOfLines);

    return 0;
}
