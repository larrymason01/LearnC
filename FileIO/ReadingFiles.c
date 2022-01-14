// Reading from a file

#include "stdio.h"

int main(int argc, char *argv[]) {
    FILE *file;
    int c;

    // With CMake, the file must be stored in the cmake-build-debug folder, this is where the executable is located
    char *filename = "test.txt";
    file = fopen(filename, "r");

    if (file == NULL) {
        perror("ERROR OPENING FILE");
        return (-1);
    }

    // Reads a single char until EOF is reached
    while ((c = fgetc(file)) != EOF) {
        printf("%c", c);
    }

    fclose(file);
    file = NULL;
    return 0;
}
