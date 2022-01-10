// Declaring and Initializing a structure

#include "stdio.h"
#include "stdlib.h"

struct Employee {
    char *name;
    int hireDate;
    int salary;
};

int main(int argc, char *argv[]) {

    struct Employee em1 = {
            "Jeff",
            05162013,
            120000
    };

    struct Employee em2;

    printf("Enter name of employee:");
    scanf("%s", em2.name);

    printf("Enter hire date in the format MMDDYYYY:");
    scanf("%d", &em2.hireDate);

    printf("Enter the employee's salary:");
    scanf("%d", &em2.salary);


    printf("\nEmployee 1\n");
    printf("Name: %s\n", em1.name);
    printf("Hire Date: %d\n", em1.hireDate);
    printf("Salary: %d\n", em1.salary);

    printf("\nEmployee 2\n");
    printf("Name: %s\n", em2.name);
    printf("Hire Date: %d\n", em2.hireDate);
    printf("Salary: %d\n", em2.salary);

    return 0;
}

