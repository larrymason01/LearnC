// Structure Pointers and Functions Challenge

#include "stdio.h"

struct item {
    char *itemName;
    int quantity;
    float price;
    float total;    // (quantity * price)
};

void readItem(struct item *usrItem) {
    printf("Enter item name:");
    scanf("%s", usrItem->itemName);

    printf("Enter quantity:");
    scanf("%d", &usrItem->quantity);

    printf("Enter price:");
    scanf("%f", &usrItem->price);

    usrItem->total = (float) usrItem->quantity * usrItem->price;
}

void printItem (struct item *usrItem) {
    printf("\nItem name: %s\n", usrItem->itemName);
    printf("Item quantity: %d\n", usrItem->quantity);
    printf("Item price: %0.2f\n", usrItem->price);
    printf("Total Cost: %0.2f\n", usrItem->total);
}

int main(int argc, char *argv[]) {
    struct item item1;

    readItem(&item1);
    printItem(&item1);

    return 0;
}
