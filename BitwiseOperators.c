#include <stdio.h>

int main() {

    //Bitwise Operators

    unsigned int a = 60;    // 0011 1100
    unsigned int b = 13;    // 0000 1101
    int result = 0;

    //AND
    result = a & b; // BOTH must be true
    printf("%d\n", result); // 0000 1100 = 12

    //OR
    result = a | b; // Only ONE needs to be true
    printf("%d\n", result); // 0011 1101 = 61

    //XOR
    result = a ^ b; // Only ONE MUST be true, both cannot be true
    printf("%d\n", result); // 0011 0001 = 49

    return 0;
}
