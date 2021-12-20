//The Cast and sizeof Operators
#include "stdio.h"

int main() {
    // The Cast Operator
    float x = 21.51;
    float y = 26.99;
    float result;

    // You typically always cast from a more precise data type, to a less precise, such as float to int
    result = (int) x + (int) y;
    printf("%f\n", result);   // Prints 47, because the cast operator converts the expression to 21 + 26

    // The sizeof operator
    int sizeX = sizeof x;   // sizeof returns how many bytes of memory are occupied by a given data type.
    printf("%d bytes\n", sizeX);    // In this case, the data type is int, so sizeof returns 4.

    return 0;
}
