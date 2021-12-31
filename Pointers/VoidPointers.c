// Void Pointers

#include <stdio.h>

int main(int argc, char *argv[]) {

    // void* can store the address of a data item of any type
    int num = 25;
    float f = 2.34;
    char ch = 'k';

    void* vPtr;

    // You cannot dereference a pointer directly, you must cast it to another pointer type.
    vPtr = &num;
    printf("Value of num: %d\n", *(int*)vPtr);

    vPtr = &f;
    printf("Value of f: %f\n", *(float*)vPtr);

    vPtr = &ch;
    printf("Value of ch: %c\n", *(char*)vPtr);


}
