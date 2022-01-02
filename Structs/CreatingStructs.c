// Creating and Using Structs

#include "stdio.h"

struct date {       // Basic Struct Example
    int month;
    int day;
    int year;
};

int main(int argc, char *arv[]) {

    // Basic Initialization of Structs
    struct date today = {1, 2, 2022};
    struct date purchaseDate = {12, 21, 2020};

    printf("Today is: %d/%d/%d\n", today.month, today.day, today.year);
    printf("You purchased this item on: %d/%d/%d\n", purchaseDate.month, purchaseDate.day, purchaseDate.year);

    return 0;
}