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

    //Ones Complement Operator
    result = ~a;    // Flips the bits in 2's complement form.
    printf("%d\n", result); // 1100 0011 = -61

    //Binary Left Shift Operator
    result = a << 2;    // Value of a is shifted left by 2 bits
    printf("%d\n", result); // 1111 0000 = 240

    //Binary Right Shift Operator
    result = a >> 2;    // Value of a is shifted right by 2 bits
    printf("%d\n", result); // 0000 1111 = 15

    return 0;
}
