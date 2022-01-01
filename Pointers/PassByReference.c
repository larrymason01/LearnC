// Passing by reference

#include "stdio.h"

// Swap function for pass by value
void swap(int x, int y);

// Swap function for pass by reference.  Takes in 2 pointers as arguments, both pointing to an address in memory.
void swapNum(int *x, int *y);

int main(int argc, char *argv[]) {

    // Example of pass by value
    int a = 100;
    int b = 200;

    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);

    swap(a, b);

    printf("New value of a: %d\n", a);
    printf("New value of b: %d\n", b);

    // As can be seen by the output, the variables are not actually changed, since the data was only modified in the function.

    // Example of pass by reference
    int i = 100;
    int p = 200;

    printf("\nValue of i: %d\n", i);
    printf("Value of p: %d\n", p);

    swapNum(&i, &p);

    // Because the function took memory addresses as arguments, the value at the memory addresses were changed inside the function
    printf("New value of i: %d\n", i);
    printf("New value of p: %d\n", p);


    return 0;
}


// Swap function for pass by value
void swap(int x, int y) {
    int temp;

    temp = x;
    x = y;
    y = temp;
}

// Swap function for pass by reference
void swapNum(int *x, int *y) {
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}