#include <stdio.h>

int main(int argc, char* argv[]) {

    long int length;

    FILE *pFile = NULL;
    char *fileName = "test.txt";
    pFile = fopen(fileName, "r");

    if (pFile == NULL) {
        perror("Error opening file");
        return -1;
    }

    // fseek() tells the pointer where to point to, in this case the end of the file
    fseek(pFile, 0, SEEK_END);

    length = ftell(pFile);
    printf("Total size of %s is: %d bytes\n", fileName, length);

    fclose(pFile);

    // More in-depth example using fseek()

    fileName = "seek.txt";
    pFile = fopen(fileName, "w+");

    fputs("Hello World!", pFile);

    fseek(pFile, 12, SEEK_SET);
    length = ftell(pFile);
    fputs("How are you?", pFile);

    printf("The second string is written at byte %d\n", length);

    return 0;
}