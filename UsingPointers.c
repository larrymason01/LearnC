/*
// Using Pointers

#include "stdio.h"

int main(int argc, char *argv[]) {

    int num1 = 0;
    int num2 = 0;
    int *pNum = NULL;

    pNum = &num1;   // pNum is now equal to the address of num1
    *pNum = 2;      // De-references pNum, sets num1 to 2
    num2++;         // num2 is now equal to 1
    num2 += *pNum;  // adds the value of num1 to num2 (num2 = 1 + 2).  num2 = 3

    pNum = &num2;   // pNum is now equal to the address of num2
    ++*pNum;        // increments num2.  num2 = 4.

    printf("num1 = %d\nnum2 = %d\n", num1, num2);
    printf("Address of num1: %p\nAddress of num2: %p\n", &num1, &num2);
    printf("Address of pNum: %p\n", &pNum);

    int value = 0;
    int *pValue = &value;

    printf("Input an integer value:");
    scanf("%d", pValue);

    printf("Value entered: %d", value);

    return 0;
}
*/
