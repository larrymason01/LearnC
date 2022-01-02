// Structures and Arrays

#include "stdio.h"


struct date {
    int month;
    int day;
    int year;
};

struct month {
    int numOfDays;
    char name[3];
};

int main(int argc, char *argv[]) {

    // Defining an array of struct date
    struct date purchaseDates[10];

    // Initializing the first element
    purchaseDates[0].month = 12;
    purchaseDates[0].day = 14;
    purchaseDates[0].year = 2001;

    struct month January;
    January.numOfDays = 31;
    January.name[0] = 'J';
    January.name[1] = 'A';
    January.name[2] = 'N';

    return 0;
}
