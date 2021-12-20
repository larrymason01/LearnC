//Display byte size of basic data types
#include "stdio.h"

int main() {

    int i;
    char c;
    long l;
    long long ll;
    double d;
    long double ld;

    printf("Bytes in int: %d\n", sizeof i);
    printf("Bytes in char: %d\n", sizeof c);
    printf("Bytes in long: %d\n", sizeof l);
    printf("Bytes in long long: %d\n", sizeof ll);
    printf("Bytes in double: %d\n", sizeof d);
    printf("Bytes in long double: %d\n", sizeof ld);

    return 0;
}

