// Reading from a file

#include "stdio.h"

int main(int argc, char *argv[]) {
    FILE *file;
    int c;

    // With CMake, the file must be stored in the cmake-build-debug folder, this is where the executable is located
    char *filename = "test.txt";
    file = fopen(filename, "r");

    // Checking for errors
    if (file == NULL) {
        perror("ERROR OPENING FILE");
        return (-1);
    }

    // Reading a string from a file
    char str[512];  // You must define a string where fgets() will store the data it reads

    if (fgets(str, 128, file) != NULL) {
        printf("%s", str);
    } else {
        printf("ERROR READING STRING FROM FILE");
    }

    fclose(file);
    file = NULL;
    return 0;
}
