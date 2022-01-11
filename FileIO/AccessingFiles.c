// Accessing Files

#include "stdio.h"

int main(int argc, char *argv[]) {

    // Standard code for opening a file
    FILE *pFile = NULL;
    char *fileName = "test.txt";
    pFile = fopen(fileName, "r");   // The mode is what action you want to perform with the file, such as reading and writing

    // Checks if the file wasn't successfully opened
    if(pFile == NULL) {
        printf("ERROR OPENING FILE: %s", fileName);
    }

    // Closing the file, make sure to use the file pointer, not the filename
    fclose(pFile);  // Returns -1 if failed, 0 if successful
    pFile = NULL;

    // Renaming a file, FILE MUST BE CLOSED!
    rename("test.txt", "test_copy.txt");    // Will return 0 if the name change was successful

    // Deleting a file, FILE MUST BE CLOSED!
    remove("test_copy.txt");

    return 0;
}
