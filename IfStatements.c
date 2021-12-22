// If Statements
#include "stdio.h"


int main(){
    int score = 95;
    int max = 90;

    // Basic If Statement

    if (score > max) {  // This can be written without the curly braces, since there is only 1 statement.
        printf("Jackpot!\n");   // However, if there is more than 1 statement, then there must be curly braces.
    }

    // If-else Statement

    int numberToTest, remainder;

    printf("Enter a number to test for even or odd: ");
    scanf("%i", &numberToTest);

    remainder = numberToTest % 2;

    if (remainder == 0) {
        printf("The number you entered is even.\n");
    } else {
        printf("The number you entered is odd.\n");
    }

    // Else-if statements

    int grade;

    printf("Enter your class grade: ");
    scanf("%d", &grade);

    if (grade >= 90) {
        printf("You got an A!\n");
    } else if (grade >=80) {
        printf("You got a B!\n");
    } else if (grade >= 70) {
        printf("You got a C!\n");
    } else if (grade >= 60) {
        printf("You got a D!\n");
    } else  {
        printf("You got an F :(\n");
    }

    return 0;
}

