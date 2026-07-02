
#include <stdio.h>
#include <string.h>
struct Item
{
    char name[100];
    int quantity;
};

struct Item items[100];
int noOfItems = 0;

void addItem()
{
    getchar();

    struct Item newItem;

    printf("Enter the name of the new item\n");
    gets(newItem.name);
    printf("Enter the quantity\n");
    scanf("%d", &newItem.quantity);

    items[noOfItems] = newItem;
    noOfItems++;
}
void viewItems()
{
    printf("\n***********************\n");
    for (int i = 0; i < noOfItems; i++)
    {
        printf("(%s , %d)\n", items[i].name, items[i].quantity);
    }
    printf("\n***********************\n");
}
void updateItems()
{
    getchar();

    char itemNameForUpdate[100];
    int newQuantity;
    printf("Enter the name of the item you want to update\n");
    gets(itemNameForUpdate);
    printf("Enter the new quantity\n");
    scanf("%d", &newQuantity);

    for (int i = 0; i < noOfItems; i++)
    {
        if (strcmp(itemNameForUpdate, items[i].name) == 0)
        {
            items[i].quantity = newQuantity;
            printf("Item updated successfully!\n");
            return;
        }
    }

    printf("Item not found!\n");
    return;
}
void deleteItems()
{
    getchar();

    printf("Enter the name of the item you want to delete\n");
    char itemToDelete[100];
    gets(itemToDelete);

    for (int i = 0; i < noOfItems; i++)
    {
        if (strcmp(itemToDelete, items[i].name) == 0)
        {
            // deleting by pulling
            for (int j = i; j <= noOfItems - 2; j++)
            {
                items[j] = items[j + 1];
            }
            noOfItems--;
            printf("Item deleted successfully!\n");
            return;
        }
    }
    printf("Item not found!\n");
    return;
}
int main()
{

    while (1)
    {
        printf("Please select an option\n");
        printf("1. Add an item\n");
        printf("2. View items\n");
        printf("3. Update an item\n");
        printf("4. Delete an item\n");
        printf("5. Exit\n");

        int option;
        scanf("%d", &option);

        if (option == 1)
        {
            addItem();
        }
        else if (option == 2)
        {
            viewItems();
        }
        else if (option == 3)
        {
            updateItems();
        }
        else if (option == 4)
        {
            deleteItems();
        }
        else if (option == 5)
        {
            // write the array and noOfItems to a file
            break;
        }
        else
        {
            printf("Enter the correct choice!\n");
        }
    }

    return 0;
}