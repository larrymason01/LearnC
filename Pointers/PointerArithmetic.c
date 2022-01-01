// Pointer Arithmetic

#include <stdio.h>

int getArraySum(int array[], const int length);

int main(int argc, char *argv[]) {

    int values[10] = {1, 2, 3, 4, 5,6, 7, 8, 9 ,10};
    int* valuesPtr;

    // Currently, valuesPtr is pointing to the first element in the array, or values[0]
    valuesPtr = values;

    // Essentially creating a loop that executes 10 times, each time incrementing valuesPtr
    for (int i = 0; i < 10; i++) {
        printf("%d\n", *valuesPtr);
        valuesPtr++;
    }

    // Using a function written to find the total sum of an int array
    printf("\nThe sum of the array is: %d\n", getArraySum(values, 10));



    return 0;
}


int getArraySum(int array[], const int length) {
    int sum = 0;
    int *arrayPtr;

    arrayPtr = array;

    for (int i = 0; i < length; i++) {
        sum += *arrayPtr;
        arrayPtr++;
    }

    return sum;
}