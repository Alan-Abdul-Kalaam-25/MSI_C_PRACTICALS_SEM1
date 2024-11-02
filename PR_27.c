/*
Create a structure item (char item_name[10],int qty,float price,float total_amt) . Enter details regarding items. Create a pointer variable *pitem of a structure item and access the elements or members of a structure using pointer variable by using -> operator.
*/

#include <stdio.h>

struct item
{
    char item_name[10];
    int qty;
    float price;
    float total_amt;
};

int main()
{
    struct item itm;
    struct item *pitem = &itm;

    printf("Enter item name: ");
    scanf("%s", pitem->item_name);

    printf("Enter quantity: ");
    scanf("%d", &pitem->qty);

    printf("Enter price: ");
    scanf("%f", &pitem->price);

    // Calculate total amount
    pitem->total_amt = pitem->qty * pitem->price;

    printf("\nItem Details:\n");
    printf("Item Name: %s\n", pitem->item_name);
    printf("Quantity: %d\n", pitem->qty);
    printf("Price: %.2f\n", pitem->price);
    printf("Total Amount: %.2f\n", pitem->total_amt);

    return 0;
}
