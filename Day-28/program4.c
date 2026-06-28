#include <stdio.h>
// Structure to store contact details
struct Contact
{
    int id;
    char name[50];
    char phone[15];
};
int main()
{
    // Array of structure to store multiple contacts
    struct Contact c[100];
    int n, i, choice, searchId, found = 0;
    // Input total number of contacts
    printf("Enter number of contacts: ");
    scanf("%d", &n);
    // Input contact details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Contact %d\n", i + 1);
        printf("Contact ID: ");
        scanf("%d", &c[i].id);
        printf("Name: ");
        scanf(" %[^\n]", c[i].name);
        printf("Phone Number: ");
        scanf("%s", c[i].phone);
    }
    // Menu starts
    do
    {
        printf("\n===== CONTACT MANAGEMENT SYSTEM =====\n");
        printf("1. Display All Contacts\n");
        printf("2. Search Contact\n");
        printf("3. Update Phone Number\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            // Display all contacts
            case 1:
                printf("\nContact Details:\n");
                for(i = 0; i < n; i++)
                {
                    printf("\nContact ID   : %d", c[i].id);
                    printf("\nName         : %s", c[i].name);
                    printf("\nPhone Number : %s\n", c[i].phone);
                }
                break;
            // Search contact by ID
            case 2:
                found = 0;
                printf("Enter Contact ID: ");
                scanf("%d", &searchId);
                for(i = 0; i < n; i++)
                {
                    if(c[i].id == searchId)
                    {
                        printf("\nContact Found!\n");
                        printf("Name         : %s\n", c[i].name);
                        printf("Phone Number : %s\n", c[i].phone);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Contact not found!\n");
                break;
            // Update phone number
            case 3:
                found = 0;
                printf("Enter Contact ID: ");
                scanf("%d", &searchId);
                for(i = 0; i < n; i++)
                {
                    if(c[i].id == searchId)
                    {
                        printf("Enter New Phone Number: ");
                        scanf("%s", c[i].phone);
                        printf("Phone Number Updated Successfully!\n");
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Contact not found!\n");
                break;
            // Delete contact
            case 4:
                found = 0;
                printf("Enter Contact ID: ");
                scanf("%d", &searchId);
                for(i = 0; i < n; i++)
                {
                    if(c[i].id == searchId)
                    {
                        int j;
                        // Shift remaining contacts
                        for(j = i; j < n - 1; j++)
                        {
                            c[j] = c[j + 1];
                        }
                        n--;
                        printf("Contact Deleted Successfully!\n");
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Contact not found!\n");
                break;
            // Exit program
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