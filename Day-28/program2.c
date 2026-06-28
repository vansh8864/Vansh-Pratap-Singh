#include <stdio.h>
// Structure to store bank account details
struct Bank
{
    int accNo;
    char name[50];
    float balance;
};
int main()
{
    // Array of structure to store multiple accounts
    struct Bank acc[100];
    int n, i, choice, searchAcc, found = 0;
    float amount;
    // Input total number of accounts
    printf("Enter number of accounts: ");
    scanf("%d", &n);
    // Input account details
    for(i = 0; i < n; i++)
    {
        printf("\nEnter details of Account %d\n", i + 1);
        printf("Account Number: ");
        scanf("%d", &acc[i].accNo);
        printf("Account Holder Name: ");
        scanf(" %[^\n]", acc[i].name);
        printf("Initial Balance: ");
        scanf("%f", &acc[i].balance);
    }
    // Menu starts
    do
    {
        printf("\n===== BANK ACCOUNT SYSTEM =====\n");
        printf("1. Display All Accounts\n");
        printf("2. Search Account\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            // Display all account details
            case 1:
                printf("\nAccount Details:\n");
                for(i = 0; i < n; i++)
                {
                    printf("\nAccount No : %d", acc[i].accNo);
                    printf("\nName       : %s", acc[i].name);
                    printf("\nBalance    : %.2f\n", acc[i].balance);
                }
                break;
            // Search account by account number
            case 2:
                found = 0;
                printf("Enter Account Number: ");
                scanf("%d", &searchAcc);
                for(i = 0; i < n; i++)
                {
                    if(acc[i].accNo == searchAcc)
                    {
                        printf("\nAccount Found!\n");
                        printf("Name    : %s\n", acc[i].name);
                        printf("Balance : %.2f\n", acc[i].balance);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Account not found!\n");
                break;
            // Deposit money
            case 3:
                found = 0;
                printf("Enter Account Number: ");
                scanf("%d", &searchAcc);
                for(i = 0; i < n; i++)
                {
                    if(acc[i].accNo == searchAcc)
                    {
                        printf("Enter Deposit Amount: ");
                        scanf("%f", &amount);
                        acc[i].balance += amount;
                        printf("Amount Deposited Successfully!\n");
                        printf("Updated Balance: %.2f\n", acc[i].balance);
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Account not found!\n");
                break;
            // Withdraw money
            case 4:
                found = 0;
                printf("Enter Account Number: ");
                scanf("%d", &searchAcc);
                for(i = 0; i < n; i++)
                {
                    if(acc[i].accNo == searchAcc)
                    {
                        printf("Enter Withdrawal Amount: ");
                        scanf("%f", &amount);
                        if(amount <= acc[i].balance)
                        {
                            acc[i].balance -= amount;
                            printf("Withdrawal Successful!\n");
                            printf("Remaining Balance: %.2f\n", acc[i].balance);
                        }
                        else
                        {
                            printf("Insufficient Balance!\n");
                        }
                        found = 1;
                        break;
                    }
                }
                if(found == 0)
                    printf("Account not found!\n");
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