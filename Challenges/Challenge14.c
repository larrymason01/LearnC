#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define FILENAME "challenge14.txt"

int main(int argc, char* arv[]) {
    char ch = ' ';

    FILE *fp;
    FILE *fpt;

    fp = fopen(FILENAME, "r");
    if (fp == NULL)
        return -1;

    fpt = fopen("temp.txt", "w");
    if (fpt == NULL)
        return -1;

    // Reading the file, sending the char to the toUpper() function to be converted, then getting the converted char and putting it in the temp file
    while ((ch = fgetc(fp)) != EOF) {
        if(islower(ch)) {
            ch = ch - 32;
        }

        fputc(ch, fpt);
    }

    fclose(fp);
    fclose(fpt);

    // Deletes the original file, renames the temp file to the name of the original file, then deletes the temp file
    remove (FILENAME);
    rename("temp.txt", FILENAME);
    remove("temp.txt");

    fp = fopen(FILENAME, "r");

    while((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fp = NULL;
    fpt = NULL;
    return 0;
}
