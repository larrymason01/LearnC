// Switch Statements
#include "stdio.h"

int main() {
    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum Weekday today = Monday;

    switch (today) {
        case Monday:
            printf("Today is Monday!");
            break;
        case Tuesday:
            printf("Today is Tuesday!");
            break;
        case Wednesday:
            printf("Today is Wednesday!");
            break;
        case Thursday:
            printf("Today is Thursday!");
            break;
        case Friday:
            printf("Today is Friday!");
            break;
        case Saturday:
            printf("Today is Saturday!");
            break;
        case Sunday:
            printf("Today is Sunday!");
        default:
            printf("ERROR!");
    }

    // Basic Calculator Using Switch Statements

    float value1, value2;
    char operator;

    printf("\nEnter the expression: ");
    scanf("%f %c %f", &value1, &operator, &value2);

    switch (operator) {
        case '+':
            printf("%f %c %f = %f", value1, operator, value2, (value1 + value2));
            break;
        case '-':
            printf("%f %c %f = %f", value1, operator, value2, (value1 - value2));
            break;
        case '*':
            printf("%f %c %f = %f", value1, operator, value2, (value1 * value2));
            break;
        case '/':
            if (value2 != 0) {
                printf("%f %c %f = %f", value1, operator, value2, (value1 / value2));
                break;
            } else {
                printf("Cannot divide by 0");
                break;
            }
        default:
            printf("Error: Unknown Operator");
    }

    return 0;
}
