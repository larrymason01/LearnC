// Create a program to calculate the length of a string

#include "stdio.h"

int getStringLength(const char *string);

int main(int argc, char *argv[]) {
    char *string = "Hello World";

    printf("Length of string: %d", getStringLength(string));

    return 0;
}

int getStringLength(const char *string) {
    int stringLength = 0;

    // While loop goes through the string until the character is equal to '\0' (This is when the pointer is equal to 0)
    while (*string) {
        ++stringLength; // Each time the loop is executed, 1 is added to stringLength
        ++string;       // At the end of the loop, the pointer is incremented, going to the next element in the array, or in the case of a string, the next character.
    }

    // Function returns the string length
    return stringLength;
}
