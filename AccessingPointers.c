/*
// Accessing Pointers

#include "stdio.h"

int main(int argc, char *argv[]) {

    // Simple de-referencing example
    int number = 15;
    int *pNumber = &number;
    int result = 0;

    result = *pNumber + 5;  // * is also the de-referencing operator.  When used outside the declaration, it returns the value of the stored memory address of the pointer.
    printf("%d\n", result);

    // More advanced example
    int count = 10, x;
    int *iPointer = &count; // Sets iPointer to the memory address of count
    x = *iPointer;  // Sets x to the value of the memory address stored in iPointer.

    printf("count = %i\nx = %i", count, x);

    return 0;
}*/
