#include <stdio.h>

int main(int argc, char *argv[]) {

    // Opening the test.txt file
    FILE *pFile = NULL;
    char *fileName = "test.txt";
    pFile = fopen(fileName, "w+");

    // Printing out ASCII values 33-100 to the test.txt file
    for (int ch = 33; ch <= 100; ch++) {
        fputc(ch, pFile);
    }

    fileName = "hello.txt";
    pFile = fopen(fileName, "w+");

    // Using the fputs() function to write a string to a file
    fputs("Hello World!", pFile);

    // Make sure to always close the file and set the file pointer to null at the end of the program
    fclose(pFile);
    pFile = NULL;

    return 0;
}
