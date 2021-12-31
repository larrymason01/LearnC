// Local and Global Variables
#include "stdio.h"
#include "stdbool.h"

int x; // Global Keyword, defined outside any function, typically located at the top of the source file

void func();

int main(int argc, char *argv[]) {
    int i;  // Local Variable


    return 0;
}

void func() {
    int i;  // Automatic Local Variable, i can only be accessed inside func()
}