// Dynamic memory Allocation
// Using malloc calloc and realloc

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(int argc, char *argv[]) {

    // malloc returns a void ptr, so it must be cast to an int ptr in this case
    int *ptr = (int*) malloc(100);
    // The above code allocates 100 bytes of memory, or 25 ints that are 4 bytes.  However, some systems may use a different byte size for ints.

    // This code allocates enough memory for 25 ints, no matter the size
    ptr = (int*) malloc(sizeof (int) * 25);

    // It is always good to free memory after you use it
    free(ptr);
    ptr = NULL;

    // calloc allocates memory as a number of elements with a given size (in bytes)
    int *numPtr = (int*) calloc(75, sizeof (int));
    // The advantage of calloc is that all memory is initialized to 0

    // Example using realloc

    char *string;

    string = (char*) malloc(15 * sizeof (char));         // Creates enough data for 15 characters

    strcpy(string, "Jeff");
    printf("String = %s     Address = %p\n", string, string);

    //string = (char*) realloc(string, 8 * sizeof (char));        // Reallocates memory, increases allocated memory to 25 characters
    strcat(string, ".com");

    printf("String = %s     Address = %p\n", string, string);

    free(string);                                                       // Always free memory after it is no longer needed

    return 0;
}

