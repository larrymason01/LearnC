//// Searching, Tokenizing, and Analyzing Strings
//
//#include "stdlib.h"
//#include "stdio.h"
//#include "string.h"
//#include "ctype.h"
//
//int main(int argc, char *argv[]) {
//
//    // strchr() function    Searching for a character
//    char str[] = "The quick brown fox jumps over the lazy dog"; // String to be searched
//    char ch = 'q';                                              // Character to find
//
//    char *pGot_char = NULL;                                     // Initialize pointer to NULL
//    pGot_char = strchr(str, ch);                        // Stores the address of where ch is found
//
//    // strstr() function    Search for a substring
//    char text[] = "Every dog has his day";
//    char word[] = "dog";
//
//
//    char *pGot_word = NULL;
//    pGot_word = strstr(text, word);
//
//    // Tokenizing a String
//    char string[80] = "Hello World!-How are you?-My name is Max!";
//    const char d[2] = "-";
//    char *token;
//
//    token = strtok(string, d);
//
//    while(token != NULL) {
//        printf("%s\n", token);
//
//        token = strtok(NULL, d);
//    }
//
//    // Analyzing Strings
//    char buf[100];              // String to be read through
//    int nLetters = 0;           // How many letters
//    int nDigits = 0;            // How many numbers
//    int nPunct = 0;             // How many punctuation characters
//
//    printf("\nEnter a string of less than %d digits:\n", 100);
//    scanf("%s", buf);
//
//    int i = 0;
//    while (buf[i]) {
//        if(isalpha(buf[i]))
//            ++nLetters;
//        else if(isdigit(buf[i]))
//            ++nDigits;
//        else if(ispunct(buf[i]))
//            ++nPunct;
//       i++;
//    }
//
//    printf("Letters: %d\n", nLetters);
//    printf("Numbers: %d\n", nDigits);
//    printf("Punctuation: %d\n\n", nPunct);
//
//    // Converting Strings
//    char buf2[100];
//
//    printf("Enter a string to convert to uppercase:\n");
//    scanf("%s", buf2);
//
//    // Loops through the char array and sets each element to uppercase
//    for (int i = 0; buf2[i] != '\0'; ++i) {
//        buf2[i] = (char) toupper(buf2[i]);
//    }
//
//    printf("%s\n", buf2);
//
//
//    char numStr[] = "98.5";
//    double num = atof(numStr);
//
//    printf("\n%e\n", num);
//
//    return 0;
//}
