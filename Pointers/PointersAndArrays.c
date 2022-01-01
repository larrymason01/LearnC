// Pointers and Arrays

#include "stdio.h"

int main(int argc, char *argv[]) {

    // One common use of pointers in C is as pointers to arrays
    int values[100];

    int *valuesPtr;

    // This sets valuesPtr to the first element in the values array
    valuesPtr = values;
    // Under the hood, arrays are pointers, this is why &values is not needed in the above statement

    // OR
    valuesPtr = &values[0];
    // This also operates the same, however not needed



    return 0;
}