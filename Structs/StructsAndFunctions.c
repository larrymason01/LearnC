// Structures and Functions

#include "stdio.h"
#include "stdbool.h"
#include "string.h"

struct Family {
    char *name;
    int age;
    char *father;
    char *mother;
};

// Function that takes 2 family structs to determine if family members are siblings
bool areSiblings(struct Family member1, struct Family member2) {
    if(strcmp(member1.mother, member2.mother) == 0) {
        return true;
    } else {
        return false;
    }
}

// Same as above function, but more efficient by using struct pointers
bool areSiblingsPtr(struct Family *member1, struct Family *member2) {
    if(strcmp(member1->mother, member2->mother) == 0) {
        return true;
    } else {
        return false;
    }
}

int main(int argc, char *argv[]) {
    // Passing structs into functions

    struct Family member1;
    struct Family member2;

    member1.name = "Sam";
    member2.name = "Jeff";

    member1.mother = "Jessica";
    member2.mother = "Rebecca";

    if (areSiblings(member1, member2)) {
        printf("%s and %s are siblings!\n", member1.name, member2.name);
    } else {
        printf("%s and %s are not siblings!\n", member1.name, member2.name);
    }

    // Passing structs into functions using pointers

    struct Family *member1ptr = &member1;
    struct Family *member2ptr = &member2;

    if (areSiblingsPtr(member1ptr, member2ptr)) {
        printf("%s and %s are siblings!\n", member1ptr->name, member2ptr->name);
    } else {
        printf("%s and %s are not siblings!\n", member1ptr->name, member2ptr->name);
    }

    // Returning structs from functions


    return 0;
}