#include <stdio.h>
// Structure to store product details
struct Product {
    int id;
    char name[50];
    int quantity;
    float price;
};
int main() {
    struct Product p[100];
    int n = 0, i, choice;
    // Repeat menu until Exit
    do {
        printf("\n========== INVENTORY MANAGEMENT SYSTEM ==========\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                // Add a new product
                printf("\nEnter Product ID: ");
                scanf("%d", &p[n].id);
                printf("Enter Product Name: ");
                scanf("%s", p[n].name);
                printf("Enter Quantity: ");
                scanf("%d", &p[n].quantity);
                printf("Enter Price: ");
                scanf("%f", &p[n].price);
                n++; // Increase product count
                printf("Product added successfully!\n");
                break;
            case 2:
                // Display all products
                if(n == 0) {
                    printf("No products available.\n");
                } else {
                    printf("\n-------------------------------\n");
                    printf("ID\tName\tQty\tPrice\n");
                    printf("-------------------------------\n");
                    for(i = 0; i < n; i++) {
                        printf("%d\t%s\t%d\t%.2f\n",
                               p[i].id,
                               p[i].name,
                               p[i].quantity,
                               p[i].price);
                    }
                }
                break;
            case 3:
                // Exit
                printf("Exiting Inventory Management System...\n");
                break;
            default:
                // Invalid choice
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 3);
    return 0;
}