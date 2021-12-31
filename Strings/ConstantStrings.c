// Constant Strings
#include "stdio.h"
#include "stdlib.h"

#define NAME "Jeff" // A constant, not a variable, #define cannot be changed.  Typically, the name is in all caps.

int main(int argc, char *argv[]) {

    const int MONTHS = 12;  // MONTHS is also a constant, cannot change.

    printf("%s\n", NAME); // Using the constant NAME

    printf("There are %d months in a year.\n", MONTHS);

    return 0;
}