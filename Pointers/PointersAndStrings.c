// Pointers and Strings

#include "stdio.h"

void copyString(char *dest, char *src);

int main(int argc, char *argv[]) {

    char firstString[] = "My name is jeff";
    char secondString[512]; // Set a size to ensure there is enough memory allocated

    copyString(secondString, firstString);

    printf("secondString = %s", secondString);

    return 0;
}

// Copies char *src to char *dest
void copyString(char *dest, char *src) {

    for ( ; *src != '\0'; src++, dest++) {
        // De references the pointers and sets the destination char to the source char
        *dest = *src;
    }
}