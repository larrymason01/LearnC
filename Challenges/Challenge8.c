// Using Pointers as Parameters
// Write a function that squares a number

#include "stdio.h"

void sqr(int *x);

int main(int argc, char *argv[]) {

    int a = 5;
    sqr(&a);
    printf("The square of a is: %d", a);

    return 0;
}

void sqr(int *x) {
    *x = (*x) * (*x);
}