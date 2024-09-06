#include <stdio.h>
#include <string.h>

// variables
struct list {
    int id;
    char itemName[30];
    float price;
};

// create display function
void display(struct list l[], int size, char cName[], char cAddress[]) {
    float total = 0;

    printf("\n\n\n\n");
    printf("\t\t    PASINDU STORES   \n");
    printf("\t-------------------------------------\n\n");
    printf(" Name : %s \n Address : %s \n", cName, cAddress);
    printf("\n\n");

    for (int i = 0; i < size; i++) {
        printf("Id : %d\n", l[i].id);
        printf("Name : %s\n", l[i].itemName);
        printf("Price : %.2f\n", l[i].price);
        printf("------------------------------\n");
        total += l[i].price;
    }

    // Display the total price
    printf("\t\n Total Price : %.2f", total);
    printf("\n\n");
    printf("\t     Thanks for visiting....!\n ");
    printf("\n\n");
}

// Main function
int main() {
    printf("**........WELCOME........**\n\n");


    char Name[30];
    char Address[50];
    int TotalItems;

    // Get customer's name
    printf("Enter your name: ");
    fgets(Name, sizeof(Name), stdin);
    Name[strcspn(Name, "\n")] = 0;

    // Get customer's address
    printf("Enter your address: ");
    fgets(Address, sizeof(Address), stdin);
    Address[strcspn(Address, "\n")] = 0;

    // Get the number of total items
    printf("Enter total items: ");
    scanf("%d", &TotalItems);
    printf("\n");


    struct list l[TotalItems];


    for (int i = 0; i < TotalItems; i++) {
        l[i].id = (i + 1);
        printf("Enter name of item %d: ", i + 1);
        scanf("%s", l[i].itemName);
        printf("Enter price of item %d: ", i + 1);
        scanf("%f", &l[i].price);
    }

    // Call display function to show the bill
    display(l, TotalItems, Name, Address);

    return 0;
}
