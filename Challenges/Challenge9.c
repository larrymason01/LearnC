// Print a user input using dynamic memory allocation

#include "stdio.h"
#include "stdlib.h"


int main() {
    char *input;
    int inputSize;

    printf("Enter the length of the string to input:\n");
    scanf("%d", &inputSize);

    input = (char*) malloc(inputSize * sizeof (char));

    if (input != NULL) {
        printf("Enter some text:\n");
        scanf("%s", input);
        printf("You entered: %s", input);
    }

    free(input);
    input = NULL;
    return 0;
}