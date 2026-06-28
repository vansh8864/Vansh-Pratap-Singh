#include <stdio.h>
// Structure to store book details
struct Library
{
    int id;
    char name[50];
    char author[50];
    int quantity;
};
int main()
{
    // Array of structure to store multiple books
    struct Library book[100];
    int n, i, choice, searchId, found = 0;
    // Input total number of books
    printf("Enter number of books: ");
    scanf("%d", &n);
    // Input details of each book
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Book %d\n", i + 1);
        printf("Book ID: ");
        scanf("%d", &book[i].id);
        printf("Book Name: ");
        scanf(" %[^\n]", book[i].name);
        printf("Author Name: ");
        scanf(" %[^\n]", book[i].author);
        printf("Quantity: ");
        scanf("%d", &book[i].quantity);
    }
    // Menu starts
    do
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Display All Books\n");
        printf("2. Search Book by ID\n");
        printf("3. Issue Book\n");
        printf("4. Return Book\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            // Display all books
            case 1:
                printf("\nBook Details:\n");
                for(i = 0; i < n; i++)
                {
                    printf("\nBook ID      : %d", book[i].id);
                    printf("\nBook Name    : %s", book[i].name);
                    printf("\nAuthor       : %s", book[i].author);
                    printf("\nQuantity     : %d\n", book[i].quantity);
                }
                break;
            // Search a book using Book ID
            case 2:
                found = 0;
                printf("Enter Book ID to search: ");
                scanf("%d", &searchId);
                for(i = 0; i < n; i++)
                {
                    if(book[i].id == searchId)
                    {
                        printf("\nBook Found!\n");
                        printf("Book Name : %s\n", book[i].name);
                        printf("Author    : %s\n", book[i].author);
                        printf("Quantity  : %d\n", book[i].quantity);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                {
                    printf("Book not found!\n");
                }
                break;
            // Issue a book (reduce quantity by 1)
            case 3:
                found = 0;
                printf("Enter Book ID to issue: ");
                scanf("%d", &searchId);
                for(i = 0; i < n; i++)
                {
                    if(book[i].id == searchId)
                    {
                        found = 1;
                        if(book[i].quantity > 0)
                        {
                            book[i].quantity--;
                            printf("Book issued successfully!\n");
                        }
                        else
                        {
                            printf("Book is not available.\n");
                        }
                        break;
                    }
                }
                if(found == 0)
                {
                    printf("Book not found!\n");
                }
                break;
            // Return a book (increase quantity by 1)
            case 4:
                found = 0;
                printf("Enter Book ID to return: ");
                scanf("%d", &searchId);
                for(i = 0; i < n; i++)
                {
                    if(book[i].id == searchId)
                    {
                        book[i].quantity++;
                        printf("Book returned successfully!\n");
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                {
                    printf("Book not found!\n");
                }
                break;
            // Exit the program
            case 5:
                printf("Exiting Program...\n");
                break;
            // Invalid choice
            default:
                printf("Invalid Choice! Please try again.\n");
        }
    } while(choice != 5);
    return 0;
}