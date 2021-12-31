//Convert minutes to years and days.
#include "stdio.h"


int main() {
    int minutes;
    double days;
    double years;

    int minutesInYear = 525960;

    scanf("%d", &minutes);

    years = minutes / minutesInYear;
    days = (minutes % minutesInYear) / 1440;

    printf("Years: %d  Days: %d", (int) years, (int) days);

    return 0;
}

