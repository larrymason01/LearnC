// Structures and Pointers

#include "stdio.h"

struct date {
    int month;
    int day;
    int year;
};

int main(int argc, char *arv[]) {
    struct date *datePtr;

    struct date todaysDate = {
            1, 5, 2022
    };

    // Assigning the address of an already created struct to datePtr
    datePtr = &todaysDate;

    // Indirectly accessing values in a struct
    (*datePtr).day = 6;

    // Same output as above code
    datePtr->day = 6;

    // Example usage
    if(datePtr->month == 12)
        printf("December\n");

    return 0;
}