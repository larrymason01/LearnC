// Nested Structures

#include "stdio.h"

struct date {
    int month;
    int day;
    int year;
};

struct time {
    int minutes;
    int hours;
    int seconds;
};

struct dateAndTime {
    struct date sdate;
    struct time stime;
};

int main(int argc, char *argv[]) {

    struct dateAndTime birthday;

    birthday.sdate.month = 12;
    birthday.sdate.day = 14;
    birthday.sdate.year = 2001;

    struct dateAndTime now;

    now.sdate.month = 1;
    now.sdate.day = 2;
    now.sdate.year = 2022;
    now.stime.minutes = 50;
    now.stime.hours = 3;
    now.stime.seconds = 45;

    return 0;
}